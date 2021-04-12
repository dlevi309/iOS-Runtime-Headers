/*
* Generated on Thursday, January 14, 2021 at 2:22:44 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
*/

#import <iTunesCloud/iTunesCloud-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSData, NSMutableArray, NSString;

@interface ICPBDGSStartDelegationResponse : PBCodable <NSCopying> {

	NSData* _playerAnisetteMID;
	NSData* _playerDeviceGUID;
	NSMutableArray* _playerInfoContextTokens;
	NSString* _playerUserAgent;

}

@property (nonatomic,readonly) BOOL hasPlayerAnisetteMID; 
@property (nonatomic,retain) NSData * playerAnisetteMID;                            //@synthesize playerAnisetteMID=_playerAnisetteMID - In the implementation block
@property (nonatomic,readonly) BOOL hasPlayerDeviceGUID; 
@property (nonatomic,retain) NSData * playerDeviceGUID;                             //@synthesize playerDeviceGUID=_playerDeviceGUID - In the implementation block
@property (nonatomic,retain) NSMutableArray * playerInfoContextTokens;              //@synthesize playerInfoContextTokens=_playerInfoContextTokens - In the implementation block
@property (nonatomic,readonly) BOOL hasPlayerUserAgent; 
@property (nonatomic,retain) NSString * playerUserAgent;                            //@synthesize playerUserAgent=_playerUserAgent - In the implementation block
+(Class)playerInfoContextTokenType;
-(id)dictionaryRepresentation;
-(void)setPlayerDeviceGUID:(NSData *)arg1 ;
-(void)setPlayerUserAgent:(NSString *)arg1 ;
-(void)setPlayerAnisetteMID:(NSData *)arg1 ;
-(void)setPlayerInfoContextTokens:(NSMutableArray *)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(id)description;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)addPlayerInfoContextToken:(id)arg1 ;
-(BOOL)hasPlayerAnisetteMID;
-(BOOL)hasPlayerDeviceGUID;
-(void)clearPlayerInfoContextTokens;
-(unsigned long long)playerInfoContextTokensCount;
-(id)playerInfoContextTokenAtIndex:(unsigned long long)arg1 ;
-(BOOL)hasPlayerUserAgent;
-(NSData *)playerAnisetteMID;
-(NSData *)playerDeviceGUID;
-(NSMutableArray *)playerInfoContextTokens;
-(NSString *)playerUserAgent;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

