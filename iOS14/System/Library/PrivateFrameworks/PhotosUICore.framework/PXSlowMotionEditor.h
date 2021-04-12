/*
* Generated on Thursday, January 14, 2021 at 2:22:40 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/

#import <PhotosUICore/PhotosUICore-Structs.h>
#import <UIKitCore/UIView.h>

@protocol PXSlowMotionEditorDelegate;
@class UIImageView;

@interface PXSlowMotionEditor : UIView {

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
	id<PXSlowMotionEditorDelegate> _delegate;
	double _trimHandleWidth;
	unsigned long long _regionEditorStyle;
	double _minValue;
	double _maxValue;
	double _startValue;
	double _endValue;
	double _zoomDelay;
	UIEdgeInsets _trackInsets;

}

@property (assign,nonatomic,__weak) id<PXSlowMotionEditorDelegate> delegate;                                  //@synthesize delegate=_delegate - In the implementation block
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
+(id)handleImage;
-(void)setMaxValue:(double)arg1 ;
-(void)setEndValue:(double)arg1 ;
-(CGSize)intrinsicContentSize;
-(id)initWithFrame:(CGRect)arg1 ;
-(double)zoomDelay;
-(id<PXSlowMotionEditorDelegate>)delegate;
-(BOOL)isZoomAnimating;
-(void)setDelegate:(id<PXSlowMotionEditorDelegate>)arg1 ;
-(double)endValue;
-(void)layoutSubviews;
-(id)_tickColor;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)setMinValue:(double)arg1 ;
-(double)_trackScale;
-(CGRect)endHandleFrame;
-(CGRect)startHandleFrame;
-(void)setZoomMinValue:(double)arg1 maxValue:(double)arg2 ;
-(void)setTrimHandleWidth:(double)arg1 ;
-(void)setRegionEditorStyle:(unsigned long long)arg1 ;
-(CGRect)_trackFrame;
-(void)setStartValue:(double)arg1 ;
-(double)_zoomMinValue;
-(double)_zoomMaxValue;
-(double)_trimHandleWidth;
-(void)setTrackInsets:(UIEdgeInsets)arg1 ;
-(void)setStartValue:(double)arg1 notify:(BOOL)arg2 ;
-(void)setEndValue:(double)arg1 notify:(BOOL)arg2 ;
-(void)setZoomAnimating:(BOOL)arg1 ;
-(double)_valueFromStartHandleFrame:(CGRect)arg1 ;
-(double)_valueFromEndHandleFrame:(CGRect)arg1 ;
-(CGRect)_trackFrameNoZoom;
-(CGRect)_handleFrameForValue:(double)arg1 isStart:(BOOL)arg2 ;
-(void)_cancelTrackingZoom;
-(double)_valueFromHandleFrame:(CGRect)arg1 isStart:(BOOL)arg2 ;
-(BOOL)_isPoint:(CGPoint)arg1 inHandleIsStart:(BOOL)arg2 outTouchOffset:(double*)arg3 ;
-(void)handleBeginTrackingAtLocation:(CGPoint)arg1 ;
-(void)handleChangeTrackingAtLocation:(CGPoint)arg1 ;
-(void)handleEndTrackingAtLocation:(CGPoint)arg1 ;
-(void)_updateSlidersWithPoint:(CGPoint)arg1 ;
-(void)_beginTrackingZoomWithPoint:(CGPoint)arg1 ;
-(void)_cancelZoomTrackingIfNeccessaryWithPoint:(CGPoint)arg1 ;
-(void)_zoomPressWasHeld;
-(void)_cancelZoom;
-(void)_updateTrack;
-(id)_trackImageForZoom:(BOOL)arg1 ;
-(id)_trackColor;
-(id)_handleTintColor;
-(void)_drawCurveWithFlatEndsFromX:(double)arg1 fromY:(double)arg2 toX:(double)arg3 toY:(double)arg4 ;
-(UIEdgeInsets)trackInsets;
-(double)trimHandleWidth;
-(unsigned long long)regionEditorStyle;
-(double)startValue;
-(void)setZoomDelay:(double)arg1 ;
-(double)maxValue;
-(BOOL)_isZoomed;
-(double)minValue;
@end

