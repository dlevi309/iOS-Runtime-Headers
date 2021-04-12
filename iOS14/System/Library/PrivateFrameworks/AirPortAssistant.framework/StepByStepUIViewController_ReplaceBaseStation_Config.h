/*
* Generated on Thursday, January 14, 2021 at 2:27:13 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AirPortAssistant.framework/AirPortAssistant
*/

#import <AirPortAssistant/StepByStepUIViewController_DevicePicker.h>
#import <libobjc.A.dylib/StepByStepUIDevicePicker.h>

@class UIView, UILabel, NSString;

@interface StepByStepUIViewController_ReplaceBaseStation_Config : StepByStepUIViewController_DevicePicker <StepByStepUIDevicePicker> {

	UIView* justTextContainerView2;
	UILabel* justTextLabel2;
	NSString* personalizedBaseName;

}

@property (nonatomic,retain) UIView * justTextContainerView2; 
@property (nonatomic,retain) NSString * personalizedBaseName; 
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)loadView;
-(void)dealloc;
-(BOOL)shouldChangeTextField:(id)arg1 atIndexPath:(id)arg2 forTextIndex:(unsigned long long)arg3 toString:(id)arg4 ;
-(void)setPersonalizedBaseName:(NSString *)arg1 ;
-(NSString *)personalizedBaseName;
-(void)validateAndUpdateNextButton;
-(void)setupHeaderAndFooter;
-(void)setupDevices;
-(id)devicePickerLabel;
-(id)deviceTableLabel;
-(void)primaryActionSelected:(BOOL)arg1 ;
-(void)prepareParams;
-(void)updateNavigationButtons;
-(void)selectedDeviceUpdated;
-(void)setupEditableBaseStationName;
-(void)setJustTextContainerView2:(UIView *)arg1 ;
-(UIView *)justTextContainerView2;
@end

