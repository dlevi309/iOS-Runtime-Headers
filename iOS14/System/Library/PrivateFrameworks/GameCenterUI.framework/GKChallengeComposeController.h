/*
* Generated on Thursday, January 14, 2021 at 2:23:16 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GameCenterUI.framework/GameCenterUI
*/

#import <GameCenterUI/GKSimpleComposeController.h>

@class GKComposeHeaderField, GKChallenge, NSArray;

@interface GKChallengeComposeController : GKSimpleComposeController {

	GKComposeHeaderField* _challengeField;
	GKChallenge* _challenge;
	NSArray* _playersToLoad;

}

@property (nonatomic,retain) GKComposeHeaderField * challengeField;              //@synthesize challengeField=_challengeField - In the implementation block
@property (nonatomic,retain) GKChallenge * challenge;                            //@synthesize challenge=_challenge - In the implementation block
@property (nonatomic,retain) NSArray * playersToLoad;                            //@synthesize playersToLoad=_playersToLoad - In the implementation block
+(id)friendPickerFlowForChallenge:(id)arg1 selectPlayers:(id)arg2 defaultMessage:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
+(id)composeFlowForChallenge:(id)arg1 players:(id)arg2 defaultMessage:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
+(void)composeAndSendFlowForChallenge:(id)arg1 selectPlayers:(id)arg2 defaultMessage:(id)arg3 forcePicker:(BOOL)arg4 readyHandler:(/*^block*/id)arg5 completionHandler:(/*^block*/id)arg6 ;
-(GKComposeHeaderField *)challengeField;
-(id)init;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)setPlayersToLoad:(NSArray *)arg1 ;
-(void)setChallengeField:(GKComposeHeaderField *)arg1 ;
-(void)updateChallengeText;
-(NSArray *)playersToLoad;
-(id)initWithChallenge:(id)arg1 defaultMessage:(id)arg2 players:(id)arg3 ;
-(void)setChallenge:(GKChallenge *)arg1 ;
-(void)viewDidLoad;
-(void)donePressed;
-(GKChallenge *)challenge;
-(void)loadView;
-(void)cancel;
-(void)dealloc;
@end

