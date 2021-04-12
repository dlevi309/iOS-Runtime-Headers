/*
* Generated on Monday, March 1, 2021 at 2:32:03 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/MediaServices.framework/MediaServices
*/


@protocol OS_dispatch_queue;
@class NSObject, MSVTimer;

@interface MSVBlockGuard : NSObject {

	NSObject*<OS_dispatch_queue> _accessQueue;
	BOOL _disarmed;
	BOOL _didTimeout;
	MSVTimer* _timeoutTimer;
	/*^block*/id _interruptionHandler;

}
-(id)init;
-(void)dealloc;
-(id)initWithTimeout:(double)arg1 ;
-(BOOL)disarm;
-(id)initWithDeallocHandler:(/*^block*/id)arg1 ;
-(id)initWithTimeout:(double)arg1 interruptionHandler:(/*^block*/id)arg2 ;
-(void)_interruptWithReason:(long long)arg1 ;
@end

