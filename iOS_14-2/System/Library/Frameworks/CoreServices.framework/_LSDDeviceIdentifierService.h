/*
* Generated on Thursday, January 14, 2021 at 2:20:11 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CoreServices.framework/CoreServices
*/

#import <CoreServices/CoreServices-Structs.h>
#import <CoreServices/_LSDService.h>

@interface _LSDDeviceIdentifierService : _LSDService
+(unsigned short)connectionType;
+(id)XPCInterface;
+(id)vendorNameForDeviceIdentifiersWithContext:(LSContext*)arg1 bundleUnit:(unsigned)arg2 bundleData:(const LSBundleData*)arg3 ;
+(Class)clientClass;
+(void)generateIdentifiersForInstallationWithContext:(LSContext*)arg1 bundleUnit:(unsigned)arg2 bundleData:(const LSBundleData*)arg3 ;
+(void)clearIdentifiersForUninstallationWithContext:(LSContext*)arg1 bundleUnit:(unsigned)arg2 bundleData:(const LSBundleData*)arg3 ;
@end

