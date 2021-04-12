/*
* Generated on Monday, March 1, 2021 at 2:30:14 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIGestureRecognizer.h>

@class CADisplayLink, UIDelayedAction;

@interface _UITouchDurationObservingGestureRecognizer : UIGestureRecognizer {

	BOOL _hasExceededAllowableMovement;
	CADisplayLink* _displayLink;
	double _minimumDurationRequired;
	double _allowableMovement;
	double _touchForce;
	double _touchStartTimestamp;
	UIDelayedAction* _delayedAction;
	CGPoint _originalCentroid;

}

@property (nonatomic,readonly) CADisplayLink * displayLink;                    //@synthesize displayLink=_displayLink - In the implementation block
@property (assign,nonatomic) double touchStartTimestamp;                       //@synthesize touchStartTimestamp=_touchStartTimestamp - In the implementation block
@property (assign,nonatomic) CGPoint originalCentroid;                         //@synthesize originalCentroid=_originalCentroid - In the implementation block
@property (nonatomic,readonly) UIDelayedAction * delayedAction;                //@synthesize delayedAction=_delayedAction - In the implementation block
@property (assign,nonatomic) double minimumDurationRequired;                   //@synthesize minimumDurationRequired=_minimumDurationRequired - In the implementation block
@property (assign,nonatomic) double allowableMovement;                         //@synthesize allowableMovement=_allowableMovement - In the implementation block
@property (nonatomic,readonly) BOOL hasExceededAllowableMovement;              //@synthesize hasExceededAllowableMovement=_hasExceededAllowableMovement - In the implementation block
@property (nonatomic,readonly) double touchDuration; 
@property (nonatomic,readonly) double touchForce;                              //@synthesize touchForce=_touchForce - In the implementation block
-(void)dealloc;
-(void)reset;
-(id)initWithTarget:(id)arg1 action:(SEL)arg2 ;
-(void)touchesBegan:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesMoved:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesEnded:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesCancelled:(id)arg1 withEvent:(id)arg2 ;
-(UIDelayedAction *)delayedAction;
-(void)setAllowableMovement:(double)arg1 ;
-(void)setMinimumDurationRequired:(double)arg1 ;
-(BOOL)canPreventGestureRecognizer:(id)arg1 ;
-(double)allowableMovement;
-(double)touchDuration;
-(BOOL)hasExceededAllowableMovement;
-(double)touchForce;
-(double)minimumDurationRequired;
-(CADisplayLink *)displayLink;
-(void)setTouchStartTimestamp:(double)arg1 ;
-(double)touchStartTimestamp;
-(void)_displayLinkDidFire:(id)arg1 ;
-(BOOL)_exceededNumberOfTouchesForEvent:(id)arg1 ;
-(void)_cancelOrFail;
-(void)_performDelayedBegin;
-(void)setOriginalCentroid:(CGPoint)arg1 ;
-(CGPoint)originalCentroid;
@end

