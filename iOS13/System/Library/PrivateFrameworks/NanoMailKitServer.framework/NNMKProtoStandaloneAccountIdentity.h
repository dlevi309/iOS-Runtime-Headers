/*
* Generated on Monday, March 1, 2021 at 2:35:42 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)token;
-(id)dictionaryRepresentation;
-(NSString *)displayName;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(NSString *)accountIdentifier;
-(void)setDisplayName:(NSString *)arg1 ;
-(NSString *)username;
-(void)setUsername:(NSString *)arg1 ;
-(void)setToken:(NSString *)arg1 ;
-(BOOL)hasUsername;
-(void)setAccountIdentifier:(NSString *)arg1 ;
-(BOOL)hasDisplayName;
-(BOOL)hasToken;
-(BOOL)hasAccountIdentifier;
-(NSString *)refreshToken;
-(void)setRefreshToken:(NSString *)arg1 ;
-(BOOL)hasRefreshToken;
-(void)setIdentityType:(unsigned)arg1 ;
-(void)setHasIdentityType:(BOOL)arg1 ;
-(BOOL)hasIdentityType;
-(unsigned)identityType;
@end

