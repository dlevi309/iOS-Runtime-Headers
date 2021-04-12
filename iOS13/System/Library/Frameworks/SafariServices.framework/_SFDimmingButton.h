/*
* Generated on Monday, March 1, 2021 at 2:31:46 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/SafariServices.framework/SafariServices
*/

#import <UIKitCore/UIButton.h>

@interface _SFDimmingButton : UIButton {

	double _normalImageAlpha;
	double _highlightedImageAlpha;
	double _highlightAnimationDuration;

}

@property (assign,nonatomic) double normalImageAlpha;                        //@synthesize normalImageAlpha=_normalImageAlpha - In the implementation block
@property (assign,nonatomic) double highlightedImageAlpha;                   //@synthesize highlightedImageAlpha=_highlightedImageAlpha - In the implementation block
@property (assign,nonatomic) double highlightAnimationDuration;              //@synthesize highlightAnimationDuration=_highlightAnimationDuration - In the implementation block
-(void)layoutSubviews;
-(void)setHighlighted:(BOOL)arg1 ;
-(void)setNormalImageAlpha:(double)arg1 ;
-(void)setHighlightedImageAlpha:(double)arg1 ;
-(void)setHighlightAnimationDuration:(double)arg1 ;
-(void)_updateImageAlpha;
-(double)normalImageAlpha;
-(double)highlightedImageAlpha;
-(double)highlightAnimationDuration;
@end

