/*
* Generated on Thursday, January 14, 2021 at 2:24:46 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GameCenterFoundation.framework/GameCenterFoundation
*/


@class GKThreadsafeDictionary, GKDaemonProxy, GKPlayerInternal, NSDictionary;

@interface GKServiceProxy : NSObject {

	unsigned _serviceGeneration;
	GKThreadsafeDictionary* _pendingRequests;
	GKDaemonProxy* _baseProxy;
	GKPlayerInternal* _localPlayer;
	NSDictionary* _serviceLookup;

}

@property (retain) NSDictionary * serviceLookup;                                             //@synthesize serviceLookup=_serviceLookup - In the implementation block
@property (retain) GKThreadsafeDictionary * pendingRequests;                                 //@synthesize pendingRequests=_pendingRequests - In the implementation block
@property (assign) unsigned serviceGeneration;                                               //@synthesize serviceGeneration=_serviceGeneration - In the implementation block
@property (retain) GKDaemonProxy * baseProxy;                                                //@synthesize baseProxy=_baseProxy - In the implementation block
@property (__weak) GKPlayerInternal * localPlayer;                                           //@synthesize localPlayer=_localPlayer - In the implementation block
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
-(GKPlayerInternal *)localPlayer;
-(id<GKTurnBasedService>)turnBasedService;
-(id<GKAnalyticsService>)analyticsService;
-(id<GKGameStatServicePrivate>)gameStatServicePrivate;
-(id<GKFriendServicePrivate>)friendServicePrivate;
-(id<GKMultiplayerServicePrivate>)multiplayerServicePrivate;
-(id<GKAccountService>)accountService;
-(GKDaemonProxy *)baseProxy;
-(unsigned)serviceGeneration;
-(id<GKGameService>)gameService;
-(id<GKAccountServicePrivate>)accountServicePrivate;
-(id<GKAnalyticsServicePrivate>)analyticsServicePrivate;
-(id<GKUtilityService>)utilityService;
-(id<GKGameSessionService>)gameSessionService;
-(void)buildServiceLookup;
-(id<GKFriendService>)friendService;
-(id<GKUtilityServicePrivate>)utilityServicePrivate;
-(NSDictionary *)serviceLookup;
-(id<GKGameSessionServicePrivate>)gameSessionServicePrivate;
-(id<GKChallengeServicePrivate>)challengeServicePrivate;
-(id<GKTournamentServicePrivate>)tournamentServicePrivate;
-(id<GKProfileServicePrivate>)profileServicePrivate;
-(id<GKProfileService>)profileService;
-(id<GKChallengeService>)challengeService;
-(void)setServiceGeneration:(unsigned)arg1 ;
-(id<GKBulletinServicePrivate>)bulletinServicePrivate;
-(void)replyToDuplicatesForRequest:(id)arg1 withInvocation:(id)arg2 queue:(id)arg3 ;
-(id<GKTournamentService>)tournamentService;
-(void)setLocalPlayer:(GKPlayerInternal *)arg1 ;
-(id)methodSignatureForProtocol:(id)arg1 selector:(SEL)arg2 ;
-(void)setServiceLookup:(NSDictionary *)arg1 ;
-(GKThreadsafeDictionary *)pendingRequests;
-(id)requestIdentifierForInvocation:(id)arg1 ;
-(void)setPendingRequests:(GKThreadsafeDictionary *)arg1 ;
-(void)addService:(id)arg1 forProtocol:(id)arg2 toLookup:(id)arg3 ;
-(id)initWithPlayer:(id)arg1 ;
-(id<GKTurnBasedServicePrivate>)turnBasedServicePrivate;
-(id<GKGameServicePrivate>)gameServicePrivate;
-(id<GKBulletinService>)bulletinService;
-(void)setBaseProxy:(GKDaemonProxy *)arg1 ;
-(id)methodSignatureForSelector:(SEL)arg1 ;
-(void)buildServiceLookupIfNeccessary;
-(id<GKMultiplayerService>)multiplayerService;
-(id<GKGameStatService>)gameStatService;
-(void)forwardInvocation:(id)arg1 ;
@end

