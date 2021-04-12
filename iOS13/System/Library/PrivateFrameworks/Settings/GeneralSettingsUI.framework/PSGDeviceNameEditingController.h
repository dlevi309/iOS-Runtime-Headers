/*
* Generated on Monday, March 1, 2021 at 2:34:26 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Settings/GeneralSettingsUI.framework/GeneralSettingsUI
*/

#import <Preferences/PSListController.h>

@class NSString;

@interface PSGDeviceNameEditingController : PSListController {

	id _effectiveSettingsChangedNotificationObserver;
	NSString* _originalDeviceName;

}

@property (nonatomic,retain) id effectiveSettingsChangedNotificationObserver;              //@synthesize effectiveSettingsChangedNotificationObserver=_effectiveSettingsChangedNotificationObserver - In the implementation block
@property (nonatomic,retain) NSString * originalDeviceName;                                //@synthesize originalDeviceName=_originalDeviceName - In the implementation block
-(void)suspend;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(id)specifiers;
-(BOOL)canBeShownFromSuspendedState;
-(BOOL)shouldSelectResponderOnAppearance;
-(id)deviceName:(id)arg1 ;
-(id)_editedDeviceName;
-(NSString *)originalDeviceName;
-(void)setEffectiveSettingsChangedNotificationObserver:(id)arg1 ;
-(void)setOriginalDeviceName:(NSString *)arg1 ;
-(id)effectiveSettingsChangedNotificationObserver;
@end

