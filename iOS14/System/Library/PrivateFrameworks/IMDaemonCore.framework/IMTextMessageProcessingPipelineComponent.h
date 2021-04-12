/*
* Generated on Thursday, January 14, 2021 at 2:27:48 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/IMDaemonCore.framework/IMDaemonCore
*/

#import <IMCorePipeline/IMPipelineComponent.h>

@class IMDAccount, IMDMessageStore;

@interface IMTextMessageProcessingPipelineComponent : IMPipelineComponent {

	IMDAccount* _account;
	IMDMessageStore* _messageStore;

}
-(id)runIndividuallyWithInput:(id)arg1 ;
-(unsigned long long)computeFlagsForInput:(id)arg1 ;
-(id)createMessageItemWithInput:(id)arg1 ;
-(id)initWithAccount:(id)arg1 messageStore:(id)arg2 ;
-(BOOL)canSuppressMessageWithInput:(id)arg1 ;
@end

