/*
* Generated on Thursday, January 14, 2021 at 2:25:00 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UserNotificationsUIKit.framework/UserNotificationsUIKit
*/

#import <UserNotificationsUIKit/UserNotificationsUIKit-Structs.h>
#import <UIKitCore/UIScrollView.h>

@protocol NCNotificationListViewDataSource;
@class NSMutableDictionary, NSMutableSet, UILabel, UIView;

@interface NCNotificationListView : UIScrollView {

	BOOL _grouped;
	BOOL _subviewPerformingGroupingAnimation;
	BOOL _performingContentRevealAnimation;
	BOOL _revealed;
	BOOL _leadingRevealView;
	BOOL _activeRevealTransitioning;
	BOOL _performingGroupingAnimation;
	BOOL _performingRevealAnimation;
	BOOL _performingHeaderReloadAnimation;
	BOOL _performingVisibleRectAdjustment;
	BOOL _performedFirstLayout;
	BOOL _cachedSizeValid;
	id<NCNotificationListViewDataSource> _dataSource;
	double _groupedTranslation;
	double _revealPercentage;
	unsigned long long _revealIndexOffset;
	NSMutableDictionary* _visibleViews;
	NSMutableSet* _insertedViewIndices;
	NSMutableSet* _reloadedViewIndices;
	unsigned long long _removedViewIndex;
	NSMutableSet* _viewsPerformingAnimation;
	UILabel* _titleLabel;
	UIView* _headerView;
	UIView* _footerView;
	CGSize _cachedSize;
	CGRect _visibleRect;

}

