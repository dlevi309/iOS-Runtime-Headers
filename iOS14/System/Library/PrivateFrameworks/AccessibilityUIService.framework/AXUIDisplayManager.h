/*
* Generated on Thursday, January 14, 2021 at 2:26:36 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AccessibilityUIService.framework/AccessibilityUIService
*/

#import <AccessibilityUIService/AccessibilityUIService-Structs.h>
#import <UIKit/UIDynamicAnimatorDelegate.h>
#import <UIKit/UICollisionBehaviorDelegate.h>

@class AXUIAlertStyleProvider, AXUIServiceManager, NSMutableDictionary, NSString, SBSAccessibilityWindowHostingController;

@interface AXUIDisplayManager : NSObject <UIDynamicAnimatorDelegate, UICollisionBehaviorDelegate> {

	AXUIAlertStyleProvider* _defaultAlertStyleProvider;
	long long _activeInterfaceOrientation;
	unsigned long long _numberOfAttemptsToInitializeActiveInterfaceOrientation;
	AXUIServiceManager* _serviceManager;
	NSMutableDictionary* _alertQueues;
	NSMutableDictionary* _visibleAlertContexts;
	NSMutableDictionary* _activeWindows;
	NSMutableDictionary* _passiveWindows;
	NSMutableDictionary* _activeContentViewControllers;
	NSMutableDictionary* _passiveContentViewControllers;
	NSString* _systemServerActionHandlerIdentifier;
	long long _userInterfaceStyle;
	NSMutableDictionary* _nubbitContexts;
	NSString* _reachabilityHandlerIdentifier;
	double _reachabilityOffset;
	SBSAccessibilityWindowHostingController* _windowHostingController;

}

