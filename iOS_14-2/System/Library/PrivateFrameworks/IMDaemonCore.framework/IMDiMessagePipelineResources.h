/*
* Generated on Thursday, January 14, 2021 at 2:27:48 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/IMDaemonCore.framework/IMDaemonCore
*/


@protocol IMDaemonListenerProtocol;
@class IMDAccount, IDSService, IMDMessageStore, IMDMessageFromStorageController, IMDMessageSuppressionController, IMDRecentsController, IMDChatRegistry;

@interface IMDiMessagePipelineResources : NSObject {

	IMDAccount* _imdAccount;
	IDSService* _service;
	IMDMessageStore* _messageStore;
	IMDMessageFromStorageController* _storageController;
	id<IMDaemonListenerProtocol> _broadcaster;
	IMDMessageSuppressionController* _messageSuppressionController;
	IMDRecentsController* _recentsController;
	IMDChatRegistry* _chatRegistry;

}

@property (nonatomic,readonly) IMDAccount * imdAccount;                                                     //@synthesize imdAccount=_imdAccount - In the implementation block
@property (nonatomic,readonly) IDSService * service;                                                        //@synthesize service=_service - In the implementation block
@property (nonatomic,readonly) IMDMessageStore * messageStore;                                              //@synthesize messageStore=_messageStore - In the implementation block
@property (nonatomic,readonly) IMDMessageFromStorageController * storageController;                         //@synthesize storageController=_storageController - In the implementation block
@property (nonatomic,readonly) id<IMDaemonListenerProtocol> broadcaster;                                    //@synthesize broadcaster=_broadcaster - In the implementation block
@property (nonatomic,readonly) IMDMessageSuppressionController * messageSuppressionController;              //@synthesize messageSuppressionController=_messageSuppressionController - In the implementation block
@property (nonatomic,readonly) IMDRecentsController * recentsController;                                    //@synthesize recentsController=_recentsController - In the implementation block
@property (nonatomic,readonly) IMDChatRegistry * chatRegistry;                                              //@synthesize chatRegistry=_chatRegistry - In the implementation block
-(IMDRecentsController *)recentsController;
-(IMDChatRegistry *)chatRegistry;
-(IMDMessageFromStorageController *)storageController;
-(IMDMessageStore *)messageStore;
-(id<IMDaemonListenerProtocol>)broadcaster;
-(IMDMessageSuppressionController *)messageSuppressionController;
-(IDSService *)service;
-(IMDAccount *)imdAccount;
-(id)initWithIMDAccount:(id)arg1 service:(id)arg2 messageStore:(id)arg3 storageController:(id)arg4 broadcaster:(id)arg5 messageSuppressionController:(id)arg6 recentsController:(id)arg7 chatRegistry:(id)arg8 ;
@end

