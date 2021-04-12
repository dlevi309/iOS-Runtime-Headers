/*
* Generated on Monday, March 1, 2021 at 2:31:51 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
*/

#import <Preferences/PSListController.h>

@class STStorageApp, STStoragePlugin, UIProgressHUD;

@interface CKCloudMessagesDetailController : PSListController {

	STStorageApp* _messagesApp;
	STStoragePlugin* _plugin;
	UIProgressHUD* _cloudKitProgressView;

}

@property (nonatomic,retain) UIProgressHUD * cloudKitProgressView;              //@synthesize cloudKitProgressView=_cloudKitProgressView - In the implementation block
+(id)specifier;
-(id)init;
-(void)viewWillAppear:(BOOL)arg1 ;
-(id)specifiers;
-(void)setEnabledDidReturned:(id)arg1 ;
-(void)tryToDisableAllDevicesDidReturn:(id)arg1 ;
-(id)dataSize:(id)arg1 ;
-(void)disableAndDelete:(id)arg1 ;
-(void)undoDelete:(id)arg1 ;
-(id)cloudDocsSpecifiers;
-(void)showSpinnerMessage:(id)arg1 ;
-(void)hideSpinner;
-(void)_displayiCloudErrorMessage;
-(UIProgressHUD *)cloudKitProgressView;
-(void)setCloudKitProgressView:(UIProgressHUD *)arg1 ;
@end

