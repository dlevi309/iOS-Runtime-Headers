/*
* Generated on Thursday, January 14, 2021 at 2:24:46 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GameCenterFoundation.framework/GameCenterFoundation
*/

#import <GameCenterFoundation/GKSpecialPlayerInternal.h>

@interface GKAutomatchPlayerInternal : GKSpecialPlayerInternal {

	long long _automatchPosition;

}

@property (assign,nonatomic) long long automatchPosition;              //@synthesize automatchPosition=_automatchPosition - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)playerID;
-(id)alias;
-(BOOL)isAutomatchPlayer;
-(void)setAutomatchPosition:(long long)arg1 ;
-(long long)automatchPosition;
-(id)teamPlayerID;
-(id)gamePlayerID;
@end

