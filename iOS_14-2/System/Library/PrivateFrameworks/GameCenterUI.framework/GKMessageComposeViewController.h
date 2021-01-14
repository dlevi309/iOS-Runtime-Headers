/*
* Generated on Thursday, January 14, 2021 at 2:23:16 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GameCenterUI.framework/GameCenterUI
*/

#import <UIKitCore/UIViewController.h>
#import <libobjc.A.dylib/MFMessageComposeViewControllerInternalDelegate.h>

@protocol GKMessageComposeViewControllerDelegate, GKDashboardNearbyBrowserDelegate;
@class NSURL, GKTournament, NSArray, MFMessageComposeViewController, NSDictionary, NSString, NSMutableArray;

@interface GKMessageComposeViewController : UIViewController <MFMessageComposeViewControllerInternalDelegate> {

	NSURL* _shareURL;
	id<GKMessageComposeViewControllerDelegate> _delegate;
	id<GKDashboardNearbyBrowserDelegate> _nearbyDelegate;
	GKTournament* _tournament;
	long long _maximumSelectablePlayersForPicker;
	NSArray* _currentlySelectedPlayersForPicker;
	MFMessageComposeViewController* _composeController;
	NSDictionary* _playerNamesToPlayers;
	NSString* _messageToSend;
	NSMutableArray* _friendsToInvite;
	NSMutableArray* _contactsToInvite;

}

@property (nonatomic,retain) MFMessageComposeViewController * composeController;                      //@synthesize composeController=_composeController - In the implementation block
@property (nonatomic,retain) NSDictionary * playerNamesToPlayers;                                     //@synthesize playerNamesToPlayers=_playerNamesToPlayers - In the implementation block
@property (nonatomic,retain) NSString * messageToSend;                                                //@synthesize messageToSend=_messageToSend - In the implementation block
@property (nonatomic,retain) NSMutableArray * friendsToInvite;                                        //@synthesize friendsToInvite=_friendsToInvite - In the implementation block
@property (nonatomic,retain) NSMutableArray * contactsToInvite;                                       //@synthesize contactsToInvite=_contactsToInvite - In the implementation block
@property (nonatomic,retain) NSURL * shareURL;                                                        //@synthesize shareURL=_shareURL - In the implementation block
@property (assign,nonatomic,__weak) id<GKMessageComposeViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic,__weak) id<GKDashboardNearbyBrowserDelegate> nearbyDelegate;              //@synthesize nearbyDelegate=_nearbyDelegate - In the implementation block
@property (nonatomic,retain) GKTournament * tournament;                                               //@synthesize tournament=_tournament - In the implementation block
@property (assign,nonatomic) long long maximumSelectablePlayersForPicker;                             //@synthesize maximumSelectablePlayersForPicker=_maximumSelectablePlayersForPicker - In the implementation block
@property (nonatomic,retain) NSArray * currentlySelectedPlayersForPicker;                             //@synthesize currentlySelectedPlayersForPicker=_currentlySelectedPlayersForPicker - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)canSendText;
-(void)messageComposeViewController:(id)arg1 shouldSendMessage:(id)arg2 toRecipients:(id)arg3 completion:(/*^block*/id)arg4 ;
-(NSURL *)shareURL;
-(id<GKMessageComposeViewControllerDelegate>)delegate;
-(void)setShareURL:(NSURL *)arg1 ;
-(MFMessageComposeViewController *)composeController;
-(void)setDelegate:(id<GKMessageComposeViewControllerDelegate>)arg1 ;
-(void)setNearbyDelegate:(id<GKDashboardNearbyBrowserDelegate>)arg1 ;
-(void)setComposeController:(MFMessageComposeViewController *)arg1 ;
-(id<GKDashboardNearbyBrowserDelegate>)nearbyDelegate;
-(GKTournament *)tournament;
-(void)messageComposeViewController:(id)arg1 didFinishWithResult:(long long)arg2 ;
-(void)setTournament:(GKTournament *)arg1 ;
-(NSString *)messageToSend;
-(void)setupPickerBlock;
-(void)showPlayerPickerForCompose;
-(NSDictionary *)playerNamesToPlayers;
-(void)setPlayerNamesToPlayers:(NSDictionary *)arg1 ;
-(long long)maximumSelectablePlayersForPicker;
-(void)setMessageToSend:(NSString *)arg1 ;
-(NSArray *)currentlySelectedPlayersForPicker;
-(void)addPlayersToMessageCompose:(id)arg1 ;
-(id)contactForAddress:(id)arg1 fromContactStore:(id)arg2 ;
-(void)setContactsToInvite:(NSMutableArray *)arg1 ;
-(void)setFriendsToInvite:(NSMutableArray *)arg1 ;
-(NSMutableArray *)contactsToInvite;
-(NSMutableArray *)friendsToInvite;
-(id)initWithMessage:(id)arg1 maxNumberOfPlayers:(long long)arg2 ;
-(void)preparePresentationForMinPlayers:(long long)arg1 maxPlayers:(long long)arg2 shareURL:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)setMaximumSelectablePlayersForPicker:(long long)arg1 ;
-(void)setCurrentlySelectedPlayersForPicker:(NSArray *)arg1 ;
@end

