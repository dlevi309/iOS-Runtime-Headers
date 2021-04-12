/*
* Generated on Monday, March 1, 2021 at 2:30:02 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/CoreServices.framework/CoreServices
*/

#import <CoreServices/CoreServices-Structs.h>
#import <CoreServices/_LSDService.h>

@interface _LSDDeviceIdentifierService : _LSDService
+(void)clearIdentifiersForUninstallationWithContext:(LSContext*)arg1 bundleUnit:(unsigned)arg2 bundleData:(const LSBundleData*)arg3 ;
+(void)generateIdentifiersForInstallationWithContext:(LSContext*)arg1 bundleUnit:(unsigned)arg2 bundleData:(const LSBundleData*)arg3 ;
+(id)vendorNameForDeviceIdentifiersWithContext:(LSContext*)arg1 bundleUnit:(unsigned)arg2 bundleData:(const LSBundleData*)arg3 ;
+(unsigned short)connectionType;
+(Class)clientClass;
+(id)XPCInterface;
@end

