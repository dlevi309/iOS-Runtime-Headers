/*
* Generated on Thursday, January 14, 2021 at 2:20:11 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CoreServices.framework/CoreServices
*/

#import <CoreServices/CoreServices-Structs.h>
#import <CoreServices/_LSDClient.h>
#import <libobjc.A.dylib/_LSDDeviceIdentifierProtocol.h>

@interface _LSDDeviceIdentifierClient : _LSDClient <_LSDDeviceIdentifierProtocol>
-(void)clearAllIdentifiersOfType:(long long)arg1 ;
-(BOOL)canAccessAdvertisingIdentifier;
-(void)generateIdentifiersWithVendorName:(id)arg1 bundleIdentifier:(id)arg2 ;
-(void)clearIdentifiersForUninstallationWithVendorName:(id)arg1 bundleIdentifier:(id)arg2 ;
-(void)getIdentifierOfType:(long long)arg1 vendorName:(id)arg2 bundleIdentifier:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)getIdentifierOfType:(long long)arg1 completionHandler:(/*^block*/id)arg2 ;
-(unsigned)findAppBundleForExecutableURL:(id)arg1 withContext:(LSContext*)arg2 ;
-(BOOL)hasUninstallEntitlement;
-(BOOL)hasEntitlementToClearAllIdentifiersOfType:(long long)arg1 ;
-(void)getClientProcessVendorNameBundleIdentifierAndRestrictedIDAccessWithType:(long long)arg1 completionHandler:(/*^block*/id)arg2 ;
@end

