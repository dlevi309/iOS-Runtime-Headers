/*
* Generated on Monday, March 1, 2021 at 2:34:51 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/GameCenterFoundation.framework/GameCenterFoundation
*/

#import <GameCenterFoundation/GKPlayer.h>
#import <libobjc.A.dylib/GKLocalPlayerAuthenticationUIPersonality.h>
#import <libobjc.A.dylib/NSCoding.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/GKSavedGameListener.h>

@protocol GKLocalPlayerListenerPrivate;
@class GKInvite, UIAlertView, NSInvocation, GKEventEmitter, UIViewController, NSString;

@interface GKLocalPlayer : GKPlayer <GKLocalPlayerAuthenticationUIPersonality, NSCoding, NSSecureCoding, GKSavedGameListener> {

	BOOL _authenticated;
	BOOL _didAuthenticate;
	BOOL _validatingAccount;
	BOOL _enteringForeground;
	BOOL _newToGameCenter;
	BOOL _showingInGameUI;
	BOOL _shouldPreserveOnboardingUI;
	GKInvite* _acceptedInvite;
	/*^block*/id _validateAccountCompletionHandler;
	UIAlertView* _loginAlertView;
	UIAlertView* _currentAlert;
	NSInvocation* _currentFriendRequestInvocation;
	long long _environment;
	GKEventEmitter*<GKLocalPlayerListenerPrivate> _eventEmitter;
	double _authStartTimeStamp;
	unsigned long long _authenticationType;

}

