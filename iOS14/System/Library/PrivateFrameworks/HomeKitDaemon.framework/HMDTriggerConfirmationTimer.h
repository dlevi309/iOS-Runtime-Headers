/*
* Generated on Thursday, January 14, 2021 at 2:25:57 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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

