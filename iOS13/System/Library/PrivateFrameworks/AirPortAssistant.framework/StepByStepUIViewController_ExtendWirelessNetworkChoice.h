/*
* Generated on Monday, March 1, 2021 at 2:34:02 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AirPortAssistant.framework/AirPortAssistant
*/

#import <AirPortAssistant/StepByStepUIViewController_DevicePicker.h>
#import <libobjc.A.dylib/StepByStepUIDevicePicker.h>

@interface StepByStepUIViewController_ExtendWirelessNetworkChoice : StepByStepUIViewController_DevicePicker <StepByStepUIDevicePicker> {

	int _selectorChoice;

}
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)stepByStepUpdateProgress:(id)arg1 forState:(int)arg2 ;
-(void)touchInCellAtIndexPath:(id)arg1 ;
-(void)setupHeaderAndFooter;
-(void)setupDevices;
-(id)devicePickerLabel;
-(id)deviceTableLabel;
-(void)updateNavigationButtons;
-(void)selectedDeviceUpdated;
-(BOOL)canBeExtendedWithDWDS;
-(void)addBrowsedRecords:(id)arg1 toDestList:(id)arg2 ;
@end