@property (nonatomic,retain) NSMutableDictionary * visibleViews;                                                                     //@synthesize visibleViews=_visibleViews - In the implementation block
@property (nonatomic,retain) NSMutableSet * insertedViewIndices;                                                                     //@synthesize insertedViewIndices=_insertedViewIndices - In the implementation block
@property (nonatomic,retain) NSMutableSet * reloadedViewIndices;                                                                     //@synthesize reloadedViewIndices=_reloadedViewIndices - In the implementation block
@property (assign,nonatomic) unsigned long long removedViewIndex;                                                                    //@synthesize removedViewIndex=_removedViewIndex - In the implementation block
@property (assign,getter=isPerformingGroupingAnimation,nonatomic) BOOL performingGroupingAnimation;                                  //@synthesize performingGroupingAnimation=_performingGroupingAnimation - In the implementation block
@property (assign,getter=isPerformingRevealAnimation,nonatomic) BOOL performingRevealAnimation;                                      //@synthesize performingRevealAnimation=_performingRevealAnimation - In the implementation block
@property (assign,getter=isPerformingHeaderReloadAnimation,nonatomic) BOOL performingHeaderReloadAnimation;                          //@synthesize performingHeaderReloadAnimation=_performingHeaderReloadAnimation - In the implementation block
@property (assign,getter=isPerformingVisibleRectAdjustment,nonatomic) BOOL performingVisibleRectAdjustment;                          //@synthesize performingVisibleRectAdjustment=_performingVisibleRectAdjustment - In the implementation block
@property (nonatomic,retain) NSMutableSet * viewsPerformingAnimation;                                                                //@synthesize viewsPerformingAnimation=_viewsPerformingAnimation - In the implementation block
@property (nonatomic,retain) UILabel * titleLabel;                                                                                   //@synthesize titleLabel=_titleLabel - In the implementation block
@property (nonatomic,retain) UIView * headerView;                                                                                    //@synthesize headerView=_headerView - In the implementation block
@property (nonatomic,retain) UIView * footerView;                                                                                    //@synthesize footerView=_footerView - In the implementation block
@property (assign,getter=hasPerformedFirstLayout,nonatomic) BOOL performedFirstLayout;                                               //@synthesize performedFirstLayout=_performedFirstLayout - In the implementation block
@property (getter=isNotificationListViewCurrentlyVisible,nonatomic,readonly) BOOL notificationListViewCurrentlyVisible; 
@property (assign,getter=isCachedSizeValid,nonatomic) BOOL cachedSizeValid;                                                          //@synthesize cachedSizeValid=_cachedSizeValid - In the implementation block
@property (assign,nonatomic) CGSize cachedSize;                                                                                      //@synthesize cachedSize=_cachedSize - In the implementation block
@property (assign,nonatomic,__weak) id<NCNotificationListViewDataSource> dataSource;                                                 //@synthesize dataSource=_dataSource - In the implementation block
@property (nonatomic,readonly) unsigned long long count; 
@property (assign,nonatomic) CGRect visibleRect;                                                                                     //@synthesize visibleRect=_visibleRect - In the implementation block
@property (assign,getter=isGrouped,nonatomic) BOOL grouped;                                                                          //@synthesize grouped=_grouped - In the implementation block
@property (assign,nonatomic) double groupedTranslation;                                                                              //@synthesize groupedTranslation=_groupedTranslation - In the implementation block
@property (assign,getter=isSubviewPerformingGroupingAnimation,nonatomic) BOOL subviewPerformingGroupingAnimation;                    //@synthesize subviewPerformingGroupingAnimation=_subviewPerformingGroupingAnimation - In the implementation block
@property (assign,getter=isPerformingContentRevealAnimation,nonatomic) BOOL performingContentRevealAnimation;                        //@synthesize performingContentRevealAnimation=_performingContentRevealAnimation - In the implementation block
@property (assign,getter=isRevealed,nonatomic) BOOL revealed;                                                                        //@synthesize revealed=_revealed - In the implementation block
@property (assign,getter=isLeadingRevealView,nonatomic) BOOL leadingRevealView;                                                      //@synthesize leadingRevealView=_leadingRevealView - In the implementation block
@property (assign,getter=isActiveRevealTransitioning,nonatomic) BOOL activeRevealTransitioning;                                      //@synthesize activeRevealTransitioning=_activeRevealTransitioning - In the implementation block
@property (assign,nonatomic) double revealPercentage;                                                                                //@synthesize revealPercentage=_revealPercentage - In the implementation block
@property (assign,nonatomic) unsigned long long revealIndexOffset;                                                                   //@synthesize revealIndexOffset=_revealIndexOffset - In the implementation block
-(BOOL)isRevealed;
-(UILabel *)titleLabel;
-(BOOL)isGrouped;
-(UIView *)footerView;
-(void)setPerformingGroupingAnimation:(BOOL)arg1 ;
-(void)setRevealPercentage:(double)arg1 ;
-(void)_layoutHeaderViewForGroupingIfNecessary;
-(void)setTitleLabel:(UILabel *)arg1 ;
-(void)setRevealed:(BOOL)arg1 ;
-(double)revealPercentage;
-(NSMutableDictionary *)visibleViews;
-(void)setVisibleRect:(CGRect)arg1 ;
-(void)_layoutHiddenViewsForGroupingLayoutIfNecessaryWithLeadingViewHeight:(double)arg1 ;
-(void)reloadViewAtIndex:(unsigned long long)arg1 ;
-(void)setHeaderView:(UIView *)arg1 ;
-(BOOL)isVisibleForViewAtIndex:(unsigned long long)arg1 ;
-(void)_layoutFooterViewIfNecessaryAtLayoutOffset:(double)arg1 ;
-(void)reloadHeaderView;
-(id)initWithFrame:(CGRect)arg1 ;
-(CGRect)visibleRect;
-(BOOL)isPerformingRevealAnimation;
-(void)_resetClipping;
-(BOOL)hasPerformedFirstLayout;
-(NSMutableSet *)viewsPerformingAnimation;
-(BOOL)_isGrouping;
-(double)_positionOffsetForRevealHintingForHeaderView;
-(BOOL)_isTopSubviewHeightLessThanVisibleRect;
-(double)layoutOffsetForViewAtIndex:(unsigned long long)arg1 ;
-(double)_verticalVelocityForSuperview;
-(CGRect)_frameForViewAtIndex:(unsigned long long)arg1 ;
-(BOOL)isPerformingContentRevealAnimation;
-(void)_configureStackDimmingForGroupedView:(id)arg1 transform:(CGAffineTransform)arg2 ;
-(void)setCachedSize:(CGSize)arg1 ;
-(BOOL)isSubviewPerformingGroupingAnimation;
-(void)setGroupedTranslation:(double)arg1 ;
-(id)_visibleViewAtIndex:(unsigned long long)arg1 ;
-(void)didMoveToSuperview;
-(double)_revealAnimationDelayForObjectAtIndex:(unsigned long long)arg1 ;
-(BOOL)isLeadingRevealView;
-(void)_updateVisibleViewsForUpdatedVisibleRect:(CGRect)arg1 ;
-(id<NCNotificationListViewDataSource>)dataSource;
-(unsigned long long)count;
-(void)setRevealIndexOffset:(unsigned long long)arg1 ;
-(void)setPerformingContentRevealAnimation:(BOOL)arg1 ;
-(id)_listViewForView:(id)arg1 ;
-(void)removeViewAtIndex:(unsigned long long)arg1 animated:(BOOL)arg2 ;
-(NSMutableSet *)reloadedViewIndices;
-(BOOL)isCachedSizeValid;
-(void)insertViewAtIndex:(unsigned long long)arg1 animated:(BOOL)arg2 ;
-(void)_adjustContentSizeHeightIfNecessaryForUpdatedHeight:(double)arg1 ;
-(void)setLeadingRevealView:(BOOL)arg1 ;
-(void)_recycleViewIfNecessary:(id)arg1 withDataSource:(id)arg2 ;
-(void)_performInsertionAnimationForView:(id)arg1 ;
-(void)_recycleViewIfNecessary:(id)arg1 ;
-(void)_layoutFooterViewForGroupingIfNecessary;
-(void)setDataSource:(id<NCNotificationListViewDataSource>)arg1 ;
-(void)layoutSubviews;
-(void)setVisibleViews:(NSMutableDictionary *)arg1 ;
-(void)setPerformedFirstLayout:(BOOL)arg1 ;
-(void)setActiveRevealTransitioning:(BOOL)arg1 ;
-(void)setFrame:(CGRect)arg1 ;
-(double)groupedTranslation;
-(BOOL)_isViewWithinVisibleRectForHeight:(double)arg1 layoutOffset:(double)arg2 ;
-(BOOL)isActiveRevealTransitioning;
-(double)_adjustedTensionForRevealAnimation;
-(void)_configureClippingIfNecessary;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)_setContentHiddenForGroupedView:(id)arg1 atIndex:(unsigned long long)arg2 ;
-(BOOL)isNotificationListViewCurrentlyVisible;
-(void)recycleVisibleViews;
-(unsigned long long)revealIndexOffset;
-(void)revealNotificationContentBelowGroupedViewIfNecessary:(id)arg1 ;
-(double)_layoutViewIfNecessaryAtIndex:(unsigned long long)arg1 layoutOffset:(double)arg2 ;
-(void)_removeAllStoredVisibleViews;
-(CGAffineTransform)_scaleTransformForGroupingAnimationForViewAtIndex:(unsigned long long)arg1 leadingViewHeight:(double)arg2 ;
-(CGSize)cachedSize;
-(BOOL)_shouldPerformClipping;
-(void)invalidateData;
-(void)setFooterView:(UIView *)arg1 ;
-(void)setReloadedViewIndices:(NSMutableSet *)arg1 ;
-(double)_positionOffsetForRevealHintingForItemAtIndex:(unsigned long long)arg1 ;
-(void)setPerformingRevealAnimation:(BOOL)arg1 ;
-(double)_footerViewHeight;
-(void)_setupClipping;
-(void)setRemovedViewIndex:(unsigned long long)arg1 ;
-(void)_setVisibleView:(id)arg1 atIndex:(unsigned long long)arg2 ;
-(UIView *)headerView;
-(void)setInsertedViewIndices:(NSMutableSet *)arg1 ;
-(void)_performAnimationForView:(id)arg1 atIndex:(unsigned long long)arg2 animationBlock:(/*^block*/id)arg3 completionBlock:(/*^block*/id)arg4 ;
-(void)_layoutGroupedViewForGroupingLayout:(id)arg1 atIndex:(unsigned long long)arg2 isExistingView:(BOOL)arg3 leadingViewHeight:(double)arg4 ;
-(void)setPerformingHeaderReloadAnimation:(BOOL)arg1 ;
-(unsigned long long)removedViewIndex;
-(void)_updateStoredVisibleViewsForViewRemovedAtIndex:(unsigned long long)arg1 ;
-(id)_headerViewFromDataSource;
-(void)_layoutForGrouping;
-(void)setPerformingVisibleRectAdjustment:(BOOL)arg1 ;
-(void)_adjustContentSizeWidthIfNecessary;
-(void)setViewsPerformingAnimation:(NSMutableSet *)arg1 ;
-(BOOL)isPerformingHeaderReloadAnimation;
-(void)_removeStoredVisibleViewAtIndex:(unsigned long long)arg1 ;
-(void)_layoutLeadingViewForGroupingLayoutIfNecessary:(id)arg1 hasShadow:(BOOL)arg2 ;
-(void)_updateStoredVisibleViewsForViewInsertedAtIndex:(unsigned long long)arg1 ;
-(NSMutableSet *)insertedViewIndices;
-(BOOL)_isVisibleView:(id)arg1 ;
-(void)_layoutForList;
-(BOOL)isPerformingGroupingAnimation;
-(void)setSubviewPerformingGroupingAnimation:(BOOL)arg1 ;
-(void)_performViewAnimationBlock:(/*^block*/id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(BOOL)isPerformingVisibleRectAdjustment;
-(void)_performRemovalAnimationForView:(id)arg1 ;
-(double)_headerViewHeight;
-(void)_layoutHeaderViewIfNecessaryAtLayoutOffset:(double)arg1 ;
-(void)_performViewAnimationBlock:(/*^block*/id)arg1 completionBlock:(/*^block*/id)arg2 withTension:(double)arg3 friction:(double)arg4 ;
-(double)_adjustedFrictionForRevealAnimation;
-(void)setCachedSizeValid:(BOOL)arg1 ;
-(id)_footerViewFromDataSource;
-(void)setGrouped:(BOOL)arg1 ;
@end

