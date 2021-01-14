/*
* Generated on Thursday, January 14, 2021 at 2:26:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ManagedConfigurationUI.framework/ManagedConfigurationUI
*/


#import <ManagedConfigurationUI/ManagedConfigurationUI-Structs.h>
@class NSString;

@interface MCUIProvisioningProfile : NSObject {

	BOOL _isAppleInternal;
	BOOL _isBeta;
	BOOL _isFreeDeveloperProvisioningProfile;
	BOOL _isUniversalProvisioningProfile;
	NSString* _allowedApplicationIdentifierEntitlement;
	NSString* _UUID;

}

@property (nonatomic,retain) NSString * allowedApplicationIdentifierEntitlement;              //@synthesize allowedApplicationIdentifierEntitlement=_allowedApplicationIdentifierEntitlement - In the implementation block
@property (nonatomic,retain) NSString * UUID;                                                 //@synthesize UUID=_UUID - In the implementation block
@property (assign,nonatomic) BOOL isAppleInternal;                                            //@synthesize isAppleInternal=_isAppleInternal - In the implementation block
@property (assign,nonatomic) BOOL isBeta;                                                     //@synthesize isBeta=_isBeta - In the implementation block
@property (assign,nonatomic) BOOL isFreeDeveloperProvisioningProfile;                         //@synthesize isFreeDeveloperProvisioningProfile=_isFreeDeveloperProvisioningProfile - In the implementation block
@property (assign,nonatomic) BOOL isUniversalProvisioningProfile;                             //@synthesize isUniversalProvisioningProfile=_isUniversalProvisioningProfile - In the implementation block
-(BOOL)isBeta;
-(NSString *)UUID;
-(void)setIsAppleInternal:(BOOL)arg1 ;
-(id)initWithProfile:(MISProfileRef)arg1 ;
-(void)setIsBeta:(BOOL)arg1 ;
-(BOOL)allowsApplicationIdentifierEntitlement:(id)arg1 ;
-(BOOL)isAppleInternal;
-(void)setUUID:(NSString *)arg1 ;
-(NSString *)allowedApplicationIdentifierEntitlement;
-(void)setAllowedApplicationIdentifierEntitlement:(NSString *)arg1 ;
-(BOOL)isFreeDeveloperProvisioningProfile;
-(void)setIsFreeDeveloperProvisioningProfile:(BOOL)arg1 ;
-(BOOL)isUniversalProvisioningProfile;
-(void)setIsUniversalProvisioningProfile:(BOOL)arg1 ;
@end

