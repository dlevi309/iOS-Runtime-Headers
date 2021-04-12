/*
* Generated on Monday, March 1, 2021 at 2:34:59 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
*/

#import <HomeUI/HomeUI-Structs.h>
#import <HomeUI/HUQuickControlViewProfile.h>

@class UIColor;

@interface HUQuickControlWheelPickerViewProfile : HUQuickControlViewProfile {

	BOOL _sizeToFitTextWidth;
	BOOL _uppercaseRowTitles;
	BOOL _showOffState;
	double _borderWidth;
	UIColor* _borderColor;
	double _cornerRadius;
	double _selectedRowBorderWidth;
	double _selectedRowCornerRadius;
	unsigned long long _style;

}

@property (assign,nonatomic) double borderWidth;                          //@synthesize borderWidth=_borderWidth - In the implementation block
@property (nonatomic,retain) UIColor * borderColor;                       //@synthesize borderColor=_borderColor - In the implementation block
@property (assign,nonatomic) double cornerRadius;                         //@synthesize cornerRadius=_cornerRadius - In the implementation block
@property (assign,nonatomic) BOOL sizeToFitTextWidth;                     //@synthesize sizeToFitTextWidth=_sizeToFitTextWidth - In the implementation block
@property (assign,nonatomic) BOOL uppercaseRowTitles;                     //@synthesize uppercaseRowTitles=_uppercaseRowTitles - In the implementation block
@property (assign,nonatomic) double selectedRowBorderWidth;               //@synthesize selectedRowBorderWidth=_selectedRowBorderWidth - In the implementation block
@property (assign,nonatomic) double selectedRowCornerRadius;              //@synthesize selectedRowCornerRadius=_selectedRowCornerRadius - In the implementation block
@property (assign,nonatomic) BOOL showOffState;                           //@synthesize showOffState=_showOffState - In the implementation block
@property (assign,nonatomic) unsigned long long style;                    //@synthesize style=_style - In the implementation block
-(id)init;
-(id)copyWithZone:(NSZone*)arg1 ;
-(unsigned long long)style;
-(void)setStyle:(unsigned long long)arg1 ;
-(void)setBorderColor:(UIColor *)arg1 ;
-(void)setCornerRadius:(double)arg1 ;
-(double)cornerRadius;
-(double)borderWidth;
-(void)setBorderWidth:(double)arg1 ;
-(UIColor *)borderColor;
-(double)selectedRowBorderWidth;
-(double)selectedRowCornerRadius;
-(BOOL)sizeToFitTextWidth;
-(BOOL)showOffState;
-(BOOL)uppercaseRowTitles;
-(void)setShowOffState:(BOOL)arg1 ;
-(void)_setDefaultStyleProperties;
-(void)_setMultiStateStyleProperties;
-(void)setSizeToFitTextWidth:(BOOL)arg1 ;
-(void)setUppercaseRowTitles:(BOOL)arg1 ;
-(void)setSelectedRowBorderWidth:(double)arg1 ;
-(void)setSelectedRowCornerRadius:(double)arg1 ;
@end
