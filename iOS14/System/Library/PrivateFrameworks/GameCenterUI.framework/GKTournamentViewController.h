/*
* Generated on Thursday, January 14, 2021 at 2:23:16 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GameCenterUI.framework/GameCenterUI
*/

#import <UIKitCore/UIViewController.h>
#import <libobjc.A.dylib/GKTournamentHostInterface.h>

@protocol GKTournamentViewControllerDelegate;
@class GKTournament, GKTournamentDefinition, GKExtensionManager, UIAlertController, NSString, GKScore, GKTournamentViewRequest;

@interface GKTournamentViewController : UIViewController <GKTournamentHostInterface> {

	BOOL _playerResigned;
	GKTournament* _tournament;
	GKTournamentDefinition* _tournamentDefinition;
	id<GKTournamentViewControllerDelegate> _delegate;
	GKExtensionManager* _extensionManager;
	UIAlertController* _alertController;
	NSString* _tournamentID;
	GKScore* _playerScore;
	GKTournamentViewRequest* _viewRequest;

}

@property (nonatomic,retain) GKExtensionManager * extensionManager;                               //@synthesize extensionManager=_extensionManager - In the implementation block
@property (nonatomic,retain) UIAlertController * alertController;                                 //@synthesize alertController=_alertController - In the implementation block
@property (nonatomic,retain) NSString * tournamentID;                                             //@synthesize tournamentID=_tournamentID - In the implementation block
@property (nonatomic,retain) GKScore * playerScore;                                               //@synthesize playerScore=_playerScore - In the implementation block
@property (assign,nonatomic) BOOL playerResigned;                                                 //@synthesize playerResigned=_playerResigned - In the implementation block
@property (nonatomic,retain) GKTournamentViewRequest * viewRequest;                               //@synthesize viewRequest=_viewRequest - In the implementation block
@property (nonatomic,readonly) GKTournament * tournament;                                         //@synthesize tournament=_tournament - In the implementation block
@property (nonatomic,retain) GKTournamentDefinition * tournamentDefinition;                       //@synthesize tournamentDefinition=_tournamentDefinition - In the implementation block
@property (assign,nonatomic,__weak) id<GKTournamentViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(GKExtensionManager *)extensionManager;
-(id<GKTournamentViewControllerDelegate>)delegate;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)loadRemoteView;
-(UIAlertController *)alertController;
-(GKTournamentViewRequest *)viewRequest;
-(void)setDelegate:(id<GKTournamentViewControllerDelegate>)arg1 ;
-(void)didReceiveMemoryWarning;
-(void)dismissViewControllerAnimated:(BOOL)arg1 completion:(/*^block*/id)arg2 ;
-(oneway void)extensionWillFinish;
-(oneway void)extensionDidTerminateWithError:(id)arg1 ;
-(oneway void)playTournament:(id)arg1 withTryToken:(id)arg2 ;
-(void)viewDidLoad;
-(GKTournament *)tournament;
-(void)setAlertController:(UIAlertController *)arg1 ;
-(void)setExtensionManager:(GKExtensionManager *)arg1 ;
-(void)setViewRequest:(GKTournamentViewRequest *)arg1 ;
-(void)willFinishWithError:(id)arg1 ;
-(id)initWithViewRequest:(id)arg1 ;
-(void)setTournamentDefinition:(GKTournamentDefinition *)arg1 ;
-(GKTournamentDefinition *)tournamentDefinition;
-(NSString *)tournamentID;
-(void)setTournamentID:(NSString *)arg1 ;
-(GKScore *)playerScore;
-(void)setPlayerScore:(GKScore *)arg1 ;
-(BOOL)playerResigned;
-(void)setPlayerResigned:(BOOL)arg1 ;
@end

