/*
* Generated on Thursday, January 14, 2021 at 2:24:06 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setTopOffset:(double)arg1 ;
-(id)init;
-(id<QLScrubViewDelegate>)delegate;
-(void)reloadThumbnails;
-(id<QLScrubViewDataSource>)dataSource;
-(void)setDelegate:(id<QLScrubViewDelegate>)arg1 ;
-(void)setDataSource:(id<QLScrubViewDataSource>)arg1 ;
-(void)layoutSubviews;
-(void)setFrame:(CGRect)arg1 ;
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
-(CGRect)_thumbnailFrameForPageAtIndex:(long long)arg1 ;
-(void)selectPageNumber:(long long)arg1 ;
-(double)bottomOffset;
-(void)setBottomOffset:(double)arg1 ;
-(BOOL)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2 ;
-(double)topOffset;
@end

