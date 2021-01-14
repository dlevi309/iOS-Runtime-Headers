/*
* Generated on Thursday, January 14, 2021 at 2:27:48 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/IMDaemonCore.framework/IMDaemonCore
*/

#import <IMCorePipeline/IMPipelineComponent.h>

@class IMDServiceSession, IMDAccount, IMDiMessageIDSTrustedData;

@interface IMMessageLegacyProcessingPipelineComponent : IMPipelineComponent {

	IMDServiceSession* _serviceSession;
	IMDAccount* _account;
	IMDiMessageIDSTrustedData* _idsTrustedData;
	id _messageContext;

}
-(id)runIndividuallyWithInput:(id)arg1 ;
-(id)initWithServiceSession:(id)arg1 idsTrustedData:(id)arg2 account:(id)arg3 messageContext:(id)arg4 ;
@end

