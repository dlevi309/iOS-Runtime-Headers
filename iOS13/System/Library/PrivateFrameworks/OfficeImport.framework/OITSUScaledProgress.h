/*
* Generated on Monday, March 1, 2021 at 2:35:06 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
*/

#import <OfficeImport/OITSUProgress.h>

@protocol OS_dispatch_queue;
@class OITSUScaledProgressStorage, OITSUProgress, NSObject;

@interface OITSUScaledProgress : OITSUProgress {

	OITSUScaledProgressStorage* mStorage;
	OITSUProgress* mProgress;
	id mProgressObserver;
	NSObject*<OS_dispatch_queue> mProgressQueue;

}

@property (retain) OITSUProgress * progress; 
@property (assign) double maxValue; 
-(id)init;
-(void)dealloc;
-(double)value;
-(OITSUProgress *)progress;
-(BOOL)isIndeterminate;
-(void)setProgress:(OITSUProgress *)arg1 ;
-(void)removeProgressObserver:(id)arg1 ;
-(double)maxValue;
-(void)setMaxValue:(double)arg1 ;
-(id)addProgressObserverWithValueInterval:(double)arg1 queue:(id)arg2 handler:(/*^block*/id)arg3 ;
-(void)p_removeProgressObserverFromProgressInQueue;
-(void)p_addProgressObserverToProgressInQueue;
@end

