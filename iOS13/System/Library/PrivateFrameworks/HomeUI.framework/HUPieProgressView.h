/*
* Generated on Monday, March 1, 2021 at 2:34:57 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)init;
-(id<HUPieProgressViewDelegate>)delegate;
-(void)setDelegate:(id<HUPieProgressViewDelegate>)arg1 ;
-(double)progress;
-(long long)style;
-(void)setStyle:(long long)arg1 ;
-(void)setProgress:(double)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(id)initWithStyle:(long long)arg1 ;
-(void)tintColorDidChange;
-(BOOL)isAnimating;
-(id)initWithFrame:(CGRect)arg1 style:(long long)arg2 ;
-(void)setProgressLineWidth:(double)arg1 ;
-(double)progressLineWidth;
-(void)setHidesWhenStopped:(BOOL)arg1 ;
-(BOOL)hidesWhenStopped;
-(void)_fadeOut;
-(void)setOutlineLayer:(CAShapeLayer *)arg1 ;
-(CAShapeLayer *)outlineLayer;
-(void)setIsAnimating:(BOOL)arg1 ;
-(void)resetProgress;
-(CAShapeLayer *)progressLayer;
-(void)setProgressLayer:(CAShapeLayer *)arg1 ;
-(void)_fadeIn;
-(double)indeterminateMaxProgress;
-(double)indeterminateExpectedDuration;
-(void)_updateLayerPaths;
-(id)_setupOutlineLayer;
-(id)_setupProgressLayer;
-(void)_setDefaults;
-(void)setIndeterminateMaxProgress:(double)arg1 ;
-(void)setIndeterminateExpectedDuration:(double)arg1 ;
-(void)setOutlineLineWidth:(double)arg1 ;
-(void)_updateProgressLayerLineWidth;
-(void)startWithFuture:(id)arg1 ;
-(double)outlineLineWidth;
@end

