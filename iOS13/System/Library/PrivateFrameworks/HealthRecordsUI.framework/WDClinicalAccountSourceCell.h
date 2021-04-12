/*
* Generated on Monday, March 1, 2021 at 2:34:53 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(void)_setupSubviews;
-(void)_updateForContentSizeCategory:(id)arg1 ;
-(void)_handleWebLinkTapped;
-(UIButton *)webLinkButton;
-(void)willDisplay;
-(void)setAccount:(id)arg1 dataProvider:(id)arg2 ;
-(void)setWebLinkButton:(UIButton *)arg1 ;
@end

