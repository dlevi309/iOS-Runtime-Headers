/*
* Generated on Monday, March 1, 2021 at 2:30:54 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithPermissions:(id)arg1 ;
-(id)verifyPermissionsWithContext:(id)arg1 ;
-(id)_verifyAuthorizationWithContext:(id)arg1 ;
-(BOOL)_isAuthorizedViaTCCWithContext:(id)arg1 ;
-(BOOL)_isAuthorizedForReadWriteWithContext:(id)arg1 ;
-(BOOL)_isAuthorizedForWriteOnlyWithContext:(id)arg1 ;
-(BOOL)_isAuthorizedViaPhotoKitEntitlementWithContext:(id)arg1 ;
-(id)_verifyEntitlementsWithContext:(id)arg1 ;
-(id)_errorForMissingEntitlements:(id)arg1 withContext:(id)arg2 ;
-(long long)requiredAuthorization;
-(void)setRequiredAuthorization:(long long)arg1 ;
-(BOOL)allowsAuthorizationWithPhotoKitEntitlement;
-(void)setAllowsAuthorizationWithPhotoKitEntitlement:(BOOL)arg1 ;
-(NSArray *)requiredEntitlements;
-(void)setRequiredEntitlements:(NSArray *)arg1 ;
@end

