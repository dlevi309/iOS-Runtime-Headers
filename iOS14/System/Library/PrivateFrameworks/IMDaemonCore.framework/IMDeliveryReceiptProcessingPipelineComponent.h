/*
* Generated on Thursday, January 14, 2021 at 2:27:48 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/IMDaemonCore.framework/IMDaemonCore
*/

#import <IMCorePipeline/IMPipelineComponent.h>

@class IMDMessageStore;

@interface IMDeliveryReceiptProcessingPipelineComponent : IMPipelineComponent {

	IMDMessageStore* _messageStore;

}
-(id)initWithMessageStore:(id)arg1 ;
-(id)runIndividuallyWithInput:(id)arg1 ;
-(id)_processDeliveryReceiptForMessageGUID:(id)arg1 date:(id)arg2 ;
-(void)_metricMessageGUIDDelivered:(id)arg1 sendDate:(id)arg2 deliveryDate:(id)arg3 ;
@end

