/*
* Generated on Thursday, January 14, 2021 at 2:25:25 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/


@protocol BSInvalidatable;
@class UIWindow, FBDisplayLayoutElement, UIApplicationSceneDeactivationAssertion, NSMutableArray;

@interface SBCoverSheetSceneManager : NSObject {

	BOOL _performingSceneUpdate;
	UIWindow* _coverSheetWindow;
	FBDisplayLayoutElement* _displayLayoutElement;
	UIApplicationSceneDeactivationAssertion* _notificationCenterAssertion;
	UIApplicationSceneDeactivationAssertion* _systemAnimationAssertion;
	NSMutableArray* _pendingSceneUpdateBlocks;
	id<BSInvalidatable> _stateCaptureInvalidatable;

}

@property (nonatomic,retain) FBDisplayLayoutElement * displayLayoutElement;                                      //@synthesize displayLayoutElement=_displayLayoutElement - In the implementation block
@property (nonatomic,retain) UIApplicationSceneDeactivationAssertion * notificationCenterAssertion;              //@synthesize notificationCenterAssertion=_notificationCenterAssertion - In the implementation block
@property (nonatomic,retain) UIApplicationSceneDeactivationAssertion * systemAnimationAssertion;                 //@synthesize systemAnimationAssertion=_systemAnimationAssertion - In the implementation block
@property (nonatomic,retain) NSMutableArray * pendingSceneUpdateBlocks;                                          //@synthesize pendingSceneUpdateBlocks=_pendingSceneUpdateBlocks - In the implementation block
@property (assign,getter=isPerformingSceneUpdate,nonatomic) BOOL performingSceneUpdate;                          //@synthesize performingSceneUpdate=_performingSceneUpdate - In the implementation block
@property (nonatomic,retain) id<BSInvalidatable> stateCaptureInvalidatable;                                      //@synthesize stateCaptureInvalidatable=_stateCaptureInvalidatable - In the implementation block
@property (assign,nonatomic,__weak) UIWindow * coverSheetWindow;                                                 //@synthesize coverSheetWindow=_coverSheetWindow - In the implementation block
-(void)updateForegroundScenesForCoverSheetAnimationActive:(BOOL)arg1 ;
-(void)updateSceneManagerForPresented:(BOOL)arg1 suspendUnderLockEnvironment:(BOOL)arg2 ;
-(void)setPerformingSceneUpdate:(BOOL)arg1 ;
-(void)_setDisplayLayoutElementActive:(BOOL)arg1 ;
-(UIApplicationSceneDeactivationAssertion *)notificationCenterAssertion;
-(void)setDisplayLayoutElement:(FBDisplayLayoutElement *)arg1 ;
-(BOOL)isPerformingSceneUpdate;
-(void)setNotificationCenterAssertion:(UIApplicationSceneDeactivationAssertion *)arg1 ;
-(FBDisplayLayoutElement *)displayLayoutElement;
-(void)setCoverSheetWindow:(UIWindow *)arg1 ;
-(void)_performNextSceneUpdateBlock;
-(void)_setSceneBackgrounded:(BOOL)arg1 suspendUnderLockEnvironment:(BOOL)arg2 ;
-(void)setPendingSceneUpdateBlocks:(NSMutableArray *)arg1 ;
-(id<BSInvalidatable>)stateCaptureInvalidatable;
-(void)_performSceneUpdateBlock:(/*^block*/id)arg1 ;
-(void)setSystemAnimationAssertion:(UIApplicationSceneDeactivationAssertion *)arg1 ;
-(NSMutableArray *)pendingSceneUpdateBlocks;
-(UIApplicationSceneDeactivationAssertion *)systemAnimationAssertion;
-(void)setStateCaptureInvalidatable:(id<BSInvalidatable>)arg1 ;
-(void)_updateForegroundScenesForNotificationCenter:(BOOL)arg1 ;
-(UIWindow *)coverSheetWindow;
-(id)initWithCoverSheetWindow:(id)arg1 ;
@end

