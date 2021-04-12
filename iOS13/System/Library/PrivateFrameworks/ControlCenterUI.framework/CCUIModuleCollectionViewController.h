/*
* Generated on Monday, March 1, 2021 at 2:34:00 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ControlCenterUI.framework/ControlCenterUI
*/

#import <ControlCenterUI/ControlCenterUI-Structs.h>
#import <UIKitCore/UIViewController.h>
#import <libobjc.A.dylib/CCUIModuleInstanceManagerObserver.h>
#import <libobjc.A.dylib/CCUIModuleSettingsManagerObserver.h>
#import <libobjc.A.dylib/CCUILayoutViewLayoutSource.h>
#import <libobjc.A.dylib/CCUIContentModuleContainerViewControllerDelegate.h>
#import <libobjc.A.dylib/CCUISafeAppearancePropagationProvider.h>

@protocol OS_dispatch_group, CCUIModuleCollectionViewControllerDelegate;
@class NSArray, CCUIModuleInstanceManager, CCUIModuleSettingsManager, CCUIControlCenterPositionProvider, CCUILayoutOptions, NSDictionary, NSHashTable, NSObject, CCUIModuleCollectionView, NSString;

@interface CCUIModuleCollectionViewController : UIViewController <CCUIModuleInstanceManagerObserver, CCUIModuleSettingsManagerObserver, CCUILayoutViewLayoutSource, CCUIContentModuleContainerViewControllerDelegate, CCUISafeAppearancePropagationProvider> {

	CCUIModuleInstanceManager* _moduleManager;
	CCUIModuleSettingsManager* _settingsManager;
	CCUIControlCenterPositionProvider* _portraitPositionProvider;
	CCUIControlCenterPositionProvider* _landscapePositionProvider;
	CCUILayoutOptions* _layoutOptions;
	NSDictionary* _moduleViewControllerByIdentifier;
	NSDictionary* _moduleContainerViewByIdentifier;
	NSHashTable* _homeGestureDismissalAllowedModules;
	NSHashTable* _currentModules;
	NSHashTable* _expandedModules;
	NSObject*<OS_dispatch_group> _moduleCloseDispatchGroup;
	BOOL _homeGestureDismissalAllowed;
	id<CCUIModuleCollectionViewControllerDelegate> _delegate;

}

@property (nonatomic,readonly) unsigned long long expandedModuleCount; 
@property (getter=isHomeGestureDismissalAllowed,nonatomic,readonly) BOOL homeGestureDismissalAllowed;              //@synthesize homeGestureDismissalAllowed=_homeGestureDismissalAllowed - In the implementation block
@property (nonatomic,retain) CCUIModuleCollectionView * moduleCollectionView; 
@property (assign,nonatomic,__weak) id<CCUIModuleCollectionViewControllerDelegate> delegate;                       //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSArray * childViewControllersForAppearancePropagation; 
-(id<CCUIModuleCollectionViewControllerDelegate>)delegate;
-(void)setDelegate:(id<CCUIModuleCollectionViewControllerDelegate>)arg1 ;
-(void)loadView;
-(CGSize)preferredContentSize;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(BOOL)_canShowWhileLocked;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(long long)_interfaceOrientation;
-(void)willBecomeActive;
-(void)willResignActive;
-(CGSize)sizeForChildContentContainer:(id)arg1 withParentContainerSize:(CGSize)arg2 ;
-(BOOL)shouldAutomaticallyForwardAppearanceMethods;
-(void)dismissPresentedContentAnimated:(BOOL)arg1 completion:(/*^block*/id)arg2 ;
-(void)displayWillTurnOff;
-(id)_currentLayoutOptions;
-(void)_updateEnabledModuleIdentifiers;
-(void)_updateHomeGestureDismissalAllowed;
-(void)setModuleCollectionView:(CCUIModuleCollectionView *)arg1 ;
-(void)_refreshPositionProviders;
-(void)_populateModuleViewControllers;
-(CCUIModuleCollectionView *)moduleCollectionView;
-(id)_activePositionProvider;
-(id)_positionProviderForInterfaceOrientation:(long long)arg1 ;
-(void)_updateModuleControllers;
-(void)_beginAppearanceTransition:(BOOL)arg1 affectedModule:(id)arg2 ;
-(id)_moduleInstances;
-(id)_setupAndAddModuleViewControllerToHierarchy:(id)arg1 ;
-(void)_removeAndTearDownModuleViewControllerFromHierarchy:(id)arg1 ;
-(id)_sizesForModuleIdentifiers:(id)arg1 moduleInstanceByIdentifier:(id)arg2 interfaceOrientation:(long long)arg3 ;
-(void)moduleInstancesChangedForModuleInstanceManager:(id)arg1 ;
-(void)orderedEnabledModuleIdentifiersChangedForSettingsManager:(id)arg1 ;
-(CCUILayoutSize)layoutSizeForLayoutView:(id)arg1 ;
-(CCUILayoutRect)layoutView:(id)arg1 layoutRectForSubview:(id)arg2 ;
-(CGRect)compactModeFrameForContentModuleContainerViewController:(id)arg1 ;
-(BOOL)contentModuleContainerViewController:(id)arg1 canBeginInteractionWithModule:(id)arg2 ;
-(void)contentModuleContainerViewController:(id)arg1 didBeginInteractionWithModule:(id)arg2 ;
-(void)contentModuleContainerViewController:(id)arg1 didFinishInteractionWithModule:(id)arg2 ;
-(void)contentModuleContainerViewController:(id)arg1 willOpenExpandedModule:(id)arg2 ;
-(void)contentModuleContainerViewController:(id)arg1 didOpenExpandedModule:(id)arg2 ;
-(void)contentModuleContainerViewController:(id)arg1 willCloseExpandedModule:(id)arg2 ;
-(void)contentModuleContainerViewController:(id)arg1 didCloseExpandedModule:(id)arg2 ;
-(void)contentModuleContainerViewController:(id)arg1 willPresentViewController:(id)arg2 ;
-(void)contentModuleContainerViewController:(id)arg1 willDismissViewController:(id)arg2 ;
-(void)contentModuleContainerViewControllerDismissPresentedContent:(id)arg1 ;
-(NSArray *)childViewControllersForAppearancePropagation;
-(id)initWithModuleInstanceManager:(id)arg1 ;
-(unsigned long long)expandedModuleCount;
-(void)didUpdateHomeGestureDismissalAllowed:(BOOL)arg1 forModuleWithIdentifier:(id)arg2 ;
-(void)expandModuleWithIdentifier:(id)arg1 ;
-(void)dismissExpandedModuleAnimated:(BOOL)arg1 completion:(/*^block*/id)arg2 ;
-(BOOL)isModuleExpandedForIdentifier:(id)arg1 ;
-(BOOL)isAtMaxHeight;
-(id)relevantSnapHeightsForOrientation:(long long)arg1 ;
-(id)queryAllTopLevelBlockingGestureRecognizers;
-(BOOL)isHomeGestureDismissalAllowed;
@end

