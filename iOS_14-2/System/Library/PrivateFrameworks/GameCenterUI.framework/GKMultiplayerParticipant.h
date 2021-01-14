/*
* Generated on Thursday, January 14, 2021 at 2:23:15 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GameCenterUI.framework/GameCenterUI
*/

#import <GameCenterUI/GameCenterUI-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class GKPlayer;

@interface GKMultiplayerParticipant : NSObject <NSCopying> {

	long long _type;
	long long _status;
	GKPlayer* _player;
	long long _number;

}

@property (assign,nonatomic) long long type;                 //@synthesize type=_type - In the implementation block
@property (assign,nonatomic) long long status;               //@synthesize status=_status - In the implementation block
@property (nonatomic,retain) GKPlayer * player;              //@synthesize player=_player - In the implementation block
@property (assign,nonatomic) long long number;               //@synthesize number=_number - In the implementation block
+(id)stringFromGKMultiplayerParticipantStatus:(long long)arg1 ;
-(void)setNumber:(long long)arg1 ;
-(GKPlayer *)player;
-(void)setPlayer:(GKPlayer *)arg1 ;
-(long long)number;
-(id)init;
-(void)setType:(long long)arg1 ;
-(id)description;
-(long long)type;
-(unsigned long long)hash;
-(void)setStatus:(long long)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(long long)status;
-(void)dealloc;
@end

