/*
* Generated on Thursday, January 14, 2021 at 2:27:48 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/IMDaemonCore.framework/IMDaemonCore
*/

#import <libobjc.A.dylib/IDSServiceDelegatePrivate.h>

@class IDSService, IMDiMessageIncomingMessageHandler, IMDMessageStore, IMDAccountController, IMDMessageFromStorageController, IMDChatRegistry, IMDMessageSuppressionController, IMDRecentsController, NSString;

@interface IMDiMessageIDSDelegate : NSObject <IDSServiceDelegatePrivate> {

	BOOL _runningInAutomation;
	IDSService* _idsService;
	IDSService* _bizChatService;
	IMDiMessageIncomingMessageHandler* _handler;
	IMDMessageStore* _messageStore;
	IMDAccountController* _accountController;
	IMDMessageFromStorageController* _messageFromStorageController;
	IMDChatRegistry* _chatRegistry;
	IMDMessageSuppressionController* _messageSuppressionController;
	IMDRecentsController* _recentsController;

}

@property (retain,readonly) IDSService * idsService;                                                     //@synthesize idsService=_idsService - In the implementation block
@property (retain,readonly) IDSService * bizChatService;                                                 //@synthesize bizChatService=_bizChatService - In the implementation block
@property (retain,readonly) IMDiMessageIncomingMessageHandler * handler;                                 //@synthesize handler=_handler - In the implementation block
@property (retain,readonly) IMDMessageStore * messageStore;                                              //@synthesize messageStore=_messageStore - In the implementation block
@property (retain,readonly) IMDAccountController * accountController;                                    //@synthesize accountController=_accountController - In the implementation block
@property (retain,readonly) IMDMessageFromStorageController * messageFromStorageController;              //@synthesize messageFromStorageController=_messageFromStorageController - In the implementation block
@property (retain,readonly) IMDChatRegistry * chatRegistry;                                              //@synthesize chatRegistry=_chatRegistry - In the implementation block
@property (retain,readonly) IMDMessageSuppressionController * messageSuppressionController;              //@synthesize messageSuppressionController=_messageSuppressionController - In the implementation block
@property (retain,readonly) IMDRecentsController * recentsController;                                    //@synthesize recentsController=_recentsController - In the implementation block
@property (assign) BOOL runningInAutomation;                                                             //@synthesize runningInAutomation=_runningInAutomation - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)commandToHandlerBlock;
+(BOOL)isDefaultPairedDevice:(id)arg1 withAccount:(id)arg2 ;
+(BOOL)_writePayload:(id)arg1 toURL:(id)arg2 ;
-(IMDRecentsController *)recentsController;
-(id)initWithiMessageService:(id)arg1 bizChatService:(id)arg2 incomingMessageHandler:(id)arg3 messageStore:(id)arg4 chatRegistry:(id)arg5 accountController:(id)arg6 messageSuppressionController:(id)arg7 storageController:(id)arg8 recentsController:(id)arg9 ;
-(id)init;
-(IDSService *)idsService;
-(BOOL)runningInAutomation;
-(IMDChatRegistry *)chatRegistry;
-(void)service:(id)arg1 account:(id)arg2 incomingTopLevelMessage:(id)arg3 fromID:(id)arg4 messageContext:(id)arg5 ;
-(IMDAccountController *)accountController;
-(IMDMessageStore *)messageStore;
-(id)broadcaster;
-(IMDMessageFromStorageController *)messageFromStorageController;
-(IMDMessageSuppressionController *)messageSuppressionController;
-(IDSService *)bizChatService;
-(void)setRunningInAutomation:(BOOL)arg1 ;
-(IMDiMessageIncomingMessageHandler *)handler;
@end

