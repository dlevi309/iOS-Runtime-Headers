/*
* Generated on Thursday, January 14, 2021 at 2:23:43 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(CUTCheckpointRange *)waitForACK;
-(id)initWithUniqueIdentifier:(id)arg1 ;
-(CUTCheckpointRange *)messageOnQueue;
-(id)initWithStartDate:(id)arg1 endDate:(id)arg2 name:(id)arg3 uniqueIdentifier:(id)arg4 ;
-(CUTCheckpointRange *)sendToDaemon;
@end

