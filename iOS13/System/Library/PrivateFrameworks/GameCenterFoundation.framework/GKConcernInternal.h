/*
* Generated on Monday, March 1, 2021 at 2:34:51 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)message;
-(void)setMessage:(NSString *)arg1 ;
-(GKPlayerInternal *)player;
-(void)setPlayer:(GKPlayerInternal *)arg1 ;
-(unsigned)concernID;
-(void)setConcernID:(unsigned)arg1 ;
@end

