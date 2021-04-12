/*
* Generated on Monday, March 1, 2021 at 2:34:26 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SettingsCellularUI.framework/SettingsCellularUI
*/

#import <SettingsCellularUI/SettingsCellularUI-Structs.h>
#import <UIKitCore/UIView.h>

@class UILabel, NSString;

@interface PSUIBadgeView : UIView {

	UILabel* _badgeLabel;
	double _fontSize;
	double _cornerRadius;
	double _minPadding;
	double _baseline;

}

@property (nonatomic,retain) UILabel * badgeLabel;              //@synthesize badgeLabel=_badgeLabel - In the implementation block
@property (assign,nonatomic) double fontSize;                   //@synthesize fontSize=_fontSize - In the implementation block
@property (assign,nonatomic) double cornerRadius;               //@synthesize cornerRadius=_cornerRadius - In the implementation block
@property (assign,nonatomic) double minPadding;                 //@synthesize minPadding=_minPadding - In the implementation block
@property (assign,nonatomic) double baseline;                   //@synthesize baseline=_baseline - In the implementation block
@property (nonatomic,copy) NSString * text; 
-(id)init;
-(NSString *)text;
-(void)setText:(NSString *)arg1 ;
-(double)fontSize;
-(void)setFontSize:(double)arg1 ;
-(CGSize)intrinsicContentSize;
-(void)setCornerRadius:(double)arg1 ;
-(double)cornerRadius;
-(void)setBaseline:(double)arg1 ;
-(double)baseline;
-(UILabel *)badgeLabel;
-(void)setBadgeLabel:(UILabel *)arg1 ;
-(double)minPadding;
-(void)setMinPadding:(double)arg1 ;
@end

