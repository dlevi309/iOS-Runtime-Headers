/*
* Generated on Thursday, January 14, 2021 at 2:27:13 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AirPortAssistant.framework/AirPortAssistant
*/

#import <AirPortAssistant/StepByStepUIViewController_DevicePicker.h>
#import <libobjc.A.dylib/StepByStepUIDevicePicker.h>

@class NSString;

@interface StepByStepUIViewController_ExtendWireless_Config : StepByStepUIViewController_DevicePicker <StepByStepUIDevicePicker> {

	NSString* connectionType;
	NSString* unlocalizedStatusString;
	NSString* personalizedBaseName;
	BOOL isReallyJoin;

}

@property (nonatomic,retain) NSString * personalizedBaseName; 
-(void)viewWillAppear:(BOOL)arg1 ;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(BOOL)shouldChangeTextField:(id)arg1 atIndexPath:(id)arg2 forTextIndex:(unsigned long long)arg3 toString:(id)arg4 ;
-(void)setPersonalizedBaseName:(NSString *)arg1 ;
-(NSString *)personalizedBaseName;
-(void)validateAndUpdateNextButton;
-(void)setupAndShowEditableBaseStationName;
-(void)setupHeaderAndFooter;
-(void)setupDevices;
-(id)devicePickerLabel;
-(id)deviceTableLabel;
-(void)primaryActionSelected:(BOOL)arg1 ;
-(void)updateNavigationButtons;
-(void)selectedDeviceUpdated;
@end

