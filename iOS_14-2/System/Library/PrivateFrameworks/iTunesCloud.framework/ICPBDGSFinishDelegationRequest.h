/*
* Generated on Thursday, January 14, 2021 at 2:22:44 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)dictionaryRepresentation;
-(NSMutableArray *)playerDelegateInfoTokens;
-(void)mergeFrom:(id)arg1 ;
-(id)description;
-(void)addPlayerDelegateInfoToken:(id)arg1 ;
-(void)clearPlayerDelegateInfoTokens;
-(unsigned long long)playerDelegateInfoTokensCount;
-(id)playerDelegateInfoTokenAtIndex:(unsigned long long)arg1 ;
-(void)setPlayerDelegateInfoTokens:(NSMutableArray *)arg1 ;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

