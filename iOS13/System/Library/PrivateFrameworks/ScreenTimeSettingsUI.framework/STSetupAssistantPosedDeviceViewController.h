/*
* Generated on Monday, March 1, 2021 at 2:35:54 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ScreenTimeSettingsUI.framework/ScreenTimeSettingsUI
*/

#import <UIKitCore/UIViewController.h>

@class STSetupAssistantUsageDetailsCoordinator, STWeeklyReportViewController, UIImageView, UILabel, UIView;

@interface STSetupAssistantPosedDeviceViewController : UIViewController {

	BOOL _isiPad;
	long long _deviceSize;
	STSetupAssistantUsageDetailsCoordinator* _coordinator;
	STWeeklyReportViewController* _reportViewController;
	UIImageView* _deviceWithScreenImageView;
	UILabel* _screenTimeLabel;
	UILabel* _manageScreenTimeLabel;
	UIView* _screenTimeLabelTopLayoutGuide;
	UIView* _manageScreenTimeLabelBottomLayoutGuide;

}

@property (readonly) BOOL isiPad;                                                        //@synthesize isiPad=_isiPad - In the implementation block
@property (readonly) long long deviceSize;                                               //@synthesize deviceSize=_deviceSize - In the implementation block
@property (readonly) STSetupAssistantUsageDetailsCoordinator * coordinator;              //@synthesize coordinator=_coordinator - In the implementation block
@property (readonly) STWeeklyReportViewController * reportViewController;                //@synthesize reportViewController=_reportViewController - In the implementation block
@property (retain) UIImageView * deviceWithScreenImageView;                              //@synthesize deviceWithScreenImageView=_deviceWithScreenImageView - In the implementation block
@property (retain) UILabel * screenTimeLabel;                                            //@synthesize screenTimeLabel=_screenTimeLabel - In the implementation block
@property (retain) UILabel * manageScreenTimeLabel;                                      //@synthesize manageScreenTimeLabel=_manageScreenTimeLabel - In the implementation block
@property (retain) UIView * screenTimeLabelTopLayoutGuide;                               //@synthesize screenTimeLabelTopLayoutGuide=_screenTimeLabelTopLayoutGuide - In the implementation block
@property (retain) UIView * manageScreenTimeLabelBottomLayoutGuide;                      //@synthesize manageScreenTimeLabelBottomLayoutGuide=_manageScreenTimeLabelBottomLayoutGuide - In the implementation block
-(id)initWithCoder:(id)arg1 ;
-(void)traitCollectionDidChange:(id)arg1 ;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)viewDidLoad;
-(BOOL)_isRTL;
-(STSetupAssistantUsageDetailsCoordinator *)coordinator;
-(BOOL)isiPad;
-(long long)deviceSize;
-(void)_stSetupAssistantPosedDeviceViewControllerCommonInit;
-(STWeeklyReportViewController *)reportViewController;
-(UIImageView *)deviceWithScreenImageView;
-(id)_deviceWithScreenImage;
-(UILabel *)screenTimeLabel;
-(UILabel *)manageScreenTimeLabel;
-(double)_screenTimeTopOffset;
-(double)_screenTimeLeadingOffset;
-(double)_screenTimeTrailingOffset;
-(UIView *)screenTimeLabelTopLayoutGuide;
-(UIView *)manageScreenTimeLabelBottomLayoutGuide;
-(id)_deviceBezelImageName;
-(double)_notificationWidth;
-(double)_notificationTopOffset;
-(void)setDeviceWithScreenImageView:(UIImageView *)arg1 ;
-(void)setScreenTimeLabel:(UILabel *)arg1 ;
-(void)setManageScreenTimeLabel:(UILabel *)arg1 ;
-(void)setScreenTimeLabelTopLayoutGuide:(UIView *)arg1 ;
-(void)setManageScreenTimeLabelBottomLayoutGuide:(UIView *)arg1 ;
@end

