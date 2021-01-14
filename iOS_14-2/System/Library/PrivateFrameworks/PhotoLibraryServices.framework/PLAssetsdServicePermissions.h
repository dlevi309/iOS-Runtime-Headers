/*
* Generated on Thursday, January 14, 2021 at 2:22:14 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
*/

#import <PhotoLibraryServices/PhotoLibraryServices-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSArray;

@interface PLAssetsdServicePermissions : NSObject <NSCopying> {

	BOOL _allowsAuthorizationWithPhotoKitEntitlement;
	long long _requiredAuthorization;
	NSArray* _requiredEntitlements;

}

@property (assign,nonatomic) long long requiredAuthorization;                              //@synthesize requiredAuthorization=_requiredAuthorization - In the implementation block
@property (assign,nonatomic) BOOL allowsAuthorizationWithPhotoKitEntitlement;              //@synthesize allowsAuthorizationWithPhotoKitEntitlement=_allowsAuthorizationWithPhotoKitEntitlement - In the implementation block
@property (nonatomic,copy) NSArray * requiredEntitlements;                                 //@synthesize requiredEntitlements=_requiredEntitlements - In the implementation block
-(void)setAllowsAuthorizationWithPhotoKitEntitlement:(BOOL)arg1 ;
-(id)_verifyEntitlementsWithContext:(id)arg1 ;
-(id)_errorForMissingEntitlements:(id)arg1 withContext:(id)arg2 ;
-(void)setRequiredAuthorization:(long long)arg1 ;
-(BOOL)allowsAuthorizationWithPhotoKitEntitlement;
-(id)_verifyAuthorizationWithContext:(id)arg1 ;
-(BOOL)_isAuthorizedViaTCCWithContext:(id)arg1 ;
-(id)initWithPermissions:(id)arg1 ;
-(BOOL)_isAuthorizedForReadWriteWithContext:(id)arg1 ;
-(BOOL)_isAuthorizedViaPhotoKitEntitlementWithContext:(id)arg1 ;
-(long long)requiredAuthorization;
-(BOOL)_isAuthorizedForWriteOnlyWithContext:(id)arg1 ;
-(void)setRequiredEntitlements:(NSArray *)arg1 ;
-(NSArray *)requiredEntitlements;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)verifyPermissionsWithContext:(id)arg1 ;
@end

