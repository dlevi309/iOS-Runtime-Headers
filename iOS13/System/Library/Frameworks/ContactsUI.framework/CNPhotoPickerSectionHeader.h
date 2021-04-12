/*
* Generated on Monday, March 1, 2021 at 2:30:59 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
*/

#import <ContactsUI/ContactsUI-Structs.h>
#import <UIKitCore/UICollectionReusableView.h>

@class UILabel, UIButton, UIStackView;

@interface CNPhotoPickerSectionHeader : UICollectionReusableView {

	UILabel* _titleLabel;
	UIButton* _actionButton;
	/*^block*/id _actionBlock;
	UIStackView* _stackView;

}

@property (nonatomic,retain) UIStackView * stackView;                //@synthesize stackView=_stackView - In the implementation block
@property (nonatomic,readonly) UILabel * titleLabel;                 //@synthesize titleLabel=_titleLabel - In the implementation block
@property (nonatomic,readonly) UIButton * actionButton;              //@synthesize actionButton=_actionButton - In the implementation block
@property (nonatomic,copy) id actionBlock;                           //@synthesize actionBlock=_actionBlock - In the implementation block
+(id)titleLabelFont;
+(id)actionButtonFont;
+(id)reusableIdentifier;
+(double)heightNeededForAccessibilityLayoutIncludingActionButton:(BOOL)arg1 ;
-(void)prepareForReuse;
-(id)initWithFrame:(CGRect)arg1 ;
-(UILabel *)titleLabel;
-(void)traitCollectionDidChange:(id)arg1 ;
-(UIStackView *)stackView;
-(void)setStackView:(UIStackView *)arg1 ;
-(void)setupConstraints;
-(void)updateStyle:(id)arg1 ;
-(void)updateDynamicStackViewProperties;
-(void)actionButtonPressed:(id)arg1 ;
-(UIButton *)actionButton;
-(id)actionBlock;
-(void)setActionBlock:(id)arg1 ;
@end

