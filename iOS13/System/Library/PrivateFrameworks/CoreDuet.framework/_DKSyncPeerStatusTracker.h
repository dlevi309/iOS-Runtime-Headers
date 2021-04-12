/*
* Generated on Monday, March 1, 2021 at 2:30:05 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet
*/

#import <CoreDuet/_DKSyncContextObject.h>

@class NSMutableDictionary, _DKSyncPeer, NSMutableArray, NSDate, _DKKnowledgeStorage;

@interface _DKSyncPeerStatusTracker : _DKSyncContextObject {

	NSMutableDictionary* _peerInfos;
	_DKSyncPeer* _pseudoPeer;
	NSMutableArray* _observers;
	NSMutableDictionary* _lastSuccessfulActivityDates;
	NSDate* _firstForeignPeersCountDate;
	_DKKnowledgeStorage* _storage;

}

@property (assign,nonatomic,__weak) _DKKnowledgeStorage * storage;              //@synthesize storage=_storage - In the implementation block
+(id)sharedInstance;
+(id)stringForTransports:(long long)arg1 ;
+(id)syncPeerTransportsStrings;
+(id)peerStatusTrackerWithContext:(id)arg1 ;
-(id)description;
-(_DKKnowledgeStorage *)storage;
-(void)setStorage:(_DKKnowledgeStorage *)arg1 ;
-(BOOL)isSingleDevice;
-(id)initWithContext:(id)arg1 ;
-(void)removeStatusChangeObserver:(id)arg1 ;
-(id)addStatusChangeObserverWithBlock:(/*^block*/id)arg1 ;
-(long long)activeTransportsForPeer:(id)arg1 ;
-(void)setSourceDeviceID:(id)arg1 version:(id)arg2 peer:(id)arg3 ;
-(id)pseudoPeerForSyncTransportCloudUp;
-(void)debugLogPeers;
-(unsigned long long)foreignPeersCount;
-(id)allPeers;
-(void)setLastSeenDate:(id)arg1 onPeer:(id)arg2 ;
-(id)existingPeerWithSourceDeviceID:(id)arg1 ;
-(void)removeActiveTransports:(long long)arg1 fromPeer:(id)arg2 ;
-(id)peerWithZoneName:(id)arg1 sourceDeviceID:(id)arg2 ;
-(void)addActiveTransports:(long long)arg1 toPeer:(id)arg2 ;
-(void)removePeer:(id)arg1 ;
-(id)lastSuccessfulActivityDateOnTransport:(long long)arg1 forPeer:(id)arg2 ;
-(id)peersWithActiveTransports:(long long)arg1 ;
-(void)setLastSuccessfulActivityDate:(id)arg1 onTransport:(long long)arg2 forPeer:(id)arg3 ;
-(id)peerWithIDSDeviceIdentifier:(id)arg1 ;
-(id)existingPeerWithIDSDeviceIdentifier:(id)arg1 ;
-(void)_loadPeers;
-(void)postCloudDeviceCountChangedNotification;
-(void)registerNewPeer:(id)arg1 ;
-(id)_peerInfoForPeer:(id)arg1 ;
-(id)_observerBlocks;
-(void)_modifyActiveTransportInPeer:(id)arg1 withNewTransportsBlock:(/*^block*/id)arg2 ;
-(id)peerWithCompanionLinkDevice:(id)arg1 ;
-(id)peersWithAnyActiveTransports;
-(id)uuidWithUUIDString:(id)arg1 ;
@end

