/*
* Generated on Monday, March 1, 2021 at 2:35:57 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <SpringBoard/SBScreenEdgePanGestureRecognizer.h>
#import <libobjc.A.dylib/PTSettingsKeyObserver.h>
#import <libobjc.A.dylib/SBGestureRecognizerPanGestureProviding.h>
#import <libobjc.A.dylib/SBGestureRecognizerTouchHistoryProviding.h>

@protocol SBHomeGesturePanGestureRecognizerInterfaceDelegate;
@class SBHomeGestureSettings, SBFluidSwitcherGestureExclusionTrapezoid, SBTouchHistory, UIView, NSString;

@interface SBHomeGesturePanGestureRecognizer : SBScreenEdgePanGestureRecognizer <PTSettingsKeyObserver, SBGestureRecognizerPanGestureProviding, SBGestureRecognizerTouchHistoryProviding> {

	BOOL _preventHorizontalSwipesOutsideTrapezoid;
	BOOL _installedAsSystemGesture;
	id<SBHomeGesturePanGestureRecognizerInterfaceDelegate> _interfaceDelegate;
	SBHomeGestureSettings* _homeGestureSettings;
	SBFluidSwitcherGestureExclusionTrapezoid* _portraitExclusionTrapezoid;
	SBFluidSwitcherGestureExclusionTrapezoid* _landscapeExclusionTrapezoid;
	SBTouchHistory* _touchHistory;

}

@property (nonatomic,retain) SBHomeGestureSettings * homeGestureSettings;                                                  //@synthesize homeGestureSettings=_homeGestureSettings - In the implementation block
@property (nonatomic,retain) SBFluidSwitcherGestureExclusionTrapezoid * portraitExclusionTrapezoid;                        //@synthesize portraitExclusionTrapezoid=_portraitExclusionTrapezoid - In the implementation block
@property (nonatomic,retain) SBFluidSwitcherGestureExclusionTrapezoid * landscapeExclusionTrapezoid;                       //@synthesize landscapeExclusionTrapezoid=_landscapeExclusionTrapezoid - In the implementation block
@property (nonatomic,retain) SBTouchHistory * touchHistory;                                                                //@synthesize touchHistory=_touchHistory - In the implementation block
@property (assign,nonatomic,__weak) id<SBHomeGesturePanGestureRecognizerInterfaceDelegate> interfaceDelegate;              //@synthesize interfaceDelegate=_interfaceDelegate - In the implementation block
@property (assign,nonatomic) BOOL preventHorizontalSwipesOutsideTrapezoid;                                                 //@synthesize preventHorizontalSwipesOutsideTrapezoid=_preventHorizontalSwipesOutsideTrapezoid - In the implementation block
@property (assign,nonatomic) BOOL installedAsSystemGesture;                                                                //@synthesize installedAsSystemGesture=_installedAsSystemGesture - In the implementation block
@property (nonatomic,__weak,readonly) UIView * viewForTouchHistory; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)homeGesturePanGestureRecognizerWithTarget:(id)arg1 action:(SEL)arg2 ;
-(void)reset;
-(void)touchesBegan:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesMoved:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesEnded:(id)arg1 withEvent:(id)arg2 ;
-(double)peakSpeed;
-(BOOL)_shouldBegin;
-(long long)_touchInterfaceOrientation;
-(id)initWithTarget:(id)arg1 action:(SEL)arg2 type:(long long)arg3 options:(unsigned long long)arg4 ;
-(SBTouchHistory *)touchHistory;
-(void)settings:(id)arg1 changedValueForKey:(id)arg2 ;
-(void)setInterfaceDelegate:(id<SBHomeGesturePanGestureRecognizerInterfaceDelegate>)arg1 ;
-(CGPoint)averageTouchVelocityOverTimeDuration:(double)arg1 ;
-(SBHomeGestureSettings *)homeGestureSettings;
-(void)setHomeGestureSettings:(SBHomeGestureSettings *)arg1 ;
-(double)averageTouchPathAngleOverTimeDuration:(double)arg1 ;
-(void)setInstalledAsSystemGesture:(BOOL)arg1 ;
-(UIView *)viewForTouchHistory;
-(BOOL)installedAsSystemGesture;
-(void)setTouchHistory:(SBTouchHistory *)arg1 ;
-(void)sb_commonInitHomeGesturePanGestureRecognizer;
-(void)_updateHomeGestureParameters;
-(id<SBHomeGesturePanGestureRecognizerInterfaceDelegate>)interfaceDelegate;
-(void)_SBLogTouchesWithMethodName:(id)arg1 withMethodName:(id)arg2 ;
-(BOOL)_isOutsideOfExclusionTrapezoid;
-(BOOL)_shouldBlockHomeGestureForKeyboardInputMode:(id)arg1 ;
-(void)_setUpExclusionTrapezoids;
-(id)_currentExclusionShapeForEdge:(unsigned long long)arg1 ;
-(id)_currentKeyboardExclusionCompositeShape;
-(void)setPreventHorizontalSwipesOutsideTrapezoid:(BOOL)arg1 ;
-(BOOL)preventHorizontalSwipesOutsideTrapezoid;
-(SBFluidSwitcherGestureExclusionTrapezoid *)portraitExclusionTrapezoid;
-(void)setPortraitExclusionTrapezoid:(SBFluidSwitcherGestureExclusionTrapezoid *)arg1 ;
-(SBFluidSwitcherGestureExclusionTrapezoid *)landscapeExclusionTrapezoid;
-(void)setLandscapeExclusionTrapezoid:(SBFluidSwitcherGestureExclusionTrapezoid *)arg1 ;
@end

