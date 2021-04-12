/*
* Generated on Monday, March 1, 2021 at 2:32:28 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
*/

#import <iTunesCloud/iTunesCloud-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSData;

@interface ICPBDGSPlayerDelegateInfoToken : PBCodable <NSCopying> {

	double _expirationTimeInterval;
	unsigned long long _sessionID;
	NSString* _storefrontIdentifier;
	NSData* _token;
	SCD_Struct_IC3 _has;

}

@property (nonatomic,readonly) BOOL hasToken; 
@property (nonatomic,retain) NSData * token;                               //@synthesize token=_token - In the implementation block
@property (assign,nonatomic) BOOL hasSessionID; 
@property (assign,nonatomic) unsigned long long sessionID;                 //@synthesize sessionID=_sessionID - In the implementation block
@property (assign,nonatomic) BOOL hasExpirationTimeInterval; 
@property (assign,nonatomic) double expirationTimeInterval;                //@synthesize expirationTimeInterval=_expirationTimeInterval - In the implementation block
@property (nonatomic,readonly) BOOL hasStorefrontIdentifier; 
@property (nonatomic,retain) NSString * storefrontIdentifier;              //@synthesize storefrontIdentifier=_storefrontIdentifier - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSData *)token;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(unsigned long long)sessionID;
-(void)setToken:(NSData *)arg1 ;
-(void)setSessionID:(unsigned long long)arg1 ;
-(void)setHasSessionID:(BOOL)arg1 ;
-(BOOL)hasSessionID;
-(BOOL)hasToken;
-(NSString *)storefrontIdentifier;
-(void)setStorefrontIdentifier:(NSString *)arg1 ;
-(double)expirationTimeInterval;
-(void)setExpirationTimeInterval:(double)arg1 ;
-(void)setHasExpirationTimeInterval:(BOOL)arg1 ;
-(BOOL)hasExpirationTimeInterval;
-(BOOL)hasStorefrontIdentifier;
@end

