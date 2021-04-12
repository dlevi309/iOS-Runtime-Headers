/*
* Generated on Thursday, January 14, 2021 at 2:20:45 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
*/


#import <Preferences/Preferences-Structs.h>
@interface PSPhotosPolicyController : NSObject
-(void)_setPhotosStatus:(id)arg1 specifier:(id)arg2 ;
-(id)_photosStatus:(id)arg1 ;
-(id)appSpecifierWithName:(id)arg1 bundleID:(id)arg2 showPhotosAccess:(BOOL)arg3 showPhotosAddAccess:(BOOL)arg4 ;
-(void)getAuthorizationStatesForService:(CFStringRef)arg1 allowedArray:(id*)arg2 limitedArray:(id*)arg3 deniedArray:(id*)arg4 ;
-(void)setTCCForService:(CFStringRef)arg1 appIdentifier:(id)arg2 value:(int)arg3 ;
-(id)appSpecifierWithName:(id)arg1 bundleID:(id)arg2 ;
@end

