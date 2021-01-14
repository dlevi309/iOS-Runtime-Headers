/*
* Generated on Thursday, January 14, 2021 at 2:25:31 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardUI.framework/SpringBoardUI
*/

#import <SpringBoardUI/SpringBoardUI-Structs.h>
#import <UIKitCore/UIView.h>
#import <libobjc.A.dylib/SBSceneHandleObserver.h>
#import <libobjc.A.dylib/SBScenePlaceholderContentViewProviderDelegate.h>
#import <libobjc.A.dylib/BSInvalidatable.h>

@protocol UIScenePresenter, SBScenePlaceholderContentContext, SBScenePlaceholderContentView, UISceneSnapshotPresentation, UIScenePresentation, SBScenePlaceholderContentViewProvider, SBSceneViewDelegate;
@class SBSceneHandle, NSString, UIView, NSCountedSet;

@interface SBSceneView : UIView <SBSceneHandleObserver, SBScenePlaceholderContentViewProviderDelegate, BSInvalidatable> {

	SBSceneHandle* _sceneHandle;
	CGSize _referenceSize;
	long long _orientation;
	long long _requestedDisplayMode;
	long long _effectiveDisplayMode;
	BOOL _invalidated;
	id<UIScenePresenter> _presenter;
	long long _hostingPriority;
	NSString* _hostingIdentifier;
	id<SBScenePlaceholderContentContext> _placeholderContentContext;
	UIView* _sceneContentContainerView;
	UIView* _customContentView;
	UIView*<SBScenePlaceholderContentView> _placeholderContentView;
	UIView*<UISceneSnapshotPresentation> _liveSnapshotView;
	UIView*<UIScenePresentation> _hostView;
	UIView* _crossfadeView;
	UIView* _backgroundView;
	NSCountedSet* _liveContentDisableReasons;
	BOOL _placeholderContentEnabled;
	BOOL _shouldRasterizeHostView;
	id<SBScenePlaceholderContentViewProvider> _placeholderContentProvider;
	NSString* _hostViewMinificationFilter;
	id<SBSceneViewDelegate> _delegate;

}

