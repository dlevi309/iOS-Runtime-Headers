/*
* Generated on Thursday, January 14, 2021 at 2:24:08 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
*/

#import <HomeUI/HomeUI-Structs.h>
#import <UIKitCore/UIView.h>

@protocol HUPieProgressViewDelegate;
@class CAShapeLayer;

@interface HUPieProgressView : UIView {

	BOOL _hidesWhenStopped;
	BOOL _isAnimating;
	id<HUPieProgressViewDelegate> _delegate;
	long long _style;
	double _indeterminateMaxProgress;
	double _indeterminateExpectedDuration;
	double _progressLineWidth;
	CAShapeLayer* _outlineLayer;
	CAShapeLayer* _progressLayer;

}

@property (nonatomic,retain) CAShapeLayer * outlineLayer;                                //@synthesize outlineLayer=_outlineLayer - In the implementation block
@property (nonatomic,retain) CAShapeLayer * progressLayer;                               //@synthesize progressLayer=_progressLayer - In the implementation block
@property (assign,nonatomic) BOOL isAnimating;                                           //@synthesize isAnimating=_isAnimating - In the implementation block
@property (assign,nonatomic) double progress; 
@property (assign,nonatomic,__weak) id<HUPieProgressViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) long long style;                                            //@synthesize style=_style - In the implementation block
@property (assign,nonatomic) double indeterminateMaxProgress;                            //@synthesize indeterminateMaxProgress=_indeterminateMaxProgress - In the implementation block
@property (assign,nonatomic) double indeterminateExpectedDuration;                       //@synthesize indeterminateExpectedDuration=_indeterminateExpectedDuration - In the implementation block
@property (assign,nonatomic) double outlineLineWidth; 
@property (assign,nonatomic) double progressLineWidth;                                   //@synthesize progressLineWidth=_progressLineWidth - In the implementation block
@property (assign,nonatomic) BOOL hidesWhenStopped;                                      //@synthesize hidesWhenStopped=_hidesWhenStopped - In the implementation block
-(void)tintColorDidChange;
-(void)resetProgress;
-(id)initWithFrame:(CGRect)arg1 ;
-(double)progress;
-(id)init;
-(id)initWithFrame:(CGRect)arg1 style:(long long)arg2 ;
-(id<HUPieProgressViewDelegate>)delegate;
-(id)initWithStyle:(long long)arg1 ;
-(void)setIsAnimating:(BOOL)arg1 ;
-(void)_fadeOut;
-(void)setHidesWhenStopped:(BOOL)arg1 ;
-(void)setDelegate:(id<HUPieProgressViewDelegate>)arg1 ;
-(BOOL)hidesWhenStopped;
-(void)layoutSubviews;
-(void)_fadeIn;
-(CAShapeLayer *)progressLayer;
-(void)setProgressLayer:(CAShapeLayer *)arg1 ;
-(void)setProgress:(double)arg1 ;
-(void)setProgressLineWidth:(double)arg1 ;
-(void)setStyle:(long long)arg1 ;
-(BOOL)isAnimating;
-(long long)style;
-(double)progressLineWidth;
-(double)indeterminateMaxProgress;
-(double)indeterminateExpectedDuration;
-(void)_updateLayerPaths;
-(CAShapeLayer *)outlineLayer;
-(id)_setupOutlineLayer;
-(void)setOutlineLayer:(CAShapeLayer *)arg1 ;
-(id)_setupProgressLayer;
-(void)_setDefaults;
-(void)setIndeterminateMaxProgress:(double)arg1 ;
-(void)setIndeterminateExpectedDuration:(double)arg1 ;
-(void)setOutlineLineWidth:(double)arg1 ;
-(void)_updateProgressLayerLineWidth;
-(void)startWithFuture:(id)arg1 ;
-(double)outlineLineWidth;
@end

