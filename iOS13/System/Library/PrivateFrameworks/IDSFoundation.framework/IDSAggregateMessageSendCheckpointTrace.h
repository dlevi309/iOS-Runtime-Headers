/*
* Generated on Monday, March 1, 2021 at 2:30:42 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/IDSFoundation.framework/IDSFoundation
*/

#import <CommonUtilities/CUTCheckpointTrace.h>

@class APSOutgoingMessageCheckpointTrace;

@interface IDSAggregateMessageSendCheckpointTrace : CUTCheckpointTrace {

	APSOutgoingMessageCheckpointTrace* _apsMessageTrace;

}

@property (nonatomic,retain) APSOutgoingMessageCheckpointTrace * apsMessageTrace;              //@synthesize apsMessageTrace=_apsMessageTrace - In the implementation block
-(id)initWithStartDate:(id)arg1 endDate:(id)arg2 name:(id)arg3 uniqueIdentifier:(id)arg4 ;
-(id)initWithUniqueIdentifier:(id)arg1 ;
-(APSOutgoingMessageCheckpointTrace *)apsMessageTrace;
-(void)setApsMessageTrace:(APSOutgoingMessageCheckpointTrace *)arg1 ;
@end

