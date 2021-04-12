/*
* Generated on Thursday, January 14, 2021 at 2:24:01 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)_setupConstraints;
-(UILabel *)titleLabel;
-(void)setSubtitleLabel:(UILabel *)arg1 ;
-(void)setTitleLabel:(UILabel *)arg1 ;
-(id)init;
-(void)_setupSubviews;
-(UILabel *)subtitleLabel;
-(void)layoutSubviews;
-(void)_updateForCurrentSizeCategory;
-(void)traitCollectionDidChange:(id)arg1 ;
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

