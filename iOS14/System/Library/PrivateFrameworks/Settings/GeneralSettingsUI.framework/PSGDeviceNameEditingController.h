/*
* Generated on Thursday, January 14, 2021 at 2:28:25 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)suspend;
-(id)specifiers;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(BOOL)canBeShownFromSuspendedState;
-(BOOL)shouldSelectResponderOnAppearance;
-(id)deviceName:(id)arg1 ;
-(void)setEffectiveSettingsChangedNotificationObserver:(id)arg1 ;
-(id)effectiveSettingsChangedNotificationObserver;
-(id)_editedDeviceName;
-(NSString *)originalDeviceName;
-(void)setOriginalDeviceName:(NSString *)arg1 ;
@end

