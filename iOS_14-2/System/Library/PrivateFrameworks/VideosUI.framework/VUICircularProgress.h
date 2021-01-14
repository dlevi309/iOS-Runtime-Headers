/*
* Generated on Thursday, January 14, 2021 at 2:24:53 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
*/

#import <VideosUI/VideosUI-Structs.h>
#import <UIKitCore/UIView.h>

@class UIColor, CAShapeLayer;

@interface VUICircularProgress : UIView {

	BOOL _indeterminate;
	double _indeterminateWidth;
	UIColor* _progressFillColor;
	double _progress;
	double _centerSquareWidth;
	CAShapeLayer* _indeterminateLayer;
	CAShapeLayer* _centerLayer;
	CAShapeLayer* _progressLayer;
	CAShapeLayer* _progressBackgroundLayer;
	double _progressWidth;

}

@property (nonatomic,retain) CAShapeLayer * indeterminateLayer;                      //@synthesize indeterminateLayer=_indeterminateLayer - In the implementation block
@property (nonatomic,retain) CAShapeLayer * centerLayer;                             //@synthesize centerLayer=_centerLayer - In the implementation block
@property (nonatomic,retain) CAShapeLayer * progressLayer;                           //@synthesize progressLayer=_progressLayer - In the implementation block
@property (nonatomic,retain) CAShapeLayer * progressBackgroundLayer;                 //@synthesize progressBackgroundLayer=_progressBackgroundLayer - In the implementation block
@property (assign,nonatomic) double progressWidth;                                   //@synthesize progressWidth=_progressWidth - In the implementation block
@property (assign,nonatomic) double indeterminateWidth;                              //@synthesize indeterminateWidth=_indeterminateWidth - In the implementation block
@property (assign,getter=isIndeterminate,nonatomic) BOOL indeterminate;              //@synthesize indeterminate=_indeterminate - In the implementation block
@property (nonatomic,retain) UIColor * progressFillColor;                            //@synthesize progressFillColor=_progressFillColor - In the implementation block
@property (assign,nonatomic) double progress;                                        //@synthesize progress=_progress - In the implementation block
@property (assign,nonatomic) double centerSquareWidth;                               //@synthesize centerSquareWidth=_centerSquareWidth - In the implementation block
-(void)tintColorDidChange;
-(id)initWithFrame:(CGRect)arg1 ;
-(double)progress;
-(void)setIndeterminate:(BOOL)arg1 ;
-(void)_applicationWillEnterForeground:(id)arg1 ;
-(void)layoutSubviews;
-(CAShapeLayer *)progressLayer;
-(void)setProgressLayer:(CAShapeLayer *)arg1 ;
-(void)didMoveToWindow;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)setProgress:(double)arg1 ;
-(void)_startIndeterminateAnimation;
-(BOOL)isIndeterminate;
-(void)dealloc;
-(void)setProgressWidth:(double)arg1 ;
-(double)progressWidth;
-(CAShapeLayer *)centerLayer;
-(void)setCenterLayer:(CAShapeLayer *)arg1 ;
-(CGRect)_progressFrame;
-(CAShapeLayer *)progressBackgroundLayer;
-(id)_progressPath;
-(double)centerSquareWidth;
-(CAShapeLayer *)indeterminateLayer;
-(double)indeterminateWidth;
-(id)_indeterminatePath;
-(void)_configureProgress:(BOOL)arg1 ;
-(void)_addProgressLayer;
-(void)_addIndeterminateLayer;
-(void)_removeProgressLayer;
-(void)_removeIndeterminateLayer;
-(UIColor *)progressFillColor;
-(void)setProgressBackgroundLayer:(CAShapeLayer *)arg1 ;
-(void)setIndeterminateLayer:(CAShapeLayer *)arg1 ;
-(void)setIndeterminateWidth:(double)arg1 ;
-(void)setProgressFillColor:(UIColor *)arg1 ;
-(void)setCenterSquareWidth:(double)arg1 ;
@end

