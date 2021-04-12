/*
* Generated on Thursday, January 14, 2021 at 2:25:27 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <UIKitCore/UIGestureRecognizer.h>

@class SBTouchHistory, UITouch, SBReachabilitySettings;

@interface SBReachabilityGestureRecognizer : UIGestureRecognizer {

	BOOL _everTranslatedUpwards;
	BOOL _movedPastHysteresis;
	SBTouchHistory* _touchHistory;
	UITouch* _activeTouch;
	SBReachabilitySettings* _settings;
	CGPoint _initialTouchLocation;

}

@property (nonatomic,retain) SBTouchHistory * touchHistory;                  //@synthesize touchHistory=_touchHistory - In the implementation block
@property (nonatomic,retain) UITouch * activeTouch;                          //@synthesize activeTouch=_activeTouch - In the implementation block
@property (assign,nonatomic) CGPoint initialTouchLocation;                   //@synthesize initialTouchLocation=_initialTouchLocation - In the implementation block
@property (assign,nonatomic) BOOL everTranslatedUpwards;                     //@synthesize everTranslatedUpwards=_everTranslatedUpwards - In the implementation block
@property (assign,nonatomic) BOOL movedPastHysteresis;                       //@synthesize movedPastHysteresis=_movedPastHysteresis - In the implementation block
@property (nonatomic,retain) SBReachabilitySettings * settings;              //@synthesize settings=_settings - In the implementation block
-(id)initWithTarget:(id)arg1 action:(SEL)arg2 ;
-(void)setTouchHistory:(SBTouchHistory *)arg1 ;
-(SBTouchHistory *)touchHistory;
-(void)touchesMoved:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesEnded:(id)arg1 withEvent:(id)arg2 ;
-(void)setSettings:(SBReachabilitySettings *)arg1 ;
-(void)touchesCancelled:(id)arg1 withEvent:(id)arg2 ;
-(SBReachabilitySettings *)settings;
-(UITouch *)activeTouch;
-(void)reset;
-(void)touchesBegan:(id)arg1 withEvent:(id)arg2 ;
-(void)setActiveTouch:(UITouch *)arg1 ;
-(CGPoint)initialTouchLocation;
-(void)setInitialTouchLocation:(CGPoint)arg1 ;
-(BOOL)everTranslatedUpwards;
-(void)setEverTranslatedUpwards:(BOOL)arg1 ;
-(BOOL)movedPastHysteresis;
-(void)setMovedPastHysteresis:(BOOL)arg1 ;
@end

