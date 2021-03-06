/*
* Generated on Thursday, January 14, 2021 at 2:25:26 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <SpringBoard/SBSwitcherModifierEvent.h>
#import <libobjc.A.dylib/SBGestureRecognizerTouchHistoryProviding.h>

@protocol SBGestureRecognizerTouchHistoryProviding;
@class NSUUID, SBAppLayout, NSString;

@interface SBGestureSwitcherModifierEvent : SBSwitcherModifierEvent <SBGestureRecognizerTouchHistoryProviding> {

	BOOL _pointerTouch;
	BOOL _mouseEvent;
	BOOL _canceled;
	NSUUID* _gestureID;
	SBAppLayout* _selectedAppLayout;
	long long _gestureType;
	unsigned long long _phase;
	long long _touchType;
	double _lastTouchTimestamp;
	double _hysteresis;
	id<SBGestureRecognizerTouchHistoryProviding> _touchHistoryProvider;
	CGPoint _locationInContainerView;
	CGPoint _translationInContainerView;
	CGPoint _velocityInContainerView;

}

@property (assign,nonatomic) unsigned long long phase;                                                       //@synthesize phase=_phase - In the implementation block
@property (assign,nonatomic) long long touchType;                                                            //@synthesize touchType=_touchType - In the implementation block
@property (assign,getter=isMouseEvent,nonatomic) BOOL mouseEvent;                                            //@synthesize mouseEvent=_mouseEvent - In the implementation block
@property (assign,getter=isPointerTouch,nonatomic) BOOL pointerTouch;                                        //@synthesize pointerTouch=_pointerTouch - In the implementation block
@property (assign,getter=isCanceled,nonatomic) BOOL canceled;                                                //@synthesize canceled=_canceled - In the implementation block
@property (assign,nonatomic) double lastTouchTimestamp;                                                      //@synthesize lastTouchTimestamp=_lastTouchTimestamp - In the implementation block
@property (assign,nonatomic) CGPoint locationInContainerView;                                                //@synthesize locationInContainerView=_locationInContainerView - In the implementation block
@property (assign,nonatomic) CGPoint translationInContainerView;                                             //@synthesize translationInContainerView=_translationInContainerView - In the implementation block
@property (assign,nonatomic) CGPoint velocityInContainerView;                                                //@synthesize velocityInContainerView=_velocityInContainerView - In the implementation block
@property (assign,nonatomic) double hysteresis;                                                              //@synthesize hysteresis=_hysteresis - In the implementation block
@property (nonatomic,retain) id<SBGestureRecognizerTouchHistoryProviding> touchHistoryProvider;              //@synthesize touchHistoryProvider=_touchHistoryProvider - In the implementation block
@property (nonatomic,readonly) NSUUID * gestureID;                                                           //@synthesize gestureID=_gestureID - In the implementation block
@property (nonatomic,readonly) SBAppLayout * selectedAppLayout;                                              //@synthesize selectedAppLayout=_selectedAppLayout - In the implementation block
@property (nonatomic,readonly) long long gestureType;                                                        //@synthesize gestureType=_gestureType - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(double)peakSpeed;
-(void)setCanceled:(BOOL)arg1 ;
-(CGPoint)averageTouchVelocityOverTimeDuration:(double)arg1 ;
-(BOOL)isCanceled;
-(double)hysteresis;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(double)averageTouchPathAngleOverTimeDuration:(double)arg1 ;
-(void)conformsToSBGestureRecognizerTouchHistoryProviding;
-(long long)type;
-(void)setHysteresis:(double)arg1 ;
-(double)lastTouchTimestamp;
-(unsigned long long)phase;
-(void)setPhase:(unsigned long long)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(long long)gestureType;
-(void)setLastTouchTimestamp:(double)arg1 ;
-(SBAppLayout *)selectedAppLayout;
-(NSUUID *)gestureID;
-(id)initWithGestureID:(id)arg1 selectedAppLayout:(id)arg2 gestureType:(long long)arg3 phase:(unsigned long long)arg4 ;
-(void)setVelocityInContainerView:(CGPoint)arg1 ;
-(void)setLocationInContainerView:(CGPoint)arg1 ;
-(void)setTranslationInContainerView:(CGPoint)arg1 ;
-(void)setMouseEvent:(BOOL)arg1 ;
-(void)setTouchHistoryProvider:(id<SBGestureRecognizerTouchHistoryProviding>)arg1 ;
-(void)setTouchType:(long long)arg1 ;
-(void)setPointerTouch:(BOOL)arg1 ;
-(CGPoint)locationInContainerView;
-(CGPoint)translationInContainerView;
-(long long)touchType;
-(BOOL)isPointerTouch;
-(CGPoint)velocityInContainerView;
-(BOOL)isMouseEvent;
-(BOOL)isGestureEvent;
-(id<SBGestureRecognizerTouchHistoryProviding>)touchHistoryProvider;
@end

