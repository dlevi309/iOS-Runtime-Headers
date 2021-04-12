/*
* Generated on Monday, March 1, 2021 at 2:33:52 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SensorKit.framework/SensorKit
*/

#import <libobjc.A.dylib/SRSensorKitServiceClientAuthorizationListening.h>

@class NSXPCConnection, NSMapTable, NSSet, NSString, NSDictionary, NSArray;

@interface SRAuthorizationClient : NSObject <SRSensorKitServiceClientAuthorizationListening> {

	BOOL _prerequisiteMet;
	int _registrationToken;
	NSXPCConnection* _connection;
	NSMapTable* _listeners;
	NSSet* _actualAuthorizedServices;

}

@property (nonatomic,retain) NSXPCConnection * connection;                                        //@synthesize connection=_connection - In the implementation block
@property (nonatomic,retain) NSMapTable * listeners;                                              //@synthesize listeners=_listeners - In the implementation block
@property (copy) NSSet * actualAuthorizedServices;                                                //@synthesize actualAuthorizedServices=_actualAuthorizedServices - In the implementation block
@property (assign) BOOL prerequisiteMet;                                                          //@synthesize prerequisiteMet=_prerequisiteMet - In the implementation block
@property (assign) int registrationToken;                                                         //@synthesize registrationToken=_registrationToken - In the implementation block
@property (copy,readonly) NSSet * authorizedServices; 
@property (assign,nonatomic) BOOL dataCollectionEnabled; 
@property (assign,nonatomic) BOOL requiredOnboardingCompleted; 
@property (nonatomic,copy,readonly) NSString * requiredAppIdentifier; 
@property (nonatomic,copy,readonly) NSString * requiredAppiTunesIdentifier; 
@property (nonatomic,copy,readonly) NSString * studyBundleIdPrefix; 
@property (nonatomic,copy,readonly) NSString * requiredAppDataDeepLinkIdentifier; 
@property (nonatomic,copy,readonly) NSString * requiredAppStudiesDeepLinkIdentifier; 
@property (copy,readonly) NSDictionary * bundleIdentifiersPendingAuthorization; 
@property (nonatomic,readonly) NSArray * legacyResearchStudyBundleIDs; 
@property (nonatomic,readonly) NSString * legacyResearchStudyEntitlement; 
+(void)initialize;
+(id)sharedInstance;
-(id)init;
-(void)dealloc;
-(void)invalidate;
-(NSXPCConnection *)connection;
-(void)setConnection:(NSXPCConnection *)arg1 ;
-(id)initWithConnection:(id)arg1 ;
-(BOOL)dataCollectionEnabled;
-(NSMapTable *)listeners;
-(void)addListener:(id)arg1 ;
-(void)removeListener:(id)arg1 ;
-(void)setListeners:(NSMapTable *)arg1 ;
-(void)setDataCollectionEnabled:(BOOL)arg1 ;
-(int)registrationToken;
-(void)setRegistrationToken:(int)arg1 ;
-(void)setServiceStartTimeForService:(id)arg1 ;
-(void)setRequiredOnboardingCompleted:(BOOL)arg1 ;
-(BOOL)requiredOnboardingCompleted;
-(NSString *)requiredAppIdentifier;
-(NSString *)requiredAppiTunesIdentifier;
-(NSString *)studyBundleIdPrefix;
-(NSString *)requiredAppDataDeepLinkIdentifier;
-(NSString *)requiredAppStudiesDeepLinkIdentifier;
-(NSDictionary *)bundleIdentifiersPendingAuthorization;
-(void)addBundle:(id)arg1 toPendingAuthorizations:(id)arg2 ;
-(void)removeBundle:(id)arg1 fromPendingAuthorizations:(id)arg2 ;
-(NSArray *)legacyResearchStudyBundleIDs;
-(NSString *)legacyResearchStudyEntitlement;
-(id)serviceStartTimeForService:(id)arg1 ;
-(void)authorizedServicesDidChange:(id)arg1 forBundleIdentifier:(id)arg2 ;
-(void)setPrerequisiteMet:(BOOL)arg1 ;
-(void)registerForPrerequisitesUpdated;
-(void)unregisterForPrerequisitesUpdated;
-(BOOL)prerequisiteMet;
-(void)notifyAuthorizationChangeForBundleIdentifier:(id)arg1 ;
-(NSSet *)actualAuthorizedServices;
-(void)addListener:(id)arg1 forBundleId:(id)arg2 ;
-(NSSet *)authorizedServices;
-(void)setActualAuthorizedServices:(NSSet *)arg1 ;
@end

