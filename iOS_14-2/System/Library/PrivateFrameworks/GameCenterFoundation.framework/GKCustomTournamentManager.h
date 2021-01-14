/*
* Generated on Thursday, January 14, 2021 at 2:24:46 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GameCenterFoundation.framework/GameCenterFoundation
*/

#import <libobjc.A.dylib/GKCustomTournamentDelegate.h>

@class GKPlayer, GKTournament;

@interface GKCustomTournamentManager : NSObject <GKCustomTournamentDelegate> {

	GKTournament* _tournament;
	GKPlayer* _creator;

}

@property (assign,nonatomic,__weak) GKTournament * tournament;              //@synthesize tournament=_tournament - In the implementation block
@property (nonatomic,retain) GKPlayer * creator;                            //@synthesize creator=_creator - In the implementation block
-(GKPlayer *)creator;
-(GKTournament *)tournament;
-(void)setCreator:(GKPlayer *)arg1 ;
-(void)setTournament:(GKTournament *)arg1 ;
-(void)addInvitees:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)removeInvitees:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)addCreator:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)removeCreator:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)acceptInvitationWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)declineInvitationWithCompletionHandler:(/*^block*/id)arg1 ;
@end

