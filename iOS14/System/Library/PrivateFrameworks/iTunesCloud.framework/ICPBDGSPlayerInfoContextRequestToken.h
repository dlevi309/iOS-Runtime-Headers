/*
* Generated on Thursday, January 14, 2021 at 2:22:45 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
*/

#import <iTunesCloud/iTunesCloud-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSData;

@interface ICPBDGSPlayerInfoContextRequestToken : PBCodable <NSCopying> {

	unsigned long long _accountID;
	unsigned long long _sessionID;
	NSData* _token;
	SCD_Struct_IC4 _has;

}

@property (assign,nonatomic) BOOL hasAccountID; 
@property (assign,nonatomic) unsigned long long accountID;              //@synthesize accountID=_accountID - In the implementation block
@property (nonatomic,readonly) BOOL hasToken; 
@property (nonatomic,retain) NSData * token;                            //@synthesize token=_token - In the implementation block
@property (assign,nonatomic) BOOL hasSessionID; 
@property (assign,nonatomic) unsigned long long sessionID;              //@synthesize sessionID=_sessionID - In the implementation block
-(unsigned long long)accountID;
-(BOOL)hasSessionID;
-(id)dictionaryRepresentation;
-(void)setAccountID:(unsigned long long)arg1 ;
-(unsigned long long)sessionID;
-(void)setSessionID:(unsigned long long)arg1 ;
-(void)setHasAccountID:(BOOL)arg1 ;
-(BOOL)hasAccountID;
-(void)mergeFrom:(id)arg1 ;
-(id)description;
-(BOOL)hasToken;
-(void)setToken:(NSData *)arg1 ;
-(void)setHasSessionID:(BOOL)arg1 ;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(NSData *)token;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

