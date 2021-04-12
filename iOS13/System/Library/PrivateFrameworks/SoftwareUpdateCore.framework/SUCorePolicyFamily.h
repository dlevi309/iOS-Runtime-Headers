/*
* Generated on Monday, March 1, 2021 at 2:35:18 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
+(id)_getPlatformDefaultAssetTypeForKind:(int)arg1 ;
+(id)_copyGestaltValueForKey:(CFStringRef)arg1 ;
+(int)getFamilyUsingDeviceClass:(id)arg1 ;
+(id)_getGenericDefaultAssetTypeForKind:(int)arg1 ;
+(id)getAssetTypeForKind:(int)arg1 usingFamily:(int)arg2 ;
+(id)getNameForSUCorePolicyAssetFamily:(int)arg1 ;
+(id)getNameForSUCorePolicyAssetKind:(int)arg1 ;
@end

