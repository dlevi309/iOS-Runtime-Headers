/*
* Generated on Thursday, January 14, 2021 at 2:22:57 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/OctagonTrust.framework/OctagonTrust
*/

#import <OctagonTrust/OctagonTrust-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface OTEscrowAuthenticationInformation : PBCodable <NSCopying> {

	NSString* _authenticationAppleid;
	NSString* _authenticationAuthToken;
	NSString* _authenticationDsid;
	NSString* _authenticationEscrowproxyUrl;
	NSString* _authenticationIcloudEnvironment;
	NSString* _authenticationPassword;
	NSString* _fmipUuid;
	BOOL _fmipRecovery;
	BOOL _idmsRecovery;
	SCD_Struct_OT1 _has;

}

@property (nonatomic,readonly) BOOL hasAuthenticationPassword; 
@property (nonatomic,retain) NSString * authenticationPassword;                       //@synthesize authenticationPassword=_authenticationPassword - In the implementation block
@property (nonatomic,readonly) BOOL hasAuthenticationDsid; 
@property (nonatomic,retain) NSString * authenticationDsid;                           //@synthesize authenticationDsid=_authenticationDsid - In the implementation block
@property (nonatomic,readonly) BOOL hasAuthenticationAppleid; 
@property (nonatomic,retain) NSString * authenticationAppleid;                        //@synthesize authenticationAppleid=_authenticationAppleid - In the implementation block
@property (nonatomic,readonly) BOOL hasFmipUuid; 
@property (nonatomic,retain) NSString * fmipUuid;                                     //@synthesize fmipUuid=_fmipUuid - In the implementation block
@property (assign,nonatomic) BOOL hasFmipRecovery; 
@property (assign,nonatomic) BOOL fmipRecovery;                                       //@synthesize fmipRecovery=_fmipRecovery - In the implementation block
@property (assign,nonatomic) BOOL hasIdmsRecovery; 
@property (assign,nonatomic) BOOL idmsRecovery;                                       //@synthesize idmsRecovery=_idmsRecovery - In the implementation block
@property (nonatomic,readonly) BOOL hasAuthenticationAuthToken; 
@property (nonatomic,retain) NSString * authenticationAuthToken;                      //@synthesize authenticationAuthToken=_authenticationAuthToken - In the implementation block
@property (nonatomic,readonly) BOOL hasAuthenticationEscrowproxyUrl; 
@property (nonatomic,retain) NSString * authenticationEscrowproxyUrl;                 //@synthesize authenticationEscrowproxyUrl=_authenticationEscrowproxyUrl - In the implementation block
@property (nonatomic,readonly) BOOL hasAuthenticationIcloudEnvironment; 
@property (nonatomic,retain) NSString * authenticationIcloudEnvironment;              //@synthesize authenticationIcloudEnvironment=_authenticationIcloudEnvironment - In the implementation block
-(id)dictionaryRepresentation;
-(void)mergeFrom:(id)arg1 ;
-(id)description;
-(BOOL)hasAuthenticationDsid;
-(BOOL)hasAuthenticationPassword;
-(BOOL)hasAuthenticationAppleid;
-(BOOL)hasFmipUuid;
-(void)setFmipRecovery:(BOOL)arg1 ;
-(void)setHasFmipRecovery:(BOOL)arg1 ;
-(BOOL)hasFmipRecovery;
-(void)setHasIdmsRecovery:(BOOL)arg1 ;
-(BOOL)hasIdmsRecovery;
-(BOOL)hasAuthenticationAuthToken;
-(BOOL)hasAuthenticationEscrowproxyUrl;
-(NSString *)authenticationDsid;
-(BOOL)hasAuthenticationIcloudEnvironment;
-(NSString *)authenticationPassword;
-(void)setAuthenticationPassword:(NSString *)arg1 ;
-(void)setAuthenticationDsid:(NSString *)arg1 ;
-(NSString *)authenticationAppleid;
-(void)setAuthenticationAppleid:(NSString *)arg1 ;
-(void)setFmipUuid:(NSString *)arg1 ;
-(BOOL)fmipRecovery;
-(BOOL)idmsRecovery;
-(NSString *)authenticationAuthToken;
-(void)setAuthenticationAuthToken:(NSString *)arg1 ;
-(NSString *)authenticationEscrowproxyUrl;
-(void)setAuthenticationEscrowproxyUrl:(NSString *)arg1 ;
-(NSString *)authenticationIcloudEnvironment;
-(void)setAuthenticationIcloudEnvironment:(NSString *)arg1 ;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(NSString *)fmipUuid;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)setIdmsRecovery:(BOOL)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

