/*
* Generated on Thursday, January 14, 2021 at 2:22:18 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AssetsLibraryServices.framework/AssetsLibraryServices
*/


#import <AssetsLibraryServices/AssetsLibraryServices-Structs.h>
@interface PLSecurity : NSObject
+(id)connection:(id)arg1 valuesForEntitlements:(id)arg2 ;
+(BOOL)isEntitledForPhotoKitOrPrivatePhotosTCCForToken:(SCD_Struct_PL11)arg1 ;
+(BOOL)isEntitledForPhotoKit;
+(BOOL)connectionIsEntitledForPhotoKit:(id)arg1 ;
+(id)connection:(id)arg1 grantedEntitlements:(id)arg2 ;
+(id)connection:(id)arg1 valueForEntitlement:(id)arg2 ;
+(BOOL)secTask:(SecTaskRef)arg1 hasEntitlement:(id)arg2 ;
+(BOOL)auditToken:(SCD_Struct_PL11)arg1 hasEntitlement:(id)arg2 ;
+(BOOL)containsPhotoKitEntitlement:(id)arg1 ;
+(BOOL)connection:(id)arg1 hasEntitlement:(id)arg2 ;
+(id)_secTask:(SecTaskRef)arg1 grantedEntitlements:(id)arg2 ;
@end

