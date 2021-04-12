/*
* Generated on Thursday, January 14, 2021 at 2:28:48 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
	NSMutableDictionary* _cachedThresholds;
	WGWidgetListSettings _listSettings;

}

@property (assign,nonatomic) double revealProgress;                                        //@synthesize revealProgress=_revealProgress - In the implementation block
@property (assign,nonatomic) double dismissProgress;                                       //@synthesize dismissProgress=_dismissProgress - In the implementation block
@property (assign,nonatomic) BOOL visuallyRevealedPriorToEditingIcons;                     //@synthesize visuallyRevealedPriorToEditingIcons=_visuallyRevealedPriorToEditingIcons - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * catchupProperties;                      //@synthesize catchupProperties=_catchupProperties - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * catchupTimers;                          //@synthesize catchupTimers=_catchupTimers - In the implementation block
@property (assign,getter=isFooterVisible,nonatomic) BOOL footerVisible;                    //@synthesize footerVisible=_footerVisible - In the implementation block
@property (nonatomic,retain) WGWidgetPinningTeachingView * teachingView;                   //@synthesize teachingView=_teachingView - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * cachedThresholds;                       //@synthesize cachedThresholds=_cachedThresholds - In the implementation block
@property (assign,nonatomic) WGWidgetListSettings listSettings;                            //@synthesize listSettings=_listSettings - In the implementation block
@property (assign,getter=isRevealed,nonatomic) BOOL revealed;                              //@synthesize revealed=_revealed - In the implementation block
@property (assign,getter=isVisuallyRevealed,nonatomic) BOOL visuallyRevealed;              //@synthesize visuallyRevealed=_visuallyRevealed - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)isRevealed;
-(void)viewDidAppear:(BOOL)arg1 ;
-(double)revealProgress;
-(void)setRevealProgress:(double)arg1 ;
-(BOOL)shouldShowTeachingView;
-(void)setRevealed:(BOOL)arg1 ;
-(void)updateCarouselAndRevealState;
-(void)setContainerView:(id)arg1 ;
-(void)_styleTeachingView:(id)arg1 withCellFrameInScrollViewBounds:(CGRect)arg2 intersectionRect:(CGRect)arg3 ;
-(WGWidgetListSettings)listSettings;
-(id)initWithWidgetDiscoveryController:(id)arg1 listSettings:(WGWidgetListSettings)arg2 ;
-(BOOL)_isViewControllerVisible;
-(id)_identifierForCell:(id)arg1 ;
-(void)setListSettings:(WGWidgetListSettings)arg1 ;
-(void)_updateTeachingViewVisibilityAnimated:(BOOL)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)setVisuallyRevealed:(BOOL)arg1 ;
-(void)_styleFooterView:(id)arg1 withCellFrameInScrollViewBounds:(CGRect)arg2 intersectionRect:(CGRect)arg3 containerHeight:(double)arg4 ;
-(void)_stackViewArrangedSubviewsTransformPresentationValueChanged;
-(id)extraViews;
-(void)setCatchupProperties:(NSMutableDictionary *)arg1 ;
-(void)_repopulateStackViewWithWidgetIdentifiers:(id)arg1 ;
-(id)_animatablePropertiesForStackViewUpdate;
-(void)setDismissProgress:(double)arg1 ;
-(void)_styleCroppedCellForBottomEdge:(id)arg1 intersectionRect:(CGRect)arg2 thresholds:(id)arg3 ;
-(void)setVisuallyRevealed:(BOOL)arg1 withSlowAnimation:(BOOL)arg2 ;
-(unsigned long long)_indexForNextCellAfterContentOffset:(double)arg1 ;
-(double)dismissProgress;
-(void)setCatchupTimers:(NSMutableDictionary *)arg1 ;
-(void)scrollViewWillEndDragging:(id)arg1 withVelocity:(CGPoint)arg2 targetContentOffset:(inout CGPoint*)arg3 ;
-(void)_updateScrollViewContentSize;
-(void)setCachedThresholds:(NSMutableDictionary *)arg1 ;
-(void)_createPropertiesForStackViewUpdate;
-(BOOL)shouldAnimateFirstTwoViewsAsOne;
-(double)easedOutValueForValue:(double)arg1 ;
-(void)_styleCroppedCellForTopEdge:(id)arg1 withCellFrameInScrollViewBounds:(CGRect)arg2 intersectionRect:(CGRect)arg3 thresholds:(id)arg4 ;
-(void)scrollViewDidChangeAdjustedContentInset:(id)arg1 ;
-(unsigned long long)_insertionIndexofListItem:(id)arg1 intoWidgetViews:(id)arg2 withOrderedIdentifiers:(id)arg3 ;
-(CGRect)_cellFrameInScrollBoundsForCell:(id)arg1 ;
-(void)setEditingIcons:(BOOL)arg1 ;
-(NSMutableDictionary *)catchupProperties;
-(void)viewDidLoad;
-(id)_thresholdsForCell:(id)arg1 ;
-(BOOL)headerVisible;
-(void)_styleCroppedAndScaledCellForBottomEdge:(id)arg1 withCellFrameInScrollViewBounds:(CGRect)arg2 intersectionRect:(CGRect)arg3 thresholds:(id)arg4 ;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(BOOL)isFooterVisible;
-(void)setVisuallyRevealedPriorToEditingIcons:(BOOL)arg1 ;
-(void)scrollViewDidScroll:(id)arg1 ;
-(void)_styleFullyInvisibleTopCell:(id)arg1 ;
-(NSMutableDictionary *)catchupTimers;
-(NSMutableDictionary *)cachedThresholds;
-(void)setHeaderVisible:(BOOL)arg1 ;
-(void)_styleFullyVisibleCell:(id)arg1 ;
-(void)_styleHeaderView:(id)arg1 withCellFrameInScrollViewBounds:(CGRect)arg2 intersectionRect:(CGRect)arg3 ;
-(void)setFooterVisible:(BOOL)arg1 ;
-(void)widgetPinningTeachingViewDidSelectNo:(id)arg1 ;
-(void)widgetPinningTeachingViewDidSelectYes:(id)arg1 ;
-(BOOL)visuallyRevealedPriorToEditingIcons;
-(void)_updateCarouselEffect;
-(BOOL)_hasEnoughContentToScroll;
-(WGWidgetPinningTeachingView *)teachingView;
-(id)_newCatchupPropertyForCell:(id)arg1 ;
-(void)viewDidLayoutSubviews;
-(void)_styleDisapearingCellForBottomEdge:(id)arg1 withCellFrameInScrollViewBounds:(CGRect)arg2 previousCellFrameInContainerView:(CGRect)arg3 thresholds:(id)arg4 ;
-(void)_styleCroppedAndScaledCellForTopEdge:(id)arg1 withCellFrameInScrollViewBounds:(CGRect)arg2 thresholds:(id)arg3 ;
-(void)_updateRevealState;
-(void)_styleFullyInvisibleBottomCell:(id)arg1 withCellFrameInScrollViewBounds:(CGRect)arg2 thresholds:(id)arg3 ;
-(void)setTeachingView:(WGWidgetPinningTeachingView *)arg1 ;
-(void)dealloc;
-(unsigned long long)_indexOfFirstNonFavoritedWidgetInStackView;
-(BOOL)isVisuallyRevealed;
@end

