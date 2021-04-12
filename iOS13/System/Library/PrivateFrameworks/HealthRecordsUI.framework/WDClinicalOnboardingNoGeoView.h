/*
* Generated on Monday, March 1, 2021 at 2:34:53 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HealthRecordsUI.framework/HealthRecordsUI
*/

#import <UIKitCore/UIView.h>

@class UILabel, UIButton, NSLayoutConstraint, UILayoutGuide;

@interface WDClinicalOnboardingNoGeoView : UIView {

	UILabel* _titleLabel;
	UILabel* _subtitleLabel;
	UIButton* _locationServicesButton;
	NSLayoutConstraint* _subtitleBaselineConstraint;
	NSLayoutConstraint* _locationServicesButtonBaselineConstraint;
	NSLayoutConstraint* _containerCenterYConstraint;
	UILayoutGuide* _containerLayoutGuide;

}

@property (nonatomic,retain) UILabel * titleLabel;                                                       //@synthesize titleLabel=_titleLabel - In the implementation block
@property (nonatomic,retain) UILabel * subtitleLabel;                                                    //@synthesize subtitleLabel=_subtitleLabel - In the implementation block
@property (nonatomic,retain) UIButton * locationServicesButton;                                          //@synthesize locationServicesButton=_locationServicesButton - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * subtitleBaselineConstraint;                            //@synthesize subtitleBaselineConstraint=_subtitleBaselineConstraint - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * locationServicesButtonBaselineConstraint;              //@synthesize locationServicesButtonBaselineConstraint=_locationServicesButtonBaselineConstraint - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * containerCenterYConstraint;                            //@synthesize containerCenterYConstraint=_containerCenterYConstraint - In the implementation block
@property (nonatomic,retain) UILayoutGuide * containerLayoutGuide;                                       //@synthesize containerLayoutGuide=_containerLayoutGuide - In the implementation block
-(id)init;
-(UILabel *)titleLabel;
-(void)traitCollectionDidChange:(id)arg1 ;
-(void)layoutSubviews;
-(void)setTitleLabel:(UILabel *)arg1 ;
-(void)setSubtitleLabel:(UILabel *)arg1 ;
-(UILabel *)subtitleLabel;
-(void)_updateForCurrentSizeCategory;
-(void)_setupSubviews;
-(void)_setupConstraints;
-(void)setLocationServicesButton:(UIButton *)arg1 ;
-(UIButton *)locationServicesButton;
-(void)_tappedLocationServices:(id)arg1 ;
-(void)setContainerLayoutGuide:(UILayoutGuide *)arg1 ;
-(UILayoutGuide *)containerLayoutGuide;
-(void)setContainerCenterYConstraint:(NSLayoutConstraint *)arg1 ;
-(NSLayoutConstraint *)containerCenterYConstraint;
-(void)setSubtitleBaselineConstraint:(NSLayoutConstraint *)arg1 ;
-(NSLayoutConstraint *)subtitleBaselineConstraint;
-(void)setLocationServicesButtonBaselineConstraint:(NSLayoutConstraint *)arg1 ;
-(NSLayoutConstraint *)locationServicesButtonBaselineConstraint;
@end

