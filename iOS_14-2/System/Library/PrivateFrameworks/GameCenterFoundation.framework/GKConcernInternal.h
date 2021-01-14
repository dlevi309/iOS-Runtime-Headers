/*
* Generated on Thursday, January 14, 2021 at 2:24:46 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GameCenterFoundation.framework/GameCenterFoundation
*/

#import <GameCenterFoundation/GKInternalRepresentation.h>

@class GKPlayerInternal, NSString;

@interface GKConcernInternal : GKInternalRepresentation {

	GKPlayerInternal* _player;
	NSString* _message;
	unsigned _concernID;

}

@property (nonatomic,retain) GKPlayerInternal * player;              //@synthesize player=_player - In the implementation block
@property (assign,nonatomic) unsigned concernID;                     //@synthesize concernID=_concernID - In the implementation block
@property (nonatomic,copy) NSString * message;                       //@synthesize message=_message - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)secureCodedPropertyKeys;
-(GKPlayerInternal *)player;
-(void)setMessage:(NSString *)arg1 ;
-(void)setPlayer:(GKPlayerInternal *)arg1 ;
-(NSString *)message;
-(unsigned long long)hash;
-(BOOL)isEqual:(id)arg1 ;
-(void)dealloc;
-(unsigned)concernID;
-(void)setConcernID:(unsigned)arg1 ;
@end

