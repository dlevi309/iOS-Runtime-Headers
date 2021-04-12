/*
* Generated on Monday, March 1, 2021 at 2:33:01 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardHome.framework/SpringBoardHome
*/

#import <SpringBoardHome/SpringBoardHome-Structs.h>
#import <UIKitCore/UIView.h>
#import <libobjc.A.dylib/PTSettingsKeyObserver.h>
#import <libobjc.A.dylib/SBIconListModelObserver.h>
#import <libobjc.A.dylib/BSDescriptionProviding.h>

@protocol SBIconListLayoutProvider, SBIconListLayoutDelegate, SBIconViewProviding, SBIconListViewDragDelegate;
@class NSMutableArray, NSMapTable, SBIconListViewDraggingDestinationDelegate, SBHIconSettings, _UILegibilitySettings, SBIconListModel, NSString, SBFolderIconImageCache, SBHIconImageCache, SBIconListViewIconLocationTransitionHandler, NSArray;

@interface SBIconListView : UIView <PTSettingsKeyObserver, SBIconListModelObserver, BSDescriptionProviding> {

	NSMutableArray* _removedIcons;
	BOOL _needsLayout;
	BOOL _inLayout;
	BOOL _rotating;
	BOOL _purged;
	BOOL _ignoreNextWindowChange;
	BOOL _performingSpecialIconAnimations;
	NSMapTable* _iconViews;
	NSMapTable* _specialIconAnimations;
	SBIconListViewDraggingDestinationDelegate* _draggingDelegate;
	CFRunLoopObserverRef _layoutRunLoopObserver;
	unsigned long long _predictedIconViewCount;
	double _desiredLaserPaddingX;
	double _desiredLaserPaddingY;
	BOOL _laserPadUsesAllAvailableSpace;
	SBHIconSettings* _iconSettings;
	BOOL _editing;
	BOOL _layoutReversed;
	BOOL _pausesIconsForScrolling;
	BOOL _iconsNeedLayout;
	BOOL _wantsFastIconReordering;
	BOOL _occluded;
	BOOL _alignsIconsOnPixelBoundaries;
	id<SBIconListLayoutProvider> _layoutProvider;
	long long _orientation;
	double _statusBarHeight;
	unsigned long long _userInterfaceLayoutDirectionHandling;
	unsigned long long _iconViewConfigurationOptions;
	_UILegibilitySettings* _legibilitySettings;
	id<SBIconListLayoutDelegate> _layoutDelegate;
	SBIconListModel* _model;
	id<SBIconViewProviding> _iconViewProvider;
	NSString* _iconLocation;
	double _iconContentScale;
	id<SBIconListViewDragDelegate> _dragDelegate;
	SBFolderIconImageCache* _folderIconImageCache;
	SBHIconImageCache* _iconImageCache;
	SBIconListViewIconLocationTransitionHandler* _currentIconLocationTransitionHandler;
	NSRange _visibleColumnRange;
	SBIconListPredictedVisibleColumn _predictedVisibleColumn;

}

