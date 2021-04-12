/*
* Generated on Monday, March 1, 2021 at 2:34:53 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HealthRecordsUI.framework/HealthRecordsUI
*/

#import <UIKitCore/UITableViewCell.h>

@protocol HKClinicalBrandable;
@class WDClinicalSourcesDataProvider, WDBrandLogoView, UILabel, UIStackView;

@interface WDClinicalLocationCell : UITableViewCell {

	id<HKClinicalBrandable> _brandable;
	WDClinicalSourcesDataProvider* _dataProvider;
	WDBrandLogoView* _logoView;
	UILabel* _titleLabel;
	UILabel* _subtitleLabel;
	UILabel* _detailLabel;
	UIStackView* _stackView;

}

@property (nonatomic,readonly) id<HKClinicalBrandable> brandable;                         //@synthesize brandable=_brandable - In the implementation block
@property (nonatomic,readonly) WDClinicalSourcesDataProvider * dataProvider;              //@synthesize dataProvider=_dataProvider - In the implementation block
@property (nonatomic,readonly) WDBrandLogoView * logoView;                                //@synthesize logoView=_logoView - In the implementation block
@property (nonatomic,readonly) UILabel * titleLabel;                                      //@synthesize titleLabel=_titleLabel - In the implementation block
@property (nonatomic,readonly) UILabel * subtitleLabel;                                   //@synthesize subtitleLabel=_subtitleLabel - In the implementation block
@property (nonatomic,readonly) UILabel * detailLabel;                                     //@synthesize detailLabel=_detailLabel - In the implementation block
@property (nonatomic,readonly) UIStackView * stackView;                                   //@synthesize stackView=_stackView - In the implementation block
+(id)defaultReuseIdentifier;
-(void)prepareForReuse;
-(UILabel *)titleLabel;
-(void)traitCollectionDidChange:(id)arg1 ;
-(UIStackView *)stackView;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(UILabel *)subtitleLabel;
-(UILabel *)detailLabel;
-(void)_updateForCurrentSizeCategory;
-(WDClinicalSourcesDataProvider *)dataProvider;
-(void)_setupSubviews;
-(void)_setUpConstraints;
-(void)_updateForContentSizeCategory:(id)arg1 ;
-(WDBrandLogoView *)logoView;
-(void)setBrandable:(id)arg1 dataProvider:(id)arg2 ;
-(void)willDisplay;
-(void)_configureDistinctIntrinsicLayoutPrioritiesForLabels;
-(void)_updateContentWithBrandable:(id)arg1 dataProvider:(id)arg2 ;
-(id<HKClinicalBrandable>)brandable;
@end

