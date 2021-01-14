/*
* Generated on Thursday, January 14, 2021 at 2:27:41 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)tintColorDidChange;
-(UIColor *)borderColor;
-(void)setEnabled:(BOOL)arg1 ;
-(double)cornerRadius;
-(double)borderWidth;
-(void)prepareForInterfaceBuilder;
-(void)awakeFromNib;
-(void)setCornerRadius:(double)arg1 ;
-(void)setBorderColor:(UIColor *)arg1 ;
-(void)setBorderWidth:(double)arg1 ;
-(void)setHighlighted:(BOOL)arg1 ;
-(void)setHairlineBorder:(BOOL)arg1 ;
-(BOOL)hairlineBorder;
-(void)_bbUpdateLayer;
@end

