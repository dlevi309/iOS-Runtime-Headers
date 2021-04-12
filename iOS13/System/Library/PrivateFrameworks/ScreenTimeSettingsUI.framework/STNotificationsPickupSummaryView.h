/*
* Generated on Monday, March 1, 2021 at 2:35:53 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)setStackView:(UIStackView *)arg1 ;
-(void)setUsageReport:(STUsageReport *)arg1 ;
-(id)initWithUsageReport:(id)arg1 ;
-(id)_attributedStringForNotificationsTitle;
-(id)_attributedStringForNotificationsDetailText;
-(id)_attributedStringForPickUpTitle;
-(id)_attributedStringForPickUpDetailText;
-(id)_attributedString:(id)arg1 withFont:(id)arg2 ;
-(STUsageReport *)usageReport;
@end

