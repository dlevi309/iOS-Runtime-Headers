/*
* Generated on Monday, March 1, 2021 at 2:31:41 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/AVKit.framework/AVKit
*/

#import <UIKitCore/UIView.h>

@class AVStatusBarBackgroundGradientViewSubview, CABackdropLayer;

@interface AVStatusBarBackgroundGradientView : UIView {

	AVStatusBarBackgroundGradientViewSubview* _gradientView;

}

@property (nonatomic,readonly) CABackdropLayer * layer; 
@property (nonatomic,retain) AVStatusBarBackgroundGradientViewSubview * gradientView;              //@synthesize gradientView=_gradientView - In the implementation block
+(Class)layerClass;
-(double)alpha;
-(void)setAlpha:(double)arg1 ;
-(void)layoutSubviews;
-(AVStatusBarBackgroundGradientViewSubview *)gradientView;
-(void)setGradientView:(AVStatusBarBackgroundGradientViewSubview *)arg1 ;
@end

