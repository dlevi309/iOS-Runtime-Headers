/*
* Generated on Monday, March 1, 2021 at 2:32:35 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
*/

#import <PassKitUI/PassKitUI-Structs.h>
#import <UIKitCore/UIView.h>
#import <UIKit/UITableViewDataSource.h>
#import <UIKit/UITableViewDelegate.h>
#import <UIKit/UIScrollViewDelegate.h>

@protocol PKDashboardMessagesViewDelegate;
@class NSOrderedSet, UIScrollView, NSMutableDictionary, UITableViewCell, PKDashboardMessageCell, UIImage, UIPageControl, NSString;

@interface PKDashboardMessagesView : UIView <UITableViewDataSource, UITableViewDelegate, UIScrollViewDelegate> {

	NSOrderedSet* _messages;
	UIScrollView* _scrollView;
	NSMutableDictionary* _tablesViews;
	BOOL _isSmallDevice;
	double _currentWidth;
	UITableViewCell* _sampleButtonCell;
	PKDashboardMessageCell* _sampleMessageCell;
	UIImage* _dismissImage;
	unsigned long long _primaryIndex;
	UIEdgeInsets _insets;
	double _widthForLastSizeCache;
	double _maxTableViewHeight;
	double _actionCellHeight;
	UIPageControl* _pageControl;
	NSString* _lastReportedDiscoveryIdentifier;
	id<PKDashboardMessagesViewDelegate> _delegate;

}

@property (nonatomic,readonly) NSOrderedSet * messages;                                        //@synthesize messages=_messages - In the implementation block
@property (assign,nonatomic,__weak) id<PKDashboardMessagesViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id<PKDashboardMessagesViewDelegate>)delegate;
-(void)setDelegate:(id<PKDashboardMessagesViewDelegate>)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)traitCollectionDidChange:(id)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)layoutSubviews;
-(void)scrollViewWillEndDragging:(id)arg1 withVelocity:(CGPoint)arg2 targetContentOffset:(inout CGPoint*)arg3 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2 ;
-(BOOL)tableView:(id)arg1 shouldHighlightRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(BOOL)tableView:(id)arg1 shouldDrawBottomSeparatorForSection:(long long)arg2 ;
-(NSOrderedSet *)messages;
-(double)_startOfItemAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)_indexAtContentOffset:(CGPoint)arg1 ;
-(void)_switchPrimaryIndexToIndex:(unsigned long long)arg1 ;
-(double)_endOfItemAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)_primaryIndexAtOffset:(CGPoint)arg1 ;
-(void)_pageControlChanged:(id)arg1 ;
-(void)_updateSizeCacheIfNecessary;
-(double)_maxHeightForSize:(CGSize)arg1 ;
-(double)_actionCellHeightForSize:(CGSize)arg1 ;
-(void)_configureActionCell:(id)arg1 withMessage:(id)arg2 ;
-(void)_configureMessageCell:(id)arg1 withMessage:(id)arg2 ;
-(void)_reportCurrentMessageViewed;
-(id)_messageForTableView:(id)arg1 ;
-(id)initWithInsets:(UIEdgeInsets)arg1 ;
-(void)updateWithMessages:(id)arg1 currentIndex:(unsigned long long)arg2 ;
@end

