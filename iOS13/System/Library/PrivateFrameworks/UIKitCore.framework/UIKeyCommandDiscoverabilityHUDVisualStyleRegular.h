/*
* Generated on Monday, March 1, 2021 at 2:30:18 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)init;
-(UIColor *)inputColor;
-(void)setInputColor:(UIColor *)arg1 ;
-(UIColor *)titleColor;
-(void)setTitleColor:(UIColor *)arg1 ;
-(UIColor *)dividerColor;
-(id)summaryFont;
-(double)summaryXPadding;
-(double)summaryYPadding;
-(double)summaryLineHeight;
-(double)summaryLineSpacing;
-(double)summaryModifiersSpacing;
-(double)summaryDescriptionToModifiersSpacing;
-(double)minimumFontScaleBeforeTruncation;
-(double)maxHUDWidthForWidth:(double)arg1 ;
-(double)maxHUDHeightForHeight:(double)arg1 ;
-(UIEdgeInsets)HUDViewInsets;
-(double)columnDividerWidth;
-(double)HUDPageControlBottomMargin;
-(double)columnDividerHeightForHUDHeight:(double)arg1 ;
-(void)setDividerColor:(UIColor *)arg1 ;
@end

