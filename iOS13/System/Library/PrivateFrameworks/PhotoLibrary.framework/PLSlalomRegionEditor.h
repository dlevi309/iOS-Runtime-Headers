/*
* Generated on Monday, March 1, 2021 at 2:32:52 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
*/

#import <PhotoLibrary/PhotoLibrary-Structs.h>
#import <UIKitCore/UIControl.h>

@protocol PLSlalomRegionEditorDelegate;
@class UIImageView;

@interface PLSlalomRegionEditor : UIControl {

	UIImageView* _startHandleView;
	UIImageView* _endHandleView;
	UIImageView* _trackImageView;
	UIImageView* _trackSnapshotView;
	BOOL _draggingStart;
	BOOL _draggingEnd;
	double _touchOffset;
	BOOL _zoomed;
	BOOL _trackingZoom;
	CGPoint _touchLocationWhenTrackingZoomBegan;
	BOOL _forceLayout;
	double _zoomMinValue;
	double _zoomMaxValue;
	BOOL _zoomAnimating;
	id<PLSlalomRegionEditorDelegate> _delegate;
	double _trimHandleWidth;
	unsigned long long _regionEditorStyle;
	double _minValue;
	double _maxValue;
	double _startValue;
	double _endValue;
	double _zoomDelay;
	UIEdgeInsets _trackInsets;

}

@property (assign,nonatomic) id<PLSlalomRegionEditorDelegate> delegate;                                       //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) UIEdgeInsets trackInsets;                                                        //@synthesize trackInsets=_trackInsets - In the implementation block
@property (assign,nonatomic) double trimHandleWidth;                                                          //@synthesize trimHandleWidth=_trimHandleWidth - In the implementation block
@property (assign,nonatomic) unsigned long long regionEditorStyle;                                            //@synthesize regionEditorStyle=_regionEditorStyle - In the implementation block
@property (assign,nonatomic) double minValue;                                                                 //@synthesize minValue=_minValue - In the implementation block
@property (assign,nonatomic) double maxValue;                                                                 //@synthesize maxValue=_maxValue - In the implementation block
@property (assign,nonatomic) double startValue;                                                               //@synthesize startValue=_startValue - In the implementation block
@property (assign,nonatomic) double endValue;                                                                 //@synthesize endValue=_endValue - In the implementation block
@property (assign,nonatomic) double zoomDelay;                                                                //@synthesize zoomDelay=_zoomDelay - In the implementation block
@property (assign,setter=setZoomAnimating:,getter=isZoomAnimating,nonatomic) BOOL zoomAnimating;              //@synthesize zoomAnimating=_zoomAnimating - In the implementation block
@property (nonatomic,readonly) CGRect startHandleFrame; 
@property (nonatomic,readonly) CGRect endHandleFrame; 
-(void)setEnabled:(BOOL)arg1 ;
-(id<PLSlalomRegionEditorDelegate>)delegate;
-(void)setDelegate:(id<PLSlalomRegionEditorDelegate>)arg1 ;
-(CGSize)intrinsicContentSize;
-(id)initWithFrame:(CGRect)arg1 ;
-(BOOL)gestureRecognizerShouldBegin:(id)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)layoutSubviews;
-(BOOL)beginTrackingWithTouch:(id)arg1 withEvent:(id)arg2 ;
-(void)cancelTrackingWithEvent:(id)arg1 ;
-(BOOL)continueTrackingWithTouch:(id)arg1 withEvent:(id)arg2 ;
-(void)endTrackingWithTouch:(id)arg1 withEvent:(id)arg2 ;
-(void)setStartValue:(double)arg1 ;
-(void)setEndValue:(double)arg1 ;
-(BOOL)isZoomAnimating;
-(double)zoomDelay;
-(void)setZoomDelay:(double)arg1 ;
-(CGRect)_trackFrame;
-(double)maxValue;
-(void)setMaxValue:(double)arg1 ;
-(double)minValue;
-(void)setMinValue:(double)arg1 ;
-(BOOL)_isZoomed;
-(double)startValue;
-(double)_zoomMinValue;
-(double)_zoomMaxValue;
-(double)_trimHandleWidth;
-(void)setTrackInsets:(UIEdgeInsets)arg1 ;
-(void)setStartValue:(double)arg1 notify:(BOOL)arg2 ;
-(void)setEndValue:(double)arg1 notify:(BOOL)arg2 ;
-(void)setZoomMinValue:(double)arg1 maxValue:(double)arg2 ;
-(void)setZoomAnimating:(BOOL)arg1 ;
-(void)setRegionEditorStyle:(unsigned long long)arg1 ;
-(CGRect)startHandleFrame;
-(CGRect)endHandleFrame;
-(double)_valueFromStartHandleFrame:(CGRect)arg1 ;
-(double)_valueFromEndHandleFrame:(CGRect)arg1 ;
-(CGRect)_trackFrameNoZoom;
-(double)_trackScale;
-(CGRect)_handleFrameForValue:(double)arg1 isStart:(BOOL)arg2 ;
-(double)_valueFromHandleFrame:(CGRect)arg1 isStart:(BOOL)arg2 ;
-(BOOL)_isTouch:(id)arg1 inHandleIsStart:(BOOL)arg2 outTouchOffset:(double*)arg3 ;
-(void)_stopTrackingAndSendControlEvents:(unsigned long long)arg1 ;
-(void)_updateSlidersWithTouch:(id)arg1 ;
-(void)_beginTrackingZoomWithTouch:(id)arg1 ;
-(void)_cancelZoomTrackingIfNeccessaryWithTouch:(id)arg1 ;
-(void)_cancelTrackingZoom;
-(void)_zoomPressWasHeld;
-(void)_cancelZoom;
-(void)_updateTrack;
-(id)_trackImageForZoom:(BOOL)arg1 ;
-(id)_tickColor;
-(id)_trackColor;
-(id)_handleTintColor;
-(void)_drawCurveWithFlatEndsFromX:(double)arg1 fromY:(double)arg2 toX:(double)arg3 toY:(double)arg4 ;
-(id)_handleImage;
-(UIEdgeInsets)trackInsets;
-(double)trimHandleWidth;
-(void)setTrimHandleWidth:(double)arg1 ;
-(unsigned long long)regionEditorStyle;
-(double)endValue;
@end

