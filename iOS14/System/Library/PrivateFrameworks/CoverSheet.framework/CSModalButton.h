/*
* Generated on Thursday, January 14, 2021 at 2:26:03 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoverSheet.framework/CoverSheet
*/

#import <CoverSheet/CoverSheet-Structs.h>
#import <UIKitCore/UIButton.h>

@class UIColor, UIVisualEffectView, UIVisualEffect;

@interface CSModalButton : UIButton {

	UIColor* _backgroundColor;
	UIVisualEffectView* _effectView;
	BOOL _isPressed;

}

@property (nonatomic,retain) UIVisualEffect * visualEffect; 
-(void)setVisualEffect:(UIVisualEffect *)arg1 ;
-(UIVisualEffect *)visualEffect;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)_setContinuousCornerRadius:(double)arg1 ;
-(void)setBackgroundColor:(id)arg1 ;
-(id)backgroundColor;
-(void)layoutSubviews;
-(void)_buttonPressed:(id)arg1 ;
-(void)_buttonReleased:(id)arg1 ;
@end

