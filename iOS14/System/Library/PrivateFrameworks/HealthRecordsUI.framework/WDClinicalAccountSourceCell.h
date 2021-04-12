/*
* Generated on Thursday, January 14, 2021 at 2:24:01 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthRecordsUI.framework/HealthRecordsUI
*/

#import <HealthRecordsUI/WDClinicalLocationCell.h>

@class UIButton, HKClinicalAccount;

@interface WDClinicalAccountSourceCell : WDClinicalLocationCell {

	UIButton* _webLinkButton;
	HKClinicalAccount* _account;

}

@property (nonatomic,retain) UIButton * webLinkButton;                        //@synthesize webLinkButton=_webLinkButton - In the implementation block
@property (nonatomic,copy,readonly) HKClinicalAccount * account;              //@synthesize account=_account - In the implementation block
-(HKClinicalAccount *)account;
-(void)_handleWebLinkTapped;
-(UIButton *)webLinkButton;
-(void)willDisplay;
-(void)setAccount:(id)arg1 dataProvider:(id)arg2 ;
-(void)setWebLinkButton:(UIButton *)arg1 ;
-(void)_updateForContentSizeCategory:(id)arg1 ;
-(void)_setupSubviews;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
@end

