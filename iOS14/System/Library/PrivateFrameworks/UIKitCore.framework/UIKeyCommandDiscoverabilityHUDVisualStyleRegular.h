/*
* Generated on Thursday, January 14, 2021 at 2:20:31 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIKeyCommandDiscoverabilityHUDVisualStyle.h>

@class UIColor;

@interface UIKeyCommandDiscoverabilityHUDVisualStyleRegular : UIKeyCommandDiscoverabilityHUDVisualStyle {

	UIColor* _titleColor;
	UIColor* _inputColor;
	UIColor* _dividerColor;

}

@property (nonatomic,retain) UIColor * titleColor;                //@synthesize titleColor=_titleColor - In the implementation block
@property (nonatomic,retain) UIColor * inputColor;                //@synthesize inputColor=_inputColor - In the implementation block
@property (nonatomic,retain) UIColor * dividerColor;              //@synthesize dividerColor=_dividerColor - In the implementation block
-(UIColor *)titleColor;
-(id)init;
-(UIColor *)dividerColor;
-(UIColor *)inputColor;
-(UIEdgeInsets)HUDViewInsets;
-(double)summaryXPadding;
-(double)summaryYPadding;
-(double)summaryLineHeight;
-(double)summaryLineSpacing;
-(double)summaryModifiersSpacing;
-(double)summaryDescriptionToModifiersSpacing;
-(double)columnDividerWidth;
-(double)minimumFontScaleBeforeTruncation;
-(double)maxHUDWidthForWidth:(double)arg1 ;
-(double)maxHUDHeightForHeight:(double)arg1 ;
-(double)HUDPageControlBottomMargin;
-(double)columnDividerHeightForHUDHeight:(double)arg1 ;
-(void)setInputColor:(UIColor *)arg1 ;
-(void)setDividerColor:(UIColor *)arg1 ;
-(id)summaryFont;
-(void)setTitleColor:(UIColor *)arg1 ;
@end

