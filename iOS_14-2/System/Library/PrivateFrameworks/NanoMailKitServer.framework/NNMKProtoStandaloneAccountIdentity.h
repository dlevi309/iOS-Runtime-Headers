/*
* Generated on Thursday, January 14, 2021 at 2:26:04 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NanoMailKitServer.framework/NanoMailKitServer
*/

#import <NanoMailKitServer/NanoMailKitServer-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface NNMKProtoStandaloneAccountIdentity : PBCodable <NSCopying> {

	NSString* _accountIdentifier;
	NSString* _displayName;
	unsigned _identityType;
	NSString* _refreshToken;
	NSString* _token;
	NSString* _username;
	SCD_Struct_NN1 _has;

}

@property (nonatomic,readonly) BOOL hasUsername; 
@property (nonatomic,retain) NSString * username;                       //@synthesize username=_username - In the implementation block
@property (nonatomic,readonly) BOOL hasDisplayName; 
@property (nonatomic,retain) NSString * displayName;                    //@synthesize displayName=_displayName - In the implementation block
@property (nonatomic,readonly) BOOL hasToken; 
@property (nonatomic,retain) NSString * token;                          //@synthesize token=_token - In the implementation block
@property (nonatomic,readonly) BOOL hasRefreshToken; 
@property (nonatomic,retain) NSString * refreshToken;                   //@synthesize refreshToken=_refreshToken - In the implementation block
@property (assign,nonatomic) BOOL hasIdentityType; 
@property (assign,nonatomic) unsigned identityType;                     //@synthesize identityType=_identityType - In the implementation block
@property (nonatomic,readonly) BOOL hasAccountIdentifier; 
@property (nonatomic,retain) NSString * accountIdentifier;              //@synthesize accountIdentifier=_accountIdentifier - In the implementation block
-(id)dictionaryRepresentation;
-(void)setUsername:(NSString *)arg1 ;
-(BOOL)hasUsername;
-(BOOL)hasAccountIdentifier;
-(NSString *)accountIdentifier;
-(NSString *)refreshToken;
-(void)mergeFrom:(id)arg1 ;
-(NSString *)username;
-(id)description;
-(void)setAccountIdentifier:(NSString *)arg1 ;
-(BOOL)hasToken;
-(void)setToken:(NSString *)arg1 ;
-(void)setDisplayName:(NSString *)arg1 ;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(NSString *)token;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)displayName;
-(unsigned)identityType;
-(void)setIdentityType:(unsigned)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(BOOL)hasDisplayName;
-(void)setRefreshToken:(NSString *)arg1 ;
-(BOOL)hasRefreshToken;
-(void)setHasIdentityType:(BOOL)arg1 ;
-(BOOL)hasIdentityType;
@end

