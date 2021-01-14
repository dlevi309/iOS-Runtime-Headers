/*
* Generated on Thursday, January 14, 2021 at 2:25:23 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(double)peakSpeed;
-(UIView *)viewForTouchHistory;
-(BOOL)preventHorizontalSwipesOutsideTrapezoid;
-(void)sb_commonInitHomeGesturePanGestureRecognizer;
-(id)_currentExclusionShapeForEdge:(unsigned long long)arg1 ;
-(BOOL)installedAsSystemGesture;
-(void)setPortraitExclusionTrapezoid:(SBFluidSwitcherGestureExclusionTrapezoid *)arg1 ;
-(id<SBHomeGesturePanGestureRecognizerInterfaceDelegate>)interfaceDelegate;
-(void)_updateHomeGestureParameters;
-(void)_SBLogTouchesWithMethodName:(id)arg1 withMethodName:(id)arg2 ;
-(void)setLandscapeExclusionTrapezoid:(SBFluidSwitcherGestureExclusionTrapezoid *)arg1 ;
-(void)setTouchHistory:(SBTouchHistory *)arg1 ;
-(CGPoint)averageTouchVelocityOverTimeDuration:(double)arg1 ;
-(SBTouchHistory *)touchHistory;
-(void)_setUpExclusionTrapezoids;
-(SBHomeGestureSettings *)homeGestureSettings;
-(id)initWithTarget:(id)arg1 action:(SEL)arg2 type:(long long)arg3 options:(unsigned long long)arg4 ;
-(void)setHomeGestureSettings:(SBHomeGestureSettings *)arg1 ;
-(void)setPreventHorizontalSwipesOutsideTrapezoid:(BOOL)arg1 ;
-(void)setInstalledAsSystemGesture:(BOOL)arg1 ;
-(void)touchesMoved:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesEnded:(id)arg1 withEvent:(id)arg2 ;
-(id)_currentKeyboardExclusionCompositeShape;
-(SBFluidSwitcherGestureExclusionTrapezoid *)landscapeExclusionTrapezoid;
-(double)averageTouchPathAngleOverTimeDuration:(double)arg1 ;
-(void)conformsToSBGestureRecognizerTouchHistoryProviding;
-(long long)_touchInterfaceOrientation;
-(void)reset;
-(void)settings:(id)arg1 changedValueForKey:(id)arg2 ;
-(void)setInterfaceDelegate:(id<SBHomeGesturePanGestureRecognizerInterfaceDelegate>)arg1 ;
-(BOOL)_shouldBegin;
-(void)touchesBegan:(id)arg1 withEvent:(id)arg2 ;
-(BOOL)_shouldBlockHomeGestureForKeyboardInputMode:(id)arg1 ;
-(SBFluidSwitcherGestureExclusionTrapezoid *)portraitExclusionTrapezoid;
-(BOOL)_isOutsideOfExclusionTrapezoid;
@end

