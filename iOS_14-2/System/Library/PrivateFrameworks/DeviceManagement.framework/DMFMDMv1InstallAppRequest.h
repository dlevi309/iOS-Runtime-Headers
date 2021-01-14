/*
* Generated on Thursday, January 14, 2021 at 2:23:24 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/DeviceManagement.framework/DeviceManagement
*/

#import <DeviceManagement/DMFInstallAppRequest.h>

@class NSString, NSArray, NSNumber, NSDictionary;

@interface DMFMDMv1InstallAppRequest : DMFInstallAppRequest {

	BOOL _manage;
	NSString* _redemptionCode;
	NSString* _originator;
	unsigned long long _managementOptions;
	NSString* _VPNUUIDString;
	NSArray* _associatedDomains;
	NSNumber* _associatedDomainsEnableDirectDownloads;
	NSNumber* _removable;
	NSDictionary* _configuration;
	NSString* _personaID;

}

@property (nonatomic,copy) NSString * redemptionCode;                                      //@synthesize redemptionCode=_redemptionCode - In the implementation block
@property (nonatomic,copy) NSString * originator;                                          //@synthesize originator=_originator - In the implementation block
@property (assign,nonatomic) BOOL manage;                                                  //@synthesize manage=_manage - In the implementation block
@property (assign,nonatomic) unsigned long long managementOptions;                         //@synthesize managementOptions=_managementOptions - In the implementation block
@property (nonatomic,copy) NSString * VPNUUIDString;                                       //@synthesize VPNUUIDString=_VPNUUIDString - In the implementation block
@property (nonatomic,copy) NSArray * associatedDomains;                                    //@synthesize associatedDomains=_associatedDomains - In the implementation block
@property (nonatomic,copy) NSNumber * associatedDomainsEnableDirectDownloads;              //@synthesize associatedDomainsEnableDirectDownloads=_associatedDomainsEnableDirectDownloads - In the implementation block
@property (nonatomic,copy) NSNumber * removable;                                           //@synthesize removable=_removable - In the implementation block
@property (nonatomic,copy) NSDictionary * configuration;                                   //@synthesize configuration=_configuration - In the implementation block
@property (nonatomic,copy) NSString * personaID;                                           //@synthesize personaID=_personaID - In the implementation block
+(BOOL)supportsSecureCoding;
+(BOOL)isPermittedOnUserConnection;
+(Class)whitelistedClassForResultObject;
+(id)permittedPlatforms;
+(BOOL)isPermittedOnSystemConnection;
-(void)setPersonaID:(NSString *)arg1 ;
-(unsigned long long)managementOptions;
-(void)setManage:(BOOL)arg1 ;
-(void)setManagementOptions:(unsigned long long)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)manage;
-(NSString *)personaID;
-(NSArray *)associatedDomains;
-(NSNumber *)removable;
-(NSString *)VPNUUIDString;
-(void)setVPNUUIDString:(NSString *)arg1 ;
-(NSNumber *)associatedDomainsEnableDirectDownloads;
-(void)setAssociatedDomainsEnableDirectDownloads:(NSNumber *)arg1 ;
-(void)setRemovable:(NSNumber *)arg1 ;
-(NSString *)redemptionCode;
-(void)setRedemptionCode:(NSString *)arg1 ;
-(NSDictionary *)configuration;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)originator;
-(void)setAssociatedDomains:(NSArray *)arg1 ;
-(void)setOriginator:(NSString *)arg1 ;
-(void)setConfiguration:(NSDictionary *)arg1 ;
@end

