/*
* Generated on Thursday, January 14, 2021 at 2:27:32 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreDuetSync.framework/CoreDuetSync
*/

#import <CoreDuet/_DKSync2Coordinator.h>
#import <libobjc.A.dylib/_DKSyncRemoteContextStorageDelegate.h>
#import <libobjc.A.dylib/_CDRemoteUserContextServer.h>

@protocol OS_os_transaction, _DKSyncRemoteContextStorage;
@class NSObject, NSUUID;

@interface _DKSync3Coordinator : _DKSync2Coordinator <_DKSyncRemoteContextStorageDelegate, _CDRemoteUserContextServer> {

	unsigned long long _watchingDeviceTypes;
	NSObject*<OS_os_transaction> _watchingDevicesTransaction;
	id<_DKSyncRemoteContextStorage> _transportMDCSRapport;

}

@property (nonatomic,readonly) NSUUID * deviceUUID; 
@property (nonatomic,retain) id<_DKSyncRemoteContextStorage> transportMDCSRapport;              //@synthesize transportMDCSRapport=_transportMDCSRapport - In the implementation block
-(void)sendContextValuesToPeer:(id)arg1 registrationIdentifier:(id)arg2 keyPaths:(id)arg3 ;
-(void)setArchivedObjects:(id)arg1 peer:(id)arg2 ;
-(void)start;
-(id)initWithContext:(id)arg1 ;
-(id<_DKSyncRemoteContextStorage>)transportMDCSRapport;
-(void)setupStorage;
-(void)_syncEnabledToggle;
-(id)archivedObjectsForKeyPaths:(id)arg1 ;
-(void)subscribeToDeviceStatusChangeNotificationsForDeviceTypes:(unsigned long long)arg1 handler:(/*^block*/id)arg2 ;
-(BOOL)remoteContextStorage:(id)arg1 hasKnowledgeOfKeyPath:(id)arg2 ;
-(BOOL)subscribeToDeviceStatusChangeNotificationsForDeviceTypes:(unsigned long long)arg1 error:(id*)arg2 ;
-(id)multiDeviceContextStoreDevices;
-(void)requestActivateDevicesWithHandler:(/*^block*/id)arg1 ;
-(id)registrationIdentifierForPeer:(id)arg1 remoteRegistrationIdentifier:(id)arg2 ;
-(id)peersForContextStoreDeviceIDs:(id)arg1 ;
-(void)remoteContextStorage:(id)arg1 unsubscribeFromChangesWithPeer:(id)arg2 registrationIdentifier:(id)arg3 predicate:(id)arg4 ;
-(void)handleStatusChangeForPeer:(id)arg1 previousTransports:(long long)arg2 ;
-(id)sourceDeviceUUID;
-(void)subscribeToContextValueChangeNotificationsWithRegistration:(id)arg1 deviceIDs:(id)arg2 handler:(/*^block*/id)arg3 ;
-(BOOL)unsubscribeFromContextValueChangeNotificationsWithRegistration:(id)arg1 deviceIDs:(id)arg2 error:(id*)arg3 ;
-(void)_syncDisabledToggle;
-(id)remoteContextStorage:(id)arg1 archivedObjectsForKeyPaths:(id)arg2 ;
-(void)_requestActivateDevicesWithHandler:(/*^block*/id)arg1 ;
-(BOOL)subscribeToContextValueChangeNotificationsWithRegistration:(id)arg1 deviceIDs:(id)arg2 error:(id*)arg3 ;
-(void)remoteContextStorage:(id)arg1 subscribeToChangesWithPeer:(id)arg2 registrationIdentifier:(id)arg3 predicate:(id)arg4 ;
-(void)fetchPropertiesOfRemoteKeyPaths:(id)arg1 handler:(/*^block*/id)arg2 ;
-(void)unsubscribeFromContextValueChangeNotificationsWithRegistration:(id)arg1 deviceIDs:(id)arg2 handler:(/*^block*/id)arg3 ;
-(void)handleContextChangedNotification:(id)arg1 ;
-(void)remoteContextStorage:(id)arg1 registrationIdentifier:(id)arg2 setArchivedObjects:(id)arg3 peer:(id)arg4 ;
-(void)_fetchPropertiesOfRemoteKeyPaths:(id)arg1 handler:(/*^block*/id)arg2 ;
-(id)keyPathsByDeviceIDFromRemoteKeyPaths:(id)arg1 ;
-(void)setTransportMDCSRapport:(id<_DKSyncRemoteContextStorage>)arg1 ;
-(void)dealloc;
@end