@property (nonatomic,retain) UIViewController * rootViewController; 
@property (nonatomic,retain) UIViewController * activeViewController; 
@property (nonatomic,retain) UIViewController*<GKAuthenticateViewController> signInViewController; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy) id validateAccountCompletionHandler;                                                    //@synthesize validateAccountCompletionHandler=_validateAccountCompletionHandler - In the implementation block
@property (nonatomic,retain) UIAlertView * loginAlertView;                                                         //@synthesize loginAlertView=_loginAlertView - In the implementation block
@property (assign,nonatomic) UIAlertView * currentAlert;                                                           //@synthesize currentAlert=_currentAlert - In the implementation block
@property (nonatomic,retain) NSInvocation * currentFriendRequestInvocation;                                        //@synthesize currentFriendRequestInvocation=_currentFriendRequestInvocation - In the implementation block
@property (assign,nonatomic) BOOL didAuthenticate;                                                                 //@synthesize didAuthenticate=_didAuthenticate - In the implementation block
@property (assign,nonatomic) BOOL validatingAccount;                                                               //@synthesize validatingAccount=_validatingAccount - In the implementation block
@property (assign,nonatomic) BOOL enteringForeground;                                                              //@synthesize enteringForeground=_enteringForeground - In the implementation block
@property (assign,nonatomic) BOOL appIsInBackground; 
@property (assign,getter=isAuthenticated,nonatomic) BOOL authenticated;                                            //@synthesize authenticated=_authenticated - In the implementation block
@property (getter=isAuthenticating,nonatomic,readonly) BOOL authenticating; 
@property (assign,nonatomic) BOOL insideAuthenticatorInvocation; 
@property (nonatomic,retain) NSString * accountName; 
@property (nonatomic,retain) NSString * firstName; 
@property (nonatomic,retain) NSString * lastName; 
@property (nonatomic,retain) GKInvite * acceptedInvite;                                                            //@synthesize acceptedInvite=_acceptedInvite - In the implementation block
@property (getter=isAvatarEditingRestricted,nonatomic,readonly) BOOL avatarEditingRestricted; 
@property (assign,getter=isPurpleBuddyAccount,nonatomic) BOOL purpleBuddyAccount; 
@property (assign,getter=isDefaultNickname,nonatomic) BOOL defaultNickname; 
@property (nonatomic,readonly) long long environment;                                                              //@synthesize environment=_environment - In the implementation block
@property (nonatomic,readonly) BOOL allowNearbyMultiplayer; 
@property (assign,getter=isNewToGameCenter,nonatomic) BOOL newToGameCenter;                                        //@synthesize newToGameCenter=_newToGameCenter - In the implementation block
@property (nonatomic,readonly) NSString * facebookUserID; 
@property (nonatomic,readonly) NSString * iCloudUserID; 
@property (getter=isFindable,nonatomic,readonly) BOOL findable; 
@property (nonatomic,retain) GKEventEmitter*<GKLocalPlayerListenerPrivate> eventEmitter;                           //@synthesize eventEmitter=_eventEmitter - In the implementation block
@property (assign,getter=isShowingInGameUI,nonatomic) BOOL showingInGameUI;                                        //@synthesize showingInGameUI=_showingInGameUI - In the implementation block
@property (assign,nonatomic) BOOL shouldPreserveOnboardingUI;                                                      //@synthesize shouldPreserveOnboardingUI=_shouldPreserveOnboardingUI - In the implementation block
@property (assign,nonatomic) double authStartTimeStamp;                                                            //@synthesize authStartTimeStamp=_authStartTimeStamp - In the implementation block
@property (assign,nonatomic) unsigned long long authenticationType;                                                //@synthesize authenticationType=_authenticationType - In the implementation block
@property (getter=isUnderage,nonatomic,readonly) BOOL underage; 
@property (getter=isMultiplayerGamingRestricted,nonatomic,readonly) BOOL multiplayerGamingRestricted; 
@property (nonatomic,copy) id authenticateHandler; 
+(id)accountName;
+(BOOL)hasAuthenticatedAccount;
+(id)sharedLocalPlayerAuthenticator;
+(id)authenticationPersonality;
+(void)setAuthenticationPersonality:(id)arg1 ;
+(BOOL)supportsSecureCoding;
+(void)performAsync:(/*^block*/id)arg1 ;
+(id)local;
+(void)performSync:(/*^block*/id)arg1 ;
+(id)localPlayer;
+(id)authenticatedLocalPlayersWithStatus:(unsigned long long)arg1 ;
+(id)authenticatedLocalPlayersFiltered:(long long)arg1 ;
+(id)localPlayerAccessQueue;
+(id)_localPlayersFromInternals:(id)arg1 authenticated:(BOOL)arg2 ;
+(id)authenticatedLocalPlayers;
+(void)_sendPlayerAuthAPINotificationForLoggedInPlayerInternals:(id)arg1 loggedOutPlayerInternals:(id)arg2 oldPrimary:(id)arg3 newPrimary:(id)arg4 ;
+(id)localPlayers;
+(id)localPlayerForCredential:(id)arg1 ;
+(void)authenticatedLocalPlayersDidChange:(id)arg1 complete:(/*^block*/id)arg2 ;
+(void)authenticateWithUsername:(id)arg1 password:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)setRootViewController:(UIViewController *)arg1 ;
-(UIViewController *)rootViewController;
-(void)alertView:(id)arg1 didDismissWithButtonIndex:(long long)arg2 ;
-(void)applicationWillEnterForeground:(id)arg1 ;
-(void)applicationDidEnterBackground:(id)arg1 ;
-(BOOL)isAuthenticating;
-(UIViewController *)activeViewController;
-(void)cancelAuthentication;
-(BOOL)alertUserInStoreDemoModeEnabled;
-(void)deletePhotoWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)setPhoto:(id)arg1 avatarType:(long long)arg2 withCompletionHandler:(/*^block*/id)arg3 ;
-(void)deletePhoto;
-(void)setPhotoFromCNContactImage:(id)arg1 pendingContact:(id)arg2 withCompletionHandler:(/*^block*/id)arg3 ;
-(void)deleteMonogramsWithHandler:(/*^block*/id)arg1 ;
-(id)deleteAvatarAlertControllerWithHandler:(/*^block*/id)arg1 ;
-(void)setActiveViewController:(UIViewController *)arg1 ;
-(UIViewController*<GKAuthenticateViewController>)signInViewController;
-(void)setSignInViewController:(UIViewController*<GKAuthenticateViewController>)arg1 ;
-(void)showViewController:(id)arg1 usingPresentingViewController:(id)arg2 wrapInNavController:(BOOL)arg3 ;
-(void)removeActiveViewControllerAnimated:(BOOL)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)authenticationDidCompleteWithError:(id)arg1 ;
-(void)authenticationShowGreenBuddyUIForLocalPlayer:(id)arg1 ;
-(void)authenticationShowSignInUIForLocalPlayer:(id)arg1 ;
-(BOOL)shouldShowOnBoardingUI;
-(BOOL)shouldShowPrivacyNotice;
-(BOOL)shouldShowPersonalization;
-(void)showOnboardingUIFromViewController:(id)arg1 ;
-(void)_showWelcomeBanner;
-(void)showAlertForTag:(unsigned long long)arg1 ;
-(void)startAuthenticationForExistingPrimaryPlayer;
-(void)_showViewControllerForLegacyApps:(id)arg1 ;
-(void)validateAccountWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)showAuthenticateViewControllerForGameCenter;
-(void)startLegacyAuthenticationWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)_showActionRestrictedAlertWithTitle:(id)arg1 message:(id)arg2 ;
-(void)showLoginFailedAlert;
-(void)showCancelledAlertForPlayer:(id)arg1 ;
-(void)showCreateAccountRestrictedAlert;
-(void)showEditAccountRestrictedAlert;
-(void)showSignInAccountRestrictedAlert;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(long long)environment;
-(void)setStatus:(id)arg1 ;
-(unsigned long long)authenticationType;
-(void)setAuthenticationType:(unsigned long long)arg1 ;
-(BOOL)isAuthenticated;
-(void)setAuthenticated:(BOOL)arg1 ;
-(void)registerListener:(id)arg1 ;
-(BOOL)didAuthenticate;
-(void)setDidAuthenticate:(BOOL)arg1 ;
-(void)showSettings;
-(id)friends;
-(void)authenticateWithCompletionHandler:(/*^block*/id)arg1 ;
-(BOOL)enteringForeground;
-(void)setEnteringForeground:(BOOL)arg1 ;
-(BOOL)hasEmailAddress:(id)arg1 ;
-(id)displayNameWithOptions:(unsigned char)arg1 ;
-(void)setInsideAuthenticatorInvocation:(BOOL)arg1 ;
-(void)setNewToGameCenter:(BOOL)arg1 ;
-(void)signOutWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)loadRecentPlayersWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)removeFriend:(id)arg1 block:(/*^block*/id)arg2 ;
-(void)loadChallengableFriendsWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)cancelFriendRequestWithIdentifier:(id)arg1 handler:(/*^block*/id)arg2 ;
-(BOOL)isMultiplayerGamingRestricted;
-(GKEventEmitter*<GKLocalPlayerListenerPrivate>)eventEmitter;
-(id)authenticateHandler;
-(GKInvite *)acceptedInvite;
-(void)setAcceptedInvite:(GKInvite *)arg1 ;
-(void)reportAuthenticationLoginCanceled;
-(void)createFriendRequestWithIdentifier:(id)arg1 handler:(/*^block*/id)arg2 ;
-(void)unregisterListener:(id)arg1 ;
-(BOOL)shouldDisplayWelcomeBannerForPlayer:(id)arg1 lastAuthDate:(id)arg2 remoteUI:(BOOL)arg3 timeBetweenBanners:(double)arg4 ;
-(BOOL)isNewToGameCenter;
-(void)reportAuthenticationStartForPlayer;
-(void)setAuthStartTimeStamp:(double)arg1 ;
-(UIAlertView *)currentAlert;
-(void)setCurrentAlert:(UIAlertView *)arg1 ;
-(void)setLoginAlertView:(UIAlertView *)arg1 ;
-(BOOL)validatingAccount;
-(id)validateAccountCompletionHandler;
-(void)setValidateAccountCompletionHandler:(id)arg1 ;
-(void)setValidatingAccount:(BOOL)arg1 ;
-(BOOL)shouldPreserveOnboardingUI;
-(void)reportAuthenticationErrorNoInternetConnection;
-(void)reportAuthenticationPlayerAuthenticated;
-(void)callAuthHandlerWithError:(id)arg1 ;
-(void)reportAuthenticationFailedForPlayer;
-(void)setShouldPreserveOnboardingUI:(BOOL)arg1 ;
-(void)reportAuthenticatingWithGreenBuddyInvocation;
-(void)setShowingInGameUI:(BOOL)arg1 ;
-(void)reportAuthenticatingWithAuthKitInvocation;
-(void)setAppIsInBackground:(BOOL)arg1 ;
-(void)setAuthenticateHandler:(id)arg1 ;
-(UIAlertView *)loginAlertView;
-(void)updateFromLocalPlayer:(id)arg1 ;
-(BOOL)isAvatarEditingRestricted;
-(void)fetchSavedGamesWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)saveGameData:(id)arg1 withName:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)deleteSavedGamesWithName:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)resolveConflictingSavedGames:(id)arg1 withData:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)loadDefaultLeaderboardIdentifierWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)setDefaultLeaderboardIdentifier:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)setEventEmitter:(GKEventEmitter*<GKLocalPlayerListenerPrivate>)arg1 ;
-(void)setupForCloudSavedGames;
-(BOOL)isShowingInGameUI;
-(void)setStatus:(id)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(void)_loadFriendPlayersWithCompletionHandler:(/*^block*/id)arg1 ;
-(BOOL)appIsInBackground;
-(BOOL)insideAuthenticatorInvocation;
-(void)_startAuthenticationForExistingPrimaryPlayer;
-(void)fetchItemsForIdentityVerificationSignature:(/*^block*/id)arg1 ;
-(void)getPlayerIDFromFriendCode:(id)arg1 handler:(/*^block*/id)arg2 ;
-(void)acceptFriendRequestWithIdentifier:(id)arg1 handler:(/*^block*/id)arg2 ;
-(double)authStartTimeStamp;
-(BOOL)scopedIDsArePersistent;
-(void)loadFriendPlayersWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)loadFriendsWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)updateLoginStatus:(unsigned long long)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)removeAllFriendsWithBlock:(/*^block*/id)arg1 ;
-(void)fetchMultiplayerGameInvite;
-(void)fetchTurnBasedEvent;
-(void)fetchCustomTournamentInvite;
-(void)cancelGameInvite:(id)arg1 ;
-(void)inviteeAcceptedGameInviteWithNotification:(id)arg1 ;
-(void)inviteeDeclinedGameInviteWithNotification:(id)arg1 ;
-(void)setDefaultLeaderboardCategoryID:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)loadDefaultLeaderboardCategoryIDWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)generateIdentityVerificationSignatureWithCompletionHandler:(/*^block*/id)arg1 ;
-(NSInvocation *)currentFriendRequestInvocation;
-(void)setCurrentFriendRequestInvocation:(NSInvocation *)arg1 ;
-(void)unregisterAllListeners;
@end

