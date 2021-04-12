/*
* Generated on Monday, March 1, 2021 at 2:35:58 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/


@class UIWindow, FBDisplayLayoutElement, UIApplicationSceneDeactivationAssertion;

@interface SBCoverSheetSceneManager : NSObject {

	UIWindow* _coverSheetWindow;
	FBDisplayLayoutElement* _displayLayoutElement;
	UIApplicationSceneDeactivationAssertion* _notificationCenterAssertion;
	UIApplicationSceneDeactivationAssertion* _systemAnimationAssertion;

}

@property (nonatomic,retain) FBDisplayLayoutElement * displayLayoutElement;                                      //@synthesize displayLayoutElement=_displayLayoutElement - In the implementation block
@property (nonatomic,retain) UIApplicationSceneDeactivationAssertion * notificationCenterAssertion;              //@synthesize notificationCenterAssertion=_notificationCenterAssertion - In the implementation block
@property (nonatomic,retain) UIApplicationSceneDeactivationAssertion * systemAnimationAssertion;                 //@synthesize systemAnimationAssertion=_systemAnimationAssertion - In the implementation block
@property (assign,nonatomic,__weak) UIWindow * coverSheetWindow;                                                 //@synthesize coverSheetWindow=_coverSheetWindow - In the implementation block
-(UIWindow *)coverSheetWindow;
-(FBDisplayLayoutElement *)displayLayoutElement;
-(void)setDisplayLayoutElement:(FBDisplayLayoutElement *)arg1 ;
-(void)setCoverSheetWindow:(UIWindow *)arg1 ;
-(id)initWithCoverSheetWindow:(id)arg1 ;
-(void)updateSceneManagerForPresented:(BOOL)arg1 suspendUnderLockEnvironment:(BOOL)arg2 ;
-(void)updateForegroundScenesForCoverSheetAnimationActive:(BOOL)arg1 ;
-(void)_setSceneBackgrounded:(BOOL)arg1 suspendUnderLockEnvironment:(BOOL)arg2 ;
-(void)_setDisplayLayoutElementActive:(BOOL)arg1 ;
-(void)_updateForegroundScenesForNotificationCenter:(BOOL)arg1 ;
-(UIApplicationSceneDeactivationAssertion *)notificationCenterAssertion;
-(void)setNotificationCenterAssertion:(UIApplicationSceneDeactivationAssertion *)arg1 ;
-(UIApplicationSceneDeactivationAssertion *)systemAnimationAssertion;
-(void)setSystemAnimationAssertion:(UIApplicationSceneDeactivationAssertion *)arg1 ;
@end

