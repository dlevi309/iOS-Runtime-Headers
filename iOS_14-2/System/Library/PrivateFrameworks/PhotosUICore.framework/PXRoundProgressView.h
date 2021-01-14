/*
* Generated on Thursday, January 14, 2021 at 2:22:40 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/

#import <PhotosUICore/PhotosUICore-Structs.h>
#import <UIKitCore/UIView.h>

@class NSTimer, NSDate, UIView, CAShapeLayer, PXProgressArcLayer, CALayer;

@interface PXRoundProgressView : UIView {

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
	PXProgressArcLayer* __progressArcLayer;
	CALayer* __irisGlyphLayer;
	double __contentsScale;

}

@property (setter=_setContentView:,nonatomic,retain) UIView * _contentView;                                    //@synthesize _contentView=__contentView - In the implementation block
@property (setter=_setSliceLayer:,nonatomic,retain) CAShapeLayer * _sliceLayer;                                //@synthesize _sliceLayer=__sliceLayer - In the implementation block
@property (setter=_setCircleLayer:,nonatomic,retain) CAShapeLayer * _circleLayer;                              //@synthesize _circleLayer=__circleLayer - In the implementation block
@property (setter=_setProgressArcLayer:,nonatomic,retain) PXProgressArcLayer * _progressArcLayer;              //@synthesize _progressArcLayer=__progressArcLayer - In the implementation block
@property (setter=_setIrisGlyphLayer:,nonatomic,retain) CALayer * _irisGlyphLayer;                             //@synthesize _irisGlyphLayer=__irisGlyphLayer - In the implementation block
@property (assign,setter=_setContentsScale:,nonatomic) double _contentsScale;                                  //@synthesize _contentsScale=__contentsScale - In the implementation block
@property (assign,nonatomic) long long style;                                                                  //@synthesize style=_style - In the implementation block
@property (assign,nonatomic) double progress;                                                                  //@synthesize progress=_progress - In the implementation block
+(CGSize)smallSize;
+(double)toRadian:(double)arg1 ;
-(void)resetProgress;
-(void)startProgressTimer;
-(id)initWithFrame:(CGRect)arg1 ;
-(double)progress;
-(void)removeFromSuperview;
-(id)initWithFrame:(CGRect)arg1 style:(long long)arg2 ;
-(void)_setContentsScale:(double)arg1 ;
-(void)_setProgressArcLayer:(id)arg1 ;
-(void)_updateSublayersContentsScale;
-(void)_setPieRadius:(double)arg1 ;
-(void)stopProgressTimer;
-(void)increaseUIProgress:(id)arg1 ;
-(void)_updateUIProgress;
-(void)setInitialIncreaseRatePerFrame:(double)arg1 ;
-(void)_recalculateIncreaseProgress:(double)arg1 withTimeDiff:(double)arg2 ;
-(CAShapeLayer *)_sliceLayer;
-(void)_setSliceLayer:(id)arg1 ;
-(CAShapeLayer *)_circleLayer;
-(void)_setCircleLayer:(id)arg1 ;
-(PXProgressArcLayer *)_progressArcLayer;
-(CALayer *)_irisGlyphLayer;
-(void)_setIrisGlyphLayer:(id)arg1 ;
-(UIView *)_contentView;
-(void)layoutSubviews;
-(void)didMoveToWindow;
-(double)_contentsScale;
-(void)setProgress:(double)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setStyle:(long long)arg1 ;
-(void)_updateSubviews;
-(void)_setContentView:(id)arg1 ;
-(long long)style;
-(void)dealloc;
@end

