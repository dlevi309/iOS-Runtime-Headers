/*
* Generated on Monday, March 1, 2021 at 2:32:31 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/MapsSupport.framework/MapsSupport
*/

#import <libobjc.A.dylib/MSPSharedTripXPCClient.h>
#import <libobjc.A.dylib/MSPSharedTripXPCServer.h>

@protocol OS_dispatch_queue;
@class NSXPCConnection, NSObject, GEOObserverHashTable, NSMutableArray, NSArray, NSString;

@interface MSPSharedTripService : NSObject <MSPSharedTripXPCClient, MSPSharedTripXPCServer> {

	NSXPCConnection* _connection;
	NSObject*<OS_dispatch_queue> _isolationQueue;
	GEOObserverHashTable* _receivingObservers;
	GEOObserverHashTable* _sendingObservers;
	NSMutableArray* _receivedTrips;
	BOOL _sendingAccountAvailable;
	NSArray* _aliases;

}

@property (nonatomic,readonly) NSArray * receivedTrips; 
@property (nonatomic,readonly) BOOL hasValidSharingAccount; 
@property (nonatomic,readonly) NSArray * aliases;                        //@synthesize aliases=_aliases - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedInstance;
-(id)init;
-(void)checkin;
-(NSArray *)aliases;
-(id)_remoteObjectProxy;
-(void)fetchAccountValidWithCompletion:(/*^block*/id)arg1 ;
-(void)fetchAccountAliasesWithCompletion:(/*^block*/id)arg1 ;
-(void)fetchSendingIdentityWithCompletion:(/*^block*/id)arg1 ;
-(void)startSharingTripWithContacts:(id)arg1 ;
-(void)stopSharingTripWithContacts:(id)arg1 ;
-(void)startSharingTripWithMessagesContacts:(id)arg1 ;
-(void)stopSharingTripWithMessagesContacts:(id)arg1 ;
-(void)startSharingTripWithMessagesGroup:(id)arg1 ;
-(void)stopSharingTripWithMessagesGroup:(id)arg1 ;
-(void)stopSharingTrip;
-(void)fetchActiveHandlesWithCompletion:(/*^block*/id)arg1 ;
-(void)subscribeToSharedTripUpdatesWithIdentifier:(id)arg1 ;
-(void)unsubscribeFromSharedTripUpdatesWithIdentifier:(id)arg1 ;
-(void)fetchSharedTripsWithCompletion:(/*^block*/id)arg1 ;
-(void)blockSharedTrip:(id)arg1 ;
-(void)accountAvailabilityDidChange:(BOOL)arg1 ;
-(void)sharedTripInvalidatedWithError:(id)arg1 ;
-(void)invalidateActiveHandles;
-(void)sendMessage:(id)arg1 toParticipant:(id)arg2 ;
-(void)sendMessage:(id)arg1 toGroup:(id)arg2 ;
-(void)sharedTripDidBecomeAvailable:(id)arg1 ;
-(void)sharedTripDidBecomeUnavailable:(id)arg1 ;
-(void)sharedTripDidClose:(id)arg1 ;
-(void)destinationDidUpdateForSharedTrip:(id)arg1 ;
-(void)etaDidUpdateForSharedTrip:(id)arg1 ;
-(void)routeDidUpdateForSharedTrip:(id)arg1 ;
-(void)destinationReachedDidUpdateForSharedTrip:(id)arg1 ;
-(void)initializeTrips;
-(void)initializeAccountAvailability;
-(void)_fetchSharedTripsOnQueue:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)_fetchAccountValidWithCompletion:(/*^block*/id)arg1 ;
-(void)_checkin;
-(void)_fetchSendingIdentityWithCompletion:(/*^block*/id)arg1 ;
-(void)_startSharingTripWithContacts:(id)arg1 ;
-(void)_stopSharingTripWithContacts:(id)arg1 ;
-(void)_startSharingTripWithMessagesContacts:(id)arg1 ;
-(void)_stopSharingTripWithMessagesContacts:(id)arg1 ;
-(void)_startSharingTripWithMessagesGroup:(id)arg1 ;
-(void)_stopSharingTripWithMessagesGroup:(id)arg1 ;
-(void)_stopSharingTrip;
-(void)_fetchActiveHandlesWithCompletion:(/*^block*/id)arg1 ;
-(void)_fetchActiveHandlesOnQueue:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)_fetchSharedTripsWithCompletion:(/*^block*/id)arg1 ;
-(void)_subscribeToSharedTripUpdatesWithIdentifier:(id)arg1 ;
-(void)_unsubscribeFromSharedTripUpdatesWithIdentifier:(id)arg1 ;
-(void)_blockSharedTrip:(id)arg1 ;
-(void)_fetchAccountAliasesWithCompletion:(/*^block*/id)arg1 ;
-(void)_insertOrUpdateTrip:(id)arg1 ;
-(void)_openConnectionIfNeeded;
-(NSArray *)receivedTrips;
-(BOOL)hasValidSharingAccount;
-(void)addReceivingObserver:(id)arg1 ;
-(void)removeReceivingObserver:(id)arg1 ;
-(void)addSendingObserver:(id)arg1 ;
-(void)removeSendingObserver:(id)arg1 ;
@end

