/*
* Generated on Monday, March 1, 2021 at 2:33:20 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TSUtility.framework/TSUtility
*/

#import <TSUtility/TSUProgress.h>

@protocol OS_dispatch_queue;
@class TSUScaledProgressStorage, TSUProgress, NSObject;

@interface TSUScaledProgress : TSUProgress {

	TSUScaledProgressStorage* mStorage;
	TSUProgress* mProgress;
	id mProgressObserver;
	NSObject*<OS_dispatch_queue> mProgressQueue;

}

@property (retain) TSUProgress * progress; 
@property (assign) double maxValue; 
-(id)init;
-(void)dealloc;
-(double)value;
-(TSUProgress *)progress;
-(BOOL)isIndeterminate;
-(void)setProgress:(TSUProgress *)arg1 ;
-(void)removeProgressObserver:(id)arg1 ;
-(double)maxValue;
-(void)setMaxValue:(double)arg1 ;
-(id)addProgressObserverWithValueInterval:(double)arg1 queue:(id)arg2 handler:(/*^block*/id)arg3 ;
-(void)p_removeProgressObserverFromProgressInQueue;
-(void)p_addProgressObserverToProgressInQueue;
@end

