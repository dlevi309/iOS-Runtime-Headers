/*
* Generated on Monday, March 1, 2021 at 2:30:18 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/


@class NSPointerArray;

@interface UIInteractionProgress : NSObject {

	NSPointerArray* _observers;
	double _previousPercentComplete;
	double _previousUpdateTime;
	double _mostRecentUpdateTime;
	long long _atLeastTwoUpdates;
	double _percentComplete;

}

@property (nonatomic,readonly) double percentComplete;              //@synthesize percentComplete=_percentComplete - In the implementation block
@property (nonatomic,readonly) double velocity; 
-(id)init;
-(id)description;
-(double)velocity;
-(void)addProgressObserver:(id)arg1 ;
-(double)percentComplete;
-(void)removeProgressObserver:(id)arg1 ;
-(void)endInteraction:(BOOL)arg1 ;
-(void)setPercentComplete:(double)arg1 ;
-(unsigned long long)_indexOfObserver:(id)arg1 ;
-(void)endInteraction:(BOOL)arg1 finalVelocity:(double)arg2 ;
-(long long)numberOfObservers;
@end

