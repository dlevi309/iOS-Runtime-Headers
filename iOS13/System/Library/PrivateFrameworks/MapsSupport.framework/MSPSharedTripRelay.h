/*
* Generated on Monday, March 1, 2021 at 2:32:32 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/MapsSupport.framework/MapsSupport
*/

#import <libobjc.A.dylib/IDSServiceDelegate.h>

@protocol MSPSharedTripRelayDelegate, MSPSharedTripAvailabiltyDelegate;
@class IDSService, NSString, MSPSharedTripGroupSession, NSMutableDictionary, MSPSharedTripStorageController, NSArray;

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

@property (nonatomic,retain) MSPSharedTripStorageController * storageController;                            //@synthesize storageController=_storageController - In the implementation block
@property (nonatomic,readonly) NSString * sharingName; 
@property (nonatomic,readonly) NSString * sharingHandle; 
@property (nonatomic,readonly) NSArray * accountAliases; 
@property (nonatomic,readonly) BOOL hasValidIDSAccount; 
@property (assign,nonatomic,__weak) id<MSPSharedTripRelayDelegate> delegate;                                //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic,__weak) id<MSPSharedTripAvailabiltyDelegate> availabilityDelegate;              //@synthesize availabilityDelegate=_availabilityDelegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)dealloc;
-(id<MSPSharedTripRelayDelegate>)delegate;
-(void)setDelegate:(id<MSPSharedTripRelayDelegate>)arg1 ;
-(void)service:(id)arg1 account:(id)arg2 incomingMessage:(id)arg3 fromID:(id)arg4 context:(id)arg5 ;
-(void)service:(id)arg1 account:(id)arg2 incomingData:(id)arg3 fromID:(id)arg4 context:(id)arg5 ;
-(void)service:(id)arg1 account:(id)arg2 incomingResourceAtURL:(id)arg3 metadata:(id)arg4 fromID:(id)arg5 context:(id)arg6 ;
-(void)service:(id)arg1 activeAccountsChanged:(id)arg2 ;
-(void)service:(id)arg1 account:(id)arg2 identifier:(id)arg3 didSendWithSuccess:(BOOL)arg4 error:(id)arg5 context:(id)arg6 ;
-(void)service:(id)arg1 account:(id)arg2 identifier:(id)arg3 fromID:(id)arg4 hasBeenDeliveredWithContext:(id)arg5 ;
-(void)service:(id)arg1 account:(id)arg2 receivedGroupSessionParticipantUpdate:(id)arg3 ;
-(NSArray *)accountAliases;
-(void)setAvailabilityDelegate:(id<MSPSharedTripAvailabiltyDelegate>)arg1 ;
-(NSString *)sharingName;
-(NSString *)sharingHandle;
-(void)stopSharing;
-(BOOL)hasValidIDSAccount;
-(MSPSharedTripStorageController *)storageController;
-(id)groupSessionForIdentifier:(id)arg1 ;
-(id)startSharingGroupSessionWithTripIdentifer:(id)arg1 ;
-(id)removeSharingWith:(id)arg1 ;
-(void)_startService;
-(void)_fetchDisplayName;
-(void)_removeFinishedSession:(id)arg1 ;
-(void)_handleCommand:(id)arg1 fromID:(id)arg2 ;
-(void)_handleIncomingMessage:(id)arg1 info:(id)arg2 fromID:(id)arg3 receivingHandle:(id)arg4 receivingAccountIdentifier:(id)arg5 ;
-(void)_handleChunk:(id)arg1 fromID:(id)arg2 receivingHandle:(id)arg3 receivingAccountIdentifier:(id)arg4 ;
-(id<MSPSharedTripAvailabiltyDelegate>)availabilityDelegate;
-(void)setStorageController:(MSPSharedTripStorageController *)arg1 ;
@end

