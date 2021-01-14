/*
* Generated on Thursday, January 14, 2021 at 2:21:39 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CoreMotion.framework/CoreMotion
*/


@protocol OS_dispatch_queue;
#import <CoreMotion/CoreMotion-Structs.h>
@class NSObject;

@interface CMCatherineFeederInternal : NSObject {

	NSObject*<OS_dispatch_queue> fInternalQueue;
	CLConnectionClient* fLocationdConnection;

}
-(id)init;
-(void)_startDaemonConnection;
-(void)_teardown;
-(void)_feedCatherine:(double)arg1 confidence:(double)arg2 timestamp:(double)arg3 ;
-(void)dealloc;
@end

