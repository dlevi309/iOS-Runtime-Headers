/*
* Generated on Monday, March 1, 2021 at 2:30:13 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIView.h>

@protocol UIMovieScrubberTrackViewDataSource, UIMovieScrubberTrackViewDelegate;
@class NSArray, NSDictionary, NSMutableDictionary, UIMovieScrubberTrackOverlayView, UIView;

@interface UIMovieScrubberTrackView : UIView {

	NSArray* _summaryThumbnailViews;
	NSArray* _summaryThumbnailTimestamps;
	NSArray* _summaryThumbnailChildTimestamps;
	NSDictionary* _thumbnailStartXValues;
	NSDictionary* _childThumbnailViews;
	NSMutableDictionary* _thumbnailViews;
	NSArray* _timestamps;
	UIMovieScrubberTrackOverlayView* _overlayView;
	UIView* _maskContainerView;
	CGSize _thumbnailSize;
	float _zoomOriginXDelta;
	float _zoomWidthDelta;
	float _unclampedZoomWidthDelta;
	float _zoomAnimationDuration;
	double _duration;
	double _value;
	double _startValue;
	double _endValue;
	struct {
		unsigned delegateSizeOriginDelta : 1;
		unsigned delegateDidExpand : 1;
		unsigned delegateDidCollapse : 1;
		unsigned delegateWillRequestThumbs : 1;
		unsigned delegateDidRequestThumbs : 1;
		unsigned delegateZoomAnimationDuration : 1;
		unsigned delegateZoomAnimationDelay : 1;
		unsigned needsReload : 1;
		unsigned editing : 1;
		unsigned editingHandle;
		unsigned zoomIsDisabled : 1;
	}  _trackFlags;
	id<UIMovieScrubberTrackViewDataSource> _dataSource;
	id<UIMovieScrubberTrackViewDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<UIMovieScrubberTrackViewDataSource> dataSource;              //@synthesize dataSource=_dataSource - In the implementation block
@property (assign,nonatomic,__weak) id<UIMovieScrubberTrackViewDelegate> delegate;                  //@synthesize delegate=_delegate - In the implementation block
-(void)clear;
-(id<UIMovieScrubberTrackViewDelegate>)delegate;
-(void)setDelegate:(id<UIMovieScrubberTrackViewDelegate>)arg1 ;
-(void)setValue:(double)arg1 ;
-(id<UIMovieScrubberTrackViewDataSource>)dataSource;
-(void)setDataSource:(id<UIMovieScrubberTrackViewDataSource>)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)reloadData;
-(void)setEditing:(BOOL)arg1 ;
-(void)animateFillFramesAway;
-(void)setStartValue:(double)arg1 ;
-(void)setEndValue:(double)arg1 ;
-(void)setZoomAnimationDuration:(double)arg1 ;
-(void)unzoom;
-(BOOL)zoomAtPoint:(CGPoint)arg1 ;
-(void)setThumbnailImage:(CGImageRef)arg1 forTimestamp:(id)arg2 ;
-(double)zoomAnimationDuration;
-(id)_createImageViewForTimestamp:(id)arg1 isSummaryThumbnail:(BOOL)arg2 ;
-(void)_reallyReloadData;
-(void)_zoomAnimationDidFinish;
-(void)_setOverlayViewIsZoomed:(BOOL)arg1 minValue:(float)arg2 maxValue:(float)arg3 ;
-(void)_unzoomAnimationDidFinish;
@end

