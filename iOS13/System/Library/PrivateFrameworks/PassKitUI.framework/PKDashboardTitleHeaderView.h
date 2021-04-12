/*
* Generated on Monday, March 1, 2021 at 2:32:37 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
*/

#import <PassKitUI/PassKitUI-Structs.h>
#import <PassKitUI/PKDashboardCollectionViewCell.h>

@class UILabel, UIButton, NSString;

@interface PKDashboardTitleHeaderView : PKDashboardCollectionViewCell {

	UILabel* _titleLabel;
	UIButton* _actionButton;
	BOOL _isTemplateLayout;
	BOOL _isCompactUI;
	BOOL _useCompactTopInset;
	NSString* _actionTitle;
	/*^block*/id _action;

}

@property (assign,nonatomic) BOOL useCompactTopInset;              //@synthesize useCompactTopInset=_useCompactTopInset - In the implementation block
@property (nonatomic,readonly) UILabel * titleLabel; 
@property (nonatomic,copy) NSString * actionTitle;                 //@synthesize actionTitle=_actionTitle - In the implementation block
@property (nonatomic,copy) id action;                              //@synthesize action=_action - In the implementation block
+(id)defaultBackgroundColor;
+(double)defaultHorizontalInset;
-(void)prepareForReuse;
-(id)action;
-(id)initWithFrame:(CGRect)arg1 ;
-(UILabel *)titleLabel;
-(void)traitCollectionDidChange:(id)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)layoutSubviews;
-(void)setAction:(id)arg1 ;
-(void)_buttonPressed:(id)arg1 ;
-(NSString *)actionTitle;
-(CGSize)_layoutWithBounds:(CGRect)arg1 ;
-(void)resetFonts;
-(void)setUseCompactTopInset:(BOOL)arg1 ;
-(void)setActionTitle:(NSString *)arg1 ;
-(void)createSubviews;
-(BOOL)useCompactTopInset;
@end

