/*
* Generated on Thursday, January 14, 2021 at 2:21:26 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UserActivity.framework/UserActivity
*/

#import <libobjc.A.dylib/UAUserActivityClientResponseProtocol.h>

@protocol OS_dispatch_queue;
@class NSXPCConnection, NSObject, NSMapTable, NSMutableSet, NSUUID, NSSet, NSString;

@interface UAUserActivityManager : NSObject <UAUserActivityClientResponseProtocol> {

	NSXPCConnection* _connection;
	NSObject*<OS_dispatch_queue> _serverQ;
	BOOL _connectionInitializationSucceeded;
	NSMapTable* _userActivitiesByUUID;
	BOOL _supportsActivityContinuation;
	BOOL _activityContinuationIsEnabled;
	NSMutableSet* _userActivityUUIDsSendToServer;
	BOOL _registeredForAppResignationMessages;
	BOOL _needToSendInitialMessage;
	NSUUID* _activeUserActivityUUID;
	NSMapTable* _activeUserActivitiesByUUID;

}

@property (readonly) NSObject*<OS_dispatch_queue> serverQ;                    //@synthesize serverQ=_serverQ - In the implementation block
@property (copy) NSUUID * activeUserActivityUUID;                             //@synthesize activeUserActivityUUID=_activeUserActivityUUID - In the implementation block
@property (retain) NSMapTable * userActivitiesByUUID;                         //@synthesize userActivitiesByUUID=_userActivitiesByUUID - In the implementation block
@property (retain) NSMapTable * activeUserActivitiesByUUID;                   //@synthesize activeUserActivitiesByUUID=_activeUserActivitiesByUUID - In the implementation block
@property (copy,readonly) NSSet * userActivityUUIDsSendToServer; 
@property (assign) BOOL needToSendInitialMessage;                             //@synthesize needToSendInitialMessage=_needToSendInitialMessage - In the implementation block
@property (assign) BOOL registeredForAppResignationMessages;                  //@synthesize registeredForAppResignationMessages=_registeredForAppResignationMessages - In the implementation block
@property (readonly) NSXPCConnection * connection; 
@property (readonly) BOOL supportsActivityContinuation;                       //@synthesize supportsActivityContinuation=_supportsActivityContinuation - In the implementation block
@property (readonly) BOOL activityContinuationIsEnabled; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)_determineMatchingApplicationBundleIdentfierWithOptionsForActivityType:(id)arg1 dynamicType:(id)arg2 kind:(unsigned long long)arg3 teamIdentifier:(id)arg4 ;
+(BOOL)dontConnectToServer;
+(id)defaultManager;
+(BOOL)shouldSupportActivityContinuation;
+(BOOL)userActivityContinuationSupported;
-(id)activities;
-(void)sendToIndexerIfAppropriate:(id)arg1 force:(BOOL)arg2 ;
-(NSObject*<OS_dispatch_queue>)serverQ;
-(id)initWithConnection:(id)arg1 ;
-(BOOL)needToSendInitialMessage;
-(id)init;
-(BOOL)hasUserActivityWithUUID:(id)arg1 ;
-(NSMapTable *)activeUserActivitiesByUUID;
-(void)tellClientUserActivityItWasResumed:(id)arg1 ;
-(BOOL)supportsActivityContinuation;
-(void)connectionInterrupted;
-(void)tellClientDebuggingEnabled:(BOOL)arg1 logFileHandle:(id)arg2 ;
-(void)setNeedToSendInitialMessage:(BOOL)arg1 ;
-(void)setRegisteredForAppResignationMessages:(BOOL)arg1 ;
-(id)fetchUUID:(id)arg1 intervalToWaitForDocumentSynchonization:(double)arg2 withCompletionHandler:(/*^block*/id)arg3 ;
-(void)makeInactive:(id)arg1 ;
-(NSMapTable *)userActivitiesByUUID;
-(void)sendInitialMessage:(BOOL)arg1 ;
-(BOOL)determineIfUserActivityIsCurrent:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)registerForApplicationDeactivateIfNecessary;
-(void)setUserActivitiesByUUID:(NSMapTable *)arg1 ;
-(BOOL)registeredForAppResignationMessages;
-(void)askClientUserActivityToSave:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)userActivityForUUID:(id)arg1 ;
-(NSXPCConnection *)connection;
-(void)sendCurrentActivityToIndexer:(id)arg1 ;
-(BOOL)activityContinuationIsEnabled;
-(void)makeActive:(id)arg1 ;
-(BOOL)currentUserActivityUUIDWithOptions:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)sendUserActivityInfoToLSUserActivityd:(id)arg1 makeCurrent:(BOOL)arg2 ;
-(BOOL)registerAsProxyForApplication:(int)arg1 options:(id)arg2 completionBlock:(/*^block*/id)arg3 ;
-(void)pinUserActivity:(id)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(void)setActiveUserActivityUUID:(NSUUID *)arg1 ;
-(void)setActiveUserActivitiesByUUID:(NSMapTable *)arg1 ;
-(id)encodeUserActivity:(id)arg1 ;
-(BOOL)userActivityIsActive:(id)arg1 ;
-(void)addDynamicUserActivity:(id)arg1 matching:(id)arg2 ;
-(id)createByDecodingUserActivity:(id)arg1 ;
-(void)addUserActivity:(id)arg1 ;
-(void)removeDynamicUserActivity:(id)arg1 matching:(id)arg2 ;
-(void)askClientUserActivityToSave:(id)arg1 ;
-(NSSet *)userActivityUUIDsSendToServer;
-(NSUUID *)activeUserActivityUUID;
-(id)activeActivitiesByPriority;
-(void)tellDaemonAboutNewLSUserActivity:(id)arg1 ;
-(void)removeUserActivity:(id)arg1 ;
-(void)markUserActivityAsDirty:(id)arg1 forceImmediate:(BOOL)arg2 ;
-(void)didReceiveInputStreamWithUUID:(id)arg1 inputStream:(id)arg2 outputStream:(id)arg3 ;
-(void)dealloc;
@end

