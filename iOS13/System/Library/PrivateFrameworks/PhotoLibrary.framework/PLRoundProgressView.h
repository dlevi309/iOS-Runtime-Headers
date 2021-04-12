/*
* Generated on Monday, March 1, 2021 at 2:32:52 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
*/

#import <PhotoLibrary/PhotoLibrary-Structs.h>
#import <UIKitCore/UIView.h>

@class NSTimer, NSDate, UIView, CAShapeLayer, PLProgressArcLayer, CALayer;

@interface PLRoundProgressView : UIView {

	CGPoint _pieCenter;
	double _pieRadius;
	NSTimer* _progressTimer;
	double _uiProgress;
	double _realProgress;
	double _increaseRate;
	NSDate* _prevUpdateTime;
	long long _style;
	double _progress;
	UIView* __contentView;
	CAShapeLayer* __sliceLayer;
	CAShapeLayer* __circleLayer;
	PLProgressArcLayer* __progressArcLayer;
	CALayer* __irisGlyphLayer;
	double __contentsScale;

}

@property (setter=_setContentView:,nonatomic,retain) UIView * _contentView;                                    //@synthesize _contentView=__contentView - In the implementation block
@property (setter=_setSliceLayer:,nonatomic,retain) CAShapeLayer * _sliceLayer;                                //@synthesize _sliceLayer=__sliceLayer - In the implementation block
@property (setter=_setCircleLayer:,nonatomic,retain) CAShapeLayer * _circleLayer;                              //@synthesize _circleLayer=__circleLayer - In the implementation block
@property (setter=_setProgressArcLayer:,nonatomic,retain) PLProgressArcLayer * _progressArcLayer;              //@synthesize _progressArcLayer=__progressArcLayer - In the implementation block
@property (setter=_setIrisGlyphLayer:,nonatomic,retain) CALayer * _irisGlyphLayer;                             //@synthesize _irisGlyphLayer=__irisGlyphLayer - In the implementation block
@property (assign,setter=_setContentsScale:,nonatomic) double _contentsScale;                                  //@synthesize _contentsScale=__contentsScale - In the implementation block
@property (nonatomic,readonly) long long style;                                                                //@synthesize style=_style - In the implementation block
@property (assign,nonatomic) double progress;                                                                  //@synthesize progress=_progress - In the implementation block
-(void)dealloc;
-(double)progress;
-(long long)style;
-(void)setProgress:(double)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(UIView *)_contentView;
-(void)layoutSubviews;
-(void)didMoveToWindow;
-(id)initWithFrame:(CGRect)arg1 style:(long long)arg2 ;
-(void)_updateSubviews;
-(void)_dynamicUserInterfaceTraitDidChange;
-(void)_setContentView:(id)arg1 ;
-(double)_contentsScale;
-(void)resetProgress;
-(void)setPieRadius:(double)arg1 ;
-(void)_updateUIProgress;
-(void)increaseUIProgress:(id)arg1 ;
-(void)stopProgressTimer;
-(double)toRadian:(double)arg1 ;
-(void)startProgressTimer;
-(void)recalculateIncreaseProgress:(double)arg1 withTimeDiff:(double)arg2 ;
-(CAShapeLayer *)_sliceLayer;
-(CAShapeLayer *)_circleLayer;
-(void)_setContentsScale:(double)arg1 ;
-(void)_setProgressArcLayer:(id)arg1 ;
-(void)_updateSublayersContentsScale;
-(void)setInitialIncreaseRatePerFrame:(double)arg1 ;
-(void)_setSliceLayer:(id)arg1 ;
-(void)_setCircleLayer:(id)arg1 ;
-(PLProgressArcLayer *)_progressArcLayer;
-(CALayer *)_irisGlyphLayer;
-(void)_setIrisGlyphLayer:(id)arg1 ;
@end

