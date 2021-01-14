/*
* Generated on Thursday, January 14, 2021 at 2:23:16 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GameCenterUI.framework/GameCenterUI
*/


@protocol GKTurnBasedEventListener
@optional
-(void)player:(id)arg1 receivedTurnEventForMatch:(id)arg2 didBecomeActive:(BOOL)arg3;
-(void)player:(id)arg1 wantsToQuitMatch:(id)arg2;
-(void)player:(id)arg1 didRequestMatchWithPlayers:(id)arg2;
-(void)player:(id)arg1 matchEnded:(id)arg2;
-(void)player:(id)arg1 didRequestMatchWithOtherPlayers:(id)arg2;
-(void)player:(id)arg1 receivedExchangeRequest:(id)arg2 forMatch:(id)arg3;
-(void)player:(id)arg1 receivedExchangeCancellation:(id)arg2 forMatch:(id)arg3;
-(void)player:(id)arg1 receivedExchangeReplies:(id)arg2 forCompletedExchange:(id)arg3 forMatch:(id)arg4;

@end

