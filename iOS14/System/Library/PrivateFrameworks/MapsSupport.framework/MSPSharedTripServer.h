/*
* Generated on Thursday, January 14, 2021 at 2:24:13 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MapsSupport.framework/MapsSupport
*/

#import <libobjc.A.dylib/NSXPCListenerDelegate.h>
#import <libobjc.A.dylib/MSPReceiverETAControllerDelegate.h>
#import <libobjc.A.dylib/MSPSenderETAControllerDelegate.h>
#import <libobjc.A.dylib/MSPSharedTripAvailabiltyDelegate.h>
#import <libobjc.A.dylib/MSPSharedTripXPCServer.h>

@protocol OS_dispatch_queue;
@class MSPSenderETAController, MSPReceiverETAController, MSPSharedTripRelay, NSXPCListener, NSMutableSet, NSMutableDictionary, NSMapTable, NSObject, NSString;

@interface MSPSharedTripServer : NSObject <NSXPCListenerDelegate, MSPReceiverETAControllerDelegate, MSPSenderETAControllerDelegate, MSPSharedTripAvailabiltyDelegate, MSPSharedTripXPCServer> {

	MSPSenderETAController* _sendingController;
	MSPReceiverETAController* _receivingController;
	MSPSharedTripRelay* _idsRelay;
	NSXPCListener* _listener;
	NSMutableSet* _connections;
	NSMutableDictionary* _connectionSubscriptionsByTripID;
	NSMapTable* _peersByConnection;
	NSObject*<OS_dispatch_queue> _isolationQueue;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)createXPCListener;
-(id)init;
-(id)connections;
-(void)fetchActiveHandlesWithCompletion:(/*^block*/id)arg1 ;
-(void)relay:(id)arg1 accountStatusChanged:(BOOL)arg2 ;
-(void)stopSharingTripWithMessagesGroup:(id)arg1 ;
-(void)startSharingTripWithContacts:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)etaController:(id)arg1 didUpdateDestinationForSharedTrip:(id)arg2 ;
-(BOOL)_connectionCanControlSharing:(id)arg1 ;
-(void)checkinWithCompletion:(/*^block*/id)arg1 ;
-(void)invalidateActiveHandlesForSenderController:(id)arg1 ;
-(void)etaController:(id)arg1 sharedTripDidBecomeUnavailable:(id)arg2 ;
-(void)reportUserConfirmationOfSharingIdentity:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_createXPCListener;
-(BOOL)_connectionCanControlReceiving:(id)arg1 ;
-(void)etaController:(id)arg1 didUpdateETAForSharedTrip:(id)arg2 ;
-(void)fetchRequiresUserConfirmationOfSharingIdentityWithCompletion:(/*^block*/id)arg1 ;
-(void)createControllers;
-(void)stopSharingTrip;
-(void)cleanConnections;
-(void)etaController:(id)arg1 didUpdateReachedDestinationForSharedTrip:(id)arg2 ;
-(BOOL)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2 ;
-(void)stopSharingTripWithMessagesContacts:(id)arg1 ;
-(void)etaController:(id)arg1 sharedTripDidClose:(id)arg2 ;
-(void)etaController:(id)arg1 sharedTripDidBecomeAvailable:(id)arg2 ;
-(void)startSharingTripWithMessagesGroup:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)startSharingTripWithMessagesContacts:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)fetchSharedTripsWithCompletion:(/*^block*/id)arg1 ;
-(id)_subscribedConnectionsForTripID:(id)arg1 createIfNeeded:(BOOL)arg2 ;
-(void)_setNotificationCenter:(id)arg1 ;
-(void)fetchSharingIdentityWithCompletion:(/*^block*/id)arg1 ;
-(void)subscribeToSharedTripUpdatesWithIdentifier:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)senderController:(id)arg1 didInvalidateSharedTripWithError:(id)arg2 ;
-(void)etaController:(id)arg1 didUpdateRouteForSharedTrip:(id)arg2 ;
-(void)_purgeSubscriptionsForConnection:(id)arg1 ;
-(void)blockSharedTrip:(id)arg1 ;
-(void)stopSharingTripWithContacts:(id)arg1 ;
-(void)dealloc;
-(void)unsubscribeFromSharedTripUpdatesWithIdentifier:(id)arg1 completion:(/*^block*/id)arg2 ;
@end

