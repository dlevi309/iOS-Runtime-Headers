/*
* Generated on Thursday, January 14, 2021 at 2:20:31 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)receiveObservedValue:(id)arg1 ;
-(id)addObserver:(id)arg1 ;
-(id)init;
-(BOOL)_shouldFilterDueToSystemGesturesForTouches:(id)arg1 ;
-(id)_touchForceMessageForTouches:(id)arg1 ;
-(void)_willBeginHavingAnyObservers;
-(double)_maximumPossibleForceForTouches:(id)arg1 ;
-(void)removeObservation:(id)arg1 ;
-(double)_unclampedTouchForceForTouches:(id)arg1 ;
-(id)initWithView:(id)arg1 ;
-(double)_timestampForTouches:(id)arg1 ;
-(void)_cancelContinuousEvaluation;
-(void)_updateForContinuousEvaluation:(id)arg1 ;
-(void)dealloc;
-(void)_didEndHavingAnyObservers;
@end

