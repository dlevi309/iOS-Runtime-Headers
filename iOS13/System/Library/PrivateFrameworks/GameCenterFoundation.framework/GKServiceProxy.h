/*
* Generated on Monday, March 1, 2021 at 2:34:51 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/GameCenterFoundation.framework/GameCenterFoundation
*/


@class NSDictionary, GKThreadsafeDictionary, GKDaemonProxy, GKPlayerInternal;

@interface GKServiceProxy : NSObject {

	NSDictionary* _serviceLookup;
	GKThreadsafeDictionary* _pendingRequests;
	unsigned _serviceGeneration;
	GKDaemonProxy* _baseProxy;
	GKPlayerInternal* _localPlayer;

}

@property (retain) GKThreadsafeDictionary * pendingRequests;                                 //@synthesize pendingRequests=_pendingRequests - In the implementation block
@property (retain) NSDictionary * serviceLookup;                                             //@synthesize serviceLookup=_serviceLookup - In the implementation block
@property (assign) unsigned serviceGeneration;                                               //@synthesize serviceGeneration=_serviceGeneration - In the implementation block
@property (retain) GKDaemonProxy * baseProxy;                                                //@synthesize baseProxy=_baseProxy - In the implementation block
@property (retain) GKPlayerInternal * localPlayer;                                           //@synthesize localPlayer=_localPlayer - In the implementation block
@property (readonly) id<GKAccountService> accountService; 
@property (readonly) id<GKAccountServicePrivate> accountServicePrivate; 
@property (readonly) id<GKProfileService> profileService; 
@property (readonly) id<GKProfileServicePrivate> profileServicePrivate; 
@property (readonly) id<GKFriendService> friendService; 
@property (readonly) id<GKFriendServicePrivate> friendServicePrivate; 
@property (readonly) id<GKGameService> gameService; 
@property (readonly) id<GKGameServicePrivate> gameServicePrivate; 
@property (readonly) id<GKGameStatService> gameStatService; 
@property (readonly) id<GKGameStatServicePrivate> gameStatServicePrivate; 
@property (readonly) id<GKChallengeService> challengeService; 
@property (readonly) id<GKChallengeServicePrivate> challengeServicePrivate; 
@property (readonly) id<GKMultiplayerService> multiplayerService; 
@property (readonly) id<GKMultiplayerServicePrivate> multiplayerServicePrivate; 
@property (readonly) id<GKTurnBasedService> turnBasedService; 
@property (readonly) id<GKTurnBasedServicePrivate> turnBasedServicePrivate; 
@property (readonly) id<GKUtilityService> utilityService; 
@property (readonly) id<GKUtilityServicePrivate> utilityServicePrivate; 
@property (readonly) id<GKBulletinService> bulletinService; 
@property (readonly) id<GKBulletinServicePrivate> bulletinServicePrivate; 
@property (readonly) id<GKAnalyticsService> analyticsService; 
@property (readonly) id<GKAnalyticsServicePrivate> analyticsServicePrivate; 
@property (readonly) id<GKGameSessionService> gameSessionService; 
@property (readonly) id<GKGameSessionServicePrivate> gameSessionServicePrivate; 
@property (readonly) id<GKTournamentService> tournamentService; 
@property (readonly) id<GKTournamentServicePrivate> tournamentServicePrivate; 
-(void)dealloc;
-(id)methodSignatureForSelector:(SEL)arg1 ;
-(void)forwardInvocation:(id)arg1 ;
-(GKThreadsafeDictionary *)pendingRequests;
-(void)setPendingRequests:(GKThreadsafeDictionary *)arg1 ;
-(id)initWithPlayer:(id)arg1 ;
-(GKPlayerInternal *)localPlayer;
-(id<GKAccountServicePrivate>)accountServicePrivate;
-(id<GKProfileServicePrivate>)profileServicePrivate;
-(id<GKUtilityServicePrivate>)utilityServicePrivate;
-(id<GKGameServicePrivate>)gameServicePrivate;
-(id<GKUtilityService>)utilityService;
-(id<GKFriendServicePrivate>)friendServicePrivate;
-(id<GKAccountService>)accountService;
-(id<GKAnalyticsService>)analyticsService;
-(id<GKTurnBasedServicePrivate>)turnBasedServicePrivate;
-(id<GKTurnBasedService>)turnBasedService;
-(id<GKBulletinServicePrivate>)bulletinServicePrivate;
-(id)methodSignatureForProtocol:(id)arg1 selector:(SEL)arg2 ;
-(id<GKTournamentService>)tournamentService;
-(id<GKTournamentServicePrivate>)tournamentServicePrivate;
-(id<GKGameStatService>)gameStatService;
-(id<GKFriendService>)friendService;
-(id<GKMultiplayerService>)multiplayerService;
-(id<GKProfileService>)profileService;
-(GKDaemonProxy *)baseProxy;
-(void)setLocalPlayer:(GKPlayerInternal *)arg1 ;
-(void)setBaseProxy:(GKDaemonProxy *)arg1 ;
-(unsigned)serviceGeneration;
-(void)setServiceGeneration:(unsigned)arg1 ;
-(void)setServiceLookup:(NSDictionary *)arg1 ;
-(void)replyToDuplicatesForRequest:(id)arg1 withInvocation:(id)arg2 queue:(id)arg3 ;
-(id)requestIdentifierForInvocation:(id)arg1 ;
-(void)buildServiceLookupIfNeccessary;
-(NSDictionary *)serviceLookup;
-(void)buildServiceLookup;
-(void)addService:(id)arg1 forProtocol:(id)arg2 toLookup:(id)arg3 ;
-(id<GKGameService>)gameService;
-(id<GKGameStatServicePrivate>)gameStatServicePrivate;
-(id<GKChallengeService>)challengeService;
-(id<GKChallengeServicePrivate>)challengeServicePrivate;
-(id<GKMultiplayerServicePrivate>)multiplayerServicePrivate;
-(id<GKBulletinService>)bulletinService;
-(id<GKAnalyticsServicePrivate>)analyticsServicePrivate;
-(id<GKGameSessionService>)gameSessionService;
-(id<GKGameSessionServicePrivate>)gameSessionServicePrivate;
@end

