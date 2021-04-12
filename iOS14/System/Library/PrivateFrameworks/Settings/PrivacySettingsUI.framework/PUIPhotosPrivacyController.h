/*
* Generated on Thursday, January 14, 2021 at 2:28:25 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Settings/PrivacySettingsUI.framework/PrivacySettingsUI
*/

#import <PrivacySettingsUI/PrivacySettingsUI-Structs.h>
#import <Preferences/PSListController.h>

@class NSArray;

@interface PUIPhotosPrivacyController : PSListController {

	NSArray* _appSpecifiers;

}

@property (nonatomic,retain) NSArray * appSpecifiers;              //@synthesize appSpecifiers=_appSpecifiers - In the implementation block
+(BOOL)isServiceRestricted:(id)arg1 ;
-(id)specifiers;
-(void)setAppSpecifiers:(NSArray *)arg1 ;
-(void)_setPhotosStatus:(id)arg1 specifier:(id)arg2 ;
-(id)_photosStatus:(id)arg1 ;
-(id)appSpecifierWithName:(id)arg1 bundleID:(id)arg2 showPhotosAccess:(BOOL)arg3 showPhotosAddAccess:(BOOL)arg4 ;
-(void)getAuthorizationStatesForService:(CFStringRef)arg1 allowedArray:(id*)arg2 limitedArray:(id*)arg3 deniedArray:(id*)arg4 ;
-(void)setTCCForService:(CFStringRef)arg1 appIdentifier:(id)arg2 value:(int)arg3 ;
-(NSArray *)appSpecifiers;
-(void)updateSpecifiersForImposedSettings;
-(id)getEnabledAppsForService:(CFStringRef)arg1 ;
@end

