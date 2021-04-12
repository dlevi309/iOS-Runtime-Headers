/*
* Generated on Thursday, January 14, 2021 at 2:22:51 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)initWithTimeout:(double)arg1 ;
-(id)initWithDeallocHandler:(/*^block*/id)arg1 ;
-(id)initWithTimeout:(double)arg1 interruptionHandler:(/*^block*/id)arg2 ;
-(BOOL)disarm;
-(void)_interruptWithReason:(long long)arg1 ;
-(void)dealloc;
@end

