/*
* Generated on Thursday, January 14, 2021 at 2:22:33 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/

#import <PhotosUICore/PhotosUICore-Structs.h>
#import <libobjc.A.dylib/PXGDataSourceDrivenLayout.h>
#import <libobjc.A.dylib/PXGAXGroupSource.h>
#import <libobjc.A.dylib/PXGAXInfoSource.h>
#import <libobjc.A.dylib/PXGAXResponder.h>
#import <libobjc.A.dylib/PXGSpriteIndexReferencing.h>
#import <libobjc.A.dylib/PXGDiagnosticsProvider.h>

@protocol PXGLayoutContentSource, PXGLayoutUpdateDelegate, PXGLayoutVisibleRectDelegate, PXGDisplayAssetSource, PXGAXResponder;
@class NSString, NSIndexSet, NSMutableArray, PXGBasicAXGroup, PXGSpriteDataStore, PXGSublayoutDataStore, PXGViewEnvironment, PXGSpriteMetadataStore, PXGAnchor, NSArray, PXGItemsLayout, PXGDecoratingLayout;

@interface PXGLayout : NSObject <PXGDataSourceDrivenLayout, PXGAXGroupSource, PXGAXInfoSource, PXGAXResponder, PXGSpriteIndexReferencing, PXGDiagnosticsProvider> {

	struct {
		unsigned long long needsUpdate;
		unsigned long long updated;
		BOOL isPerformingUpdate;
	}  _updateFlags;
	NSMutableArray* _changeDetails;
	NSMutableArray* _animations;
	NSMutableArray* _transitions;
	NSMutableArray* _fences;
	NSMutableArray* _spriteReferencesForHiddenSprites;
	NSIndexSet* _localHiddenSpriteIndexes;
	NSIndexSet* _spriteIndexesWithInvalidatedStyle;
	BOOL _isRequestingVisibleRect;
	BOOL _isUpdatingSpriteStyling;
	BOOL _isLastVisibleAreaAnchoringInformationInvalidated;
	BOOL _isPerformingWithLocalUpdate;
	PXGBasicAXGroup* _reusableAXGroup;
	long long _nestedAnchorVisibleRectChanges;
	BOOL _needsUpdate;
	BOOL _floating;
	unsigned short _referenceOptions;
	unsigned _numberOfSprites;
	PXGSpriteDataStore* _spriteDataStore;
	PXGSublayoutDataStore* _sublayoutDataStore;
	PXGLayout* _superlayout;
	PXGViewEnvironment* _viewEnvironment;
	double _screenScale;
	long long _scrollSpeedRegime;
	double _alpha;
	unsigned long long _userInterfaceDirection;
	long long _version;
	double _lastBaseline;
	double _floatingOffset;
	id<PXGLayoutContentSource> _contentSource;
	id _userData;
	PXGSpriteMetadataStore* _spriteMetadataStore;
	id<PXGLayoutUpdateDelegate> _updateDelegate;
	id<PXGLayoutVisibleRectDelegate> _visibleRectDelegate;
	long long _updateCount;
	id<PXGDisplayAssetSource> _displayAssetSource;
	PXGAnchor* _activeAnchor;
	PXGAnchor* _lastVisibleAreaAnchor;
	long long _numberOfDescendantAnchors;
	id<PXGAXResponder> _axNextResponder;
	CGSize _referenceSize;
	CGPoint _lastScrollDirection;
	CGSize _contentSize;
	CGSize _estimatedContentSize;
	CGRect _visibleRect;
	UIEdgeInsets _safeAreaInsets;

}

@property (nonatomic,readonly) NSArray * pendingFences; 
@property (nonatomic,readonly) PXGItemsLayout * itemsLayout; 
@property (nonatomic,readonly) PXGItemsLayout * layoutForItemChanges; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSArray * pendingAnimations; 
@property (nonatomic,readonly) BOOL shouldInvalidateDecorationForModifiedSprites; 
@property (nonatomic,readonly) BOOL shouldUpdateDecorationMediaTargetSizes; 
@property (nonatomic,readonly) PXGDecoratingLayout * decoratingLayout; 
@property (nonatomic,readonly) NSString * axLocalizedLabel; 
@property (nonatomic,readonly) CGRect axFrame; 
@property (nonatomic,readonly) CGRect axVisibleRect; 
@property (nonatomic,readonly) NSIndexSet * axSpriteIndexes; 
@property (nonatomic,readonly) NSIndexSet * axVisibleSpriteIndexes; 
@property (nonatomic,readonly) NSIndexSet * axSelectedSpriteIndexes; 
@property (assign,nonatomic,__weak) id<PXGAXResponder> axNextResponder; 
@property (assign,nonatomic,__weak) PXGLayout * superlayout;                                           //@synthesize superlayout=_superlayout - In the implementation block
@property (nonatomic,readonly) PXGSpriteDataStore * spriteDataStore;                                   //@synthesize spriteDataStore=_spriteDataStore - In the implementation block
@property (nonatomic,readonly) PXGSpriteMetadataStore * spriteMetadataStore;                           //@synthesize spriteMetadataStore=_spriteMetadataStore - In the implementation block
@property (assign,nonatomic,__weak) id<PXGLayoutUpdateDelegate> updateDelegate;                        //@synthesize updateDelegate=_updateDelegate - In the implementation block
@property (assign,nonatomic,__weak) id<PXGLayoutVisibleRectDelegate> visibleRectDelegate;              //@synthesize visibleRectDelegate=_visibleRectDelegate - In the implementation block
@property (nonatomic,readonly) NSMutableArray * changeDetails; 
@property (nonatomic,readonly) long long updateCount;                                                  //@synthesize updateCount=_updateCount - In the implementation block
@property (nonatomic,readonly) CGRect frame; 
@property (nonatomic,readonly) UIEdgeInsets flexibleRegionInsets; 
@property (assign,nonatomic,__weak) id<PXGDisplayAssetSource> displayAssetSource;                      //@synthesize displayAssetSource=_displayAssetSource - In the implementation block
@property (nonatomic,readonly) NSString * recursiveDescription; 
@property (nonatomic,readonly) PXGAnchor * activeAnchor;                                               //@synthesize activeAnchor=_activeAnchor - In the implementation block
@property (assign,nonatomic) CGSize estimatedContentSize;                                              //@synthesize estimatedContentSize=_estimatedContentSize - In the implementation block
@property (nonatomic,retain) PXGAnchor * lastVisibleAreaAnchor;                                        //@synthesize lastVisibleAreaAnchor=_lastVisibleAreaAnchor - In the implementation block
@property (nonatomic,copy,readonly) NSArray * animations; 
@property (nonatomic,copy,readonly) NSArray * transitions; 
@property (nonatomic,copy,readonly) NSArray * fences; 
@property (nonatomic,readonly) BOOL isAnimating; 
@property (nonatomic,readonly) unsigned long long zoomBehavior; 
@property (assign,nonatomic) CGSize contentSize;                                                       //@synthesize contentSize=_contentSize - In the implementation block
@property (assign,nonatomic) double lastBaseline;                                                      //@synthesize lastBaseline=_lastBaseline - In the implementation block
@property (nonatomic,readonly) unsigned localNumberOfSprites; 
@property (nonatomic,readonly) unsigned childrenNumberOfSprites; 
@property (nonatomic,readonly) BOOL isUpdatingSpriteStyling; 
@property (assign,getter=isFloating,nonatomic) BOOL floating;                                          //@synthesize floating=_floating - In the implementation block
@property (assign,nonatomic) double floatingOffset;                                                    //@synthesize floatingOffset=_floatingOffset - In the implementation block
@property (nonatomic,readonly) PXGSublayoutDataStore * sublayoutDataStore;                             //@synthesize sublayoutDataStore=_sublayoutDataStore - In the implementation block
@property (nonatomic,readonly) BOOL canHandleVisibleRectRejection; 
@property (nonatomic,readonly) long long numberOfDescendantAnchors;                                    //@synthesize numberOfDescendantAnchors=_numberOfDescendantAnchors - In the implementation block
@property (nonatomic,readonly) unsigned long long anchoredContentEdges; 
@property (nonatomic,readonly) BOOL shouldFaultInContentAtAnchoredContentEdges; 
@property (nonatomic,readonly) long long anchoredSublayoutIndex; 
@property (nonatomic,readonly) BOOL allowsObjectReferenceSpriteIndexLookup; 
@property (assign,nonatomic,__weak) id<PXGAXResponder> axNextResponder;                                //@synthesize axNextResponder=_axNextResponder - In the implementation block
@property (nonatomic,readonly) PXGBasicAXGroup * axGroup; 
@property (nonatomic,readonly) long long numberOfSublayouts; 
@property (nonatomic,retain) PXGViewEnvironment * viewEnvironment;                                     //@synthesize viewEnvironment=_viewEnvironment - In the implementation block
@property (assign,nonatomic) CGSize referenceSize;                                                     //@synthesize referenceSize=_referenceSize - In the implementation block
@property (assign,nonatomic) unsigned short referenceOptions;                                          //@synthesize referenceOptions=_referenceOptions - In the implementation block
@property (assign,nonatomic) CGRect visibleRect;                                                       //@synthesize visibleRect=_visibleRect - In the implementation block
@property (assign,nonatomic) UIEdgeInsets safeAreaInsets;                                              //@synthesize safeAreaInsets=_safeAreaInsets - In the implementation block
@property (assign,nonatomic) double screenScale;                                                       //@synthesize screenScale=_screenScale - In the implementation block
@property (assign,nonatomic) CGPoint lastScrollDirection;                                              //@synthesize lastScrollDirection=_lastScrollDirection - In the implementation block
@property (assign,nonatomic) long long scrollSpeedRegime;                                              //@synthesize scrollSpeedRegime=_scrollSpeedRegime - In the implementation block
@property (assign,nonatomic) double alpha;                                                             //@synthesize alpha=_alpha - In the implementation block
@property (assign,nonatomic) unsigned long long userInterfaceDirection;                                //@synthesize userInterfaceDirection=_userInterfaceDirection - In the implementation block
@property (nonatomic,copy) NSIndexSet * hiddenSpriteIndexes; 
@property (nonatomic,readonly) BOOL needsUpdate;                                                       //@synthesize needsUpdate=_needsUpdate - In the implementation block
@property (nonatomic,readonly) long long version;                                                      //@synthesize version=_version - In the implementation block
@property (nonatomic,readonly) unsigned numberOfSprites;                                               //@synthesize numberOfSprites=_numberOfSprites - In the implementation block
@property (nonatomic,readonly) PXGLayout * rootLayout; 
@property (nonatomic,readonly) unsigned long long fullyVisibleEdgesWithDefaultTolerance; 
@property (nonatomic,readonly) SCD_Struct_PX32 orientedContentTransform; 
@property (assign,nonatomic,__weak) id<PXGLayoutContentSource> contentSource;                          //@synthesize contentSource=_contentSource - In the implementation block
@property (nonatomic,retain) id userData;                                                              //@synthesize userData=_userData - In the implementation block
@property (nonatomic,copy,readonly) NSString * diagnosticDescription; 
-(void)removeAllAnimations;
-(NSString *)axLocalizedLabel;
-(void)setSafeAreaInsets:(UIEdgeInsets)arg1 ;
-(NSArray *)transitions;
-(void)setAxNextResponder:(id<PXGAXResponder>)arg1 ;
-(id)axContainingViewForAXGroup:(id)arg1 ;
-(void)contentSizeDidChange;
-(UIEdgeInsets)safeAreaInsets;
-(BOOL)isFloating;
-(void)setViewEnvironment:(PXGViewEnvironment *)arg1 ;
-(BOOL)axGroup:(id)arg1 didRequestToPerformAction:(long long)arg2 userInfo:(id)arg3 ;
-(id)dropTargetObjectReferenceForLocation:(CGPoint)arg1 ;
-(void)setContentSize:(CGSize)arg1 ;
-(id)axContentInfoAtSpriteIndex:(unsigned)arg1 ;
-(id)createDefaultAnimationForCurrentContext;
-(NSArray *)fences;
-(void)clearLastVisibleAreaAnchoringInformation;
-(NSArray *)animations;
-(void)setVisibleRect:(CGRect)arg1 ;
-(unsigned)spriteIndexForObjectReference:(id)arg1 options:(unsigned long long)arg2 updatedObjectReference:(out id*)arg3 ;
-(BOOL)needsUpdate;
-(void)adjustReferencedSpriteIndexesWithChangeDetails:(id)arg1 appliedToLayout:(id)arg2 ;
-(BOOL)canHandleVisibleRectRejection;
-(void)setNeedsUpdate;
-(void)viewEnvironmentDidChange;
-(void)alphaDidChange;
-(void)setReferenceSize:(CGSize)arg1 ;
-(void)referenceOptionsDidChange;
-(id)spriteReferenceForSpriteIndex:(unsigned)arg1 objectReference:(id)arg2 ;
-(unsigned)spriteIndexForSpriteReference:(id)arg1 options:(unsigned long long)arg2 ;
-(id)spriteReferenceForSpriteIndex:(unsigned)arg1 ;
-(unsigned)spriteIndexForSpriteReference:(id)arg1 ;
-(id)spriteReferenceForObjectReference:(id)arg1 ;
-(id)dynamicSpriteReferenceForObjectReference:(id)arg1 ;
-(id)spriteReferenceForSpriteReference:(id)arg1 ;
-(long long)sublayoutIndexForSpriteReference:(id)arg1 options:(unsigned long long)arg2 ;
-(void)removeSpritesInRange:(PXGSpriteIndexRange)arg1 ;
-(void)setFloating:(BOOL)arg1 ;
-(void)screenScaleDidChange;
-(CGRect)visibleRect;
-(id)init;
-(unsigned long long)fullyVisibleEdgesWithDefaultTolerance;
-(void)sublayoutDidChangeLastBaseline:(id)arg1 ;
-(void)willRemoveSublayout:(id)arg1 atIndex:(long long)arg2 flags:(unsigned long long)arg3 ;
-(void)visibleRectDidChange;
-(long long)sublayoutIndexForObjectReference:(id)arg1 options:(unsigned long long)arg2 updatedObjectReference:(out id*)arg3 ;
-(void)userInterfaceDirectionDidChange;
-(void)sublayoutDidChangeContentSize:(id)arg1 ;
-(void)enumerateSpritesInRange:(PXGSpriteIndexRange)arg1 usingBlock:(/*^block*/id)arg2 ;
-(double)alpha;
-(CGRect)sublayout:(id)arg1 visibleRectForRequestedVisibleRect:(CGRect)arg2 ;
-(NSString *)recursiveDescription;
-(void)enumerateDescendantsLayoutsUsingBlock:(/*^block*/id)arg1 ;
-(void)removeSublayoutsInRange:(NSRange)arg1 ;
-(void)enumerateVisibleAnchoringSpriteIndexesUsingBlock:(/*^block*/id)arg1 ;
-(void)setLastBaseline:(double)arg1 ;
-(id)createCuratedLibraryLayoutTransitionIfNeededWithContext:(long long)arg1 ;
-(CGSize)contentSize;
-(PXGBasicAXGroup *)axGroup;
-(void)containingScrollViewDidScroll:(CGPoint)arg1 ;
-(double)lastBaseline;
-(id)createAnimation;
-(void)removeAllFences;
-(void)scrollSpeedRegimeDidChange;
-(void)sublayoutNeedsUpdate:(id)arg1 ;
-(CGRect)frame;
-(void)addFence:(id)arg1 ;
-(id)userData;
-(void)applySpriteChangeDetails:(id)arg1 countAfterChanges:(unsigned)arg2 initialState:(/*^block*/id)arg3 modifyState:(/*^block*/id)arg4 ;
-(void)enumerateVisibleAnchoringLayoutsUsingBlock:(/*^block*/id)arg1 ;
-(PXGAnchor *)lastVisibleAreaAnchor;
-(id)objectReferenceForSpriteIndex:(unsigned)arg1 ;
-(void)invalidateDecoration;
-(void)invalidateDecorationForSpritesInRange:(PXGSpriteIndexRange)arg1 ;
-(PXGDecoratingLayout *)decoratingLayout;
-(BOOL)isSpriteIndex:(unsigned)arg1 decoratingSpriteWithIndex:(out unsigned*)arg2 ;
-(id)axSpriteIndexesInRect:(CGRect)arg1 ;
-(void)setContentSource:(id<PXGLayoutContentSource>)arg1 ;
-(void)_updateVersion;
-(id)createCuratedLibraryLayoutAnimationIfNeededWithContext:(long long)arg1 userData:(id)arg2 ;
-(void)enumerateLayoutsForSpritesInRange:(PXGSpriteIndexRange)arg1 options:(unsigned long long)arg2 usingBlock:(/*^block*/id)arg3 ;
-(void)didApplySpriteChangeDetails:(id)arg1 ;
-(void)updateIfNeeded;
-(CGSize)referenceSize;
-(void)addAnimation:(id)arg1 ;
-(void)setLastScrollDirection:(CGPoint)arg1 ;
-(void)_invalidateDecorationForSpriteRange:(PXGSpriteIndexRange)arg1 inLayout:(id)arg2 ;
-(unsigned)numberOfSprites;
-(void)addTransition:(id)arg1 ;
-(void)update;
-(id)_paddingForLevel:(long long)arg1 ;
-(CGRect)axVisibleRect;
-(NSString *)diagnosticDescription;
-(CGRect)axConvertRect:(CGRect)arg1 fromDescendantGroup:(id)arg2 ;
-(CGRect)axConvertRect:(CGRect)arg1 toDescendantGroup:(id)arg2 ;
-(CGPoint)axConvertPoint:(CGPoint)arg1 fromDescendantGroup:(id)arg2 ;
-(CGPoint)axConvertPoint:(CGPoint)arg1 toDescendantGroup:(id)arg2 ;
-(id)axSpriteIndexesInRectDefaultImplementation:(CGRect)arg1 ;
-(void)didFaultInSublayout:(id)arg1 atIndex:(long long)arg2 fromEstimatedContentSize:(CGSize)arg3 ;
-(void)axAddSubgroupForSublayout:(id)arg1 atIndex:(long long)arg2 flags:(unsigned long long)arg3 ;
-(void)axRemoveSubgroupForSublayout:(id)arg1 atIndex:(long long)arg2 flags:(unsigned long long)arg3 ;
-(unsigned)axSpriteIndexClosestToSpriteIndexDefaultImplementation:(unsigned)arg1 inDirection:(unsigned long long)arg2 ;
-(unsigned)axSpriteIndexClosestToSpriteIndex:(unsigned)arg1 inDirection:(unsigned long long)arg2 ;
-(id)hitTestResultForSpriteIndex:(unsigned)arg1 ;
-(CGRect)axFrame;
-(PXGItemsLayout *)itemsLayout;
-(void)didAddSublayout:(id)arg1 atIndex:(long long)arg2 flags:(unsigned long long)arg3 ;
-(long long)updateCount;
-(id)createFenceWithType:(unsigned long long)arg1 ;
-(NSArray *)pendingFences;
-(void)referenceSizeDidChange;
-(CGSize)minPlayableSizeForSpriteAtIndex:(unsigned)arg1 ;
-(unsigned short)addResizableCapInsets:(SCD_Struct_PX12)arg1 ;
-(PXGViewEnvironment *)viewEnvironment;
-(void)willFaultOutSublayout:(id)arg1 atIndex:(long long)arg2 ;
-(void)moveSpritesInRange:(PXGSpriteIndexRange)arg1 toRange:(PXGSpriteIndexRange)arg2 ;
-(void)invalidateVersion;
-(void)floatingOffsetDidChange;
-(void)safeAreaInsetsDidChange;
-(void)addAnchor:(id)arg1 ;
-(PXGSpriteIndexRange)spriteIndexRangeCoveringRect:(CGRect)arg1 ;
-(void)removeAnimation:(id)arg1 ;
-(void)insertSublayoutProvider:(id)arg1 inRange:(NSRange)arg2 ;
-(void)_addFences:(id)arg1 ;
-(void)setUserData:(id)arg1 ;
-(PXGLayout *)superlayout;
-(NSIndexSet *)axVisibleSpriteIndexes;
-(BOOL)shouldUpdateDecorationMediaTargetSizes;
-(void)_ensureSpriteDataStore;
-(void)_recycleSpriteDataStore;
-(unsigned)localNumberOfSprites;
-(unsigned)childrenNumberOfSprites;
-(UIEdgeInsets)flexibleRegionInsets;
-(void)getIsAnyLayoutAnimating:(out BOOL*)arg1 zoomBehavior:(out unsigned long long*)arg2 ;
-(unsigned)convertSpriteIndex:(unsigned)arg1 toDescendantLayout:(id)arg2 ;
-(BOOL)isDescendantOfLayout:(id)arg1 ;
-(NSArray *)pendingAnimations;
-(unsigned)convertSpriteIndex:(unsigned)arg1 fromDescendantLayout:(id)arg2 ;
-(PXGSpriteIndexRange)convertSpriteIndexRange:(PXGSpriteIndexRange)arg1 fromDescendantLayout:(id)arg2 ;
-(id)convertSpriteIndexes:(id)arg1 fromDescendantLayout:(id)arg2 ;
-(CGRect)convertRect:(CGRect)arg1 toDescendantLayout:(id)arg2 ;
-(CGRect)convertRect:(CGRect)arg1 fromDescendantLayout:(id)arg2 ;
-(void)floatingDidChange;
-(CGPoint)convertPoint:(CGPoint)arg1 fromLayout:(id)arg2 ;
-(CGPoint)_offsetToDescendantLayout:(id)arg1 ;
-(id)commonAncestorWithLayout:(id)arg1 ;
-(unsigned)convertSpriteIndex:(unsigned)arg1 fromLayout:(id)arg2 ;
-(void)updateStylingForSpritesAtIndexes:(id)arg1 ;
-(BOOL)isUpdatingSpriteStyling;
-(void)performChangesWithLocalUpdate:(/*^block*/id)arg1 ;
-(void)addSublayout:(id)arg1 ;
-(void)installLayoutCompletionBlock:(/*^block*/id)arg1 ;
-(void)updateAsRootIfNeeded;
-(void)setReferenceOptions:(unsigned short)arg1 ;
-(void)lastScrollDirectionDidChange;
-(void)setScrollSpeedRegime:(long long)arg1 ;
-(void)setUserInterfaceDirection:(unsigned long long)arg1 ;
-(NSIndexSet *)hiddenSpriteIndexes;
-(void)setHiddenSpriteIndexes:(NSIndexSet *)arg1 ;
-(long long)numberOfSublayouts;
-(void)hideSpritesForObjectReferences:(id)arg1 ;
-(void)_propagateHiddenSpriteIndexes:(id)arg1 ;
-(void)_resetHiddenSpriteIndexes;
-(void)_recursivelyResetHiddenSpriteIndexes;
-(void)_addHiddenSpriteIndexes:(id)arg1 ;
-(void)_invalidateStyleOfSpritesWithIndexes:(id)arg1 ;
-(void)removeFromSuperlayout;
-(void)_ensureSublayoutDataStore;
-(void)removeSublayoutAtIndex:(long long)arg1 ;
-(void)removeSublayoutsAtIndexes:(id)arg1 ;
-(void)applySublayoutChangeDetails:(id)arg1 countAfterChanges:(long long)arg2 sublayoutProvider:(id)arg3 ;
-(void)_willAddSublayout:(id)arg1 ;
-(void)insertSublayoutProvider:(id)arg1 atIndexes:(id)arg2 ;
-(void)removeAnchor:(id)arg1 ;
-(void)setScreenScale:(double)arg1 ;
-(void)didApplySublayoutChangeDetails:(id)arg1 axAdjustedSubgroupChangeDetails:(id)arg2 countAfterChanges:(long long)arg3 ;
-(id)sublayoutAtIndex:(long long)arg1 loadIfNeeded:(BOOL)arg2 ;
-(unsigned)addSpriteWithInitialState:(/*^block*/id)arg1 ;
-(PXGSpriteIndexRange)addSpriteCount:(unsigned)arg1 withInitialState:(/*^block*/id)arg2 ;
-(void)addSpritesInRange:(PXGSpriteIndexRange)arg1 initialState:(/*^block*/id)arg2 ;
-(long long)indexOfSublayout:(id)arg1 ;
-(void)addSpritesAtIndexes:(id)arg1 initialState:(/*^block*/id)arg2 ;
-(void)modifySpritesInRange:(PXGSpriteIndexRange)arg1 state:(/*^block*/id)arg2 ;
-(void)modifySpritesAtIndexes:(id)arg1 state:(/*^block*/id)arg2 ;
-(PXGSpriteIndexRange)convertRange:(PXGSpriteIndexRange)arg1 fromSublayout:(id)arg2 ;
-(id)convertChangeDetails:(id)arg1 fromSublayout:(id)arg2 ;
-(void)_incrementNumberOfSprites:(long long)arg1 ;
-(void)_updateAnchoring;
-(id<PXGLayoutContentSource>)contentSource;
-(BOOL)changeVisibleRectToProposedVisibleRect:(CGRect)arg1 ;
-(void)markLastVisibleAreaAnchoringInformationForInvalidation;
-(void)sublayout:(id)arg1 didAddAnchor:(id)arg2 ;
-(void)sublayout:(id)arg1 didRemoveAnchor:(id)arg2 ;
-(long long)anchoredSublayoutIndex;
-(BOOL)allowsObjectReferenceSpriteIndexLookup;
-(unsigned)spriteIndexForObjectReference:(id)arg1 ;
-(void)_addAnimations:(id)arg1 ;
-(void)removeAllTransitions;
-(SCD_Struct_PX11)geometryForSpriteAtIndex:(unsigned)arg1 ;
-(SCD_Struct_PX14)styleForSpriteAtIndex:(unsigned)arg1 ;
-(void)copyLayoutForSpritesInRange:(PXGSpriteIndexRange)arg1 geometries:(SCD_Struct_PX11*)arg2 styles:(SCD_Struct_PX14*)arg3 infos:(SCD_Struct_PX15*)arg4 ;
-(void)enumerateSpritesInRange:(PXGSpriteIndexRange)arg1 options:(unsigned long long)arg2 usingBlock:(/*^block*/id)arg3 ;
-(void)enumerateSpritesInRect:(CGRect)arg1 usingBlock:(/*^block*/id)arg2 ;
-(void)copyLayoutForSpritesInRange:(PXGSpriteIndexRange)arg1 applySpriteTransforms:(BOOL)arg2 geometries:(SCD_Struct_PX11*)arg3 styles:(SCD_Struct_PX14*)arg4 infos:(SCD_Struct_PX15*)arg5 ;
-(void)copyLayoutForSpritesInRange:(PXGSpriteIndexRange)arg1 applySpriteTransforms:(BOOL)arg2 parentTransform:(SCD_Struct_PX32)arg3 parentSublayoutOrigin:(CGPoint)arg4 geometries:(SCD_Struct_PX11*)arg5 styles:(SCD_Struct_PX14*)arg6 infos:(SCD_Struct_PX15*)arg7 ;
-(id)sublayoutForSpriteIndex:(unsigned)arg1 ;
-(void)_enumerateSpritesInRange:(PXGSpriteIndexRange)arg1 transform:(SCD_Struct_PX32)arg2 spriteOffset:(unsigned)arg3 stop:(BOOL*)arg4 usingBlock:(/*^block*/id)arg5 ;
-(long long)sublayoutIndexForSpriteIndex:(unsigned)arg1 ;
-(id)leafSublayoutForSpriteIndex:(unsigned)arg1 ;
-(void)_enumerateSpritesInRect:(CGRect)arg1 transform:(SCD_Struct_PX32)arg2 usingBlock:(/*^block*/id)arg3 ;
-(unsigned long long)fullyVisibleEdgesWithEdgeTolerances:(UIEdgeInsets)arg1 ;
-(CGPoint)lastScrollDirection;
-(BOOL)shouldInvalidateDecorationForModifiedSprites;
-(SCD_Struct_PX32)orientedContentTransform;
-(void)enumerateDescendantsLayoutsBreadthFirstReverseUsingBlock:(/*^block*/id)arg1 ;
-(PXGSpriteDataStore *)spriteDataStore;
-(PXGSublayoutDataStore *)sublayoutDataStore;
-(void)setSuperlayout:(PXGLayout *)arg1 ;
-(unsigned short)referenceOptions;
-(long long)scrollSpeedRegime;
-(unsigned long long)userInterfaceDirection;
-(double)floatingOffset;
-(void)insertSublayout:(id)arg1 atIndex:(long long)arg2 ;
-(PXGSpriteMetadataStore *)spriteMetadataStore;
-(id<PXGLayoutUpdateDelegate>)updateDelegate;
-(void)setUpdateDelegate:(id<PXGLayoutUpdateDelegate>)arg1 ;
-(id<PXGLayoutVisibleRectDelegate>)visibleRectDelegate;
-(void)setVisibleRectDelegate:(id<PXGLayoutVisibleRectDelegate>)arg1 ;
-(id<PXGDisplayAssetSource>)displayAssetSource;
-(void)setDisplayAssetSource:(id<PXGDisplayAssetSource>)arg1 ;
-(PXGAnchor *)activeAnchor;
-(CGSize)estimatedContentSize;
-(void)setEstimatedContentSize:(CGSize)arg1 ;
-(void)setLastVisibleAreaAnchor:(PXGAnchor *)arg1 ;
-(long long)numberOfDescendantAnchors;
-(PXGLayout *)rootLayout;
-(NSIndexSet *)axSpriteIndexes;
-(void)setFloatingOffset:(double)arg1 ;
-(id)createCuratedLibraryLayoutAnimationIfNeededWithContext:(long long)arg1 ;
-(id)createCuratedLibraryLayoutZoomLevelChangeAnimationFromZoomLevel:(long long)arg1 toZoomLevel:(long long)arg2 withContext:(long long)arg3 ;
-(id)createCuratedLibraryLayoutSkimmingSlideshowAnimationFromSectionIndexPath:(PXSimpleIndexPath)arg1 toSectionIndexPath:(PXSimpleIndexPath)arg2 ;
-(void)applySectionedChangeDetailsForSingleSection:(id)arg1 dataSourceAfterChanges:(id)arg2 changeMediaVersionHandler:(/*^block*/id)arg3 ;
-(void)applySectionedChangeDetails:(id)arg1 dataSourceAfterChanges:(id)arg2 sublayoutProvider:(id)arg3 outChangedSections:(id*)arg4 outSectionsWithItemChanges:(id*)arg5 changeMediaVersionHandler:(/*^block*/id)arg6 ;
-(CGRect)anchoringRectForSpriteAtIndex:(unsigned)arg1 ;
-(id)createAnchorForVisibleAreaIgnoringEdges:(unsigned long long)arg1 ;
-(id)_createAnchorWithAnchor:(id)arg1 resetPriority:(BOOL)arg2 ;
-(id)_createAnchorForContentEdges:(unsigned long long)arg1 priority:(long long)arg2 ;
-(id)_createAnchorWithPriority:(long long)arg1 constraints:(/*^block*/id)arg2 ;
-(id)createAnchorForSpriteReferences:(id)arg1 ;
-(id)createAnchorWithConstraints:(/*^block*/id)arg1 ;
-(id)createAnchorForScrollingSpriteForSpriteReference:(id)arg1 toScrollPosition:(unsigned long long)arg2 padding:(UIEdgeInsets)arg3 ;
-(void)_appendDescription:(id)arg1 atLevel:(long long)arg2 ;
-(PXGItemsLayout *)layoutForItemChanges;
-(id)createAnchorForScrollingSpriteForSpriteReference:(id)arg1 toScrollPosition:(unsigned long long)arg2 padding:(UIEdgeInsets)arg3 customOffset:(/*^block*/id)arg4 ;
-(id)createAnchorForVisibleArea;
-(id)createAnchorForSpriteAtIndex:(unsigned)arg1 ;
-(id)createAnchorForScrollingSpriteAtIndex:(unsigned)arg1 toScrollPosition:(unsigned long long)arg2 padding:(UIEdgeInsets)arg3 ;
-(void)setAlpha:(double)arg1 ;
-(id)createAnchorForScrollingSpriteForObjectReference:(id)arg1 toScrollPosition:(unsigned long long)arg2 padding:(UIEdgeInsets)arg3 ;
-(id)createAnchorForScrollingSpriteForSpriteReference:(id)arg1 normalizedAnchorPoint:(CGPoint)arg2 toVisibleLocation:(CGPoint)arg3 ;
-(id)createAnchorForContentEdges:(unsigned long long)arg1 ;
-(id)createAnchorForScrollingAnimationTowardsContentEdges:(unsigned long long)arg1 ;
-(id)createAnchorFromSuperlayoutWithSublayoutIndex:(long long)arg1 sublayoutPositionEdges:(unsigned long long)arg2 ignoringScrollingAnimationAnchors:(BOOL)arg3 ;
-(id)createAnchorWithAnchor:(id)arg1 ;
-(void)animationDidComplete:(id)arg1 ;
-(CGRect)convertRect:(CGRect)arg1 fromLayout:(id)arg2 ;
-(NSMutableArray *)changeDetails;
-(void)invalidateLastVisibleAreaAnchoringInformation;
-(id<PXGAXResponder>)axNextResponder;
-(id)createAnchorForScrollingToContentEdges:(unsigned long long)arg1 padding:(UIEdgeInsets)arg2 ;
-(BOOL)isAnimating;
-(void)sublayout:(id)arg1 didApplySpriteChangeDetails:(id)arg2 fromDescendentSublayout:(id)arg3 ;
-(long long)version;
-(void)removeSpritesAtIndexes:(id)arg1 ;
-(unsigned long long)zoomBehavior;
-(double)screenScale;
-(void)axGroup:(id)arg1 didChange:(unsigned long long)arg2 userInfo:(id)arg3 ;
-(BOOL)shouldFaultInContentAtAnchoredContentEdges;
-(NSIndexSet *)axSelectedSpriteIndexes;
-(void)dealloc;
-(id)createTransitionWithAnimations:(id)arg1 ;
-(unsigned long long)anchoredContentEdges;
-(void)didChangeSublayoutOrigins;
@end

