/*
* Generated on Thursday, January 14, 2021 at 2:22:40 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/

#import <PhotosUICore/PhotosUICore-Structs.h>
#import <libobjc.A.dylib/PXGMetalRendererDelegate.h>
#import <libobjc.A.dylib/PXGLayoutUpdateDelegate.h>
#import <libobjc.A.dylib/PXGTextureManagerDelegate.h>
#import <libobjc.A.dylib/PXTilingScrollControllerUpdateDelegate.h>
#import <libobjc.A.dylib/PXChangeObserver.h>

@protocol PXGEngineDelegate;
@class PXGAnimator, PXGSpriteDataStore, PXGChangeDetails, PXGLayout, PXGSpriteMetadataStore, PXScrollViewController, PXScrollViewSpeedometer, PXGTextureManager, PXGMetalRenderer, PXGViewRenderer, NSArray, PXGViewEnvironment, PXDisplayLink, PXGAXCoalescingResponder, NSString;

@interface PXGEngine : NSObject <PXGMetalRendererDelegate, PXGLayoutUpdateDelegate, PXGTextureManagerDelegate, PXTilingScrollControllerUpdateDelegate, PXChangeObserver> {

	PXGAnimator* _animator;
	PXGSpriteDataStore* _layoutSpriteDataStore;
	PXGChangeDetails* _layoutChangeDetails;
	CGPoint _viewportShift;
	CGPoint _previousVisibleOrigin;
	PXGSpriteDataStore* _animationPresentationSpriteDataStore;
	PXGSpriteDataStore* _animationTargetSpriteDataStore;
	PXGLayout* _animationLayout;
	PXGChangeDetails* _animationChangeDetails;
	PXGSpriteMetadataStore* _presentationSpriteMetadaStore;
	struct {
		unsigned long long needsUpdate;
		unsigned long long updated;
		BOOL isPerformingUpdate;
	}  _updateFlags;
	unsigned long long _previousUpdateEntities;
	SCD_Struct_PX23 _previousInteractionState;
	unsigned long long _pendingUpdateEntities;
	BOOL _keepDisplayLinkAlive;
	double _renderForTargetTimestamp;
	double _lastRenderCompletionTimestamp;
	BOOL _animatorWasAnimatingAtBeginningOfFrame;
	BOOL _isUpdatingScrollView;
	BOOL _viewSizeDidChange;
	BOOL _lowMemoryMode;
	/*^block*/id _pendingIsInvisibleForSomeTimeBlock;
	BOOL _extensionHostIsInBackground;
	BOOL _didRenderThisFrame;
	BOOL _expectingScrollEvents;
	BOOL _gotScrollEventThisFrame;
	BOOL _missedScrollEventThisFrame;
	BOOL _isInvisibleForSomeTime;
	BOOL _visible;
	BOOL _statsTrackingEnabled;
	BOOL _slowAnimationsEnabled;
	BOOL _wantsImmediateUpdates;
	BOOL _isInitialLoad;
	PXScrollViewController* _scrollViewController;
	PXScrollViewSpeedometer* _scrollViewSpeedometer;
	PXGLayout* _layout;
	PXGTextureManager* _textureManager;
	/*^block*/id _animationRenderingCompletionHandler;
	double _lastScrollEventTime;
	id<PXGEngineDelegate> _delegate;
	PXGMetalRenderer* _metalRenderer;
	PXGViewRenderer* _viewRenderer;
	NSArray* _renderers;
	PXGViewEnvironment* _viewEnvironment;
	SCD_Struct_PX57* _stats;
	PXDisplayLink* _displayLink;
	PXGAXCoalescingResponder* _coalescingAXResponder;
	SCD_Struct_PX23 _interactionState;
	PXGEngineScrollState _scrollState;

}

