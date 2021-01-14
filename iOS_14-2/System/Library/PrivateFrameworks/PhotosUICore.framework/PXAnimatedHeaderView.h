/*
* Generated on Thursday, January 14, 2021 at 2:22:38 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/

#import <PhotosUICore/PhotosUICore-Structs.h>
#import <UIKitCore/UIView.h>

@class UIFont, NSString, PXAnimatedLabel, CAGradientLayer;

@interface PXAnimatedHeaderView : UIView {

	UIFont* _font;
	NSString* _text;
	PXAnimatedLabel* _currentLabel;
	PXAnimatedLabel* _sizingLabel;
	CAGradientLayer* _gradientLayer;

}

@property (retain) PXAnimatedLabel * currentLabel;               //@synthesize currentLabel=_currentLabel - In the implementation block
@property (retain) PXAnimatedLabel * sizingLabel;                //@synthesize sizingLabel=_sizingLabel - In the implementation block
@property (retain) CAGradientLayer * gradientLayer;              //@synthesize gradientLayer=_gradientLayer - In the implementation block
@property (nonatomic,retain) UIFont * font;                      //@synthesize font=_font - In the implementation block
@property (nonatomic,retain) NSString * text;                    //@synthesize text=_text - In the implementation block
-(CAGradientLayer *)gradientLayer;
-(CGSize)intrinsicContentSize;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setFont:(UIFont *)arg1 ;
-(void)setText:(NSString *)arg1 ;
-(void)setText:(id)arg1 withAnimationStyle:(long long)arg2 ;
-(void)setText:(id)arg1 withAnimationStyle:(long long)arg2 spinDigits:(BOOL)arg3 ;
-(BOOL)_requiresLabelSwitchForNewText:(id)arg1 ;
-(id)_labelWithText:(id)arg1 ;
-(BOOL)_requiresDigitAnimationForNewText:(id)arg1 ;
-(void)_updateSizingWithText:(id)arg1 ;
-(void)_animateLabelSwitchFromLabel:(id)arg1 toLabel:(id)arg2 andAnimationStyle:(long long)arg3 completionBlock:(/*^block*/id)arg4 ;
-(PXAnimatedLabel *)currentLabel;
-(void)setCurrentLabel:(PXAnimatedLabel *)arg1 ;
-(PXAnimatedLabel *)sizingLabel;
-(void)setSizingLabel:(PXAnimatedLabel *)arg1 ;
-(void)commonInit;
-(void)layoutSubviews;
-(NSString *)text;
-(id)initWithCoder:(id)arg1 ;
-(void)setGradientLayer:(CAGradientLayer *)arg1 ;
-(UIFont *)font;
@end

