/*
* Generated on Thursday, January 14, 2021 at 2:28:32 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpotlightUI.framework/SpotlightUI
*/

#import <SpotlightUI/SpotlightUI-Structs.h>
#import <UIKitCore/UIViewController.h>
#import <libobjc.A.dylib/SBUIActiveOrientationObserver.h>
#import <libobjc.A.dylib/FBProcessWatchdogProviding.h>
#import <libobjc.A.dylib/SPUISpotlightSceneManagerDelegate.h>
#import <libobjc.A.dylib/FBApplicationUpdateScenesTransactionObserver.h>
#import <libobjc.A.dylib/FBSceneObserver.h>

@protocol UIScenePresentation, UIScenePresenter;
@class _UILegibilitySettings, NSString, FBScene, FBApplicationUpdateScenesTransaction, UIView, NSMutableArray;

@interface SPUISpotlightRemoteViewController : UIViewController <SBUIActiveOrientationObserver, FBProcessWatchdogProviding, SPUISpotlightSceneManagerDelegate, FBApplicationUpdateScenesTransactionObserver, FBSceneObserver> {

	BOOL _crashedWhileForeground;
	BOOL _prewarmSceneInTheBackground;
	_UILegibilitySettings* _legibilitySettings;
	NSString* _sceneIdentifier;
	FBScene* _scene;
	FBApplicationUpdateScenesTransaction* _transaction;
	UIView*<UIScenePresentation> _hostView;
	id<UIScenePresenter> _presenter;
	long long _currentOrientation;
	NSMutableArray* _sceneEventsQueue;

}

@property (retain) FBScene * scene;                                                   //@synthesize scene=_scene - In the implementation block
@property (retain) NSString * sceneIdentifier;                                        //@synthesize sceneIdentifier=_sceneIdentifier - In the implementation block
@property (retain) FBApplicationUpdateScenesTransaction * transaction;                //@synthesize transaction=_transaction - In the implementation block
@property (retain) UIView*<UIScenePresentation> hostView;                             //@synthesize hostView=_hostView - In the implementation block
@property (retain) id<UIScenePresenter> presenter;                                    //@synthesize presenter=_presenter - In the implementation block
@property (assign,nonatomic) long long currentOrientation;                            //@synthesize currentOrientation=_currentOrientation - In the implementation block
@property (assign) BOOL crashedWhileForeground;                                       //@synthesize crashedWhileForeground=_crashedWhileForeground - In the implementation block
@property (retain) NSMutableArray * sceneEventsQueue;                                 //@synthesize sceneEventsQueue=_sceneEventsQueue - In the implementation block
@property (nonatomic,readonly) BOOL prewarmSceneInTheBackground;                      //@synthesize prewarmSceneInTheBackground=_prewarmSceneInTheBackground - In the implementation block
@property (nonatomic,retain) _UILegibilitySettings * legibilitySettings;              //@synthesize legibilitySettings=_legibilitySettings - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(long long)currentOrientation;
-(FBScene *)scene;
-(void)setPresenter:(id<UIScenePresenter>)arg1 ;
-(void)setForeground:(BOOL)arg1 ;
-(void)sceneDidInvalidate:(id)arg1 ;
-(void)setSceneIdentifier:(NSString *)arg1 ;
-(void)setScene:(FBScene *)arg1 ;
-(void)viewDidMoveToWindow:(id)arg1 shouldAppearOrDisappear:(BOOL)arg2 ;
-(void)setTransaction:(FBApplicationUpdateScenesTransaction *)arg1 ;
-(NSString *)sceneIdentifier;
-(FBApplicationUpdateScenesTransaction *)transaction;
-(void)viewWillAppear:(BOOL)arg1 ;
-(BOOL)setSceneFrameOnRotation;
-(void)setLegibilitySettings:(_UILegibilitySettings *)arg1 ;
-(BOOL)prewarmSceneInTheBackground;
-(void)setHostView:(UIView*<UIScenePresentation>)arg1 ;
-(id<UIScenePresenter>)presenter;
-(void)didInvalidateSceneWhenForeground;
-(CGSize)initialFittingSize;
-(void)transaction:(id)arg1 didCreateScene:(id)arg2 ;
-(BOOL)_canShowWhileLocked;
-(_UILegibilitySettings *)legibilitySettings;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(id)watchdogPolicyForProcess:(id)arg1 eventContext:(id)arg2 ;
-(UIView*<UIScenePresentation>)hostView;
-(id)sceneSpecification;
-(void)activeInterfaceOrientationDidChangeToOrientation:(long long)arg1 willAnimateWithDuration:(double)arg2 fromOrientation:(long long)arg3 ;
-(void)viewDidLayoutSubviews;
-(void)activeInterfaceOrientationWillChangeToOrientation:(long long)arg1 ;
-(id)watchdogTerminationRequestForProcess:(id)arg1 error:(id)arg2 ;
-(void)setCurrentOrientation:(long long)arg1 ;
-(id)initWithSceneIdentifier:(id)arg1 ;
-(void)addOrExecuteEventAsNeeded:(/*^block*/id)arg1 ;
-(void)setSceneEventsQueue:(NSMutableArray *)arg1 ;
-(void)updateTraitCollection;
-(void)createSceneIfNeededWithPriority:(long long)arg1 ;
-(void)updateSafeAreasOnSettings:(id)arg1 ;
-(void)createSceneWithPriority:(long long)arg1 ;
-(CGRect)sceneSettingsFrameFromRect:(CGRect)arg1 ;
-(void)clearEventQueue;
-(BOOL)crashedWhileForeground;
-(void)setCrashedWhileForeground:(BOOL)arg1 ;
-(NSMutableArray *)sceneEventsQueue;
-(void)willLaunchSpotlightInBackground;
@end

