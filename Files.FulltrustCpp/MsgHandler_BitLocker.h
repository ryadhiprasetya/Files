#pragma once
#include "MessageHandler.h"
#include "AppServiceManager.h"

class MsgHandler_BitLocker : public MessageHandler
{
private:
	bool Unlock(LPCWSTR volume, LPCWSTR password); // TODO hash password
	bool Lock(LPCWSTR volume, LPCWSTR password); // TODO hash password

public:
	IAsyncOperation<bool> ParseArgumentsAsync(const AppServiceManager& manager, const AppServiceRequestReceivedEventArgs& args);
};