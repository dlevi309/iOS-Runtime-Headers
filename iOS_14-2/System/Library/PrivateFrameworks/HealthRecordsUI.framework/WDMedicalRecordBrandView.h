/*
* Generated on Thursday, January 14, 2021 at 2:24:01 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthRecordsUI.framework/HealthRecordsUI
*/

#import <HealthRecordsUI/HealthRecordsUI-Structs.h>
#import <UIKitCore/UIView.h>

@protocol HKClinicalBrandable;
@class UILabel, WDClinicalSourcesDataProvider, WDBrandLogoView, UIStackView, UIView;

@interface WDMedicalRecordBrandView : UIView {

	UILabel* _brandTitleLabel;
	UILabel* _brandSubtitleLabel;
	UILabel* _brandDetailLabel;
	id<HKClinicalBrandable> _brandable;
	WDClinicalSourcesDataProvider* _dataProvider;
	WDBrandLogoView* _logoView;
	UIStackView* _stackView;
	UIView* _logoAlignedContentView;
	UIStackView* _verticalSpecContainerView;

}

@property (nonatomic,readonly) id<HKClinicalBrandable> brandable;                         //@synthesize brandable=_brandable - In the implementation block
@property (nonatomic,readonly) WDClinicalSourcesDataProvider * dataProvider;              //@synthesize dataProvider=_dataProvider - In the implementation block
@property (nonatomic,readonly) WDBrandLogoView * logoView;                                //@synthesize logoView=_logoView - In the implementation block
@property (nonatomic,readonly) UIStackView * stackView;                                   //@synthesize stackView=_stackView - In the implementation block
@property (nonatomic,readonly) UIView * logoAlignedContentView;                           //@synthesize logoAlignedContentView=_logoAlignedContentView - In the implementation block
@property (nonatomic,readonly) UIStackView * verticalSpecContainerView;                   //@synthesize verticalSpecContainerView=_verticalSpecContainerView - In the implementation block
@property (nonatomic,readonly) UILabel * brandTitleLabel;                                 //@synthesize brandTitleLabel=_brandTitleLabel - In the implementation block
@property (nonatomic,readonly) UILabel * brandSubtitleLabel;                              //@synthesize brandSubtitleLabel=_brandSubtitleLabel - In the implementation block
@property (nonatomic,readonly) UILabel * brandDetailLabel;                                //@synthesize brandDetailLabel=_brandDetailLabel - In the implementation block
@property (assign,nonatomic) double logoSize; 
-(void)_setupConstraints;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setLogoSize:(double)arg1 ;
-(void)setBrandable:(id)arg1 dataProvider:(id)arg2 ;
-(id<HKClinicalBrandable>)brandable;
-(UIStackView *)stackView;
-(void)_updateForContentSizeCategory:(id)arg1 ;
-(void)_updateBasedOnAccessibilityCategory:(BOOL)arg1 ;
-(void)_setupSubviews;
-(void)_updateContentWithBrandable:(id)arg1 dataProvider:(id)arg2 ;
-(WDClinicalSourcesDataProvider *)dataProvider;
-(UIStackView *)verticalSpecContainerView;
-(UIView *)logoAlignedContentView;
-(UILabel *)brandTitleLabel;
-(UILabel *)brandSubtitleLabel;
-(UILabel *)brandDetailLabel;
-(void)_updateForCurrentSizeCategory;
-(WDBrandLogoView *)logoView;
-(double)logoSize;
-(void)_updateLabelVisibility;
@end