@property (nonatomic,retain) AXUIAlertStyleProvider * defaultAlertStyleProvider;                                     //@synthesize defaultAlertStyleProvider=_defaultAlertStyleProvider - In the implementation block
@property (assign,nonatomic) long long activeInterfaceOrientation;                                                   //@synthesize activeInterfaceOrientation=_activeInterfaceOrientation - In the implementation block
@property (assign,nonatomic) long long userInterfaceStyle;                                                           //@synthesize userInterfaceStyle=_userInterfaceStyle - In the implementation block
@property (assign,nonatomic) unsigned long long numberOfAttemptsToInitializeActiveInterfaceOrientation;              //@synthesize numberOfAttemptsToInitializeActiveInterfaceOrientation=_numberOfAttemptsToInitializeActiveInterfaceOrientation - In the implementation block
@property (assign,nonatomic,__weak) AXUIServiceManager * serviceManager;                                             //@synthesize serviceManager=_serviceManager - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * alertQueues;                                                      //@synthesize alertQueues=_alertQueues - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * visibleAlertContexts;                                             //@synthesize visibleAlertContexts=_visibleAlertContexts - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * activeWindows;                                                    //@synthesize activeWindows=_activeWindows - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * passiveWindows;                                                   //@synthesize passiveWindows=_passiveWindows - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * activeContentViewControllers;                                     //@synthesize activeContentViewControllers=_activeContentViewControllers - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * passiveContentViewControllers;                                    //@synthesize passiveContentViewControllers=_passiveContentViewControllers - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * nubbitContexts;                                                   //@synthesize nubbitContexts=_nubbitContexts - In the implementation block
@property (nonatomic,copy) NSString * systemServerActionHandlerIdentifier;                                           //@synthesize systemServerActionHandlerIdentifier=_systemServerActionHandlerIdentifier - In the implementation block
@property (nonatomic,copy) NSString * reachabilityHandlerIdentifier;                                                 //@synthesize reachabilityHandlerIdentifier=_reachabilityHandlerIdentifier - In the implementation block
@property (assign,nonatomic) double reachabilityOffset;                                                              //@synthesize reachabilityOffset=_reachabilityOffset - In the implementation block
@property (nonatomic,retain) SBSAccessibilityWindowHostingController * windowHostingController;                      //@synthesize windowHostingController=_windowHostingController - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedDisplayManager;
-(AXUIServiceManager *)serviceManager;
-(NSMutableDictionary *)passiveWindows;
-(void)_beginMoveForNubbitContext:(id)arg1 ;
-(NSMutableDictionary *)alertQueues;
-(void)hideAlertWithIdentifier:(id)arg1 forService:(id)arg2 ;
-(void)_addDynamicAnimationsForNubbitContext:(id)arg1 ;
-(void)addContentViewController:(id)arg1 withUserInteractionEnabled:(BOOL)arg2 forService:(id)arg3 ;
-(long long)userInterfaceStyle;
-(void)setActiveInterfaceOrientation:(long long)arg1 ;
-(unsigned long long)numberOfAttemptsToInitializeActiveInterfaceOrientation;
-(void)collisionBehavior:(id)arg1 beganContactForItem:(id)arg2 withBoundaryIdentifier:(id)arg3 atPoint:(CGPoint)arg4 ;
-(void)unregisterNubbit:(id)arg1 ;
-(void)setAlertQueues:(NSMutableDictionary *)arg1 ;
-(void)_attemptToInitializeActiveInterfaceOrientation;
-(long long)activeInterfaceOrientation;
-(id)init;
-(void)_removeContentViewController:(id)arg1 forService:(id)arg2 ;
-(void)setReachabilityHandlerIdentifier:(NSString *)arg1 ;
-(void)systemAppServerReady;
-(void)setReachabilityOffset:(double)arg1 ;
-(double)reachabilityOffset;
-(NSString *)systemServerActionHandlerIdentifier;
-(void)removeContentViewController:(id)arg1 withUserInteractionEnabled:(BOOL)arg2 forService:(id)arg3 ;
-(NSMutableDictionary *)passiveContentViewControllers;
-(id)_nubbitContextKeyForNubbit:(id)arg1 ;
-(void)setPassiveWindows:(NSMutableDictionary *)arg1 ;
-(NSMutableDictionary *)activeContentViewControllers;
-(void)_didHideOrDequeueAlertWithContext:(id)arg1 ;
-(void)cancelNubbitFade:(id)arg1 ;
-(NSString *)reachabilityHandlerIdentifier;
-(void)addContentViewController:(id)arg1 withUserInteractionEnabled:(BOOL)arg2 forService:(id)arg3 context:(void*)arg4 completion:(/*^block*/id)arg5 ;
-(id)showAlertWithText:(id)arg1 subtitleText:(id)arg2 iconImage:(id)arg3 type:(unsigned long long)arg4 forService:(id)arg5 ;
-(void)_reachabilityToggledWithPayload:(id)arg1 ;
-(void)setPassiveContentViewControllers:(NSMutableDictionary *)arg1 ;
-(void)setNumberOfAttemptsToInitializeActiveInterfaceOrientation:(unsigned long long)arg1 ;
-(id)_transactionIdentifierForDisplayingContentViewController:(id)arg1 service:(id)arg2 ;
-(id)_windowWithUserInteractionEnabled:(BOOL)arg1 windowLevel:(double)arg2 createIfNeeded:(BOOL)arg3 purposeIdentifier:(id)arg4 userInterfaceStyle:(long long)arg5 allowSystemAppHosting:(BOOL)arg6 ;
-(id)_boundingViewForNubbit:(id)arg1 ;
-(void)_disposeOfContentViewControllersWithUserInteractionEnabled:(BOOL)arg1 forService:(id)arg2 ;
-(void)_handleMoveNubbitGestureRecognizer:(id)arg1 ;
-(void)_reapHiddenWindows;
-(void)unregisterNubbit:(id)arg1 shouldUndoFade:(BOOL)arg2 ;
-(void)enumerateContentViewControllersUsingBlock:(/*^block*/id)arg1 ;
-(void)setNubbitContexts:(NSMutableDictionary *)arg1 ;
-(NSMutableDictionary *)visibleAlertContexts;
-(void)_changeNubbitPositionForNubbitContext:(id)arg1 ;
-(void)_enumerateWindowsUsingBlock:(/*^block*/id)arg1 ;
-(void)setUserInterfaceStyle:(long long)arg1 ;
-(void)setActiveContentViewControllers:(NSMutableDictionary *)arg1 ;
-(void)registerNubbit:(id)arg1 delegate:(id)arg2 ;
-(void)_endMoveForNubbitContext:(id)arg1 ;
-(NSMutableDictionary *)activeWindows;
-(id)initWithServiceManager:(id)arg1 ;
-(void)setSystemServerActionHandlerIdentifier:(NSString *)arg1 ;
-(void)setVisibleAlertContexts:(NSMutableDictionary *)arg1 ;
-(BOOL)_serviceWantsToPreventAutorotation:(id)arg1 ;
-(double)_originalDurationForRotationFromInterfaceOrientation:(long long)arg1 toInterfaceOrientation:(long long)arg2 withAdjustedDuration:(double)arg3 ;
-(void)_showAlertWithContext:(id)arg1 ;
-(id)showAlertWithText:(id)arg1 subtitleText:(id)arg2 iconImage:(id)arg3 type:(unsigned long long)arg4 priority:(unsigned long long)arg5 duration:(double)arg6 forService:(id)arg7 ;
-(id)_gravityBehaviorForNubbit:(id)arg1 velocity:(CGPoint)arg2 boundingView:(id)arg3 ;
-(id)_contentViewControllersWithUserInteractionEnabled:(BOOL)arg1 forService:(id)arg2 createIfNeeded:(BOOL)arg3 ;
-(void)_didReceiveMemoryWarning:(id)arg1 ;
-(AXUIAlertStyleProvider *)defaultAlertStyleProvider;
-(void)dynamicAnimatorDidPause:(id)arg1 ;
-(void)_scheduleFadeForNubbitContext:(id)arg1 ;
-(void)_removeDynamicAnimationsForNubbitContext:(id)arg1 ;
-(void)_activeInterfaceOrientationDidChange:(long long)arg1 duration:(double)arg2 ;
-(id)showAlertWithText:(id)arg1 subtitleText:(id)arg2 iconImage:(id)arg3 type:(unsigned long long)arg4 priority:(unsigned long long)arg5 duration:(double)arg6 userInfo:(id)arg7 forService:(id)arg8 ;
-(void)setServiceManager:(AXUIServiceManager *)arg1 ;
-(SBSAccessibilityWindowHostingController *)windowHostingController;
-(void)_handleNextAlertForType:(unsigned long long)arg1 ;
-(void)setActiveWindows:(NSMutableDictionary *)arg1 ;
-(void)_undoFadeForNubbitContext:(id)arg1 ;
-(void)addContentViewController:(id)arg1 withUserInteractionEnabled:(BOOL)arg2 forService:(id)arg3 context:(void*)arg4 userInterfaceStyle:(long long)arg5 allowSystemAppHosting:(BOOL)arg6 completion:(/*^block*/id)arg7 ;
-(NSMutableDictionary *)nubbitContexts;
-(void)removeContentViewController:(id)arg1 withUserInteractionEnabled:(BOOL)arg2 forService:(id)arg3 context:(void*)arg4 completion:(/*^block*/id)arg5 ;
-(void)setWindowHostingController:(SBSAccessibilityWindowHostingController *)arg1 ;
-(id)_transactionIdentifierForDisplayingAlertWithContext:(id)arg1 service:(id)arg2 ;
-(void)_hideAlertWithContext:(id)arg1 notifyDelegate:(BOOL)arg2 ;
-(void)pinNubbitToEdge:(id)arg1 ;
-(void)setDefaultAlertStyleProvider:(AXUIAlertStyleProvider *)arg1 ;
-(id)contentViewControllersWithUserInteractionEnabled:(BOOL)arg1 forService:(id)arg2 ;
-(void)addContentViewController:(id)arg1 withUserInteractionEnabled:(BOOL)arg2 forService:(id)arg3 context:(void*)arg4 userInterfaceStyle:(long long)arg5 completion:(/*^block*/id)arg6 ;
-(void)_showOrEnqueueAlertWithContext:(id)arg1 ;
-(id)_nubbitContextForGestureRecognizer:(id)arg1 ;
-(void)_resetServiceManager;
-(void)_addContentViewController:(id)arg1 toWindow:(id)arg2 forService:(id)arg3 context:(void*)arg4 completion:(/*^block*/id)arg5 ;
-(void)addContentViewController:(id)arg1 withUserInteractionEnabled:(BOOL)arg2 forService:(id)arg3 allowSystemAppHosting:(BOOL)arg4 ;
-(BOOL)_hasVisibleAlertWithType:(unsigned long long)arg1 ;
-(void)_rotateWindow:(id)arg1 toInterfaceOrientation:(long long)arg2 duration:(double)arg3 force:(BOOL)arg4 ;
-(id)_windowWithUserInteractionEnabled:(BOOL)arg1 windowLevel:(double)arg2 createIfNeeded:(BOOL)arg3 purposeIdentifier:(id)arg4 ;
-(void)dealloc;
@end

