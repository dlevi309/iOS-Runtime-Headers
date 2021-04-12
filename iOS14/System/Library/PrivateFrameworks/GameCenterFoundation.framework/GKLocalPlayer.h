/*
* Generated on Thursday, January 14, 2021 at 2:24:46 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GameCenterFoundation.framework/GameCenterFoundation
*/

#import <GameCenterFoundation/GKPlayer.h>
#import <libobjc.A.dylib/GKLocalPlayerAuthenticationUIPersonality.h>
#import <libobjc.A.dylib/NSCoding.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/GKSavedGameListener.h>

@protocol GKLocalPlayerListenerPrivate;
@class NSError, GKInvite, UIAlertView, NSInvocation, GKEventEmitter, NSString, UIViewController;

@interface GKLocalPlayer : GKPlayer <GKLocalPlayerAuthenticationUIPersonality, NSCoding, NSSecureCoding, GKSavedGameListener> {

	BOOL _authenticated;
	BOOL _isShowingAuthenticationUI;
	BOOL _didAuthenticate;
	BOOL _validatingAccount;
	BOOL _enteringForeground;
	BOOL _newToGameCenter;
	BOOL _showingInGameUI;
	BOOL _shouldPreserveOnboardingUI;
	NSError* _authenticationError;
	GKInvite* _acceptedInvite;
	/*^block*/id _validateAccountCompletionHandler;
	UIAlertView* _loginAlertView;
	UIAlertView* _currentAlert;
	NSInvocation* _currentFriendRequestInvocation;
	long long _environment;
	GKEventEmitter*<GKLocalPlayerListenerPrivate> _eventEmitter;
	double _authStartTimeStamp;
	unsigned long long _authenticationType;
	unsigned long long _authenticationState;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain) UIViewController * rootViewController; 
