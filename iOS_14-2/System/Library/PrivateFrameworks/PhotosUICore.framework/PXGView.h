/*
* Generated on Thursday, January 14, 2021 at 2:22:42 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/

#import <PhotosUICore/PhotosUICore-Structs.h>
#import <UIKitCore/UIView.h>
#import <libobjc.A.dylib/PXDiagnosticsEnvironment.h>
#import <libobjc.A.dylib/PXGEngineDelegate.h>
#import <libobjc.A.dylib/PXScrollViewControllerObserver.h>
#import <libobjc.A.dylib/PXSettingsKeyObserver.h>
#import <UIKit/UIGestureRecognizerDelegate.h>
#import <libobjc.A.dylib/PXGAXResponder.h>
#import <libobjc.A.dylib/PXGDiagnosticsProvider.h>
#import <libobjc.A.dylib/PXDebugHierarchyProvider.h>

@protocol PXGAXResponder, PXGViewAccessibilityDelegate, PXGViewDiagnosticsSource;
@class NSArray, PXGDebugHUDLayer, PXGRectDiagnosticsLayer, PXGAXCoalescingResponder, UIColor, PXScrollViewController, PXScrollViewSpeedometer, MTKView, PXGAnchor, NSDictionary, PXGEngine, NSString, PXGLayout;

@interface PXGView : UIView <PXDiagnosticsEnvironment, PXGEngineDelegate, PXScrollViewControllerObserver, PXSettingsKeyObserver, UIGestureRecognizerDelegate, PXGAXResponder, PXGDiagnosticsProvider, PXDebugHierarchyProvider> {

	PXGDebugHUDLayer* _debugHUDLayer;
	PXGRectDiagnosticsLayer* _rectDiagnosticsLayer;
	PXGAXCoalescingResponder* _coalescingAXResponder;
	UIColor* _backgroundColor;
	BOOL _lowMemoryModeEnabled;
	BOOL _isScrolling;
	BOOL _isAnimatingScroll;
	BOOL _isAccessibilityEnabled;
	BOOL _isSceneBackgrounded;
	BOOL _showDebugHUD;
	BOOL _showPerspectiveDebug;
	BOOL _shouldWorkaround18475431;
	id<PXGAXResponder> axNextResponder;
	id<PXGViewAccessibilityDelegate> _accessibilityDelegate;
	PXScrollViewController* _scrollViewController;
	PXScrollViewSpeedometer* _scrollingSpeedometer;
	MTKView* _metalView;
	PXGAnchor* _scrollingAnimationAnchor;
	NSDictionary* _ppt_currentTestOptions;
	/*^block*/id _nextDidLayoutHandler;
	id<PXGViewDiagnosticsSource> _diagnosticsSource;
	PXGEngine* _engine;
	UIEdgeInsets _hitTestPadding;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) MTKView * metalView;                                                              //@synthesize metalView=_metalView - In the implementation block
