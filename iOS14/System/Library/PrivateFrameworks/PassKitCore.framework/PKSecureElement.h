/*
* Generated on Thursday, January 14, 2021 at 2:21:42 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
*/

#import <PassKitCore/PassKitCore-Structs.h>
#import <libobjc.A.dylib/NFHardwareEventListener.h>
#import <libobjc.A.dylib/NFRemoteAdminEventListener.h>

@protocol OS_dispatch_source, OS_dispatch_queue;
@class NSObject, NSMutableArray, NSHashTable, NFSecureElement, NSArray, NSString, NSNumber, NSUUID;

@interface PKSecureElement : NSObject <NFHardwareEventListener, NFRemoteAdminEventListener> {

	BOOL _deletingAllApplets;
	NSObject*<OS_dispatch_source> _deletingAllAppletsTimer;
	NSObject*<OS_dispatch_queue> _deletingAllAppletsTimerQueue;
	os_unfair_lock_s _deletingAllAppletsPropertyLock;
	NSObject*<OS_dispatch_queue> _replyQueue;
	NSObject*<OS_dispatch_queue> _sessionQueue;
	/*^block*/id _secureElementSessionPrelude;
	/*^block*/id _secureElementSessionPostlude;
	BOOL _startingSession;
	BOOL _startingPrioritySession;
	BOOL _startingAsyncSession;
	NSMutableArray* _sessionAccessHandlers;
	NSMutableArray* _prioritySessionAccessHandlers;
	NSMutableArray* _asyncSessionAccessHandlers;
	NSHashTable* _observers;
	os_unfair_lock_s _observersLock;
	BOOL _registeredForHardwareUpdates;
	NFSecureElement* _secureElement;
	NSArray* _secureElementArray;
	/*^block*/id _pairingChangeHandler;

}

@property (nonatomic,copy) id secureElementSessionPrelude; 
@property (nonatomic,copy) id secureElementSessionPostlude; 
@property (nonatomic,readonly) BOOL isOwnable; 
@property (nonatomic,readonly) BOOL isProductionSigned; 
@property (nonatomic,readonly) BOOL isInRestrictedMode; 
@property (nonatomic,readonly) BOOL isDeletingAllApplets; 
@property (nonatomic,readonly) unsigned long long supportedTechnologies; 
@property (nonatomic,readonly) unsigned long long hardwareVersion; 
@property (nonatomic,readonly) NSString * primaryRegionTopic; 
@property (nonatomic,readonly) NSNumber * primaryJSBLSequenceCounter; 
@property (nonatomic,readonly) NSString * primarySecureElementIdentifier; 
@property (nonatomic,readonly) NSArray * secureElementIdentifiers; 
@property (nonatomic,readonly) NSUUID * ownerUserUUID; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)primarySecureElementIdentifier;
+(id)sharedSecureElement;
+(BOOL)supportsExpressMode:(id)arg1 ;
+(BOOL)hardwareSupportsExpressMode:(id)arg1 ;
+(BOOL)hardwareSupportsExpressForAutomaticSelectionTechnologyType:(long long)arg1 ;
+(BOOL)supportsExpressMode:(id)arg1 byHardware:(BOOL*)arg2 ;
+(BOOL)supportsExpressForAutomaticSelectionTechnologyType:(long long)arg1 byHardware:(BOOL*)arg2 ;
+(BOOL)supportsExpressForAutomaticSelectionTechnologyType:(long long)arg1 ;
+(BOOL)isInFailForward;
+(id)secureElementIdentifiers;
-(void)unregisterObserver:(id)arg1 ;
-(BOOL)isOwnable;
-(void)registerObserver:(id)arg1 ;
-(NSString *)primarySecureElementIdentifier;
-(NSString *)primaryRegionTopic;
-(void)pairingStateWithCompletion:(/*^block*/id)arg1 ;
-(void)setSecureElementSessionPostlude:(id)arg1 ;
-(void)markAppletsWithIdentifiersForDeletion:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)init;
-(BOOL)setRegistrationInformation:(id)arg1 primaryRegionTopic:(id)arg2 ;
-(void)accessPrioritySecureElementManagerSessionWithHandler:(/*^block*/id)arg1 ;
-(void)remoteAdminCleanupProgress:(double)arg1 ;
-(BOOL)isProductionSigned;
-(void)markAllAppletsForDeletionWithExternalAuthorization:(id)arg1 completion:(/*^block*/id)arg2 ;
-(BOOL)queueConnectionToServerForAppletIdentifiers:(id)arg1 ;
-(void)signChallenge:(id)arg1 signatureEntanglementMode:(unsigned long long)arg2 completion:(/*^block*/id)arg3 ;
-(BOOL)isInRestrictedMode;
-(void)allAppletsAndCredentialsWithCompletion:(/*^block*/id)arg1 ;
-(void)allAppletsWithCompletion:(/*^block*/id)arg1 ;
-(unsigned long long)ownershipStateForUserUUID:(id)arg1 ;
-(void)signChallenge:(id)arg1 forPaymentApplication:(id)arg2 withCompletion:(/*^block*/id)arg3 ;
-(NSNumber *)primaryJSBLSequenceCounter;
-(void)_executeSecureElementSessionHandlersWithPriority:(BOOL)arg1 session:(id)arg2 ;
-(void)accessAsyncSecureElementManagerSessionWithHandler:(/*^block*/id)arg1 ;
-(void)SEPPairingInfoWithCompletion:(/*^block*/id)arg1 ;
-(BOOL)hasRegistrationInformation;
-(void)signedPlatformDataWithCompletion:(/*^block*/id)arg1 ;
-(void)_registerPairingChangeHandler;
-(void)setSecureElementSessionPrelude:(id)arg1 ;
-(void)contactlessPaymentPassesAvailableDidChange;
-(NSUUID *)ownerUserUUID;
-(void)_executeSecureElementAsyncSessionHandlersWithSession:(id)arg1 completion:(/*^block*/id)arg2 ;
-(BOOL)queueConnectionToServerWithPushTopic:(id)arg1 ;
-(unsigned long long)hardwareVersion;
-(void)connectToServerWithPushTopic:(id)arg1 completion:(/*^block*/id)arg2 ;
-(BOOL)supportsExpressModeForExpressPassType:(long long)arg1 ;
-(void)accessSecureElementManagerSessionWithHandler:(/*^block*/id)arg1 ;
-(void)_startSecureElementManagerSessionWithType:(long long)arg1 handler:(id)arg2 ;
-(BOOL)isDeletingAllApplets;
-(void)_updateHardwareManagerListener;
-(id)_allAppletsWithSession:(id)arg1 ;
-(void)peerPaymentEnrollmentDataWithAlternateDSID:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)appletWithIdentifier:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)signatureForAuthToken:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)secureElementSessionPrelude;
-(void)initializeSecureElementQueuingServerConnection:(BOOL)arg1 withCompletion:(/*^block*/id)arg2 ;
-(id)secureElementSessionPostlude;
-(BOOL)setOwnerUserUUID:(id)arg1 keybagUUID:(id)arg2 ;
-(unsigned long long)supportedTechnologies;
-(void)stateInformationWithCompletion:(/*^block*/id)arg1 ;
-(void)markAppletWithIdentifierForDeletion:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)secureElement:(id)arg1 didChangeRestrictedMode:(BOOL)arg2 ;
-(NSArray *)secureElementIdentifiers;
-(void)dealloc;
@end

