/*
* Generated on Thursday, January 14, 2021 at 2:23:50 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CMCapture.framework/CMCapture
*/


#import <CMCapture/CMCapture-Structs.h>
@class NSMutableArray;

@interface BWIOSurfaceTracking : NSObject {

	os_unfair_lock_s _trackedSurfacesLock;
	NSMutableArray* _trackedSurfaces;

}
+(void)initialize;
+(void)noteSurfaceIDInUse:(unsigned)arg1 byClient:(id)arg2 ;
+(void)noteSurfaceIDNoLongerInUse:(unsigned)arg1 byClient:(id)arg2 ;
+(void)trackPixelBuffer:(CVBufferRef)arg1 surfaceUseCountIsZeroHandler:(/*^block*/id)arg2 ;
+(id)defaultSurfaceTracking;
-(id)init;
-(void)trackPixelBuffer:(CVBufferRef)arg1 surfaceUseCountIsZeroHandler:(/*^block*/id)arg2 ;
-(void)noteSurfaceIDInUse:(unsigned)arg1 ;
-(void)noteSurfaceIDNoLongerInUse:(unsigned)arg1 ;
-(void)dealloc;
@end