@property (nonatomic,readonly) UIEdgeInsets hitTestPadding;                                                      //@synthesize hitTestPadding=_hitTestPadding - In the implementation block
@property (assign,nonatomic) BOOL isScrolling;                                                                   //@synthesize isScrolling=_isScrolling - In the implementation block
@property (assign,nonatomic) BOOL isAnimatingScroll;                                                             //@synthesize isAnimatingScroll=_isAnimatingScroll - In the implementation block
@property (nonatomic,retain) PXGAnchor * scrollingAnimationAnchor;                                               //@synthesize scrollingAnimationAnchor=_scrollingAnimationAnchor - In the implementation block
@property (setter=ppt_setCurrentTestOptions:,nonatomic,copy) NSDictionary * ppt_currentTestOptions;              //@synthesize ppt_currentTestOptions=_ppt_currentTestOptions - In the implementation block
@property (nonatomic,copy) id nextDidLayoutHandler;                                                              //@synthesize nextDidLayoutHandler=_nextDidLayoutHandler - In the implementation block
@property (assign,nonatomic) BOOL isAccessibilityEnabled;                                                        //@synthesize isAccessibilityEnabled=_isAccessibilityEnabled - In the implementation block
@property (assign,nonatomic) BOOL isSceneBackgrounded;                                                           //@synthesize isSceneBackgrounded=_isSceneBackgrounded - In the implementation block
@property (nonatomic,readonly) BOOL hasExtendedColorDisplay; 
@property (assign,nonatomic) BOOL showDebugHUD;                                                                  //@synthesize showDebugHUD=_showDebugHUD - In the implementation block
@property (assign,nonatomic) BOOL showPerspectiveDebug;                                                          //@synthesize showPerspectiveDebug=_showPerspectiveDebug - In the implementation block
@property (nonatomic,retain) id<PXGViewDiagnosticsSource> diagnosticsSource;                                     //@synthesize diagnosticsSource=_diagnosticsSource - In the implementation block
@property (assign,nonatomic) BOOL slowAnimationsEnabled; 
@property (assign,nonatomic) BOOL shouldWorkaround18475431;                                                      //@synthesize shouldWorkaround18475431=_shouldWorkaround18475431 - In the implementation block
@property (nonatomic,readonly) PXGEngine * engine;                                                               //@synthesize engine=_engine - In the implementation block
@property (nonatomic,readonly) NSString * preferredFileNameForExportingDebugHierarchy; 
@property (nonatomic,readonly) NSDictionary * ppt_extraResults; 
@property (assign,nonatomic,__weak) id<PXGViewAccessibilityDelegate> accessibilityDelegate;                      //@synthesize accessibilityDelegate=_accessibilityDelegate - In the implementation block
@property (nonatomic,retain) PXGLayout * rootLayout; 
@property (assign,nonatomic) BOOL lowMemoryModeEnabled;                                                          //@synthesize lowMemoryModeEnabled=_lowMemoryModeEnabled - In the implementation block
@property (nonatomic,readonly) PXScrollViewController * scrollViewController;                                    //@synthesize scrollViewController=_scrollViewController - In the implementation block
@property (nonatomic,readonly) PXScrollViewSpeedometer * scrollingSpeedometer;                                   //@synthesize scrollingSpeedometer=_scrollingSpeedometer - In the implementation block
@property (assign,nonatomic,__weak) id<PXGAXResponder> axNextResponder; 
@property (nonatomic,copy,readonly) NSString * diagnosticDescription; 
@property (nonatomic,readonly) NSArray * debugHierarchyIdentifiers; 
+(void)setForceAccessibilityEnabled:(BOOL)arg1 ;
+(void)enumerateAllViewsUsingBlock:(/*^block*/id)arg1 ;
+(id)allDescriptions;
+(id)debugHierarchyObjectsInGroupWithID:(id)arg1 onObject:(id)arg2 outOptions:(id*)arg3 ;
+(id)debugHierarchyChildGroupingID;
+(BOOL)forceAccessibilityEnabled;
+(unsigned long long)supportLevel;
+(long long)screenPixelCount;
-(PXGEngine *)engine;
-(void)setAxNextResponder:(id<PXGAXResponder>)arg1 ;
-(id)axContainingViewForAXGroup:(id)arg1 ;
-(BOOL)axGroup:(id)arg1 didRequestToPerformAction:(long long)arg2 userInfo:(id)arg3 ;
-(id)dropTargetObjectReferenceForLocation:(CGPoint)arg1 ;
-(id)viewForSpriteIndex:(unsigned)arg1 ;
-(BOOL)exportDebugHierarchyToURL:(id)arg1 error:(id*)arg2 ;
-(id)px_diagnosticsItemProvidersForPoint:(CGPoint)arg1 inCoordinateSpace:(id)arg2 ;
-(void)setIsScrolling:(BOOL)arg1 ;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(CGImageRef)textureSnapshotForSpriteReference:(id)arg1 ;
-(id)hitTestResultsAtPoint:(CGPoint)arg1 ;
-(void)setRootLayout:(PXGLayout *)arg1 ;
-(void)enumerateCuratedLibraryHitTestResultsInDirection:(unsigned long long)arg1 fromSpriteReference:(id)arg2 usingBlock:(/*^block*/id)arg3 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)scrollViewControllerDidScroll:(id)arg1 ;
-(id)hitTestResultsAtPoint:(CGPoint)arg1 padding:(UIEdgeInsets)arg2 passingTest:(/*^block*/id)arg3 ;
-(PXScrollViewController *)scrollViewController;
-(NSDictionary *)ppt_currentTestOptions;
-(BOOL)hasExtendedColorDisplay;
-(void)_handleSceneDidEnterBackground:(id)arg1 ;
-(void)enumerateCuratedLibraryHitTestResultsAtPoint:(CGPoint)arg1 usingBlock:(/*^block*/id)arg2 ;
-(PXScrollViewSpeedometer *)scrollingSpeedometer;
-(void)setHidden:(BOOL)arg1 ;
-(PXGAnchor *)scrollingAnimationAnchor;
-(void)scrollViewControllerWillBeginScrolling:(id)arg1 ;
-(void)setShowDebugHUD:(BOOL)arg1 ;
-(void)test_installRenderSnapshotHandler:(/*^block*/id)arg1 ;
-(id)regionOfInterestForObjectReference:(id)arg1 ;
-(id)curatedLibraryHitTestResultsInRect:(CGRect)arg1 withControl:(long long)arg2 ;
-(id)hitTestResultAtPoint:(CGPoint)arg1 ;
-(void)_installNextDidLayoutHandler:(/*^block*/id)arg1 ;
-(void)setIsAnimatingScroll:(BOOL)arg1 ;
-(NSDictionary *)ppt_extraResults;
-(id)viewForSpriteReference:(id)arg1 ;
-(id)regionOfInterestForHitTestResult:(id)arg1 ;
-(void)setIsAccessibilityEnabled:(BOOL)arg1 ;
-(void)setBackgroundColor:(id)arg1 ;
-(NSArray *)debugHierarchyIdentifiers;
-(id)firstCuratedLibraryHitTestResultsAtPoint:(CGPoint)arg1 withControl:(long long)arg2 ;
-(void)enumerateDebugHierarchyWithIdentifier:(id)arg1 options:(unsigned long long)arg2 usingBlock:(/*^block*/id)arg3 ;
-(BOOL)isObjectReference:(id)arg1 visuallyBeforeObjectReference:(id)arg2 ;
-(void)_ensureEndAnimatedScroll;
-(void)setBounds:(CGRect)arg1 ;
-(id)hitTestResultsInDirection:(unsigned long long)arg1 fromSpriteReference:(id)arg2 ;
-(BOOL)isAnimatingScroll;
-(void)setScrollingAnimationAnchor:(PXGAnchor *)arg1 ;
-(id)nextDidLayoutHandler;
-(void)engine:(id)arg1 updateDebugHUDWithStats:(SCD_Struct_PX57*)arg2 ;
-(void)ppt_prepareForTest:(id)arg1 withOptions:(id)arg2 isScrollTest:(BOOL)arg3 ;
-(id)backgroundColor;
-(void)registerAllTextureProvidersWithMediaProvider:(id)arg1 pixelBufferSourcesProvider:(id)arg2 namedImagesBundle:(id)arg3 ;
-(void)registerAllTextureProvidersWithMediaProvider:(id)arg1 ;
-(void)_updateRectDiagnosticsLayer;
-(void)installLayoutCompletionHandler:(/*^block*/id)arg1 ;
-(void)_updateUserInterfaceDirection;
-(id)regionOfInterestForSpriteReference:(id)arg1 ;
-(void)setIsSceneBackgrounded:(BOOL)arg1 ;
-(BOOL)shouldWorkaround18475431;
-(void)setDiagnosticsSource:(id<PXGViewDiagnosticsSource>)arg1 ;
-(void)setShouldWorkaround18475431:(BOOL)arg1 ;
-(void)_updateDebugHUD;
-(void)ppt_setCurrentTestOptions:(id)arg1 ;
-(void)setSlowAnimationsEnabled:(BOOL)arg1 ;
-(void)setFrame:(CGRect)arg1 ;
-(void)_updateAccessibility;
-(NSString *)diagnosticDescription;
-(void)didMoveToWindow;
-(id<PXGViewAccessibilityDelegate>)accessibilityDelegate;
-(BOOL)isVisible;
-(void)handlePan:(id)arg1 ;
-(void)disablePreheating;
-(BOOL)showDebugHUD;
-(void)setShowPerspectiveDebug:(BOOL)arg1 ;
-(void)_willChangeBoundsSizeFrom:(CGRect)arg1 toBounds:(CGRect)arg2 ;
-(id)regionOfInterestForAssetReference:(id)arg1 image:(CGImage*)arg2 fallbackMediaProvider:(id)arg3 ;
-(void)_updateFocusItemProvider;
-(void)setAccessibilityDelegate:(id<PXGViewAccessibilityDelegate>)arg1 ;
-(void)scrollViewControllerWillBeginScrollingAnimation:(id)arg1 towardsContentEdges:(unsigned long long)arg2 ;
-(UIEdgeInsets)hitTestPadding;
-(void)scrollViewControllerDidEndScrollingAnimation:(id)arg1 ;
-(void)enumerateCuratedLibraryHitTestResultsInRect:(CGRect)arg1 usingBlock:(/*^block*/id)arg2 ;
-(void)installAnimationRenderingCompletionHandler:(/*^block*/id)arg1 ;
-(void)scrollViewControllerDidLayoutSubviews:(id)arg1 ;
-(void)setLowMemoryModeEnabled:(BOOL)arg1 ;
-(BOOL)isSceneBackgrounded;
-(BOOL)isScrolling;
-(void)settings:(id)arg1 changedValueForKey:(id)arg2 ;
-(void)registerTextureProvider:(id)arg1 forMediaKind:(int)arg2 ;
-(void)safeAreaInsetsDidChange;
-(void)_updateMetalView;
-(BOOL)lowMemoryModeEnabled;
-(NSString *)preferredFileNameForExportingDebugHierarchy;
-(void)_updateIsVisible;
-(void)scrollViewControllerDidEndScrolling:(id)arg1 ;
-(void)ppt_cleanUpAfterTest:(id)arg1 isScrollTest:(BOOL)arg2 ;
-(PXGLayout *)rootLayout;
-(id)hitTestResultsInRect:(CGRect)arg1 passingTest:(/*^block*/id)arg2 ;
-(id<PXGViewDiagnosticsSource>)diagnosticsSource;
-(id)hitTestResultsAtPoint:(CGPoint)arg1 withIdentifiers:(id)arg2 ;
-(void)setNextDidLayoutHandler:(id)arg1 ;
-(void)_updateLayoutScreenScale;
-(id)hitTestResultAtPoint:(CGPoint)arg1 padding:(UIEdgeInsets)arg2 passingTest:(/*^block*/id)arg3 ;
-(void)_updateLayoutViewEnvironment;
-(void)traitCollectionDidChange:(id)arg1 ;
-(BOOL)isAccessibilityEnabled;
-(id<PXGAXResponder>)axNextResponder;
-(BOOL)showPerspectiveDebug;
-(void)_updateEngineLowMemoryMode;
-(void)axGroup:(id)arg1 didChange:(unsigned long long)arg2 userInfo:(id)arg3 ;
-(void)_handleSceneWillEnterForeground:(id)arg1 ;
-(BOOL)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2 ;
-(MTKView *)metalView;
-(void)enumerateCuratedLibraryHitTestResultsAtPoint:(CGPoint)arg1 withControls:(id)arg2 usingBlock:(/*^block*/id)arg3 ;
-(CGImageRef)_fallbackImageForAssetReference:(id)arg1 mediaProvider:(id)arg2 ;
-(BOOL)slowAnimationsEnabled;
@end

