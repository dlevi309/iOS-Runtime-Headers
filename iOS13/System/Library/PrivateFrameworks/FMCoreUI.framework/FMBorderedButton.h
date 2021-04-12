/*
* Generated on Monday, March 1, 2021 at 2:34:49 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/FMCoreUI.framework/FMCoreUI
*/

#import <FMCoreUI/FM_Workaround_30408319_Button.h>

@class UIColor;

@interface FMBorderedButton : FM_Workaround_30408319_Button {

	BOOL _hairlineBorder;
	UIColor* _borderColor;

}

@property (assign,nonatomic) BOOL hairlineBorder;                //@synthesize hairlineBorder=_hairlineBorder - In the implementation block
@property (assign,nonatomic) double borderWidth; 
@property (assign,nonatomic) double cornerRadius; 
@property (nonatomic,retain) UIColor * borderColor;              //@synthesize borderColor=_borderColor - In the implementation block
-(void)setEnabled:(BOOL)arg1 ;
-(void)setBorderColor:(UIColor *)arg1 ;
-(void)setCornerRadius:(double)arg1 ;
-(void)setHighlighted:(BOOL)arg1 ;
-(void)tintColorDidChange;
-(double)cornerRadius;
-(double)borderWidth;
-(void)setBorderWidth:(double)arg1 ;
-(void)awakeFromNib;
-(UIColor *)borderColor;
-(void)prepareForInterfaceBuilder;
-(void)setHairlineBorder:(BOOL)arg1 ;
-(BOOL)hairlineBorder;
-(void)_bbUpdateLayer;
@end