@property (nonatomic,readonly) id<UIScenePresenter> presenter;                                                  //@synthesize presenter=_presenter - In the implementation block
@property (nonatomic,readonly) SBSceneHandle * sceneHandle;                                                     //@synthesize sceneHandle=_sceneHandle - In the implementation block
@property (nonatomic,readonly) CGSize referenceSize;                                                            //@synthesize referenceSize=_referenceSize - In the implementation block
@property (nonatomic,readonly) long long orientation;                                                           //@synthesize orientation=_orientation - In the implementation block
@property (nonatomic,retain) id<SBScenePlaceholderContentViewProvider> placeholderContentProvider;              //@synthesize placeholderContentProvider=_placeholderContentProvider - In the implementation block
@property (nonatomic,retain) id<SBScenePlaceholderContentContext> placeholderContentContext;                    //@synthesize placeholderContentContext=_placeholderContentContext - In the implementation block
@property (assign,nonatomic) BOOL placeholderContentEnabled;                                                    //@synthesize placeholderContentEnabled=_placeholderContentEnabled - In the implementation block
@property (nonatomic,readonly) long long displayMode;                                                           //@synthesize requestedDisplayMode=_requestedDisplayMode - In the implementation block
@property (nonatomic,readonly) long long effectiveDisplayMode;                                                  //@synthesize effectiveDisplayMode=_effectiveDisplayMode - In the implementation block
@property (assign,nonatomic) BOOL shouldRasterizeHostView;                                                      //@synthesize shouldRasterizeHostView=_shouldRasterizeHostView - In the implementation block
@property (nonatomic,copy) NSString * hostViewMinificationFilter;                                               //@synthesize hostViewMinificationFilter=_hostViewMinificationFilter - In the implementation block
@property (nonatomic,readonly) long long preferredStatusBarStyle; 
@property (assign,nonatomic,__weak) id<SBSceneViewDelegate> delegate;                                           //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) UIView * backgroundView;                                                           //@synthesize backgroundView=_backgroundView - In the implementation block
@property (nonatomic,retain) UIView * customContentView;                                                        //@synthesize customContentView=_customContentView - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)defaultDisplayModeAnimationFactory;
-(void)sceneHandle:(id)arg1 didUpdateContentState:(long long)arg2 ;
-(void)sceneHandle:(id)arg1 didDestroyScene:(id)arg2 ;
-(void)setDisplayMode:(long long)arg1 animationFactory:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)sceneHandle:(id)arg1 didCreateScene:(id)arg2 ;
-(void)_invalidateSceneLiveHostView:(id)arg1 ;
-(BOOL)_shouldAnimatePropertyWithKey:(id)arg1 ;
-(id<SBSceneViewDelegate>)delegate;
-(void)setBackgroundView:(UIView *)arg1 ;
-(void)setCustomContentView:(UIView *)arg1 ;
-(void)_layoutLiveHostView:(id)arg1 ;
-(UIView *)backgroundView;
-(void)_updateReferenceSize:(CGSize)arg1 andOrientation:(long long)arg2 ;
-(long long)displayMode;
-(void)_updateLiveContentRasterization;
-(id<UIScenePresenter>)presenter;
-(CGSize)referenceSize;
-(void)setDelegate:(id<SBSceneViewDelegate>)arg1 ;
-(void)_refresh;
-(NSString *)description;
-(void)layoutSubviews;
-(void)didMoveToWindow;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(BOOL)_representsTranslucentContent;
-(void)_configureSceneLiveHostView:(id)arg1 ;
-(id<SBScenePlaceholderContentContext>)placeholderContentContext;
-(UIView *)customContentView;
-(id)newSnapshot;
-(long long)orientation;
-(long long)preferredStatusBarStyle;
-(id)_transitionViewForHostView;
-(void)invalidate;
-(SBSceneHandle *)sceneHandle;
-(void)setPlaceholderContentContext:(id<SBScenePlaceholderContentContext>)arg1 ;
-(BOOL)placeholderContentEnabled;
-(void)_configureSceneSnapshotContext:(id)arg1 ;
-(void)setPlaceholderContentEnabled:(BOOL)arg1 ;
-(id)initWithSceneHandle:(id)arg1 referenceSize:(CGSize)arg2 orientation:(long long)arg3 hostRequester:(id)arg4 ;
-(void)dealloc;
-(void)setShouldRasterizeHostView:(BOOL)arg1 ;
-(void)setHostViewMinificationFilter:(NSString *)arg1 ;
-(id)acquireLiveContentDisableAssertionForReason:(id)arg1 ;
-(void)setPlaceholderContentProvider:(id<SBScenePlaceholderContentViewProvider>)arg1 ;
-(long long)effectiveDisplayMode;
-(id<SBScenePlaceholderContentViewProvider>)placeholderContentProvider;
-(void)placeholderContentViewProviderContentDidUpdate:(id)arg1 ;
-(void)_containerContentWrapperInterfaceOrientationChangedTo:(long long)arg1 ;
-(void)_invalidateHostPresenter;
-(void)_transitionFromDisplayMode:(long long)arg1 showingView:(id)arg2 toDisplayMode:(long long)arg3 showingView:(id)arg4 withAnimationFactory:(id)arg5 completion:(/*^block*/id)arg6 ;
-(void)_reloadPlaceholderContentIfNecessary;
-(void)_evaluateEffectiveDisplayModeWithAnimationFactory:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_clearSnapshotViews;
-(void)_hotSwapPlaceholderContentView;
-(void)_hotSwapLiveSnapshotView;
-(void)_setOrientation:(long long)arg1 ;
-(void)_enableHostingIfPossible;
-(BOOL)_shouldObserveSceneHostContentState;
-(void)_recheckLiveContentDependencies;
-(void)_configureViewForEffectiveDisplayMode:(long long)arg1 ;
-(id)_viewForDisplayMode:(long long)arg1 ;
-(long long)_bestDisplayModeLessThanMode:(long long)arg1 ;
-(BOOL)_addContentLikeViewToHierarchyForTransitionIfPossible:(id)arg1 ;
-(BOOL)_shouldViewBeInHierarchyForTransition:(id)arg1 ;
-(void)_configurePlaceholderContentView;
-(void)_configureLiveSnapshotView;
-(void)_configureHostView;
-(void)_placeholderVisibilityChanged;
-(void)_configureBackgroundColorForLiveSnapshot:(BOOL)arg1 ;
-(id)initWithSceneHandle:(id)arg1 referenceSize:(CGSize)arg2 orientation:(long long)arg3 ;
-(BOOL)shouldRasterizeHostView;
-(NSString *)hostViewMinificationFilter;
@end

