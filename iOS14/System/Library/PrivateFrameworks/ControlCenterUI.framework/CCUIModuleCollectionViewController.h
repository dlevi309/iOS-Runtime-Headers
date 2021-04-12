/*
* Generated on Thursday, January 14, 2021 at 2:24:55 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
@class NSArray, CCUIModuleInstanceManager, CCUIModuleSettingsManager, CCUIControlCenterPositionProvider, CCUILayoutOptions, NSDictionary, NSHashTable, NSObject, NSString, CCUIModuleCollectionView;

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
	NSString* _topmostModuleIdentifier;
	NSArray* _portraitDoubleMarginIndices;
	NSArray* _landscapeDoubleMarginIndices;
	BOOL _pendingModulePopulation;
	BOOL _pendingModulePositionProviderRefresh;
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
-(void)willBecomeActive;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)displayWillTurnOff;
-(void)dismissPresentedContentAnimated:(BOOL)arg1 completion:(/*^block*/id)arg2 ;
-(void)contentModuleContainerViewController:(id)arg1 didBeginInteractionWithModule:(id)arg2 ;
-(long long)_interfaceOrientation;
-(void)moduleInstancesChangedForModuleInstanceManager:(id)arg1 ;
-(void)moduleInstancesLayoutChangedForModuleInstanceManager:(id)arg1 ;
-(void)_updateHomeGestureDismissalAllowed;
-(void)expandModuleWithIdentifier:(id)arg1 ;
-(void)dismissExpandedModuleAnimated:(BOOL)arg1 completion:(/*^block*/id)arg2 ;
-(void)_updatePositionProviders;
-(BOOL)isHomeGestureDismissalAllowed;
-(id<CCUIModuleCollectionViewControllerDelegate>)delegate;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)contentModuleContainerViewController:(id)arg1 didOpenExpandedModule:(id)arg2 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(id)_activePositionProvider;
-(id)horizontalDoubleMarginIndicesForLayoutView:(id)arg1 ;
-(id)_positionProviderForInterfaceOrientation:(long long)arg1 ;
-(void)contentModuleContainerViewController:(id)arg1 willDismissViewController:(id)arg2 ;
-(id)relevantSnapHeightsForOrientation:(long long)arg1 ;
-(void)contentModuleContainerViewController:(id)arg1 willPresentViewController:(id)arg2 ;
-(void)_updateModuleControllers;
-(void)_removeAndTearDownModuleViewControllerFromHierarchy:(id)arg1 ;
-(CGSize)sizeForChildContentContainer:(id)arg1 withParentContainerSize:(CGSize)arg2 ;
-(BOOL)shouldAutomaticallyForwardAppearanceMethods;
-(CGRect)compactModeFrameForContentModuleContainerViewController:(id)arg1 ;
-(void)_populateModuleViewControllers;
-(void)setDelegate:(id<CCUIModuleCollectionViewControllerDelegate>)arg1 ;
-(void)contentModuleContainerViewController:(id)arg1 willOpenExpandedModule:(id)arg2 ;
-(CGSize)preferredContentSize;
-(CCUIModuleCollectionView *)moduleCollectionView;
-(id)topmostModuleView;
-(void)contentModuleContainerViewControllerDismissPresentedContent:(id)arg1 ;
-(BOOL)_canShowWhileLocked;
-(BOOL)contentModuleContainerViewController:(id)arg1 canBeginInteractionWithModule:(id)arg2 ;
-(void)viewDidLoad;
-(void)_beginAppearanceTransition:(BOOL)arg1 affectedModule:(id)arg2 ;
-(id)_moduleInstances;
-(id)verticalDoubleMarginIndicesForLayoutView:(id)arg1 ;
-(void)contentModuleContainerViewController:(id)arg1 didCloseExpandedModule:(id)arg2 ;
-(void)_refreshPositionProviders;
-(void)contentModuleContainerViewController:(id)arg1 didFinishInteractionWithModule:(id)arg2 ;
-(id)initWithModuleInstanceManager:(id)arg1 ;
-(BOOL)isAtMaxHeight;
-(void)willResignActive;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(CCUILayoutSize)layoutSizeForLayoutView:(id)arg1 ;
-(id)_setupAndAddModuleViewControllerToHierarchy:(id)arg1 ;
-(void)setModuleCollectionView:(CCUIModuleCollectionView *)arg1 ;
-(NSArray *)childViewControllersForAppearancePropagation;
-(void)loadView;
-(BOOL)isModuleExpandedForIdentifier:(id)arg1 ;
-(id)_sizesForModuleIdentifiers:(id)arg1 moduleInstanceByIdentifier:(id)arg2 interfaceOrientation:(long long)arg3 ;
-(CCUILayoutRect)layoutView:(id)arg1 layoutRectForSubview:(id)arg2 ;
-(void)_refreshPositionProvidersIfNecessary;
-(unsigned long long)expandedModuleCount;
-(void)didUpdateHomeGestureDismissalAllowed:(BOOL)arg1 forModuleWithIdentifier:(id)arg2 ;
-(void)_populateModulesIfNecessary;
-(void)orderedEnabledModuleIdentifiersChangedForSettingsManager:(id)arg1 ;
-(void)contentModuleContainerViewController:(id)arg1 willCloseExpandedModule:(id)arg2 ;
-(BOOL)ccui_shouldPropagateAppearanceCalls;
-(id)queryAllTopLevelBlockingGestureRecognizers;
-(id)_currentLayoutOptions;
-(id)_doubleMarginIndicesForModuleIdentifiers:(id)arg1 moduleInstanceByIdentifier:(id)arg2 interfaceOrientation:(long long)arg3 ;
-(void)_updateEnabledModuleIdentifiers;
@end

