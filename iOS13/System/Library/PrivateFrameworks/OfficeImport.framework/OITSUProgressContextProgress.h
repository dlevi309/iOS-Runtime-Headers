/*
* Generated on Monday, March 1, 2021 at 2:35:06 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
*/

#import <OfficeImport/OITSUProgress.h>

@protocol OS_dispatch_queue;
@class OITSUProgressContext, NSObject;

@interface OITSUProgressContextProgress : OITSUProgress {

	OITSUProgressContext* mProgressContext;
	NSObject*<OS_dispatch_queue> mProgressContextObserverQueue;
	BOOL hasAddedProgressContextObserver;

}
-(id)init;
-(void)dealloc;
-(double)value;
-(BOOL)isIndeterminate;
-(void)removeProgressObserver:(id)arg1 ;
-(double)maxValue;
-(id)addProgressObserverWithValueInterval:(double)arg1 queue:(id)arg2 handler:(/*^block*/id)arg3 ;
-(id)initWithProgressContext:(id)arg1 ;
-(void)p_updateProgressContextObserver;
-(void)p_progressDidChange:(id)arg1 ;
@end

