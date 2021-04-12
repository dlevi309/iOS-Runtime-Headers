/*
* Generated on Monday, March 1, 2021 at 2:34:02 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AssistantUI.framework/AssistantUI
*/

#import <Preferences/PSListController.h>

@class AFSettingsConnection;

@interface AFUICloudStorageViewController : PSListController {

	AFSettingsConnection* _settings;

}
-(void)viewDidLoad;
-(void)didReceiveMemoryWarning;
-(id)specifiers;
-(void)handleDisableAndDeleteButtonPress;
-(void)confirmDisableForMultiUserVoiceIdentification;
-(void)confirmDisable;
-(void)_disableAndDeleteCloudSync;
@end

