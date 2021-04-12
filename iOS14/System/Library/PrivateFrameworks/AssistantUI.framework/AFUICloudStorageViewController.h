/*
* Generated on Thursday, January 14, 2021 at 2:24:57 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AssistantUI.framework/AssistantUI
*/

#import <Preferences/PSListController.h>

@class AFSettingsConnection;

@interface AFUICloudStorageViewController : PSListController {

	AFSettingsConnection* _settings;

}
-(id)specifiers;
-(void)didReceiveMemoryWarning;
-(void)viewDidLoad;
-(void)handleDisableAndDeleteButtonPress;
-(void)confirmDisableForMultiUserVoiceIdentification;
-(void)confirmDisable;
-(void)_disableAndDeleteCloudSync;
@end

