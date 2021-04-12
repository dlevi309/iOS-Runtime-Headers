/*
* Generated on Monday, March 1, 2021 at 2:34:02 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AirPortAssistant.framework/AirPortAssistant
*/

#import <AirPortAssistant/StepByStepUIViewController_DevicePicker.h>
#import <libobjc.A.dylib/StepByStepUIDevicePicker.h>

@class NSString;

@interface StepByStepUIViewController_Join_Config : StepByStepUIViewController_DevicePicker <StepByStepUIDevicePicker> {

	NSString* personalizedBaseName;
	unsigned productID;
	int deviceKind;
	BOOL supportsSpruce;

}

@property (nonatomic,retain) NSString * personalizedBaseName; 
-(void)loadView;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(BOOL)showMoreOptions;
-(BOOL)shouldChangeTextField:(id)arg1 atIndexPath:(id)arg2 forTextIndex:(unsigned long long)arg3 toString:(id)arg4 ;
-(void)textFieldDidChangeAtIndexPath:(id)arg1 ;
-(void)syncTopoUIForTarget:(id)arg1 andSource:(id)arg2 andNetwork:(id)arg3 connectionType:(id)arg4 ;
-(void)setupTable;
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
-(BOOL)shouldEnableNextButton;
-(void)setupEditableBaseStationName;
@end

