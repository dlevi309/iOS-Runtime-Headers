/*
* Generated on Monday, March 1, 2021 at 2:30:18 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <Foundation/NSObservationSource.h>
#import <libobjc.A.dylib/NSObserver.h>

@class UIView, _UITouchesObservingGestureRecognizer, NSObservation, CADisplayLink, NSSet, NSString;

@interface _UITouchForceObservable : NSObservationSource <NSObserver> {

	UIView* _view;
	long long _observerCount;
	_UITouchesObservingGestureRecognizer* _gestureRecognizer;
	NSObservation* _touchesObservation;
	CADisplayLink* _continuousEvaluationDisplayLink;
	NSSet* _currentTouches;
	double _lastObservationTime;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)dealloc;
-(id)addObserver:(id)arg1 ;
-(void)receiveObservedValue:(id)arg1 ;
-(void)removeObservation:(id)arg1 ;
-(id)initWithView:(id)arg1 ;
-(void)_updateForContinuousEvaluation:(id)arg1 ;
-(void)_cancelContinuousEvaluation;
-(id)_touchForceMessageForTouches:(id)arg1 ;
-(void)_willBeginHavingAnyObservers;
-(void)_didEndHavingAnyObservers;
-(double)_unclampedTouchForceForTouches:(id)arg1 ;
-(double)_maximumPossibleForceForTouches:(id)arg1 ;
-(BOOL)_shouldFilterDueToSystemGesturesForTouches:(id)arg1 ;
-(double)_timestampForTouches:(id)arg1 ;
@end

