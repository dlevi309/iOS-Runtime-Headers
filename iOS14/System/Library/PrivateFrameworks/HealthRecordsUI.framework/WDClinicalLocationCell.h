/*
* Generated on Thursday, January 14, 2021 at 2:24:01 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(UILabel *)titleLabel;
-(void)_setUpConstraints;
-(void)setBrandable:(id)arg1 dataProvider:(id)arg2 ;
-(void)willDisplay;
-(id<HKClinicalBrandable>)brandable;
-(UIStackView *)stackView;
-(void)prepareForReuse;
-(void)_updateForContentSizeCategory:(id)arg1 ;
-(void)_setupSubviews;
-(UILabel *)subtitleLabel;
-(void)_configureDistinctIntrinsicLayoutPrioritiesForLabels;
-(void)_updateContentWithBrandable:(id)arg1 dataProvider:(id)arg2 ;
-(WDClinicalSourcesDataProvider *)dataProvider;
-(void)_updateForCurrentSizeCategory;
-(WDBrandLogoView *)logoView;
-(void)traitCollectionDidChange:(id)arg1 ;
-(UILabel *)detailLabel;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
@end

