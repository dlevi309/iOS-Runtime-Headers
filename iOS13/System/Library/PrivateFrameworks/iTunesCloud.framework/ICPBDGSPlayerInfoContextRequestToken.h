/*
* Generated on Monday, March 1, 2021 at 2:32:29 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
	SCD_Struct_IC3 _has;

}

@property (assign,nonatomic) BOOL hasAccountID; 
@property (assign,nonatomic) unsigned long long accountID;              //@synthesize accountID=_accountID - In the implementation block
@property (nonatomic,readonly) BOOL hasToken; 
@property (nonatomic,retain) NSData * token;                            //@synthesize token=_token - In the implementation block
@property (assign,nonatomic) BOOL hasSessionID; 
@property (assign,nonatomic) unsigned long long sessionID;              //@synthesize sessionID=_sessionID - In the implementation block
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
-(unsigned long long)accountID;
-(void)setAccountID:(unsigned long long)arg1 ;
-(void)setHasSessionID:(BOOL)arg1 ;
-(BOOL)hasSessionID;
-(BOOL)hasToken;
-(void)setHasAccountID:(BOOL)arg1 ;
-(BOOL)hasAccountID;
@end

