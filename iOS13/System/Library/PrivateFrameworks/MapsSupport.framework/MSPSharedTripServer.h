/*
* Generated on Monday, March 1, 2021 at 2:32:31 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/MapsSupport.framework/MapsSupport
*/

#import <libobjc.A.dylib/NSXPCListenerDelegate.h>
#import <libobjc.A.dylib/MSPReceiverETAControllerDelegate.h>
#import <libobjc.A.dylib/MSPSenderETAControllerDelegate.h>
#import <libobjc.A.dylib/MSPSharedTripAvailabiltyDelegate.h>
#import <libobjc.A.dylib/MSPSharedTripXPCServer.h>

@protocol OS_dispatch_queue;
@class MSPSenderETAController, MSPReceiverETAController, MSPSharedTripRelay, NSXPCListener, NSMutableSet, NSObject, NSString;

@interface MSPSharedTripServer : NSObject <NSXPCListenerDelegate, MSPReceiverETAControllerDelegate, MSPSenderETAControllerDelegate, MSPSharedTripAvailabiltyDelegate, MSPSharedTripXPCServer> {

	MSPSenderETAController* _sendingController;
	MSPReceiverETAController* _receivingController;
	MSPSharedTripRelay* _idsRelay;
	NSXPCListener* _listener;
	NSMutableSet* _connections;
	NSObject*<OS_dispatch_queue> _isolationQueue;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)dealloc;
-(BOOL)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2 ;
-(id)connections;
-(void)checkin;
-(void)createControllers;
-(void)createXPCListener;
-(void)cleanConnections;
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
-(void)_setNotificationCenter:(id)arg1 ;
-(void)etaController:(id)arg1 sharedTripDidBecomeAvailable:(id)arg2 ;
-(void)etaController:(id)arg1 didUpdateDestinationForSharedTrip:(id)arg2 ;
-(void)etaController:(id)arg1 didUpdateETAForSharedTrip:(id)arg2 ;
-(void)etaController:(id)arg1 didUpdateRouteForSharedTrip:(id)arg2 ;
-(void)etaController:(id)arg1 didUpdateReachedDestinationForSharedTrip:(id)arg2 ;
-(void)etaController:(id)arg1 sharedTripDidClose:(id)arg2 ;
-(void)etaController:(id)arg1 sharedTripDidBecomeUnavailable:(id)arg2 ;
-(void)senderController:(id)arg1 didInvalidateSharedTripWithError:(id)arg2 ;
-(void)invalidateActiveHandlesForSenderController:(id)arg1 ;
-(void)senderController:(id)arg1 sendMessage:(id)arg2 toParticipant:(id)arg3 ;
-(void)senderController:(id)arg1 sendMessage:(id)arg2 toGroup:(id)arg3 ;
-(void)relay:(id)arg1 accountStatusChanged:(BOOL)arg2 ;
@end

