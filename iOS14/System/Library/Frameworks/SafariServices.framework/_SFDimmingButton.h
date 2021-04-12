/*
* Generated on Thursday, January 14, 2021 at 2:23:56 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/SafariServices.framework/SafariServices
*/

#import <SafariServices/SafariServices-Structs.h>
#import <UIKitCore/UIButton.h>

@class UIColor, NSNumber;

@interface _SFDimmingButton : UIButton {

	UIColor* _cachedDimmedBackgroundColor;
	double _normalImageAlpha;
	double _highlightedImageAlpha;
	double _highlightAnimationDuration;
	UIColor* _dimmableBackgroundColor;
	NSNumber* _tapTargetSideMargin;

}

@property (assign,nonatomic) double normalImageAlpha;                        //@synthesize normalImageAlpha=_normalImageAlpha - In the implementation block
@property (assign,nonatomic) double highlightedImageAlpha;                   //@synthesize highlightedImageAlpha=_highlightedImageAlpha - In the implementation block
@property (assign,nonatomic) double highlightAnimationDuration;              //@synthesize highlightAnimationDuration=_highlightAnimationDuration - In the implementation block
@property (nonatomic,retain) UIColor * dimmableBackgroundColor;              //@synthesize dimmableBackgroundColor=_dimmableBackgroundColor - In the implementation block
@property (nonatomic,retain) NSNumber * tapTargetSideMargin;                 //@synthesize tapTargetSideMargin=_tapTargetSideMargin - In the implementation block
-(void)_updateBackgroundColor;
-(void)setDimmableBackgroundColor:(UIColor *)arg1 ;
-(UIColor *)dimmableBackgroundColor;
-(BOOL)pointInside:(CGPoint)arg1 withEvent:(id)arg2 ;
-(double)normalImageAlpha;
-(double)highlightAnimationDuration;
-(void)layoutSubviews;
-(void)setHighlightedImageAlpha:(double)arg1 ;
-(void)_updateImageAlpha;
-(void)setTapTargetSideMargin:(NSNumber *)arg1 ;
-(NSNumber *)tapTargetSideMargin;
-(double)highlightedImageAlpha;
-(void)setHighlightAnimationDuration:(double)arg1 ;
-(void)setNormalImageAlpha:(double)arg1 ;
-(void)setHighlighted:(BOOL)arg1 ;
@end

