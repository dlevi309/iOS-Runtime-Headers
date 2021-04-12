/*
* Generated on Monday, March 1, 2021 at 2:32:28 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
*/

#import <iTunesCloud/iTunesCloud-Structs.h>
#import <ProtocolBuffer/PBRequest.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableArray;

@interface ICPBDGSFinishDelegationRequest : PBRequest <NSCopying> {

	NSMutableArray* _playerDelegateInfoTokens;

}

@property (nonatomic,retain) NSMutableArray * playerDelegateInfoTokens;              //@synthesize playerDelegateInfoTokens=_playerDelegateInfoTokens - In the implementation block
+(Class)playerDelegateInfoTokenType;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(NSMutableArray *)playerDelegateInfoTokens;
-(void)addPlayerDelegateInfoToken:(id)arg1 ;
-(void)clearPlayerDelegateInfoTokens;
-(unsigned long long)playerDelegateInfoTokensCount;
-(id)playerDelegateInfoTokenAtIndex:(unsigned long long)arg1 ;
-(void)setPlayerDelegateInfoTokens:(NSMutableArray *)arg1 ;
@end

