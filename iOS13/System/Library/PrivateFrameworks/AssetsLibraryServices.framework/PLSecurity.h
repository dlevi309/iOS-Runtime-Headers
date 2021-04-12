/*
* Generated on Monday, March 1, 2021 at 2:32:23 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AssetsLibraryServices.framework/AssetsLibraryServices
*/


#import <AssetsLibraryServices/AssetsLibraryServices-Structs.h>
@interface PLSecurity : NSObject
+(BOOL)isEntitledForPhotoKit;
+(BOOL)isEntitledForPhotoKitOrPrivatePhotosTCCForToken:(SCD_Struct_PL11)arg1 ;
+(BOOL)connection:(id)arg1 hasEntitlement:(id)arg2 ;
+(BOOL)containsPhotoKitEntitlement:(id)arg1 ;
+(id)connection:(id)arg1 grantedEntitlements:(id)arg2 ;
+(id)_secTask:(SecTaskRef)arg1 grantedEntitlements:(id)arg2 ;
+(BOOL)secTask:(SecTaskRef)arg1 hasEntitlement:(id)arg2 ;
+(BOOL)auditToken:(SCD_Struct_PL11)arg1 hasEntitlement:(id)arg2 ;
+(id)connection:(id)arg1 valuesForEntitlements:(id)arg2 ;
+(id)connection:(id)arg1 valueForEntitlement:(id)arg2 ;
+(BOOL)connectionIsEntitledForPhotoKit:(id)arg1 ;
@end

