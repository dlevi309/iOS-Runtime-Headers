/*
* Generated on Thursday, January 14, 2021 at 2:23:16 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GameCenterUI.framework/GameCenterUI
*/

#import <GameCenterUI/GKExtensionRemoteViewController.h>
#import <libobjc.A.dylib/GKTurnBasedMatchmakerHostProtocol.h>
#import <libobjc.A.dylib/GKTurnBasedMatchmakerServiceProtocol.h>

@class GKTurnBasedMatchmakerViewController, GKGame, NSString;

@interface GKTurnBasedMatchmakerHostViewController : GKExtensionRemoteViewController <GKTurnBasedMatchmakerHostProtocol, GKTurnBasedMatchmakerServiceProtocol> {

	GKTurnBasedMatchmakerViewController* _delegate;

}

@property (assign,nonatomic,__weak) GKTurnBasedMatchmakerViewController * delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) GKGame * game; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)turnBasedMatchmakerExtension;
+(BOOL)dismissAutomaticallyAfterExtensionCompletion;
-(GKTurnBasedMatchmakerViewController *)delegate;
-(void)setShowPlay:(BOOL)arg1 ;
-(void)extensionIsCanceling;
-(id)extensionObjectProxy;
-(void)setMatchRequestInternal:(id)arg1 ;
-(void)setShowQuit:(BOOL)arg1 ;
-(void)setDelegate:(GKTurnBasedMatchmakerViewController *)arg1 ;
-(void)messageFromExtension:(id)arg1 ;
-(void)refreshMatches;
-(void)setShowExistingMatches:(BOOL)arg1 ;
@end

