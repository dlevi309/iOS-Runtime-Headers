/*
* Generated on Monday, March 1, 2021 at 2:34:53 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HealthRecordsUI.framework/HealthRecordsUI
*/

#import <HealthRecordsUI/WDMedicalRecordGroupableCell.h>

@class WDBrandLogoView, UILabel, UIStackView, UILayoutGuide;

@interface WDClinicalOnboardingGatewayCell : WDMedicalRecordGroupableCell {

	WDBrandLogoView* _logoView;
	UILabel* _titleLabel;
	UILabel* _subtitleLabel;
	UILabel* _detailLabel;
	UILabel* _tapToConnectLabel;
	UIStackView* _verticalSpecContainerView;
	UILayoutGuide* _centerLogoInTitlesLayoutGuide;

}

@property (nonatomic,readonly) WDBrandLogoView * logoView;                                 //@synthesize logoView=_logoView - In the implementation block
@property (nonatomic,readonly) UILabel * titleLabel;                                       //@synthesize titleLabel=_titleLabel - In the implementation block
@property (nonatomic,readonly) UILabel * subtitleLabel;                                    //@synthesize subtitleLabel=_subtitleLabel - In the implementation block
@property (nonatomic,readonly) UILabel * detailLabel;                                      //@synthesize detailLabel=_detailLabel - In the implementation block
@property (nonatomic,readonly) UILabel * tapToConnectLabel;                                //@synthesize tapToConnectLabel=_tapToConnectLabel - In the implementation block
@property (nonatomic,readonly) UIStackView * verticalSpecContainerView;                    //@synthesize verticalSpecContainerView=_verticalSpecContainerView - In the implementation block
@property (nonatomic,readonly) UILayoutGuide * centerLogoInTitlesLayoutGuide;              //@synthesize centerLogoInTitlesLayoutGuide=_centerLogoInTitlesLayoutGuide - In the implementation block
-(void)prepareForReuse;
-(UILabel *)titleLabel;
-(void)tintColorDidChange;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(UILabel *)subtitleLabel;
-(UILabel *)detailLabel;
-(void)setupSubviews;
-(void)setUpConstraints;
-(void)_updateForContentSizeCategory:(id)arg1 ;
-(void)_updateLabelVisibility;
-(void)_updateBasedOnAccessibilityCategory:(BOOL)arg1 ;
-(WDBrandLogoView *)logoView;
-(UIStackView *)verticalSpecContainerView;
-(id)_contentViewMarginsGuide;
-(void)configureWithGateway:(id)arg1 dataProvider:(id)arg2 connected:(BOOL)arg3 ;
-(void)_createLogoView;
-(void)_createCenterLogoInTitlesLayoutGuide;
-(void)_createTitleLabel;
-(void)_createSubtitleLabel;
-(void)_createDetailLabel;
-(void)_createTapToConnectLabel;
-(void)_createVerticalSpecContainerView;
-(UILayoutGuide *)centerLogoInTitlesLayoutGuide;
-(UILabel *)tapToConnectLabel;
-(void)_constrainStackViewContainerWithinContentView;
-(void)_positionLogoViewContentLeading;
@end