@property (nonatomic,retain) UIViewController * activeViewController; 
@property (nonatomic,retain) UIViewController*<GKAuthenticateViewController> signInViewController; 
@property (nonatomic,copy) id validateAccountCompletionHandler;                                                                    //@synthesize validateAccountCompletionHandler=_validateAccountCompletionHandler - In the implementation block
@property (nonatomic,retain) UIAlertView * loginAlertView;                                                                         //@synthesize loginAlertView=_loginAlertView - In the implementation block
@property (assign,nonatomic) UIAlertView * currentAlert;                                                                           //@synthesize currentAlert=_currentAlert - In the implementation block
@property (nonatomic,retain) NSInvocation * currentFriendRequestInvocation;                                                        //@synthesize currentFriendRequestInvocation=_currentFriendRequestInvocation - In the implementation block
@property (assign,nonatomic) BOOL didAuthenticate;                                                                                 //@synthesize didAuthenticate=_didAuthenticate - In the implementation block
@property (assign,nonatomic) BOOL validatingAccount;                                                                               //@synthesize validatingAccount=_validatingAccount - In the implementation block
@property (assign,nonatomic) BOOL enteringForeground;                                                                              //@synthesize enteringForeground=_enteringForeground - In the implementation block
@property (assign,nonatomic) BOOL appIsInBackground; 
@property (nonatomic,copy) id authenticateHandler; 
@property (assign,getter=isAuthenticated,nonatomic) BOOL authenticated;                                                            //@synthesize authenticated=_authenticated - In the implementation block
@property (getter=isAuthenticating,nonatomic,readonly) BOOL authenticating; 
@property (assign,nonatomic) BOOL isShowingAuthenticationUI;                                                                       //@synthesize isShowingAuthenticationUI=_isShowingAuthenticationUI - In the implementation block
@property (assign,nonatomic) unsigned long long authenticationState;                                                               //@synthesize authenticationState=_authenticationState - In the implementation block
@property (assign,nonatomic) NSError * authenticationError;                                                                        //@synthesize authenticationError=_authenticationError - In the implementation block
@property (assign,nonatomic) BOOL insideAuthenticatorInvocation; 
@property (nonatomic,retain) NSString * accountName; 
@property (nonatomic,retain) NSString * firstName; 
@property (nonatomic,retain) NSString * lastName; 
@property (nonatomic,retain) GKInvite * acceptedInvite;                                                                            //@synthesize acceptedInvite=_acceptedInvite - In the implementation block
@property (getter=isAvatarEditingRestricted,nonatomic,readonly) BOOL avatarEditingRestricted; 
@property (assign,getter=isPurpleBuddyAccount,nonatomic) BOOL purpleBuddyAccount; 
@property (assign,getter=isDefaultNickname,nonatomic) BOOL defaultNickname; 
@property (assign,getter=isDefaultPrivacyVisibility,nonatomic) BOOL defaultPrivacyVisibility; 
@property (nonatomic,readonly) long long environment;                                                                              //@synthesize environment=_environment - In the implementation block
@property (nonatomic,readonly) BOOL allowNearbyMultiplayer; 
@property (assign,getter=isNewToGameCenter,nonatomic) BOOL newToGameCenter;                                                        //@synthesize newToGameCenter=_newToGameCenter - In the implementation block
@property (nonatomic,readonly) NSString * facebookUserID; 
@property (nonatomic,readonly) NSString * iCloudUserID; 
@property (getter=isFindable,nonatomic,readonly) BOOL findable; 
@property (nonatomic,retain) GKEventEmitter*<GKLocalPlayerListenerPrivate> eventEmitter;                                           //@synthesize eventEmitter=_eventEmitter - In the implementation block
@property (assign,getter=isShowingInGameUI,nonatomic) BOOL showingInGameUI;                                                        //@synthesize showingInGameUI=_showingInGameUI - In the implementation block
@property (assign,nonatomic) BOOL shouldPreserveOnboardingUI;                                                                      //@synthesize shouldPreserveOnboardingUI=_shouldPreserveOnboardingUI - In the implementation block
@property (assign,nonatomic) double authStartTimeStamp;                                                                            //@synthesize authStartTimeStamp=_authStartTimeStamp - In the implementation block
@property (assign,nonatomic) unsigned long long authenticationType;                                                                //@synthesize authenticationType=_authenticationType - In the implementation block
@property (getter=isUnderage,nonatomic,readonly) BOOL underage; 
@property (getter=isMultiplayerGamingRestricted,nonatomic,readonly) BOOL multiplayerGamingRestricted; 
@property (getter=isPersonalizedCommunicationRestricted,nonatomic,readonly) BOOL personalizedCommunicationRestricted; 
+(id)accountName;
+(BOOL)hasAuthenticatedAccount;
+(id)authenticationPersonality;
+(void)setAuthenticationPersonality:(id)arg1 ;
+(id)currentLocalPlayer;
+(id)sharedLocalPlayerAuthenticator;
+(id)localPlayer;
+(BOOL)supportsSecureCoding;
+(id)authenticatedLocalPlayersWithStatus:(unsigned long long)arg1 ;
+(id)local;
+(id)authenticatedLocalPlayers;
+(void)performAsync:(/*^block*/id)arg1 ;
+(id)authenticatedLocalPlayersFiltered:(long long)arg1 ;
+(void)performSync:(/*^block*/id)arg1 ;
+(id)localPlayerAccessQueue;
+(id)_localPlayersFromInternals:(id)arg1 authenticated:(BOOL)arg2 ;
+(void)_sendPlayerAuthAPINotificationForLoggedInPlayerInternals:(id)arg1 loggedOutPlayerInternals:(id)arg2 oldPrimary:(id)arg3 newPrimary:(id)arg4 ;
+(id)localPlayers;
+(id)localPlayerForCredential:(id)arg1 ;
+(void)authenticatedLocalPlayersDidChange:(id)arg1 complete:(/*^block*/id)arg2 ;
+(void)authenticateWithUsername:(id)arg1 password:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)alertView:(id)arg1 didDismissWithButtonIndex:(long long)arg2 ;
-(void)showWelcomeBannerWithTitle:(id)arg1 message:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)hideAccessPoint;
-(void)showAccessPoint;
-(BOOL)shouldShowOnBoardingUI;
-(void)showOnboardingUIFromViewController:(id)arg1 ;
-(void)showAlertForTag:(unsigned long long)arg1 ;
-(void)reloadAccessPoint;
-(void)authenticationShowGreenBuddyUIForLocalPlayer:(id)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(void)authenticationShowSignInUIForLocalPlayer:(id)arg1 dismiss:(/*^block*/id)arg2 ;
-(void)showLoginFailedAlert;
-(void)deletePhotoWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)deletePhoto;
-(void)setPhoto:(id)arg1 avatarType:(long long)arg2 withCompletionHandler:(/*^block*/id)arg3 ;
-(void)setPhotoFromCNContactImage:(id)arg1 pendingContact:(id)arg2 withCompletionHandler:(/*^block*/id)arg3 ;
-(void)deleteMonogramsWithHandler:(/*^block*/id)arg1 ;
-(id)deleteAvatarAlertControllerWithHandler:(/*^block*/id)arg1 ;
-(BOOL)shouldShowPersonalizationScreen;
-(BOOL)shouldShowProfilePrivacyScreen;
-(void)setRootViewController:(UIViewController *)arg1 ;
-(void)dismissOnboardingUIIfPresent;
-(void)setSignInViewController:(UIViewController*<GKAuthenticateViewController>)arg1 ;
-(void)removeActiveViewControllerAnimated:(BOOL)arg1 completionHandler:(/*^block*/id)arg2 ;
-(UIViewController*<GKAuthenticateViewController>)signInViewController;
-(void)showViewController:(id)arg1 usingPresentingViewController:(id)arg2 wrapInNavController:(BOOL)arg3 ;
-(BOOL)shouldShowAnyOnboardingScreen;
-(BOOL)isAuthenticating;
-(void)cancelAuthentication;
-(UIViewController *)rootViewController;
-(void)applicationDidEnterBackground:(id)arg1 ;
-(void)showCreateAccountRestrictedAlert;
-(void)authenticationDidCompleteWithError:(id)arg1 ;
-(BOOL)alertUserInStoreDemoModeEnabled;
-(void)applicationWillEnterForeground:(id)arg1 ;
-(UIViewController *)activeViewController;
-(void)startAuthenticationForExistingPrimaryPlayer;
-(void)startLegacyAuthenticationWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)showCancelledAlertForPlayer:(id)arg1 ;
-(void)_showWelcomeBanner;
-(void)_showViewControllerForLegacyApps:(id)arg1 ;
-(void)validateAccountWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)showAuthenticateViewControllerForGameCenter;
-(void)_showActionRestrictedAlertWithTitle:(id)arg1 message:(id)arg2 ;
-(BOOL)hasAcknowledgedLatestGDPR;
-(void)showEditAccountRestrictedAlert;
-(void)showSignInAccountRestrictedAlert;
-(void)setActiveViewController:(UIViewController *)arg1 ;
-(id)friends;
-(void)setAuthenticated:(BOOL)arg1 ;
-(BOOL)isAuthenticated;
-(void)registerListener:(id)arg1 ;
-(void)signOutWithCompletionHandler:(/*^block*/id)arg1 ;
-(unsigned long long)authenticationType;
-(void)unregisterListener:(id)arg1 ;
-(BOOL)isAvatarEditingRestricted;
-(id)displayNameWithOptions:(unsigned char)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)fetchSavedGamesWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)setAuthenticationType:(unsigned long long)arg1 ;
-(BOOL)isMultiplayerGamingRestricted;
-(void)setIsShowingAuthenticationUI:(BOOL)arg1 ;
-(void)setShouldPreserveOnboardingUI:(BOOL)arg1 ;
-(void)callAuthHandlerWithError:(id)arg1 ;
-(void)reportAuthenticatingWithGreenBuddyInvocation;
-(void)setShowingInGameUI:(BOOL)arg1 ;
-(UIAlertView *)loginAlertView;
-(void)reportAuthenticatingWithAuthKitInvocation;
-(BOOL)enteringForeground;
-(void)setLoginAlertView:(UIAlertView *)arg1 ;
-(void)setCurrentAlert:(UIAlertView *)arg1 ;
-(void)authenticateWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)setInsideAuthenticatorInvocation:(BOOL)arg1 ;
-(void)setDidAuthenticate:(BOOL)arg1 ;
-(void)updateFromLocalPlayer:(id)arg1 ;
-(BOOL)appIsInBackground;
-(void)setAppIsInBackground:(BOOL)arg1 ;
-(void)cancelGameInvite:(id)arg1 ;
-(void)loadChallengableFriendsWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)unregisterAllListeners;
-(void)setNewToGameCenter:(BOOL)arg1 ;
-(GKEventEmitter*<GKLocalPlayerListenerPrivate>)eventEmitter;
-(id)initWithCoder:(id)arg1 ;
-(void)setAcceptedInvite:(GKInvite *)arg1 ;
-(long long)environment;
-(void)setStatus:(id)arg1 ;
-(NSError *)authenticationError;
-(void)setAuthenticationError:(NSError *)arg1 ;
-(void)setAuthenticationState:(unsigned long long)arg1 ;
-(unsigned long long)authenticationState;
-(void)loadRecentPlayersWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)removeFriend:(id)arg1 block:(/*^block*/id)arg2 ;
-(void)resolveConflictingSavedGames:(id)arg1 withData:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(GKInvite *)acceptedInvite;
-(BOOL)didAuthenticate;
-(void)reportAuthenticationLoginCanceled;
-(void)saveGameData:(id)arg1 withName:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)cancelFriendRequestWithIdentifier:(id)arg1 handler:(/*^block*/id)arg2 ;
-(void)dealloc;
-(void)deleteSavedGamesWithName:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)createFriendRequestWithIdentifier:(id)arg1 handler:(/*^block*/id)arg2 ;
-(void)loadDefaultLeaderboardIdentifierWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)setDefaultLeaderboardIdentifier:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)setEventEmitter:(GKEventEmitter*<GKLocalPlayerListenerPrivate>)arg1 ;
-(void)setupForCloudSavedGames;
-(BOOL)isShowingInGameUI;
-(void)setStatus:(id)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(BOOL)shouldPreserveOnboardingUI;
-(void)promotePlayerInternalToLocalPlayerInternal:(id)arg1 ;
-(void)_loadFriendPlayersWithFilter:(id)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(void)_loadFriendPlayersWithCompletionHandler:(/*^block*/id)arg1 ;
-(BOOL)insideAuthenticatorInvocation;
-(id)authenticateHandler;
-(void)_startAuthenticationForExistingPrimaryPlayer;
-(void)generateIdentityVerificationSignatureWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)fetchItemsForIdentityVerificationSignature:(/*^block*/id)arg1 ;
-(void)getPlayerIDFromFriendCode:(id)arg1 handler:(/*^block*/id)arg2 ;
-(void)acceptFriendRequestWithIdentifier:(id)arg1 handler:(/*^block*/id)arg2 ;
-(double)authStartTimeStamp;
-(BOOL)scopedIDsArePersistent;
-(BOOL)isPersonalizedCommunicationRestricted;
-(void)loadFriendPlayersWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)loadFriendPlayersWithFilter:(id)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(void)loadFriendsWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)showSettings;
-(void)updateLoginStatus:(unsigned long long)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)setAuthenticateHandler:(id)arg1 ;
-(void)removeAllFriendsWithBlock:(/*^block*/id)arg1 ;
-(void)fetchMultiplayerGameInvite;
-(void)fetchTurnBasedEvent;
-(void)fetchCustomTournamentInvite;
-(void)inviteeAcceptedGameInviteWithNotification:(id)arg1 ;
-(void)inviteeDeclinedGameInviteWithNotification:(id)arg1 ;
-(BOOL)hasEmailAddress:(id)arg1 ;
-(void)setDefaultLeaderboardCategoryID:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)loadDefaultLeaderboardCategoryIDWithCompletionHandler:(/*^block*/id)arg1 ;
-(BOOL)shouldDisplayWelcomeBannerForPlayer:(id)arg1 lastAuthDate:(id)arg2 remoteUI:(BOOL)arg3 timeBetweenBanners:(double)arg4 ;
-(BOOL)isWelcomeBannerTooLate;
-(void)reportAuthenticationStartForPlayer;
-(void)reportAuthenticationPlayerAuthenticated;
-(void)reportAuthenticationFailedForPlayer;
-(void)reportAuthenticationErrorNoInternetConnection;
-(BOOL)isShowingAuthenticationUI;
-(id)validateAccountCompletionHandler;
-(void)setValidateAccountCompletionHandler:(id)arg1 ;
-(UIAlertView *)currentAlert;
-(NSInvocation *)currentFriendRequestInvocation;
-(void)setCurrentFriendRequestInvocation:(NSInvocation *)arg1 ;
-(BOOL)validatingAccount;
-(void)setValidatingAccount:(BOOL)arg1 ;
-(void)setEnteringForeground:(BOOL)arg1 ;
-(BOOL)isNewToGameCenter;
-(void)setAuthStartTimeStamp:(double)arg1 ;
@end

