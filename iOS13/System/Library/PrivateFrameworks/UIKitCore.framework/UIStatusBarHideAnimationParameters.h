/*
* Generated on Monday, March 1, 2021 at 2:30:20 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(int)hideAnimation;
-(void)setHideAnimation:(int)arg1 ;
-(BOOL)shouldAnimate;
-(double)additionalSlideHeight;
-(void)setAdditionalSlideHeight:(double)arg1 ;
@end

