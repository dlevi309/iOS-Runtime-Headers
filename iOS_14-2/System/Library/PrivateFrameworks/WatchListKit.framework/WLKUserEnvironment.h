/*
* Generated on Thursday, January 14, 2021 at 2:26:49 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WatchListKit.framework/WatchListKit
*/


@class NSNumber, NSString, NSDictionary, NSArray;

@interface WLKUserEnvironment : NSObject {

	BOOL _consented;
	BOOL _internalBuild;
	NSNumber* _DSID;
	NSString* _storeFrontIdentifier;
	NSString* _localeIdentifier;
	NSDictionary* _entitlements;
	NSString* _restrictions;
	NSArray* _consentedBrands;
	NSDictionary* _location;
	unsigned long long _protocolVersion;
	NSArray* _deniedBrands;
	NSString* _platform;

}

@property (assign,nonatomic) unsigned long long protocolVersion;              //@synthesize protocolVersion=_protocolVersion - In the implementation block
@property (nonatomic,retain) NSNumber * DSID;                                 //@synthesize DSID=_DSID - In the implementation block
@property (nonatomic,retain) NSString * storeFrontIdentifier;                 //@synthesize storeFrontIdentifier=_storeFrontIdentifier - In the implementation block
@property (nonatomic,retain) NSString * localeIdentifier;                     //@synthesize localeIdentifier=_localeIdentifier - In the implementation block
@property (nonatomic,retain) NSDictionary * entitlements;                     //@synthesize entitlements=_entitlements - In the implementation block
@property (nonatomic,retain) NSString * restrictions;                         //@synthesize restrictions=_restrictions - In the implementation block
@property (nonatomic,retain) NSArray * consentedBrands;                       //@synthesize consentedBrands=_consentedBrands - In the implementation block
@property (nonatomic,retain) NSArray * deniedBrands;                          //@synthesize deniedBrands=_deniedBrands - In the implementation block
@property (assign,nonatomic) BOOL consented;                                  //@synthesize consented=_consented - In the implementation block
@property (assign,nonatomic) BOOL internalBuild;                              //@synthesize internalBuild=_internalBuild - In the implementation block
@property (nonatomic,retain) NSString * platform;                             //@synthesize platform=_platform - In the implementation block
@property (nonatomic,readonly) NSDictionary * location;                       //@synthesize location=_location - In the implementation block
+(id)currentEnvironment;
+(void)setCurrentEnvironmentForTesting:(id)arg1 ;
-(BOOL)internalBuild;
-(NSString *)localeIdentifier;
-(NSDictionary *)entitlements;
-(NSString *)platform;
-(NSString *)storeFrontIdentifier;
-(NSNumber *)DSID;
-(id)init;
-(void)setPlatform:(NSString *)arg1 ;
-(void)setEntitlements:(NSDictionary *)arg1 ;
-(void)setProtocolVersion:(unsigned long long)arg1 ;
-(NSDictionary *)location;
-(unsigned long long)protocolVersion;
-(id)_queryParameters;
-(void)setDSID:(NSNumber *)arg1 ;
-(id)description;
-(NSArray *)deniedBrands;
-(NSString *)restrictions;
-(void)setRestrictions:(NSString *)arg1 ;
-(void)setStoreFrontIdentifier:(NSString *)arg1 ;
-(unsigned long long)hash;
-(NSArray *)consentedBrands;
-(void)setInternalBuild:(BOOL)arg1 ;
-(void)setLocaleIdentifier:(NSString *)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(BOOL)isEqualToEnvironment:(id)arg1 ;
-(BOOL)consented;
-(id)_entitlementsQuery;
-(id)_consentQuery;
-(id)_locationQueryParameters;
-(void)setConsentedBrands:(NSArray *)arg1 ;
-(void)setConsented:(BOOL)arg1 ;
-(void)setDeniedBrands:(NSArray *)arg1 ;
@end

