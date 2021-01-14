/*
* Generated on Thursday, January 14, 2021 at 2:26:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)_presentNextController:(id)arg1 ;
-(void)_showSheetToInstallConfigurationProfileFromInstallationQueue;
-(void)_showSheetToInstallConfigurationProfileFromPurgatory;
-(void)_showSheetToInstallProvisioningProfile;
-(void)_pushProfileDetailsForProfileWithID:(id)arg1 ;
@end

