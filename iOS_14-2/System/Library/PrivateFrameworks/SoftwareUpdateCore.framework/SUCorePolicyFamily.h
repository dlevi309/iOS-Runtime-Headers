/*
* Generated on Thursday, January 14, 2021 at 2:28:30 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SoftwareUpdateCore.framework/SoftwareUpdateCore
*/


#import <SoftwareUpdateCore/SoftwareUpdateCore-Structs.h>
@interface SUCorePolicyFamily : NSObject
+(id)_getIOSAssetTypeForKind:(int)arg1 ;
+(id)_getTVOSAssetTypeForKind:(int)arg1 ;
+(id)_getWatchOSAssetTypeForKind:(int)arg1 ;
+(id)_getNERDCAssetTypeForKind:(int)arg1 ;
+(id)_getNERDSUAssetTypeForKind:(int)arg1 ;
+(id)_getNERDBRAINAssetTypeForKind:(int)arg1 ;
+(id)_getMacOSAssetTypeForKind:(int)arg1 ;
+(id)_getPlatformDefaultAssetTypeForKind:(int)arg1 ;
+(int)getFamilyUsingDeviceClass:(id)arg1 ;
+(id)_getGenericDefaultAssetTypeForKind:(int)arg1 ;
+(id)getAssetTypeForKind:(int)arg1 usingFamily:(int)arg2 ;
+(int)getFamilyForBuildTarget;
+(id)getNameForSUCorePolicyAssetFamily:(int)arg1 ;
+(id)getNameForSUCorePolicyAssetKind:(int)arg1 ;
+(id)_copyGestaltValueForKey:(CFStringRef)arg1 ;
@end

