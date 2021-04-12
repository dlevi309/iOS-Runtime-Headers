/*
* Generated on Thursday, January 14, 2021 at 2:24:14 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MapsSupport.framework/MapsSupport
*/

#import <libobjc.A.dylib/IDSServiceDelegate.h>

@protocol MSPSharedTripRelayDelegate, MSPSharedTripAvailabiltyDelegate;
@class IDSService, NSString, MSPSharedTripGroupSession, NSMutableDictionary, MSPSharedTripStorageController, NSArray, MSPSharedTripSharingIdentity;

@interface MSPSharedTripRelay : NSObject <IDSServiceDelegate> {

	IDSService* _sharingService;
	NSString* _clientID;
	NSString* _displayName;
	MSPSharedTripGroupSession* _sharingETAGroupSession;
	NSMutableDictionary* _sharedTripGroupIDSSessions;
	NSMutableDictionary* _packetBuckets;
	MSPSharedTripStorageController* _storageController;
	id<MSPSharedTripRelayDelegate> _delegate;
	id<MSPSharedTripAvailabiltyDelegate> _availabilityDelegate;

}

@property (nonatomic,readonly) BOOL hasValidIDSAccount; 
@property (nonatomic,readonly) NSString * sharingName; 
@property (nonatomic,readonly) NSString * sharingHandle; 
@property (nonatomic,readonly) NSArray * accountAliases; 
@property (nonatomic,retain) MSPSharedTripStorageController * storageController;                            //@synthesize storageController=_storageController - In the implementation block
@property (nonatomic,readonly) MSPSharedTripSharingIdentity * sharingIdentity; 
@property (assign,nonatomic,__weak) id<MSPSharedTripRelayDelegate> delegate;                                //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic,__weak) id<MSPSharedTripAvailabiltyDelegate> availabilityDelegate;              //@synthesize availabilityDelegate=_availabilityDelegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)_startService;
-(void)_handleCommand:(id)arg1 fromID:(id)arg2 ;
-(id)init;
-(id<MSPSharedTripRelayDelegate>)delegate;
-(void)service:(id)arg1 account:(id)arg2 incomingResourceAtURL:(id)arg3 metadata:(id)arg4 fromID:(id)arg5 context:(id)arg6 ;
-(MSPSharedTripStorageController *)storageController;
-(void)service:(id)arg1 account:(id)arg2 incomingMessage:(id)arg3 fromID:(id)arg4 context:(id)arg5 ;
-(void)service:(id)arg1 account:(id)arg2 receivedGroupSessionParticipantUpdate:(id)arg3 ;
-(void)service:(id)arg1 account:(id)arg2 incomingData:(id)arg3 fromID:(id)arg4 context:(id)arg5 ;
-(NSString *)sharingName;
-(NSArray *)accountAliases;
-(void)_handleIncomingMessage:(id)arg1 info:(id)arg2 fromID:(id)arg3 receivingHandle:(id)arg4 receivingAccountIdentifier:(id)arg5 ;
-(void)_removeFinishedSession:(id)arg1 ;
-(void)setDelegate:(id<MSPSharedTripRelayDelegate>)arg1 ;
-(id<MSPSharedTripAvailabiltyDelegate>)availabilityDelegate;
-(void)service:(id)arg1 activeAccountsChanged:(id)arg2 ;
-(void)_fetchDisplayName;
-(void)stopSharing;
-(NSString *)sharingHandle;
-(void)_handleChunk:(id)arg1 fromID:(id)arg2 receivingHandle:(id)arg3 receivingAccountIdentifier:(id)arg4 ;
-(void)setStorageController:(MSPSharedTripStorageController *)arg1 ;
-(BOOL)hasValidIDSAccount;
-(void)setAvailabilityDelegate:(id<MSPSharedTripAvailabiltyDelegate>)arg1 ;
-(void)service:(id)arg1 account:(id)arg2 identifier:(id)arg3 fromID:(id)arg4 hasBeenDeliveredWithContext:(id)arg5 ;
-(id)removeSharingWith:(id)arg1 ;
-(id)startSharingGroupSessionWithTripIdentifer:(id)arg1 ;
-(void)service:(id)arg1 account:(id)arg2 identifier:(id)arg3 didSendWithSuccess:(BOOL)arg4 error:(id)arg5 context:(id)arg6 ;
-(void)dealloc;
-(MSPSharedTripSharingIdentity *)sharingIdentity;
-(id)groupSessionForIdentifier:(id)arg1 ;
@end

