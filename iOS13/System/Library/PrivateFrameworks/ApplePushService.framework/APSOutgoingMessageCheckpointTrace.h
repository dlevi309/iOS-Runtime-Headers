/*
* Generated on Monday, March 1, 2021 at 2:30:41 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ApplePushService.framework/ApplePushService
*/

#import <CommonUtilities/CUTCheckpointTrace.h>

@class CUTCheckpointRange;

@interface APSOutgoingMessageCheckpointTrace : CUTCheckpointTrace {

	CUTCheckpointRange* _sendToDaemon;
	CUTCheckpointRange* _messageOnQueue;
	CUTCheckpointRange* _waitForACK;

}

@property (nonatomic,readonly) CUTCheckpointRange * sendToDaemon;                //@synthesize sendToDaemon=_sendToDaemon - In the implementation block
@property (nonatomic,readonly) CUTCheckpointRange * messageOnQueue;              //@synthesize messageOnQueue=_messageOnQueue - In the implementation block
@property (nonatomic,readonly) CUTCheckpointRange * waitForACK;                  //@synthesize waitForACK=_waitForACK - In the implementation block
-(id)initWithStartDate:(id)arg1 endDate:(id)arg2 name:(id)arg3 uniqueIdentifier:(id)arg4 ;
-(CUTCheckpointRange *)sendToDaemon;
-(id)initWithUniqueIdentifier:(id)arg1 ;
-(CUTCheckpointRange *)messageOnQueue;
-(CUTCheckpointRange *)waitForACK;
@end

