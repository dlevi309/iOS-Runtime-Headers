/*
* Generated on Monday, March 1, 2021 at 2:33:01 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Widgets.framework/Widgets
*/

#import <Widgets/Widgets-Structs.h>
#import <Widgets/WGMajorListViewController.h>
#import <libobjc.A.dylib/WGWidgetPinningTeachingViewDelegate.h>

@class NSMutableDictionary, WGWidgetPinningTeachingView, NSString;

@interface WGCarouselListViewController : WGMajorListViewController <WGWidgetPinningTeachingViewDelegate> {

	id _sizeChangeObserver;
	BOOL _revealed;
	BOOL _visuallyRevealed;
	BOOL _visuallyRevealedPriorToEditingIcons;
	BOOL _footerVisible;
	double _revealProgress;
	double _dismissProgress;
	NSMutableDictionary* _catchupProperties;
	NSMutableDictionary* _catchupTimers;
	WGWidgetPinningTeachingView* _teachingView;
	NSMutableDictionary* _resizeContexts;
	NSMutableDictionary* _cachedThresholds;
	WGWidgetListSettings _listSettings;

}

@property (assign,getter=isRevealed,nonatomic) BOOL revealed;                              //@synthesize revealed=_revealed - In the implementation block
@property (assign,nonatomic) double revealProgress;                                        //@synthesize revealProgress=_revealProgress - In the implementation block
@property (assign,nonatomic) double dismissProgress;                                       //@synthesize dismissProgress=_dismissProgress - In the implementation block
@property (assign,getter=isVisuallyRevealed,nonatomic) BOOL visuallyRevealed;              //@synthesize visuallyRevealed=_visuallyRevealed - In the implementation block
@property (assign,nonatomic) BOOL visuallyRevealedPriorToEditingIcons;                     //@synthesize visuallyRevealedPriorToEditingIcons=_visuallyRevealedPriorToEditingIcons - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * catchupProperties;                      //@synthesize catchupProperties=_catchupProperties - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * catchupTimers;                          //@synthesize catchupTimers=_catchupTimers - In the implementation block
@property (assign,getter=isFooterVisible,nonatomic) BOOL footerVisible;                    //@synthesize footerVisible=_footerVisible - In the implementation block
@property (nonatomic,retain) WGWidgetPinningTeachingView * teachingView;                   //@synthesize teachingView=_teachingView - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * resizeContexts;                         //@synthesize resizeContexts=_resizeContexts - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * cachedThresholds;                       //@synthesize cachedThresholds=_cachedThresholds - In the implementation block
@property (assign,nonatomic) WGWidgetListSettings listSettings;                            //@synthesize listSettings=_listSettings - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(void)setContainerView:(id)arg1 ;
-(void)scrollViewDidScroll:(id)arg1 ;
-(void)scrollViewWillEndDragging:(id)arg1 withVelocity:(CGPoint)arg2 targetContentOffset:(inout CGPoint*)arg3 ;
-(void)scrollViewDidChangeAdjustedContentInset:(id)arg1 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(void)viewDidLayoutSubviews;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(void)setFooterVisible:(BOOL)arg1 ;
-(BOOL)isFooterVisible;
-(BOOL)_isViewControllerVisible;
-(void)setRevealed:(BOOL)arg1 ;
-(void)_updateScrollViewContentSize;
-(id)extraViews;
-(BOOL)shouldAnimateFirstTwoViewsAsOne;
-(void)setEditingIcons:(BOOL)arg1 ;
-(WGWidgetListSettings)listSettings;
-(void)widgetPinningTeachingViewDidSelectYes:(id)arg1 ;
-(void)widgetPinningTeachingViewDidSelectNo:(id)arg1 ;
-(void)setCachedThresholds:(NSMutableDictionary *)arg1 ;
-(void)_repopulateStackViewWithWidgetIdentifiers:(id)arg1 ;
-(void)_updateTeachingViewVisibilityAnimated:(BOOL)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)_didUpdateStackViewArrangedSubviews;
-(unsigned long long)_insertionIndexofListItem:(id)arg1 intoWidgetViews:(id)arg2 withOrderedIdentifiers:(id)arg3 ;
-(void)_createProperties;
-(id)_identifierForCell:(id)arg1 ;
-(void)setVisuallyRevealed:(BOOL)arg1 ;
-(void)_updateCarouselAndRevealState;
-(void)setVisuallyRevealed:(BOOL)arg1 withSlowAnimation:(BOOL)arg2 ;
-(unsigned long long)_indexOfFirstNonFavoritedWidgetInStackView;
-(NSMutableDictionary *)catchupTimers;
-(BOOL)headerVisible;
-(void)setHeaderVisible:(BOOL)arg1 ;
-(BOOL)isVisuallyRevealed;
-(void)setVisuallyRevealedPriorToEditingIcons:(BOOL)arg1 ;
-(BOOL)visuallyRevealedPriorToEditingIcons;
-(void)_updateCarouselEffect;
-(void)_updateRevealState;
-(BOOL)isRevealed;
-(BOOL)_hasEnoughContentToScroll;
-(unsigned long long)_indexForNextCellAfterContentOffset:(double)arg1 ;
-(id)_newCatchupPropertyForCell:(id)arg1 ;
-(NSMutableDictionary *)catchupProperties;
-(NSMutableDictionary *)resizeContexts;
-(CGRect)_cellFrameInScrollBoundsForCell:(id)arg1 ;
-(id)_thresholdsForCell:(id)arg1 ;
-(void)_styleFullyInvisibleTopCell:(id)arg1 ;
-(void)_styleCroppedAndScaledCellForTopEdge:(id)arg1 withCellFrameInScrollViewBounds:(CGRect)arg2 thresholds:(id)arg3 ;
-(void)_styleCroppedCellForTopEdge:(id)arg1 withCellFrameInScrollViewBounds:(CGRect)arg2 intersectionRect:(CGRect)arg3 thresholds:(id)arg4 ;
-(void)_styleFullyVisibleCell:(id)arg1 ;
-(void)_styleCroppedCellForBottomEdge:(id)arg1 intersectionRect:(CGRect)arg2 thresholds:(id)arg3 ;
-(void)_styleCroppedAndScaledCellForBottomEdge:(id)arg1 withCellFrameInScrollViewBounds:(CGRect)arg2 intersectionRect:(CGRect)arg3 thresholds:(id)arg4 ;
-(void)_styleDisapearingCellForBottomEdge:(id)arg1 withCellFrameInScrollViewBounds:(CGRect)arg2 previousCellFrameInContainerView:(CGRect)arg3 thresholds:(id)arg4 ;
-(void)_styleFullyInvisibleBottomCell:(id)arg1 withCellFrameInScrollViewBounds:(CGRect)arg2 thresholds:(id)arg3 ;
-(void)_styleHeaderView:(id)arg1 withCellFrameInScrollViewBounds:(CGRect)arg2 intersectionRect:(CGRect)arg3 ;
-(void)_styleFooterView:(id)arg1 withCellFrameInScrollViewBounds:(CGRect)arg2 intersectionRect:(CGRect)arg3 containerHeight:(double)arg4 ;
-(void)_styleTeachingView:(id)arg1 withCellFrameInScrollViewBounds:(CGRect)arg2 intersectionRect:(CGRect)arg3 ;
-(double)revealProgress;
-(void)setRevealProgress:(double)arg1 ;
-(void)setDismissProgress:(double)arg1 ;
-(BOOL)shouldShowTeachingView;
-(double)easedOutValueForValue:(double)arg1 ;
-(id)initWithWidgetDiscoveryController:(id)arg1 listSettings:(WGWidgetListSettings)arg2 ;
-(void)resizeWidgetWrapperView:(id)arg1 toSize:(CGSize)arg2 withTransitionContext:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)setListSettings:(WGWidgetListSettings)arg1 ;
-(double)dismissProgress;
-(void)setCatchupProperties:(NSMutableDictionary *)arg1 ;
-(void)setCatchupTimers:(NSMutableDictionary *)arg1 ;
-(WGWidgetPinningTeachingView *)teachingView;
-(void)setTeachingView:(WGWidgetPinningTeachingView *)arg1 ;
-(void)setResizeContexts:(NSMutableDictionary *)arg1 ;
-(NSMutableDictionary *)cachedThresholds;
@end

