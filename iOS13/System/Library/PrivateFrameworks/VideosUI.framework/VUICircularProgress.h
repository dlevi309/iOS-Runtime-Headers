/*
* Generated on Monday, March 1, 2021 at 2:35:27 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)dealloc;
-(double)progress;
-(BOOL)isIndeterminate;
-(void)setIndeterminate:(BOOL)arg1 ;
-(void)setProgress:(double)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)layoutSubviews;
-(void)didMoveToWindow;
-(void)_applicationWillEnterForeground:(id)arg1 ;
-(void)_startIndeterminateAnimation;
-(CAShapeLayer *)progressLayer;
-(void)setProgressLayer:(CAShapeLayer *)arg1 ;
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

