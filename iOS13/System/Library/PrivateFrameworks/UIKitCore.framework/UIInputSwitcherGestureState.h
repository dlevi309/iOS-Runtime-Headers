/*
* Generated on Monday, March 1, 2021 at 2:30:16 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/


#import <UIKitCore/UIKitCore-Structs.h>
@interface UIInputSwitcherGestureState : NSObject {

	BOOL _didMoveBeyondThreshold;
	BOOL _hideSwitcher;
	double _touchDown;
	double _lastSeenKeyboardTouchDown;
	CGPoint _firstReferencePoint;

}

@property (assign,nonatomic) BOOL didMoveBeyondThreshold;                   //@synthesize didMoveBeyondThreshold=_didMoveBeyondThreshold - In the implementation block
@property (assign,nonatomic) BOOL hideSwitcher;                             //@synthesize hideSwitcher=_hideSwitcher - In the implementation block
@property (assign,nonatomic) CGPoint firstReferencePoint;                   //@synthesize firstReferencePoint=_firstReferencePoint - In the implementation block
@property (assign,nonatomic) double touchDown;                              //@synthesize touchDown=_touchDown - In the implementation block
@property (assign,nonatomic) double lastSeenKeyboardTouchDown;              //@synthesize lastSeenKeyboardTouchDown=_lastSeenKeyboardTouchDown - In the implementation block
-(BOOL)hideSwitcher;
-(double)lastSeenKeyboardTouchDown;
-(BOOL)gestureConflictsWithTypingWindow;
-(BOOL)didMoveBeyondThreshold;
-(void)setDidMoveBeyondThreshold:(BOOL)arg1 ;
-(void)setHideSwitcher:(BOOL)arg1 ;
-(CGPoint)firstReferencePoint;
-(void)setFirstReferencePoint:(CGPoint)arg1 ;
-(double)touchDown;
-(void)setTouchDown:(double)arg1 ;
-(void)setLastSeenKeyboardTouchDown:(double)arg1 ;
@end