@property (nonatomic,retain) SBIconListViewIconLocationTransitionHandler * currentIconLocationTransitionHandler;              //@synthesize currentIconLocationTransitionHandler=_currentIconLocationTransitionHandler - In the implementation block
@property (nonatomic,readonly) Class baseIconViewClass; 
@property (nonatomic,readonly) unsigned long long iconRowsForCurrentOrientation; 
@property (nonatomic,readonly) unsigned long long iconColumnsForCurrentOrientation; 
@property (nonatomic,readonly) unsigned long long iconsInRowForSpacingCalculation; 
@property (nonatomic,readonly) unsigned long long iconRowsForSpacingCalculation; 
@property (nonatomic,readonly) unsigned long long maximumIconCount; 
@property (nonatomic,retain) id<SBIconListLayoutProvider> layoutProvider;                                                     //@synthesize layoutProvider=_layoutProvider - In the implementation block
@property (nonatomic,readonly) id<SBIconListLayout> layout; 
@property (assign,nonatomic) long long orientation;                                                                           //@synthesize orientation=_orientation - In the implementation block
@property (nonatomic,readonly) BOOL adaptsOrientationToTraitCollection; 
@property (assign,nonatomic) double statusBarHeight;                                                                          //@synthesize statusBarHeight=_statusBarHeight - In the implementation block
@property (assign,getter=isEditing,nonatomic) BOOL editing;                                                                   //@synthesize editing=_editing - In the implementation block
@property (assign,getter=isPurged,nonatomic) BOOL purged;                                                                     //@synthesize purged=_purged - In the implementation block
@property (assign,getter=isLayoutReversed,nonatomic) BOOL layoutReversed;                                                     //@synthesize layoutReversed=_layoutReversed - In the implementation block
@property (assign,nonatomic) BOOL pausesIconsForScrolling;                                                                    //@synthesize pausesIconsForScrolling=_pausesIconsForScrolling - In the implementation block
@property (assign,nonatomic) unsigned long long userInterfaceLayoutDirectionHandling;                                         //@synthesize userInterfaceLayoutDirectionHandling=_userInterfaceLayoutDirectionHandling - In the implementation block
@property (nonatomic,readonly) long long userInterfaceLayoutDirection; 
@property (assign,nonatomic) unsigned long long iconViewConfigurationOptions;                                                 //@synthesize iconViewConfigurationOptions=_iconViewConfigurationOptions - In the implementation block
@property (nonatomic,retain) _UILegibilitySettings * legibilitySettings;                                                      //@synthesize legibilitySettings=_legibilitySettings - In the implementation block
@property (assign,nonatomic,__weak) id<SBIconListLayoutDelegate> layoutDelegate;                                              //@synthesize layoutDelegate=_layoutDelegate - In the implementation block
@property (nonatomic,retain) SBIconListModel * model;                                                                         //@synthesize model=_model - In the implementation block
@property (assign,nonatomic,__weak) id<SBIconViewProviding> iconViewProvider;                                                 //@synthesize iconViewProvider=_iconViewProvider - In the implementation block
@property (nonatomic,copy,readonly) NSArray * icons; 
@property (nonatomic,copy,readonly) NSArray * visibleIcons; 
@property (getter=isEmpty,nonatomic,readonly) BOOL empty; 
@property (getter=isFull,nonatomic,readonly) BOOL full; 
@property (nonatomic,readonly) unsigned long long firstFreeSlotIndex; 
@property (nonatomic,copy) NSString * iconLocation;                                                                           //@synthesize iconLocation=_iconLocation - In the implementation block
@property (nonatomic,readonly) CGSize alignmentIconSize; 
@property (nonatomic,readonly) BOOL automaticallyAdjustsLayoutMetricsToFit; 
@property (nonatomic,readonly) double horizontalIconPadding; 
@property (nonatomic,readonly) double verticalIconPadding; 
@property (assign,nonatomic) NSRange visibleColumnRange;                                                                      //@synthesize visibleColumnRange=_visibleColumnRange - In the implementation block
@property (assign,nonatomic) SBIconListPredictedVisibleColumn predictedVisibleColumn;                                         //@synthesize predictedVisibleColumn=_predictedVisibleColumn - In the implementation block
@property (assign,nonatomic) BOOL iconsNeedLayout;                                                                            //@synthesize iconsNeedLayout=_iconsNeedLayout - In the implementation block
@property (assign,nonatomic) double iconContentScale;                                                                         //@synthesize iconContentScale=_iconContentScale - In the implementation block
@property (assign,nonatomic,__weak) id<SBIconListViewDragDelegate> dragDelegate;                                              //@synthesize dragDelegate=_dragDelegate - In the implementation block
@property (assign,nonatomic) BOOL wantsFastIconReordering;                                                                    //@synthesize wantsFastIconReordering=_wantsFastIconReordering - In the implementation block
@property (assign,getter=isOccluded,nonatomic) BOOL occluded;                                                                 //@synthesize occluded=_occluded - In the implementation block
@property (nonatomic,retain) SBFolderIconImageCache * folderIconImageCache;                                                   //@synthesize folderIconImageCache=_folderIconImageCache - In the implementation block
@property (nonatomic,retain) SBHIconImageCache * iconImageCache;                                                              //@synthesize iconImageCache=_iconImageCache - In the implementation block
@property (getter=isTransitioningIconLocation,nonatomic,readonly) BOOL transitioningIconLocation; 
@property (assign,nonatomic) BOOL alignsIconsOnPixelBoundaries;                                                               //@synthesize alignsIconsOnPixelBoundaries=_alignsIconsOnPixelBoundaries - In the implementation block
@property (nonatomic,readonly) unsigned long long numberOfDisplayedIconViews; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(unsigned long long)defaultIconViewConfigurationOptions;
+(CGRect)defaultFrameForOrientation:(long long)arg1 ;
+(void)getLayoutMetrics:(SBIconListLayoutMetrics*)arg1 forBounds:(CGRect)arg2 insets:(UIEdgeInsets)arg3 orientation:(long long)arg4 numberOfColumns:(unsigned long long)arg5 numberOfRows:(unsigned long long)arg6 iconSize:(CGSize)arg7 iconContentScale:(double)arg8 options:(unsigned long long)arg9 ;
+(long long)rotationAnchor;
-(void)dealloc;
-(NSString *)description;
-(BOOL)isEmpty;
-(NSArray *)icons;
-(long long)orientation;
-(SBIconListModel *)model;
-(void)setOrientation:(long long)arg1 ;
-(void)setBounds:(CGRect)arg1 ;
-(void)setModel:(SBIconListModel *)arg1 ;
-(id<SBIconListLayout>)layout;
-(id)succinctDescription;
-(id)descriptionWithMultilinePrefix:(id)arg1 ;
-(id)succinctDescriptionBuilder;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(long long)layoutOrientation;
-(BOOL)isRTL;
-(void)setFrame:(CGRect)arg1 ;
-(long long)userInterfaceLayoutDirection;
-(BOOL)_allowsFocusToLeaveViaHeading:(unsigned long long)arg1 ;
-(id)tintColor;
-(void)didAddSubview:(id)arg1 ;
-(void)willMoveToWindow:(id)arg1 ;
-(BOOL)isEditing;
-(double)statusBarHeight;
-(BOOL)isOccluded;
-(void)setEditing:(BOOL)arg1 ;
-(id<SBIconListViewDragDelegate>)dragDelegate;
-(void)setDragDelegate:(id<SBIconListViewDragDelegate>)arg1 ;
-(_UILegibilitySettings *)legibilitySettings;
-(void)setLegibilitySettings:(_UILegibilitySettings *)arg1 ;
-(void)setOccluded:(BOOL)arg1 ;
-(void)setStatusBarHeight:(double)arg1 ;
-(void)settings:(id)arg1 changedValueForKey:(id)arg2 ;
-(BOOL)isFull;
-(unsigned long long)columnAtPoint:(CGPoint)arg1 ;
-(void)setLayoutDelegate:(id<SBIconListLayoutDelegate>)arg1 ;
-(id<SBIconListLayoutDelegate>)layoutDelegate;
-(BOOL)isPurged;
-(void)setPurged:(BOOL)arg1 ;
-(id)iconViewForIcon:(id)arg1 ;
-(NSArray *)visibleIcons;
-(double)iconContentScale;
-(void)setIconContentScale:(double)arg1 ;
-(SBFolderIconImageCache *)folderIconImageCache;
-(unsigned long long)indexOfIcon:(id)arg1 ;
-(id)displayedIconViewForIcon:(id)arg1 ;
-(NSString *)iconLocation;
-(void)enumerateIconViewsUsingBlock:(/*^block*/id)arg1 ;
-(void)setIconsNeedLayout;
-(void)layoutIconsIfNeeded:(double)arg1 animationType:(long long)arg2 options:(unsigned long long)arg3 ;
-(BOOL)isDisplayingIconView:(id)arg1 ;
-(id)initWithModel:(id)arg1 layoutProvider:(id)arg2 iconLocation:(id)arg3 orientation:(long long)arg4 iconViewProvider:(id)arg5 ;
-(void)setIconViewConfigurationOptions:(unsigned long long)arg1 ;
-(void)setFolderIconImageCache:(SBFolderIconImageCache *)arg1 ;
-(BOOL)wantsFastIconReordering;
-(void)setWantsFastIconReordering:(BOOL)arg1 ;
-(void)updateEditingStateAnimated:(BOOL)arg1 ;
-(void)removeAllIconViews;
-(void)layoutIconsNow;
-(id<SBIconViewProviding>)iconViewProvider;
-(void)configureIconView:(id)arg1 forIcon:(id)arg2 ;
-(void)setIconViewProvider:(id<SBIconViewProviding>)arg1 ;
-(void)iconList:(id)arg1 didAddIcon:(id)arg2 ;
-(void)iconList:(id)arg1 didReplaceIcon:(id)arg2 withIcon:(id)arg3 ;
-(void)iconList:(id)arg1 didRemoveIcon:(id)arg2 ;
-(void)iconList:(id)arg1 didMoveIcon:(id)arg2 ;
-(CGPoint)centerForIcon:(id)arg1 ;
-(SBIconCoordinate)coordinateForIcon:(id)arg1 ;
-(void)getLayoutMetrics:(SBIconListLayoutMetrics*)arg1 ;
-(CGPoint)fractionalCoordinateAtPoint:(CGPoint)arg1 ;
-(CGPoint)centerForIconCoordinate:(SBIconCoordinate)arg1 ;
-(SBHIconImageCache *)iconImageCache;
-(unsigned long long)userInterfaceLayoutDirectionHandling;
-(void)setIconImageCache:(SBHIconImageCache *)arg1 ;
-(void)addDragObserver:(id)arg1 forDropSession:(id)arg2 ;
-(BOOL)iconsNeedLayout;
-(CGSize)iconImageSize;
-(void)removeAllIconAnimations;
-(void)setIconLocation:(NSString *)arg1 ;
-(unsigned long long)firstFreeSlotIndex;
-(BOOL)allowsAddingIconCount:(unsigned long long)arg1 ;
-(BOOL)containsIcon:(id)arg1 ;
-(void)setLayoutReversed:(BOOL)arg1 ;
-(void)ignoreNextWindowChange;
-(unsigned long long)maximumIconCount;
-(UIEdgeInsets)layoutInsetsForOrientation:(long long)arg1 ;
-(void)layoutIconsIfNeeded:(double)arg1 ;
-(void)showAllIcons;
-(id)beginTransitionToIconLocation:(id)arg1 reason:(id)arg2 ;
-(BOOL)isTransitioningIconLocation;
-(unsigned long long)iconViewConfigurationOptions;
-(unsigned long long)iconsInRowForSpacingCalculation;
-(id)iconAtPoint:(CGPoint)arg1 index:(unsigned long long*)arg2 proposedOrder:(long long*)arg3 ;
-(unsigned long long)iconColumnsForCurrentOrientation;
-(unsigned long long)iconRowsForCurrentOrientation;
-(SBIconCoordinate)coordinateAtPoint:(CGPoint)arg1 ;
-(id)makeIconView;
-(Class)baseIconViewClass;
-(void)enumerateIconsUsingBlock:(/*^block*/id)arg1 ;
-(void)markIcon:(id)arg1 asNeedingAnimation:(long long)arg2 ;
-(void)popIcon:(id)arg1 ;
-(CGSize)alignmentIconSize;
-(void)hideAllIcons;
-(void)setUserInterfaceLayoutDirectionHandling:(unsigned long long)arg1 ;
-(unsigned long long)columnAtPoint:(CGPoint)arg1 fractionOfDistanceThroughColumn:(double*)arg2 ;
-(void)setPausesIconsForScrolling:(BOOL)arg1 ;
-(void)setVisibleColumnRange:(NSRange)arg1 ;
-(void)setPredictedVisibleColumn:(SBIconListPredictedVisibleColumn)arg1 ;
-(void)willRotateWithTransitionCoordinator:(id)arg1 ;
-(void)didAddIconView:(id)arg1 ;
-(double)horizontalIconPadding;
-(unsigned long long)iconRowsForSpacingCalculation;
-(double)verticalIconPadding;
-(UIEdgeInsets)cursorHitTestingInsetsForIconSpacing:(CGSize)arg1 ;
-(BOOL)automaticallyAdjustsLayoutMetricsToFit;
-(BOOL)adaptsOrientationToTraitCollection;
-(CGPoint)originForIconAtCoordinate:(SBIconCoordinate)arg1 metrics:(const SBIconListLayoutMetrics*)arg2 ;
-(void)_applyIconPaddingSettings;
-(void)_teardownLayoutRunloopObserverIfNeeded;
-(void)removeIconView:(id)arg1 ;
-(id<SBIconListLayoutProvider>)layoutProvider;
-(SBIconListViewIconLocationTransitionHandler *)currentIconLocationTransitionHandler;
-(void)popIconView:(id)arg1 ;
-(void)fadeInIconView:(id)arg1 ;
-(void)performSpecialIconAnimation:(long long)arg1 icon:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)performZoomOutSpecialIconAnimationWithIcon:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(CGPoint)centerForIconAtIndex:(unsigned long long)arg1 ;
-(BOOL)shouldReparentView:(id)arg1 ;
-(void)_updateEditingStateForIcons:(id)arg1 animated:(BOOL)arg2 ;
-(SBIconCoordinate)iconCoordinateForIndex:(unsigned long long)arg1 forOrientation:(long long)arg2 ;
-(CGPoint)originForIconAtCoordinate:(SBIconCoordinate)arg1 ;
-(CGPoint)originForIconAtIndex:(unsigned long long)arg1 ;
-(CGPoint)centerForIconCoordinate:(SBIconCoordinate)arg1 metrics:(const SBIconListLayoutMetrics*)arg2 ;
-(id)removedIcons;
-(void)_setupLayoutRunLoopObserver;
-(void)performSpecialIconAnimationsWithCompletionHandler:(/*^block*/id)arg1 ;
-(BOOL)pausesIconsForScrolling;
-(BOOL)isLayoutReversed;
-(NSRange)visibleColumnRange;
-(SBIconListPredictedVisibleColumn)predictedVisibleColumn;
-(CGPoint)centerForIconAtIndex:(unsigned long long)arg1 metrics:(const SBIconListLayoutMetrics*)arg2 ;
-(unsigned long long)columnAtPoint:(CGPoint)arg1 metrics:(const SBIconListLayoutMetrics*)arg2 fractionOfDistanceThroughColumn:(double*)arg3 ;
-(unsigned long long)rowAtPoint:(CGPoint)arg1 metrics:(const SBIconListLayoutMetrics*)arg2 ;
-(unsigned long long)indexForCoordinate:(SBIconCoordinate)arg1 forOrientation:(long long)arg2 ;
-(BOOL)_iconIsGapAdjacentAtIndex:(unsigned long long)arg1 ;
-(BOOL)alignsIconsOnPixelBoundaries;
-(double)horizontalBumpForColumn:(unsigned long long)arg1 metrics:(const SBIconListLayoutMetrics*)arg2 ;
-(void)setCurrentIconLocationTransitionHandler:(SBIconListViewIconLocationTransitionHandler *)arg1 ;
-(void)setAlignsIconsOnPixelBoundaries:(BOOL)arg1 ;
-(CGSize)alignmentIconViewSize;
-(void)setLayoutProvider:(id<SBIconListLayoutProvider>)arg1 ;
-(unsigned long long)rowForIcon:(id)arg1 ;
-(void)fadeInIcon:(id)arg1 ;
-(void)layoutAndCreateIcon:(id)arg1 atIndex:(unsigned long long)arg2 ;
-(void)setAlphaForAllIcons:(double)arg1 ;
-(CGPoint)originForIcon:(id)arg1 ;
-(unsigned long long)numberOfDisplayedIconViews;
-(SBIconCoordinate)coordinateForIconAtIndex:(unsigned long long)arg1 ;
-(id)iconAtPoint:(CGPoint)arg1 index:(unsigned long long*)arg2 ;
-(void)enumerateVisibleIconsUsingBlock:(/*^block*/id)arg1 ;
-(BOOL)isDock;
-(void)setIconsLabelAlpha:(double)arg1 ;
-(unsigned long long)rowAtPoint:(CGPoint)arg1 ;
-(void)iconLocationTransitionHandler:(id)arg1 setProgress:(double)arg2 ;
-(void)iconLocationTransitionHandler:(id)arg1 completeTransition:(BOOL)arg2 ;
-(void)setIconsNeedLayout:(BOOL)arg1 ;
@end

