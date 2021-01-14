/*
* Generated on Thursday, January 14, 2021 at 2:23:07 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)layoutSubviews;
-(AVStatusBarBackgroundGradientViewSubview *)gradientView;
-(void)setGradientView:(AVStatusBarBackgroundGradientViewSubview *)arg1 ;
-(void)setAlpha:(double)arg1 ;
@end

