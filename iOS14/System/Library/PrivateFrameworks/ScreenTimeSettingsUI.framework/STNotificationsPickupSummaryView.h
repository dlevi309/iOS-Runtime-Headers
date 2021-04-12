/*
* Generated on Thursday, January 14, 2021 at 2:28:23 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ScreenTimeSettingsUI.framework/ScreenTimeSettingsUI
*/

#import <UIKitCore/UIView.h>

@class STUsageReport, UIStackView;

@interface STNotificationsPickupSummaryView : UIView {

	STUsageReport* _usageReport;
	UIStackView* _stackView;

}

@property (nonatomic,retain) STUsageReport * usageReport;              //@synthesize usageReport=_usageReport - In the implementation block
@property (nonatomic,retain) UIStackView * stackView;                  //@synthesize stackView=_stackView - In the implementation block
-(UIStackView *)stackView;
-(STUsageReport *)usageReport;
-(void)setUsageReport:(STUsageReport *)arg1 ;
-(void)setStackView:(UIStackView *)arg1 ;
-(id)initWithUsageReport:(id)arg1 ;
-(id)_attributedStringForNotificationsTitle;
-(id)_attributedStringForNotificationsDetailText;
-(id)_attributedStringForPickUpTitle;
-(id)_attributedStringForPickUpDetailText;
-(id)_attributedString:(id)arg1 withFont:(id)arg2 ;
@end

