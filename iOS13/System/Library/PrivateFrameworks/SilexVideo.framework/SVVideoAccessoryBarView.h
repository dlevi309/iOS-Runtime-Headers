/*
* Generated on Monday, March 1, 2021 at 2:33:03 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SilexVideo.framework/SilexVideo
*/

#import <SilexVideo/SilexVideo-Structs.h>
#import <UIKitCore/UIVisualEffectView.h>

@protocol SVVideoAccessoryBarSizing, SVVideoAccessoryItemSizing, SVVideoAccessoryItemDisplayModeTransitionCoordinatorProviding, SVAccessoryItem;
@class UIView, SVVideoAccessoryBarItemTransition, SVVideoAccessoryBarDisplayModeTransition, SVVideoAccessoryBarDisplayState;

@interface SVVideoAccessoryBarView : UIVisualEffectView {

	id<SVVideoAccessoryBarSizing> _barSizer;
	id<SVVideoAccessoryItemSizing> _itemSizer;
	id<SVVideoAccessoryItemDisplayModeTransitionCoordinatorProviding> _displayModeTransitionCoordinatorProvider;
	UIView* _leadingContainerView;
	UIView* _trailingContainerView;
	SVVideoAccessoryBarItemTransition* _pendingLeadingItemTransition;
	SVVideoAccessoryBarItemTransition* _activeLeadingItemTransition;
	SVVideoAccessoryBarItemTransition* _pendingTrailingItemTransition;
	SVVideoAccessoryBarItemTransition* _activeTrailingItemTransition;
	SVVideoAccessoryBarDisplayModeTransition* _pendingDisplayModeTransition;
	SVVideoAccessoryBarDisplayModeTransition* _activeDisplayModeTransition;
	id<SVAccessoryItem> _leadingItem;
	id<SVAccessoryItem> _trailingItem;
	id<SVAccessoryItem> _expandedItem;
	SVVideoAccessoryBarDisplayState* _displayState;

}

