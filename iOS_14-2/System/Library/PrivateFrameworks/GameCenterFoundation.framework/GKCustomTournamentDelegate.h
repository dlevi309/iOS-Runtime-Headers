/*
* Generated on Thursday, January 14, 2021 at 2:24:46 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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

