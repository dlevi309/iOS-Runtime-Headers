/*
* Generated on Thursday, January 14, 2021 at 2:26:00 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/BannerKit.framework/BannerKit
*/

#import <BannerKit/BannerKit-Structs.h>
#import <UIKitCore/UIViewController.h>
#import <libobjc.A.dylib/FBSceneObserver.h>
#import <libobjc.A.dylib/BNBannerHostSceneViewControllerViewDelegate.h>
#import <libobjc.A.dylib/BSInvalidatable.h>
#import <libobjc.A.dylib/BNBannerSourceListenerPresentable.h>
#import <libobjc.A.dylib/BNPresentableUniquelyIdentifying.h>
#import <libobjc.A.dylib/BNPresentableObservable.h>

@protocol UIScenePresenter;
@class FBProcess, FBScene, NSUUID, NSHashTable, NSMutableArray, BSAnimationSettings, NSString, UIViewController;

@interface BNBannerHostSceneViewController : UIViewController <FBSceneObserver, BNBannerHostSceneViewControllerViewDelegate, BSInvalidatable, BNBannerSourceListenerPresentable, BNPresentableUniquelyIdentifying, BNPresentableObservable> {

	id<UIScenePresenter> _scenePresenter;
	UIEdgeInsets _bannerContentOutsets;
	NSHashTable* _observers;
	NSMutableArray* _activeSizeTransitionActions;
	BSAnimationSettings* _bannerSizeTransitionAnimationSettings;
	int _bannerAppearState;
	NSString* _requesterIdentifier;
	NSString* _requestIdentifier;
	long long _presentableType;
	NSUUID* _uniqueIdentifier;
	FBScene* _scene;
	/*^block*/id _readyCompletion;

}

@property (nonatomic,readonly) FBScene * scene;                                                                      //@synthesize scene=_scene - In the implementation block
@property (getter=isReady,nonatomic,readonly) BOOL ready; 
@property (nonatomic,copy) id readyCompletion;                                                                       //@synthesize readyCompletion=_readyCompletion - In the implementation block
@property (nonatomic,readonly) int bannerAppearState;                                                                //@synthesize bannerAppearState=_bannerAppearState - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) FBProcess * clientProcess; 
@property (getter=isContentHosted,nonatomic,readonly) BOOL contentHosted; 
@property (nonatomic,readonly) UIViewController * viewController; 
@property (nonatomic,readonly) long long presentableType;                                                            //@synthesize presentableType=_presentableType - In the implementation block
@property (getter=isDraggingDismissalEnabled,nonatomic,readonly) BOOL draggingDismissalEnabled; 
@property (getter=isDraggingInteractionEnabled,nonatomic,readonly) BOOL draggingInteractionEnabled; 
@property (getter=isTouchOutsideDismissalEnabled,nonatomic,readonly) BOOL touchOutsideDismissalEnabled; 
@property (nonatomic,copy,readonly) NSString * requesterIdentifier;                                                  //@synthesize requesterIdentifier=_requesterIdentifier - In the implementation block
@property (nonatomic,copy,readonly) NSString * requestIdentifier;                                                    //@synthesize requestIdentifier=_requestIdentifier - In the implementation block
@property (nonatomic,copy,readonly) NSUUID * uniqueIdentifier;                                                       //@synthesize uniqueIdentifier=_uniqueIdentifier - In the implementation block
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)scene:(id)arg1 didUpdateClientSettingsWithDiff:(id)arg2 oldClientSettings:(id)arg3 transitionContext:(id)arg4 ;
-(FBScene *)scene;
-(void)sceneContentStateDidChange:(id)arg1 ;
-(void)viewWillLayoutSubviews;
-(void)presentableWillAppearAsBanner:(id)arg1 ;
-(void)presentableDidDisappearAsBanner:(id)arg1 withReason:(id)arg2 ;
-(void)_notifyObserversWithBlock:(/*^block*/id)arg1 ;
-(void)sceneDidInvalidate:(id)arg1 ;
-(NSString *)requestIdentifier;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(NSUUID *)uniqueIdentifier;
-(NSString *)requesterIdentifier;
-(UIViewController *)viewController;
-(BOOL)_canShowWhileLocked;
-(void)userInteractionWillBeginForBannerForPresentable:(id)arg1 ;
-(BOOL)isReady;
-(void)viewDidLoad;
-(void)presentableDidAppearAsBanner:(id)arg1 ;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(void)invalidate;
-(void)presentableWillDisappearAsBanner:(id)arg1 withReason:(id)arg2 ;
-(void)viewWillTransitionToSize:(CGSize)arg1 withTransitionCoordinator:(id)arg2 ;
-(void)loadView;
-(void)userInteractionDidEndForBannerForPresentable:(id)arg1 ;
-(void)traitCollectionDidChange:(id)arg1 ;
-(void)dealloc;
-(FBProcess *)clientProcess;
-(long long)presentableType;
-(BOOL)isDraggingDismissalEnabled;
-(BOOL)isDraggingInteractionEnabled;
-(BOOL)isTouchOutsideDismissalEnabled;
-(int)bannerAppearState;
-(void)addPresentableObserver:(id)arg1 ;
-(void)removePresentableObserver:(id)arg1 ;
-(UIEdgeInsets)bannerContentOutsets;
-(id)bannerSizeTransitionAnimationSettings;
-(BOOL)isContentHosted;
-(id)initWithWithSpecification:(id)arg1 scene:(id)arg2 ;
-(void)setReadyCompletion:(id)arg1 ;
-(void)_updatePreferredContentSizeWithScene:(id)arg1 transitionContext:(id)arg2 ;
-(void)_updateBannerContentOutsetsWithScene:(id)arg1 ;
-(void)_tearDownSceneInfrastructure;
-(void)_makeReadyIfPossibleWithScene:(id)arg1 ;
-(void)_tearDownScenePresenterIfNecessary;
-(/*^block*/id)_tearDownSceneBlock:(id)arg1 ;
-(void)_tearDownSceneIfNecessary;
-(void)bannerHostSceneViewControllerViewDidChangeSize:(id)arg1 ;
-(UIEdgeInsets)contentInsetsForBannerHostSceneViewControllerView:(id)arg1 ;
-(id)readyCompletion;
@end

