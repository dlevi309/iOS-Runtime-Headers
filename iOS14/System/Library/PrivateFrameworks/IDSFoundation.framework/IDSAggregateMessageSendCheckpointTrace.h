/*
* Generated on Thursday, January 14, 2021 at 2:22:00 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/IDSFoundation.framework/IDSFoundation
*/

#import <CommonUtilities/CUTCheckpointTrace.h>

@class APSOutgoingMessageCheckpointTrace;

@interface IDSAggregateMessageSendCheckpointTrace : CUTCheckpointTrace {

	APSOutgoingMessageCheckpointTrace* _apsMessageTrace;

}

@property (nonatomic,retain) APSOutgoingMessageCheckpointTrace * apsMessageTrace;              //@synthesize apsMessageTrace=_apsMessageTrace - In the implementation block
-(id)initWithUniqueIdentifier:(id)arg1 ;
-(APSOutgoingMessageCheckpointTrace *)apsMessageTrace;
-(void)setApsMessageTrace:(APSOutgoingMessageCheckpointTrace *)arg1 ;
-(id)initWithStartDate:(id)arg1 endDate:(id)arg2 name:(id)arg3 uniqueIdentifier:(id)arg4 ;
@end

