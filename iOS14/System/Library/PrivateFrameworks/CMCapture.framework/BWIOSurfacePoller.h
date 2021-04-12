/*
* Generated on Thursday, January 14, 2021 at 2:23:50 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CMCapture.framework/CMCapture
*/


@protocol OS_dispatch_source;
#import <CMCapture/CMCapture-Structs.h>
@class NSObject, NSMutableArray;

@interface BWIOSurfacePoller : NSObject {

	NSObject*<OS_dispatch_source> _pollingTimer;
	os_unfair_lock_s _trackedSurfacesLock;
	NSMutableArray* _trackedSurfaces;

}
+(id)defaultPoller;
+(void)trackSurface:(IOSurfaceRef)arg1 useCountIsZeroHandler:(/*^block*/id)arg2 ;
-(id)init;
-(void)trackSurface:(IOSurfaceRef)arg1 useCountIsZeroHandler:(/*^block*/id)arg2 ;
-(void)_startPolling;
-(void)_pollingTimerFired;
-(void)_stopPolling;
-(void)dealloc;
@end

