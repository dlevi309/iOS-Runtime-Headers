/*
* Generated on Thursday, January 14, 2021 at 2:28:35 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)removeProgressObserver:(id)arg1 ;
-(id)initWithChildren:(id)arg1 ;
-(BOOL)isIndeterminate;
-(double)maxValue;
-(double)value;
-(void)dealloc;
-(id)addProgressObserverWithValueInterval:(double)arg1 queue:(id)arg2 handler:(/*^block*/id)arg3 ;
-(void)p_updateChildrenProgressObservers;
@end

