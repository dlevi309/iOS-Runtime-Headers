/*
* Generated on Monday, March 1, 2021 at 2:35:17 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SlideshowKit.framework/Frameworks/OpusKit.framework/OpusKit
*/

#import <OpusKit/OpusKit-Structs.h>
#import <UIKitCore/UIView.h>

@class CAShapeLayer, NSTimer, NSDate, OKProgressArcLayer;

@interface OKRoundProgressView : UIView {

	CAShapeLayer* _sliceLayer;
	CAShapeLayer* _circleLayer;
	CGPoint _pieCenter;
	double _pieRadius;
	NSTimer* _progressTimer;
	double _uiProgress;
	double _realProgress;
	double _increaseRate;
	NSDate* _prevUpdateTime;
	OKProgressArcLayer* __progressArcLayer;
	double __contentsScale;
	double _progress;
	long long _style;

}

@property (setter=_setProgressArcLayer:,nonatomic,retain) OKProgressArcLayer * _progressArcLayer;              //@synthesize _progressArcLayer=__progressArcLayer - In the implementation block
@property (assign,setter=_setContentsScale:,nonatomic) double _contentsScale;                                  //@synthesize _contentsScale=__contentsScale - In the implementation block
@property (nonatomic,readonly) long long style;                                                                //@synthesize style=_style - In the implementation block
@property (assign,nonatomic) double progress;                                                                  //@synthesize progress=_progress - In the implementation block
-(void)dealloc;
-(double)progress;
-(long long)style;
-(void)setProgress:(double)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)didMoveToWindow;
-(id)initWithFrame:(CGRect)arg1 style:(long long)arg2 ;
-(void)_setupSubviews;
-(double)_contentsScale;
-(void)resetProgress;
-(void)setPieRadius:(double)arg1 ;
-(void)_updateUIProgress;
-(void)increaseUIProgress:(id)arg1 ;
-(void)stopProgressTimer;
-(double)toRadian:(double)arg1 ;
-(void)startProgressTimer;
-(void)recalculateIncreaseProgress:(double)arg1 withTimeDiff:(double)arg2 ;
-(void)_setContentsScale:(double)arg1 ;
-(void)_setProgressArcLayer:(id)arg1 ;
-(void)_updateSublayersContentsScale;
-(void)setInitialIncreaseRatePerFrame:(double)arg1 ;
-(OKProgressArcLayer *)_progressArcLayer;
@end

