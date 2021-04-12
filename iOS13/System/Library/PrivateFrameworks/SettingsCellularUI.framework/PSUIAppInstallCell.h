/*
* Generated on Monday, March 1, 2021 at 2:34:26 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SettingsCellularUI.framework/SettingsCellularUI
*/

#import <Preferences/PSTableCell.h>

@class UIImageView, UILabel, UIView, NSLayoutConstraint, SKUIItemOfferButton, NSMutableArray;

@interface PSUIAppInstallCell : PSTableCell {

	int _installState;
	UIImageView* _iconView;
	UILabel* _nameLabel;
	UILabel* _publisherLabel;
	UILabel* _installedLabel;
	UIView* _labelContainerView;
	NSLayoutConstraint* _installedConstraint;
	NSLayoutConstraint* _availableConstraint;
	NSLayoutConstraint* _labelPaddingTop;
	NSLayoutConstraint* _labelPaddingBottom;
	SKUIItemOfferButton* _installButton;
	NSLayoutConstraint* _installButtonWidthConstraint;
	NSLayoutConstraint* _installButtonHeightConstraint;
	NSMutableArray* _constraints;

}

@property (nonatomic,retain) UIImageView * iconView;                                          //@synthesize iconView=_iconView - In the implementation block
@property (nonatomic,retain) UILabel * nameLabel;                                             //@synthesize nameLabel=_nameLabel - In the implementation block
@property (nonatomic,retain) UILabel * publisherLabel;                                        //@synthesize publisherLabel=_publisherLabel - In the implementation block
@property (nonatomic,retain) UILabel * installedLabel;                                        //@synthesize installedLabel=_installedLabel - In the implementation block
@property (nonatomic,retain) UIView * labelContainerView;                                     //@synthesize labelContainerView=_labelContainerView - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * installedConstraint;                        //@synthesize installedConstraint=_installedConstraint - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * availableConstraint;                        //@synthesize availableConstraint=_availableConstraint - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * labelPaddingTop;                            //@synthesize labelPaddingTop=_labelPaddingTop - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * labelPaddingBottom;                         //@synthesize labelPaddingBottom=_labelPaddingBottom - In the implementation block
@property (nonatomic,retain) SKUIItemOfferButton * installButton;                             //@synthesize installButton=_installButton - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * installButtonWidthConstraint;               //@synthesize installButtonWidthConstraint=_installButtonWidthConstraint - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * installButtonHeightConstraint;              //@synthesize installButtonHeightConstraint=_installButtonHeightConstraint - In the implementation block
@property (nonatomic,retain) NSMutableArray * constraints;                                    //@synthesize constraints=_constraints - In the implementation block
@property (assign,nonatomic) int installState;                                                //@synthesize installState=_installState - In the implementation block
+(id)specifierForAppWithDescription:(id)arg1 target:(id)arg2 action:(SEL)arg3 ;
-(NSMutableArray *)constraints;
-(void)setInstallState:(int)arg1 ;
-(int)installState;
-(void)layoutSubviews;
-(void)updateConstraints;
-(UIImageView *)iconView;
-(void)setIconView:(UIImageView *)arg1 ;
-(void)setConstraints:(NSMutableArray *)arg1 ;
-(void)setNameLabel:(UILabel *)arg1 ;
-(UILabel *)nameLabel;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 specifier:(id)arg3 ;
-(SKUIItemOfferButton *)installButton;
-(UILabel *)publisherLabel;
-(void)setPublisherLabel:(UILabel *)arg1 ;
-(void)setInstallButton:(SKUIItemOfferButton *)arg1 ;
-(void)_updateCellWithInstallState;
-(UILabel *)installedLabel;
-(void)setInstalledLabel:(UILabel *)arg1 ;
-(UIView *)labelContainerView;
-(void)setLabelContainerView:(UIView *)arg1 ;
-(NSLayoutConstraint *)installedConstraint;
-(void)setInstalledConstraint:(NSLayoutConstraint *)arg1 ;
-(NSLayoutConstraint *)availableConstraint;
-(void)setAvailableConstraint:(NSLayoutConstraint *)arg1 ;
-(NSLayoutConstraint *)labelPaddingTop;
-(void)setLabelPaddingTop:(NSLayoutConstraint *)arg1 ;
-(NSLayoutConstraint *)labelPaddingBottom;
-(void)setLabelPaddingBottom:(NSLayoutConstraint *)arg1 ;
-(NSLayoutConstraint *)installButtonWidthConstraint;
-(void)setInstallButtonWidthConstraint:(NSLayoutConstraint *)arg1 ;
-(NSLayoutConstraint *)installButtonHeightConstraint;
-(void)setInstallButtonHeightConstraint:(NSLayoutConstraint *)arg1 ;
@end

