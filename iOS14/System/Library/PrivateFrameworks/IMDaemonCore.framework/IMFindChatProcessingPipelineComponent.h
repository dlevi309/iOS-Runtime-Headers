/*
* Generated on Thursday, January 14, 2021 at 2:27:48 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/IMDaemonCore.framework/IMDaemonCore
*/

#import <IMCorePipeline/IMPipelineComponent.h>

@class IMDChatRegistry, IMDAccount;

@interface IMFindChatProcessingPipelineComponent : IMPipelineComponent {

	IMDChatRegistry* _chatRegistry;
	IMDAccount* _account;

}
-(BOOL)_shouldDropMessageGroupID:(id)arg1 participants:(id)arg2 fromIdentifier:(id)arg3 toIdentifier:(id)arg4 ;
-(BOOL)shouldDropDueToGroupSize:(id)arg1 ;
-(BOOL)_participantsContainBizID:(id)arg1 ;
-(id)runIndividuallyWithInput:(id)arg1 ;
-(id)_findGroupChatWithFromIdentifier:(id)arg1 toIdentifier:(id)arg2 groupName:(id)arg3 participants:(id)arg4 groupID:(id)arg5 ;
-(id)initWithChatRegistry:(id)arg1 account:(id)arg2 ;
@end

