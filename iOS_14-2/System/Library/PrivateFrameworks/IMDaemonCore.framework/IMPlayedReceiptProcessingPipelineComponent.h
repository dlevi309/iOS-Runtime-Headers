/*
* Generated on Thursday, January 14, 2021 at 2:27:48 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/IMDaemonCore.framework/IMDaemonCore
*/

#import <IMCorePipeline/IMPipelineComponent.h>

@class IMDiMessagePipelineResources;

@interface IMPlayedReceiptProcessingPipelineComponent : IMPipelineComponent {

	IMDiMessagePipelineResources* _pipelineResources;

}

@property (nonatomic,readonly) IMDiMessagePipelineResources * pipelineResources;              //@synthesize pipelineResources=_pipelineResources - In the implementation block
-(id)_messageStore;
-(id)_account;
-(id)_idsAccount;
-(id)runIndividuallyWithInput:(id)arg1 ;
-(id)initWithPipelineResources:(id)arg1 ;
-(IMDiMessagePipelineResources *)pipelineResources;
-(void)_markMessageAsPlayedAndNotify:(id)arg1 session:(id)arg2 chat:(id)arg3 date:(id)arg4 ;
@end

