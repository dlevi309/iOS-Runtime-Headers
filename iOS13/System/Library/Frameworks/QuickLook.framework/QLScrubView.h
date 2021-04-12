/*
* Generated on Monday, March 1, 2021 at 2:32:00 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/QuickLook.framework/QuickLook
*/

#import <QuickLook/QuickLook-Structs.h>
#import <UIKitCore/UIView.h>
#import <UIKit/UIGestureRecognizerDelegate.h>

@protocol QLScrubViewDataSource, QLScrubViewDelegate;
@class NSMutableDictionary, NSMutableArray, QLThumbnailView, QLPageNumberView, NSString;

@interface QLScrubView : UIView <UIGestureRecognizerDelegate> {

	BOOL _needsThumbLayout;
	double _thumbOrigin;
	double _thumbEnd;
	double _thumbHeight;
	long long _pageCount;
	long long _selectedPage;
	NSMutableDictionary* _thumbViews;
	NSMutableArray* _visibleThumbIndexes;
	QLThumbnailView* _selectedThumbnailView;
	QLPageNumberView* _pageNumberLabel;
	id<QLScrubViewDataSource> _dataSource;
	id<QLScrubViewDelegate> _delegate;
	double _topOffset;
	double _bottomOffset;

}

@property (__weak) id<QLScrubViewDataSource> dataSource;              //@synthesize dataSource=_dataSource - In the implementation block
@property (__weak) id<QLScrubViewDelegate> delegate;                  //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) double topOffset;                        //@synthesize topOffset=_topOffset - In the implementation block
@property (assign,nonatomic) double bottomOffset;                     //@synthesize bottomOffset=_bottomOffset - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(double)defaultWidth;
-(id)init;
-(id<QLScrubViewDelegate>)delegate;
-(void)setDelegate:(id<QLScrubViewDelegate>)arg1 ;
-(id<QLScrubViewDataSource>)dataSource;
-(void)setDataSource:(id<QLScrubViewDataSource>)arg1 ;
-(void)setFrame:(CGRect)arg1 ;
-(BOOL)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2 ;
-(void)layoutSubviews;
-(void)panReceived:(id)arg1 ;
-(void)tapReceived:(id)arg1 ;
-(void)longTapReceived:(id)arg1 ;
-(void)_removeThumbviews;
-(void)_updateSelectedThumbnailView;
-(void)_notifyPageChanged;
-(void)_updatePageLabelPosition;
-(void)_showPageLabel;
-(void)_handleSwipAtLocation:(CGPoint)arg1 ;
-(void)_hidePageLabel;
-(double)topOffset;
-(CGRect)_thumbnailFrameForPageAtIndex:(long long)arg1 ;
-(void)reloadThumbnails;
-(void)selectPageNumber:(long long)arg1 ;
-(void)setTopOffset:(double)arg1 ;
-(double)bottomOffset;
-(void)setBottomOffset:(double)arg1 ;
@end

