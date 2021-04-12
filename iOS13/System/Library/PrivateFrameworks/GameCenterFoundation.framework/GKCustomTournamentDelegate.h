/*
* Generated on Monday, March 1, 2021 at 2:34:50 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/GameCenterFoundation.framework/GameCenterFoundation
*/

@class GKPlayer;


@protocol GKCustomTournamentDelegate
@property (nonatomic,readonly) GKPlayer * creator; 
@required
-(GKPlayer *)creator;
-(void)addInvitees:(id)arg1 completionHandler:(/*^block*/id)arg2;
-(void)removeInvitees:(id)arg1 completionHandler:(/*^block*/id)arg2;
-(void)addCreator:(id)arg1 completionHandler:(/*^block*/id)arg2;
-(void)removeCreator:(id)arg1 completionHandler:(/*^block*/id)arg2;
-(void)acceptInvitationWithCompletionHandler:(/*^block*/id)arg1;
-(void)declineInvitationWithCompletionHandler:(/*^block*/id)arg1;

@end

