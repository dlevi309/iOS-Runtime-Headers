/*
* Generated on Thursday, January 14, 2021 at 2:23:16 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GameCenterUI.framework/GameCenterUI
*/

@class GKGame;


@protocol GKExtensionProtocol <NSObject>
@property (nonatomic,retain) GKGame * game; 
@optional
-(void)nudge;
-(void)setValue:(id)arg1 forKeyPath:(id)arg2 withReply:(/*^block*/id)arg3;
-(void)remoteViewControllerDidFinish;
-(void)remoteViewControllerDidCancel;
-(void)tearDownExtensionWithReply:(/*^block*/id)arg1;
-(void)hostApp:(id)arg1 grantingAccessExtensionSandbox:(id)arg2 replyWithEndpoint:(/*^block*/id)arg3;

@required
-(GKGame *)game;
-(void)setInitialState:(id)arg1 withReply:(/*^block*/id)arg2;
-(void)setGame:(id)arg1;
-(void)messageFromClient:(id)arg1;

@end