@property (nonatomic,readonly) id<SVVideoAccessoryBarSizing> barSizer;                                                                                  //@synthesize barSizer=_barSizer - In the implementation block
@property (nonatomic,readonly) id<SVVideoAccessoryItemSizing> itemSizer;                                                                                //@synthesize itemSizer=_itemSizer - In the implementation block
@property (nonatomic,readonly) id<SVVideoAccessoryItemDisplayModeTransitionCoordinatorProviding> displayModeTransitionCoordinatorProvider;              //@synthesize displayModeTransitionCoordinatorProvider=_displayModeTransitionCoordinatorProvider - In the implementation block
@property (nonatomic,readonly) UIView * leadingContainerView;                                                                                           //@synthesize leadingContainerView=_leadingContainerView - In the implementation block
@property (nonatomic,readonly) UIView * trailingContainerView;                                                                                          //@synthesize trailingContainerView=_trailingContainerView - In the implementation block
@property (nonatomic,retain) SVVideoAccessoryBarItemTransition * pendingLeadingItemTransition;                                                          //@synthesize pendingLeadingItemTransition=_pendingLeadingItemTransition - In the implementation block
@property (nonatomic,retain) SVVideoAccessoryBarItemTransition * activeLeadingItemTransition;                                                           //@synthesize activeLeadingItemTransition=_activeLeadingItemTransition - In the implementation block
@property (nonatomic,retain) SVVideoAccessoryBarItemTransition * pendingTrailingItemTransition;                                                         //@synthesize pendingTrailingItemTransition=_pendingTrailingItemTransition - In the implementation block
@property (nonatomic,retain) SVVideoAccessoryBarItemTransition * activeTrailingItemTransition;                                                          //@synthesize activeTrailingItemTransition=_activeTrailingItemTransition - In the implementation block
@property (nonatomic,retain) SVVideoAccessoryBarDisplayModeTransition * pendingDisplayModeTransition;                                                   //@synthesize pendingDisplayModeTransition=_pendingDisplayModeTransition - In the implementation block
@property (nonatomic,retain) SVVideoAccessoryBarDisplayModeTransition * activeDisplayModeTransition;                                                    //@synthesize activeDisplayModeTransition=_activeDisplayModeTransition - In the implementation block
@property (nonatomic,retain) id<SVAccessoryItem> leadingItem;                                                                                           //@synthesize leadingItem=_leadingItem - In the implementation block
@property (nonatomic,retain) id<SVAccessoryItem> trailingItem;                                                                                          //@synthesize trailingItem=_trailingItem - In the implementation block
@property (nonatomic,retain) id<SVAccessoryItem> expandedItem;                                                                                          //@synthesize expandedItem=_expandedItem - In the implementation block
@property (nonatomic,retain) SVVideoAccessoryBarDisplayState * displayState;                                                                            //@synthesize displayState=_displayState - In the implementation block
@property (nonatomic,readonly) id<SVAccessoryItem> currentItem; 
-(id<SVAccessoryItem>)currentItem;
-(CGSize)intrinsicContentSize;
-(void)traitCollectionDidChange:(id)arg1 ;
-(void)layoutSubviews;
-(id<SVAccessoryItem>)expandedItem;
-(void)setExpandedItem:(id<SVAccessoryItem>)arg1 ;
-(id)initWithBarSizer:(id)arg1 itemSizer:(id)arg2 displayModeTransitionCoordinatorProvider:(id)arg3 ;
-(void)setAccessoryItem:(id)arg1 withCoordinator:(id)arg2 ;
-(id<SVAccessoryItem>)leadingItem;
-(void)setLeadingItem:(id)arg1 withCoordinator:(id)arg2 ;
-(SVVideoAccessoryBarDisplayState *)displayState;
-(void)setPendingLeadingItemTransition:(SVVideoAccessoryBarItemTransition *)arg1 ;
-(id<SVAccessoryItem>)trailingItem;
-(void)setLeadingItem:(id<SVAccessoryItem>)arg1 ;
-(void)expandItem:(id)arg1 animated:(BOOL)arg2 ;
-(void)schedulePerformPendingTransitions;
-(void)setPendingTrailingItemTransition:(SVVideoAccessoryBarItemTransition *)arg1 ;
-(void)setTrailingItem:(id<SVAccessoryItem>)arg1 ;
-(void)transitionLeadingItemToDisplayMode:(unsigned long long)arg1 trailingItemToDisplayMode:(unsigned long long)arg2 animated:(BOOL)arg3 synchronized:(BOOL)arg4 ;
-(id<SVVideoAccessoryItemSizing>)itemSizer;
-(UIView *)leadingContainerView;
-(UIView *)trailingContainerView;
-(id<SVVideoAccessoryItemDisplayModeTransitionCoordinatorProviding>)displayModeTransitionCoordinatorProvider;
-(void)setPendingDisplayModeTransition:(SVVideoAccessoryBarDisplayModeTransition *)arg1 ;
-(void)performPendingTransitions;
-(SVVideoAccessoryBarItemTransition *)pendingLeadingItemTransition;
-(SVVideoAccessoryBarItemTransition *)pendingTrailingItemTransition;
-(SVVideoAccessoryBarDisplayModeTransition *)pendingDisplayModeTransition;
-(SVVideoAccessoryBarItemTransition *)activeLeadingItemTransition;
-(SVVideoAccessoryBarItemTransition *)activeTrailingItemTransition;
-(SVVideoAccessoryBarDisplayModeTransition *)activeDisplayModeTransition;
-(void)setDisplayState:(SVVideoAccessoryBarDisplayState *)arg1 ;
-(void)setActiveDisplayModeTransition:(SVVideoAccessoryBarDisplayModeTransition *)arg1 ;
-(void)setActiveLeadingItemTransition:(SVVideoAccessoryBarItemTransition *)arg1 ;
-(void)setActiveTrailingItemTransition:(SVVideoAccessoryBarItemTransition *)arg1 ;
-(id<SVVideoAccessoryBarSizing>)barSizer;
-(void)setTrailingItem:(id)arg1 withCoordinator:(id)arg2 ;
@end

