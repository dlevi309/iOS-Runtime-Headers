/*
* Generated on Thursday, January 14, 2021 at 2:27:48 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/IMDaemonCore.framework/IMDaemonCore
*/

#import <IMCorePipeline/IMPipelineComponent.h>

@class IMDMessageStore, IMDChatRegistry, IMDMessageSuppressionController, IMDRecentsController, IDSService;

@interface IMReadReceiptProcessingPipelineComponent : IMPipelineComponent {

	IMDMessageStore* _messageStore;
	IMDChatRegistry* _chatRegistry;
	IMDMessageSuppressionController* _messageSuppressionController;
	IMDRecentsController* _recents;
	IDSService* _service;

}
-(id)runIndividuallyWithInput:(id)arg1 ;
-(id)_markMessagesUpToGUID:(id)arg1 forChat:(id)arg2 isFromMe:(BOOL)arg3 date:(id)arg4 ;
-(id)initWithMessageStore:(id)arg1 chatRegistry:(id)arg2 messageSuppressionController:(id)arg3 recents:(id)arg4 IDSService:(id)arg5 ;
@end

