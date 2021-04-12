/*
* Generated on Monday, March 1, 2021 at 2:33:20 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TSUtility.framework/TSUtility
*/

#import <TSUtility/TSUProgress.h>

@protocol OS_dispatch_queue;
@class NSArray, NSObject;

@interface TSUProgressGroup : TSUProgress {

	NSArray* mChildren;
	NSArray* mChildrenProgressObservers;
	NSObject*<OS_dispatch_queue> mChildrenProgressObserversQueue;

}
-(void)dealloc;
-(double)value;
-(BOOL)isIndeterminate;
-(void)removeProgressObserver:(id)arg1 ;
-(double)maxValue;
-(id)initWithChildren:(id)arg1 ;
-(id)addProgressObserverWithValueInterval:(double)arg1 queue:(id)arg2 handler:(/*^block*/id)arg3 ;
-(void)p_updateChildrenProgressObservers;
@end

