/*
* Generated on Thursday, January 14, 2021 at 2:24:13 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MapsSupport.framework/MapsSupport
*/

#import <libobjc.A.dylib/MSPSharedTripStorageDelegate.h>
#import <libobjc.A.dylib/MSPSharedTripRelayDelegate.h>

@protocol OS_os_transaction, MSPReceiverETAControllerDelegate;
@class NSObject, NSMutableDictionary, MapsNotificationCenter, MSPSharedTripRelay, MSPSharedTripBlacklist, NSTimer, NSArray, NSString;

@interface MSPReceiverETAController : NSObject <MSPSharedTripStorageDelegate, MSPSharedTripRelayDelegate> {

	NSObject*<OS_os_transaction> _transaction;
	NSMutableDictionary* _sharedSessions;
	NSMutableDictionary* _sharedNavStates;
	NSMutableDictionary* _temporaryNavStates;
	MapsNotificationCenter* _mapsNotificationCenter;
	MSPSharedTripRelay* _idsRelay;
	MSPSharedTripBlacklist* _blockedList;
	NSTimer* _cleanupTimer;
	id<MSPReceiverETAControllerDelegate> _delegate;

}

@property (nonatomic,readonly) NSArray * allTrips; 
@property (assign,nonatomic,__weak) id<MSPReceiverETAControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)relay:(id)arg1 sharingClosed:(id)arg2 ;
-(id<MSPReceiverETAControllerDelegate>)delegate;
-(void)_updateData:(id)arg1 forGroup:(id)arg2 fromID:(id)arg3 ;
-(BOOL)_allowMessageWithState:(id)arg1 forGroup:(id)arg2 fromID:(id)arg3 ;
-(void)storageController:(id)arg1 updatedSharedTripGroupStorage:(id)arg2 ;
-(void)updateContacts;
-(void)_cleanGroup:(id)arg1 ;
-(NSArray *)allTrips;
-(void)_updateDelegateWithUpdateState:(id)arg1 to:(id)arg2 freshAvailable:(BOOL)arg3 ;
-(BOOL)subscribeToUpdatesToSharedTrip:(id)arg1 error:(id*)arg2 ;
-(void)_cleanupIfNecessary;
-(void)setDelegate:(id<MSPReceiverETAControllerDelegate>)arg1 ;
-(void)groupSession:(id)arg1 participantDidJoin:(id)arg2 ;
-(void)relay:(id)arg1 receiveData:(id)arg2 info:(id)arg3 fromID:(id)arg4 ;
-(BOOL)_cleanUpNecessaryForGroup:(id)arg1 ;
-(id)initWithRelay:(id)arg1 ;
-(BOOL)unsubscribeFromUpdatesToSharedTrip:(id)arg1 error:(id*)arg2 ;
-(void)cleanTimer;
-(void)_showOrUpdateNotificationIfNeeded:(id)arg1 ;
-(void)_setNotificationCenter:(id)arg1 ;
-(void)_resolveContactIfNeeded:(id)arg1 fromId:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)groupSessionEnded:(id)arg1 ;
-(void)groupSession:(id)arg1 participantDidLeave:(id)arg2 ;
-(void)blockSharedTrip:(id)arg1 ;
-(void)dealloc;
@end

