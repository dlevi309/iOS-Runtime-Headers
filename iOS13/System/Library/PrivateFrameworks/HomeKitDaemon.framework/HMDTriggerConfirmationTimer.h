/*
* Generated on Monday, March 1, 2021 at 2:33:34 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/

#import <HMFoundation/HMFTimer.h>

@class NSUUID;

@interface HMDTriggerConfirmationTimer : HMFTimer {

	NSUUID* _executionSessionID;

}

@property (nonatomic,readonly) NSUUID * executionSessionID;              //@synthesize executionSessionID=_executionSessionID - In the implementation block
-(id)description;
-(id)initWithExecutionSessionID:(id)arg1 timeoutInterval:(double)arg2 ;
-(NSUUID *)executionSessionID;
@end

