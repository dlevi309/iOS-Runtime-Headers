/*
* Generated on Thursday, January 14, 2021 at 2:20:33 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIStatusBarAnimationParameters.h>

@interface UIStatusBarHideAnimationParameters : UIStatusBarAnimationParameters {

	int _hideAnimation;
	double _additionalSlideHeight;

}

@property (assign,nonatomic) int hideAnimation;                         //@synthesize hideAnimation=_hideAnimation - In the implementation block
@property (assign,nonatomic) double additionalSlideHeight;              //@synthesize additionalSlideHeight=_additionalSlideHeight - In the implementation block
-(id)initWithDefaultParameters;
-(void)setAdditionalSlideHeight:(double)arg1 ;
-(BOOL)shouldAnimate;
-(double)additionalSlideHeight;
-(int)hideAnimation;
-(void)setHideAnimation:(int)arg1 ;
@end

