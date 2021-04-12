/*
* Generated on Monday, March 1, 2021 at 2:32:31 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/MapsSupport.framework/MapsSupport
*/

#import <libobjc.A.dylib/MSPSharedTripStorageDelegate.h>
#import <libobjc.A.dylib/MSPSharedTripRelayDelegate.h>

@protocol MSPReceiverETAControllerDelegate;
@class NSMutableDictionary, MapsNotificationCenter, MSPSharedTripRelay, MSPSharedTripBlacklist, NSTimer, NSArray, NSString;

@interface MSPReceiverETAController : NSObject <MSPSharedTripStorageDelegate, MSPSharedTripRelayDelegate> {

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
-(void)dealloc;
-(id<MSPReceiverETAControllerDelegate>)delegate;
-(void)setDelegate:(id<MSPReceiverETAControllerDelegate>)arg1 ;
-(void)cleanTimer;
-(void)blockSharedTrip:(id)arg1 ;
-(id)initWithRelay:(id)arg1 ;
-(void)_setNotificationCenter:(id)arg1 ;
-(void)subscribeToUpdatesToSharedTrip:(id)arg1 ;
-(void)unsubscribeFromUpdatesToSharedTrip:(id)arg1 ;
-(NSArray *)allTrips;
-(void)updateContacts;
-(void)_cleanGroup:(id)arg1 ;
-(void)_resolveContactIfNeeded:(id)arg1 fromId:(id)arg2 completion:(/*^block*/id)arg3 ;
-(BOOL)_allowMessageWithState:(id)arg1 forGroup:(id)arg2 fromID:(id)arg3 ;
-(BOOL)_cleanUpNecessaryForGroup:(id)arg1 ;
-(void)_cleanupIfNecessary;
-(void)_updateDelegateWithUpdateState:(id)arg1 to:(id)arg2 freshAvailable:(BOOL)arg3 ;
-(void)_showOrUpdateNotificationIfNeeded:(id)arg1 ;
-(void)_updateData:(id)arg1 forGroup:(id)arg2 fromID:(id)arg3 ;
-(void)storageController:(id)arg1 updatedSharedTripGroupStorage:(id)arg2 ;
-(void)relay:(id)arg1 receiveData:(id)arg2 info:(id)arg3 fromID:(id)arg4 ;
-(void)relay:(id)arg1 sharingClosed:(id)arg2 ;
-(void)groupSession:(id)arg1 participantDidJoin:(id)arg2 ;
-(void)groupSession:(id)arg1 participantDidLeave:(id)arg2 ;
-(void)groupSessionEnded:(id)arg1 ;
@end

