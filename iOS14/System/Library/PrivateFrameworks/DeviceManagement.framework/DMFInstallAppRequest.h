/*
* Generated on Thursday, January 14, 2021 at 2:23:24 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/DeviceManagement.framework/DeviceManagement
*/

#import <DeviceManagement/DMFAppRequest.h>

@class NSNumber;

@interface DMFInstallAppRequest : DMFAppRequest {

	BOOL _allowFreePurchases;
	unsigned long long _licenseType;
	NSNumber* _accountIdentifier;

}

@property (assign,nonatomic) unsigned long long licenseType;              //@synthesize licenseType=_licenseType - In the implementation block
@property (assign,nonatomic) BOOL allowFreePurchases;                     //@synthesize allowFreePurchases=_allowFreePurchases - In the implementation block
@property (nonatomic,copy) NSNumber * accountIdentifier;                  //@synthesize accountIdentifier=_accountIdentifier - In the implementation block
+(BOOL)supportsSecureCoding;
+(BOOL)isPermittedOnUserConnection;
+(id)permittedPlatforms;
+(BOOL)isPermittedOnSystemConnection;
-(NSNumber *)accountIdentifier;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setAccountIdentifier:(NSNumber *)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(unsigned long long)licenseType;
-(BOOL)allowFreePurchases;
-(void)setLicenseType:(unsigned long long)arg1 ;
-(void)setAllowFreePurchases:(BOOL)arg1 ;
@end

