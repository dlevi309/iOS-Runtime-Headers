/*
* Generated on Monday, March 1, 2021 at 2:32:00 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ManagedConfigurationUI.framework/ManagedConfigurationUI
*/

#import <Preferences/PSListController.h>

@interface MCURLListenerListController : PSListController
+(id)currentInstallationController;
+(void)setShowingProfileInstallation:(BOOL)arg1 ;
+(void)setCurrentInstallationController:(id)arg1 ;
+(void)setOriginalURLSender:(id)arg1 ;
+(id)originalURLSender;
+(BOOL)showingProfileInstallation;
-(void)handleURL:(id)arg1 ;
-(void)_showSheetToInstallConfigurationProfileWithData:(id)arg1 ;
-(void)_showSheetToInstallConfigurationProfileFromInstallationQueue;
-(void)_showSheetToInstallConfigurationProfileFromPurgatory;
-(void)_showSheetToInstallProvisioningProfile;
-(void)_pushProfileDetailsForProfileWithID:(id)arg1 ;
@end

