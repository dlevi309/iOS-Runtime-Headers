/*
* Generated on Thursday, January 14, 2021 at 2:24:22 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SiriUI.framework/SiriUI
*/

#import <SiriUI/SiriUI-Structs.h>
#import <UIKitCore/UIView.h>

@class SiriUIContentLabel, UIView, NSString, UIFont, UIColor;

@interface SiriUITextContainerView : UIView {

	SiriUIContentLabel* _label;
	UIView* _containerView;
	SCD_Struct_Si10 _textContainerStyle;

}

@property (nonatomic,copy) NSString * text; 
@property (nonatomic,retain) UIFont * font; 
@property (assign,nonatomic) long long textAlignment; 
@property (nonatomic,retain) UIColor * textColor; 
@property (assign,nonatomic) SCD_Struct_Si6 textContainerStyle;              //@synthesize textContainerStyle=_textContainerStyle - In the implementation block
+(CGSize)sizeThatFits:(CGSize)arg1 text:(id)arg2 font:(id)arg3 textContainerStyle:(SCD_Struct_Si6)arg4 ;
+(CGRect)_textBoundingRectWithSize:(CGSize)arg1 text:(id)arg2 font:(id)arg3 textContainerStyle:(SCD_Struct_Si6)arg4 ;
+(double)_distanceFromBaselineToBottomWithFont:(id)arg1 textContainerStyle:(SCD_Struct_Si6)arg2 ;
+(double)_distanceFromTopToBaselineWithFont:(id)arg1 textContainerStyle:(SCD_Struct_Si6)arg2 ;
-(id)initWithText:(id)arg1 ;
-(UIColor *)textColor;
-(void)setFont:(UIFont *)arg1 ;
-(void)setText:(NSString *)arg1 ;
-(long long)textAlignment;
-(void)setTextColor:(UIColor *)arg1 ;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(NSString *)text;
-(void)setTextAlignment:(long long)arg1 ;
-(UIFont *)font;
-(void)setTextContainerStyle:(SCD_Struct_Si6)arg1 ;
-(id)initWithText:(id)arg1 visualEffect:(id)arg2 ;
-(SCD_Struct_Si6)textContainerStyle;
@end

