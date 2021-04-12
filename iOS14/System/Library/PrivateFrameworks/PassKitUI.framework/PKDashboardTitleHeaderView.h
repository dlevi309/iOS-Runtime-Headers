/*
* Generated on Thursday, January 14, 2021 at 2:24:04 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
*/

#import <PassKitUI/PassKitUI-Structs.h>
#import <PassKitUI/PKDashboardCollectionViewCell.h>

@class UILabel, UIButton, NSString, UIColor;

@interface PKDashboardTitleHeaderView : PKDashboardCollectionViewCell {

	UILabel* _titleLabel;
	UIButton* _actionButton;
	BOOL _isTemplateLayout;
	BOOL _isCompactUI;
	BOOL _useCompactTopInset;
	NSString* _title;
	UIColor* _titleColor;
	unsigned long long _titleStyle;
	NSString* _actionTitle;
	/*^block*/id _action;

}

@property (assign,nonatomic) BOOL useCompactTopInset;                    //@synthesize useCompactTopInset=_useCompactTopInset - In the implementation block
@property (nonatomic,copy) NSString * title;                             //@synthesize title=_title - In the implementation block
@property (nonatomic,copy) UIColor * titleColor;                         //@synthesize titleColor=_titleColor - In the implementation block
@property (assign,nonatomic) unsigned long long titleStyle;              //@synthesize titleStyle=_titleStyle - In the implementation block
@property (nonatomic,copy) NSString * actionTitle;                       //@synthesize actionTitle=_actionTitle - In the implementation block
@property (nonatomic,copy) id action;                                    //@synthesize action=_action - In the implementation block
+(double)defaultHorizontalInset;
+(id)defaultBackgroundColor;
-(UIColor *)titleColor;
-(id)initWithFrame:(CGRect)arg1 ;
-(BOOL)useCompactTopInset;
-(void)setActionTitle:(NSString *)arg1 ;
-(void)setTitle:(NSString *)arg1 ;
-(id)action;
-(void)setAction:(id)arg1 ;
-(void)prepareForReuse;
-(NSString *)actionTitle;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)resetFonts;
-(unsigned long long)titleStyle;
-(void)setTitleStyle:(unsigned long long)arg1 ;
-(void)createSubviews;
-(CGSize)_layoutWithBounds:(CGRect)arg1 ;
-(void)traitCollectionDidChange:(id)arg1 ;
-(void)_buttonPressed:(id)arg1 ;
-(void)setUseCompactTopInset:(BOOL)arg1 ;
-(NSString *)title;
-(void)setTitleColor:(UIColor *)arg1 ;
@end

