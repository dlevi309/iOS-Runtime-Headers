/*
* Generated on Thursday, January 14, 2021 at 2:23:15 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GameCenterUI.framework/GameCenterUI
*/

@class GKGame;


@protocol GKExtensionHostProtocol <NSObject>
@property (nonatomic,retain) GKGame * game; 
@optional
-(void)remoteViewControllerIsFinishing;
-(void)remoteViewControllerIsCanceling;

@required
-(GKGame *)game;
-(void)messageFromExtension:(id)arg1;
-(void)setGame:(id)arg1;

@end

