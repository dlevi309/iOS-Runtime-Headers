/*
* Generated on Thursday, January 14, 2021 at 2:20:31 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)removeProgressObserver:(id)arg1 ;
-(double)velocity;
-(id)init;
-(void)endInteraction:(BOOL)arg1 ;
-(id)description;
-(unsigned long long)_indexOfObserver:(id)arg1 ;
-(long long)numberOfObservers;
-(void)endInteraction:(BOOL)arg1 finalVelocity:(double)arg2 ;
-(void)setPercentComplete:(double)arg1 ;
-(void)addProgressObserver:(id)arg1 ;
-(double)percentComplete;
@end

