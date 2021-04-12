/*
* Generated on Thursday, January 14, 2021 at 2:23:39 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NewsTransport.framework/NewsTransport
*/

#import <NewsTransport/NewsTransport-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSMutableArray;

@interface NTPBTelemetry : PBCodable <NSCopying> {

	long long _appBuild;
	NSString* _appBuildNumber;
	NSString* _appVersion;
	NSString* _carrier;
	int _contentEnvironment;
	NSString* _countryCode;
	NSString* _deviceModel;
	NSString* _devicePlatform;
	NSString* _languageCode;
	NSString* _mobileCountryCode;
	NSString* _mobileNetworkCode;
	NSMutableArray* _networkEventGroups;
	NSString* _osCountryCode;
	int _osInstallVariant;
	NSString* _osVersion;
	NSString* _userId;
	NSString* _userStorefrontId;
	SCD_Struct_NT5 _has;

}

@property (nonatomic,readonly) BOOL hasDeviceModel; 
@property (nonatomic,retain) NSString * deviceModel;                           //@synthesize deviceModel=_deviceModel - In the implementation block
@property (nonatomic,readonly) BOOL hasDevicePlatform; 
@property (nonatomic,retain) NSString * devicePlatform;                        //@synthesize devicePlatform=_devicePlatform - In the implementation block
@property (nonatomic,readonly) BOOL hasOsVersion; 
@property (nonatomic,retain) NSString * osVersion;                             //@synthesize osVersion=_osVersion - In the implementation block
@property (nonatomic,readonly) BOOL hasAppVersion; 
@property (nonatomic,retain) NSString * appVersion;                            //@synthesize appVersion=_appVersion - In the implementation block
@property (assign,nonatomic) BOOL hasAppBuild; 
@property (assign,nonatomic) long long appBuild;                               //@synthesize appBuild=_appBuild - In the implementation block
@property (nonatomic,readonly) BOOL hasCountryCode; 
@property (nonatomic,retain) NSString * countryCode;                           //@synthesize countryCode=_countryCode - In the implementation block
@property (nonatomic,readonly) BOOL hasLanguageCode; 
@property (nonatomic,retain) NSString * languageCode;                          //@synthesize languageCode=_languageCode - In the implementation block
@property (nonatomic,readonly) BOOL hasCarrier; 
@property (nonatomic,retain) NSString * carrier;                               //@synthesize carrier=_carrier - In the implementation block
@property (nonatomic,readonly) BOOL hasMobileCountryCode; 
@property (nonatomic,retain) NSString * mobileCountryCode;                     //@synthesize mobileCountryCode=_mobileCountryCode - In the implementation block
@property (nonatomic,readonly) BOOL hasMobileNetworkCode; 
@property (nonatomic,retain) NSString * mobileNetworkCode;                     //@synthesize mobileNetworkCode=_mobileNetworkCode - In the implementation block
@property (nonatomic,readonly) BOOL hasOsCountryCode; 
@property (nonatomic,retain) NSString * osCountryCode;                         //@synthesize osCountryCode=_osCountryCode - In the implementation block
@property (assign,nonatomic) BOOL hasOsInstallVariant; 
@property (assign,nonatomic) int osInstallVariant;                             //@synthesize osInstallVariant=_osInstallVariant - In the implementation block
@property (assign,nonatomic) BOOL hasContentEnvironment; 
@property (assign,nonatomic) int contentEnvironment;                           //@synthesize contentEnvironment=_contentEnvironment - In the implementation block
@property (nonatomic,readonly) BOOL hasUserId; 
@property (nonatomic,retain) NSString * userId;                                //@synthesize userId=_userId - In the implementation block
@property (nonatomic,readonly) BOOL hasUserStorefrontId; 
@property (nonatomic,retain) NSString * userStorefrontId;                      //@synthesize userStorefrontId=_userStorefrontId - In the implementation block
@property (nonatomic,retain) NSMutableArray * networkEventGroups;              //@synthesize networkEventGroups=_networkEventGroups - In the implementation block
@property (nonatomic,readonly) BOOL hasAppBuildNumber; 
@property (nonatomic,retain) NSString * appBuildNumber;                        //@synthesize appBuildNumber=_appBuildNumber - In the implementation block
+(Class)networkEventGroupsType;
-(BOOL)hasAppVersion;
-(void)setUserId:(NSString *)arg1 ;
-(BOOL)hasAppBuildNumber;
-(void)setHasAppBuild:(BOOL)arg1 ;
-(int)StringAsOsInstallVariant:(id)arg1 ;
-(void)setCountryCode:(NSString *)arg1 ;
-(void)setDevicePlatform:(NSString *)arg1 ;
-(id)dictionaryRepresentation;
-(int)osInstallVariant;
-(BOOL)hasUserId;
-(BOOL)hasOsVersion;
-(void)setDeviceModel:(NSString *)arg1 ;
-(NSString *)userId;
-(void)setOsVersion:(NSString *)arg1 ;
-(NSString *)appBuildNumber;
-(BOOL)hasDevicePlatform;
-(BOOL)hasLanguageCode;
-(void)setAppVersion:(NSString *)arg1 ;
-(BOOL)hasOsInstallVariant;
-(BOOL)hasUserStorefrontId;
-(NSString *)carrier;
-(NSString *)devicePlatform;
-(BOOL)hasCarrier;
-(void)setAppBuild:(long long)arg1 ;
-(void)setOsInstallVariant:(int)arg1 ;
-(NSString *)userStorefrontId;
-(long long)appBuild;
-(void)setHasOsInstallVariant:(BOOL)arg1 ;
-(void)setCarrier:(NSString *)arg1 ;
-(void)setAppBuildNumber:(NSString *)arg1 ;
-(id)osInstallVariantAsString:(int)arg1 ;
-(void)setMobileNetworkCode:(NSString *)arg1 ;
-(void)setLanguageCode:(NSString *)arg1 ;
-(NSString *)deviceModel;
-(NSString *)countryCode;
-(NSString *)appVersion;
-(BOOL)hasMobileCountryCode;
-(BOOL)hasDeviceModel;
-(BOOL)hasCountryCode;
-(NSString *)mobileNetworkCode;
-(id)networkEventGroupsAtIndex:(unsigned long long)arg1 ;
-(NSString *)mobileCountryCode;
-(BOOL)hasOsCountryCode;
-(NSMutableArray *)networkEventGroups;
-(void)setUserStorefrontId:(NSString *)arg1 ;
-(NSString *)osVersion;
-(NSString *)languageCode;
-(void)mergeFrom:(id)arg1 ;
-(void)setNetworkEventGroups:(NSMutableArray *)arg1 ;
-(void)setOsCountryCode:(NSString *)arg1 ;
-(BOOL)hasMobileNetworkCode;
-(id)description;
-(BOOL)hasAppBuild;
-(unsigned long long)networkEventGroupsCount;
-(int)contentEnvironment;
-(BOOL)hasContentEnvironment;
-(unsigned long long)hash;
-(void)setContentEnvironment:(int)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)setMobileCountryCode:(NSString *)arg1 ;
-(void)clearNetworkEventGroups;
-(void)writeTo:(id)arg1 ;
-(NSString *)osCountryCode;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)addNetworkEventGroups:(id)arg1 ;
-(void)setHasContentEnvironment:(BOOL)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

