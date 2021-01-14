/*
* Generated on Thursday, January 14, 2021 at 2:28:54 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/iWorkXPC.framework/XPCServices/iWorkFileFormat.xpc/Frameworks/TSUtility.framework/TSUtility
*/

#import <TSUtility/TSUProgress.h>

@protocol OS_dispatch_queue;
@class TSUProgressContext, NSObject;

@interface TSUProgressContextProgress : TSUProgress {

	TSUProgressContext* mProgressContext;
	NSObject*<OS_dispatch_queue> mProgressContextObserverQueue;
	BOOL hasAddedProgressContextObserver;

}
-(void)removeProgressObserver:(id)arg1 ;
-(id)init;
-(BOOL)isIndeterminate;
-(double)maxValue;
-(double)value;
-(void)dealloc;
-(id)addProgressObserverWithValueInterval:(double)arg1 queue:(id)arg2 handler:(/*^block*/id)arg3 ;
-(id)initWithProgressContext:(id)arg1 ;
-(void)p_updateProgressContextObserver;
-(void)p_progressDidChange:(id)arg1 ;
@end

