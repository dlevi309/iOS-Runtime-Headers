/*
* Generated on Monday, March 1, 2021 at 2:32:51 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/FMCore.framework/FMCore
*/


@protocol OS_dispatch_queue, OS_dispatch_semaphore;
@class NSObject, GEOLocationShifter;

@interface FMLocationShifter : NSObject {

	NSObject*<OS_dispatch_queue> _queue;
	NSObject*<OS_dispatch_semaphore> _semaphore;
	GEOLocationShifter* _locationShifter;

}

@property (nonatomic,retain) NSObject*<OS_dispatch_queue> queue;                      //@synthesize queue=_queue - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_semaphore> semaphore;              //@synthesize semaphore=_semaphore - In the implementation block
@property (nonatomic,retain) GEOLocationShifter * locationShifter;                    //@synthesize locationShifter=_locationShifter - In the implementation block
-(id)init;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSObject*<OS_dispatch_queue>)queue;
-(GEOLocationShifter *)locationShifter;
-(void)setLocationShifter:(GEOLocationShifter *)arg1 ;
-(NSObject*<OS_dispatch_semaphore>)semaphore;
-(void)shiftLocation:(id)arg1 withCompletionHandler:(/*^block*/id)arg2 callbackQueue:(id)arg3 ;
-(void)setSemaphore:(NSObject*<OS_dispatch_semaphore>)arg1 ;
-(BOOL)isLocationShiftRequiredForItem:(id)arg1 ;
-(BOOL)isLocationShiftRequiredForItems:(id)arg1 ;
-(void)shiftLocations:(id)arg1 withCompletionHandler:(/*^block*/id)arg2 callbackQueue:(id)arg3 ;
-(id)shiftLocation:(id)arg1 timeout:(double)arg2 ;
-(id)shiftLocations:(id)arg1 timeout:(double)arg2 ;
@end

