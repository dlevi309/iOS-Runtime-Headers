/*
* Generated on Monday, March 1, 2021 at 2:32:28 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
*/

#import <iTunesCloud/iTunesCloud-Structs.h>
#import <ProtocolBuffer/PBRequest.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableArray;

@interface ICPBDGSStartDelegationRequest : PBRequest <NSCopying> {

	NSMutableArray* _playerInfoContextRequestTokens;

}

@property (nonatomic,retain) NSMutableArray * playerInfoContextRequestTokens;              //@synthesize playerInfoContextRequestTokens=_playerInfoContextRequestTokens - In the implementation block
+(Class)playerInfoContextRequestTokenType;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(NSMutableArray *)playerInfoContextRequestTokens;
-(void)addPlayerInfoContextRequestToken:(id)arg1 ;
-(void)clearPlayerInfoContextRequestTokens;
-(unsigned long long)playerInfoContextRequestTokensCount;
-(id)playerInfoContextRequestTokenAtIndex:(unsigned long long)arg1 ;
-(void)setPlayerInfoContextRequestTokens:(NSMutableArray *)arg1 ;
@end