@property (nonatomic,readonly) PXGEngineScrollState scrollState;                              //@synthesize scrollState=_scrollState - In the implementation block
@property (assign,nonatomic) SCD_Struct_PX22 interactionState;                                //@synthesize interactionState=_interactionState - In the implementation block
@property (nonatomic,readonly) long long currentFrameTime; 
@property (assign,nonatomic) BOOL didRenderThisFrame;                                         //@synthesize didRenderThisFrame=_didRenderThisFrame - In the implementation block
@property (assign,nonatomic) BOOL expectingScrollEvents;                                      //@synthesize expectingScrollEvents=_expectingScrollEvents - In the implementation block
@property (assign,nonatomic) BOOL gotScrollEventThisFrame;                                    //@synthesize gotScrollEventThisFrame=_gotScrollEventThisFrame - In the implementation block
@property (assign,nonatomic) double lastScrollEventTime;                                      //@synthesize lastScrollEventTime=_lastScrollEventTime - In the implementation block
@property (assign,nonatomic) BOOL missedScrollEventThisFrame;                                 //@synthesize missedScrollEventThisFrame=_missedScrollEventThisFrame - In the implementation block
@property (assign,nonatomic) BOOL isInvisibleForSomeTime;                                     //@synthesize isInvisibleForSomeTime=_isInvisibleForSomeTime - In the implementation block
@property (assign,nonatomic,__weak) id<PXGEngineDelegate> delegate;                           //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) PXGMetalRenderer * metalRenderer;                              //@synthesize metalRenderer=_metalRenderer - In the implementation block
@property (nonatomic,readonly) PXGViewRenderer * viewRenderer;                                //@synthesize viewRenderer=_viewRenderer - In the implementation block
@property (nonatomic,readonly) NSArray * renderers;                                           //@synthesize renderers=_renderers - In the implementation block
@property (assign,getter=isVisible,nonatomic) BOOL visible;                                   //@synthesize visible=_visible - In the implementation block
@property (nonatomic,retain) PXGViewEnvironment * viewEnvironment;                            //@synthesize viewEnvironment=_viewEnvironment - In the implementation block
@property (assign,nonatomic) BOOL statsTrackingEnabled;                                       //@synthesize statsTrackingEnabled=_statsTrackingEnabled - In the implementation block
@property (nonatomic,readonly) SCD_Struct_PX57* stats;                                        //@synthesize stats=_stats - In the implementation block
@property (nonatomic,readonly) PXDisplayLink * displayLink;                                   //@synthesize displayLink=_displayLink - In the implementation block
@property (nonatomic,readonly) BOOL debugEngineUpdates; 
@property (assign,nonatomic) BOOL slowAnimationsEnabled;                                      //@synthesize slowAnimationsEnabled=_slowAnimationsEnabled - In the implementation block
@property (nonatomic,readonly) PXGAnimator * ppt_animator; 
@property (assign,nonatomic) BOOL wantsImmediateUpdates;                                      //@synthesize wantsImmediateUpdates=_wantsImmediateUpdates - In the implementation block
@property (assign,nonatomic) BOOL isInitialLoad;                                              //@synthesize isInitialLoad=_isInitialLoad - In the implementation block
@property (assign,nonatomic) BOOL lowMemoryMode; 
@property (nonatomic,readonly) PXGAXCoalescingResponder * coalescingAXResponder;              //@synthesize coalescingAXResponder=_coalescingAXResponder - In the implementation block
@property (nonatomic,retain) PXScrollViewController * scrollViewController;                   //@synthesize scrollViewController=_scrollViewController - In the implementation block
@property (nonatomic,retain) PXScrollViewSpeedometer * scrollViewSpeedometer;                 //@synthesize scrollViewSpeedometer=_scrollViewSpeedometer - In the implementation block
@property (nonatomic,retain) PXGLayout * layout;                                              //@synthesize layout=_layout - In the implementation block
@property (nonatomic,readonly) PXGTextureManager * textureManager;                            //@synthesize textureManager=_textureManager - In the implementation block
@property (nonatomic,copy) id animationRenderingCompletionHandler;                            //@synthesize animationRenderingCompletionHandler=_animationRenderingCompletionHandler - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)isInitialLoad;
-(void)setViewEnvironment:(PXGViewEnvironment *)arg1 ;
-(void)_enumerateRenderers:(/*^block*/id)arg1 ;
-(BOOL)_shouldDeferRenderUntilNextFrame;
-(void)setIsInitialLoad:(BOOL)arg1 ;
-(void)_updateLayout;
-(void)setInteractionState:(SCD_Struct_PX22)arg1 ;
-(void)setScrollViewController:(PXScrollViewController *)arg1 ;
-(PXDisplayLink *)displayLink;
-(SCD_Struct_PX22)interactionState;
-(void)setMissedScrollEventThisFrame:(BOOL)arg1 ;
-(BOOL)copyPresentedSpriteFor:(id)arg1 geometry:(SCD_Struct_PX106*)arg2 style:(SCD_Struct_PX83*)arg3 info:(SCD_Struct_PX15*)arg4 ;
-(void)ensureUpdatedLayout;
-(void)renderer:(id)arg1 viewportSizeWillChange:(CGSize)arg2 ;
-(void)setIsInvisibleForSomeTime:(BOOL)arg1 ;
-(id)init;
-(void)_updateInteractionState;
-(PXScrollViewController *)scrollViewController;
-(void)setExpectingScrollEvents:(BOOL)arg1 ;
-(id<PXGEngineDelegate>)delegate;
-(void)setStatsTrackingEnabled:(BOOL)arg1 ;
-(void)_deferredInvalidate:(unsigned long long)arg1 ;
-(PXScrollViewSpeedometer *)scrollViewSpeedometer;
-(BOOL)wantsImmediateUpdates;
-(PXGAnimator *)ppt_animator;
-(void)test_installRenderSnapshotHandler:(/*^block*/id)arg1 ;
-(void)setGotScrollEventThisFrame:(BOOL)arg1 ;
-(BOOL)missedScrollEventThisFrame;
-(void)setVisible:(BOOL)arg1 ;
-(void)metalRendererDidChangeTextureConverter:(id)arg1 ;
-(void)_invalidateOrDefer:(unsigned long long)arg1 ;
-(void)_resetChangeDetails;
-(BOOL)isInvisibleForSomeTime;
-(void)_updateTextureManager;
-(void)setLastScrollEventTime:(double)arg1 ;
-(void)setLowMemoryMode:(BOOL)arg1 ;
-(void)setScrollViewSpeedometer:(PXScrollViewSpeedometer *)arg1 ;
-(void)setWantsImmediateUpdates:(BOOL)arg1 ;
-(BOOL)statsTrackingEnabled;
-(void)__setNeedsUpdate;
-(void)setDelegate:(id<PXGEngineDelegate>)arg1 ;
-(PXGTextureManager *)textureManager;
-(void)_extensionHostDidEnterBackground:(id)arg1 ;
-(void)handleScreensDidWakeNotification:(id)arg1 ;
-(PXGViewRenderer *)viewRenderer;
-(void)setSlowAnimationsEnabled:(BOOL)arg1 ;
-(BOOL)didRenderThisFrame;
-(BOOL)_isInBackground;
-(SCD_Struct_PX57*)stats;
-(void)tilingScrollControllerDidScroll:(id)arg1 ;
-(BOOL)isVisible;
-(id)animationRenderingCompletionHandler;
-(void)setDidRenderThisFrame:(BOOL)arg1 ;
-(void)rendererPerformRender:(id)arg1 ;
-(PXGEngineScrollState)scrollState;
-(PXGViewEnvironment *)viewEnvironment;
-(void)_setNeedsRender;
-(PXGMetalRenderer *)metalRenderer;
-(void)textureManagerNeedsUpdate:(id)arg1 ;
-(BOOL)_shouldWaitForScrollEvent;
-(void)handleDisplayLink:(id)arg1 ;
-(void)tilingScrollControllerDidUpdate:(id)arg1 ;
-(void)layoutNeedsUpdate:(id)arg1 ;
-(void)_updateDisplayLink;
-(void)_updateScrollStateWithReason:(unsigned long long)arg1 ;
-(BOOL)_shouldDeferContentOffsetUpdates;
-(void)enumerateSpritesInRect:(CGRect)arg1 usingBlock:(/*^block*/id)arg2 ;
-(id)initWithAnimator:(id)arg1 textureManager:(id)arg2 metalRenderer:(id)arg3 viewRenderer:(id)arg4 displayLinkClass:(Class)arg5 ;
-(BOOL)debugEngineUpdates;
-(void)rendererNeedsUpdate:(id)arg1 ;
-(BOOL)lowMemoryMode;
-(void)_forceInvalidate:(unsigned long long)arg1 ;
-(void)_render;
-(long long)currentFrameTime;
-(BOOL)expectingScrollEvents;
-(void)setLayout:(PXGLayout *)arg1 ;
-(void)setAnimationRenderingCompletionHandler:(id)arg1 ;
-(void)_extensionHostWillEnterForeground:(id)arg1 ;
-(void)_updateIfNeededWithReason:(id)arg1 ;
-(double)lastScrollEventTime;
-(void)_releaseResources;
-(void)_updateAnimatorWithTargetTimestamp:(double)arg1 ;
-(void)_hasBeenInvisibleForSomeTime;
-(PXGAXCoalescingResponder *)coalescingAXResponder;
-(void)dealloc;
-(void)_purgeResources;
-(NSArray *)renderers;
-(void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void*)arg3 ;
-(PXGLayout *)layout;
-(BOOL)gotScrollEventThisFrame;
-(BOOL)slowAnimationsEnabled;
@end

