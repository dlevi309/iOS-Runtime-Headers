/*
* Generated on Thursday, January 14, 2021 at 2:20:50 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
+(id)peerStatusTrackerWithContext:(id)arg1 ;
+(id)sharedInstance;
+(id)stringForTransports:(long long)arg1 ;
-(void)setStorage:(_DKKnowledgeStorage *)arg1 ;
-(void)setSourceDeviceID:(id)arg1 version:(id)arg2 peer:(id)arg3 ;
-(void)setLastSeenDate:(id)arg1 onPeer:(id)arg2 ;
-(long long)activeTransportsForPeer:(id)arg1 ;
-(id)peerWithZoneName:(id)arg1 sourceDeviceID:(id)arg2 ;
-(id)allPeers;
-(id)initWithContext:(id)arg1 ;
-(_DKKnowledgeStorage *)storage;
-(id)peersWithAnyActiveTransports;
-(void)setLastSuccessfulActivityDate:(id)arg1 onTransport:(long long)arg2 forPeer:(id)arg3 ;
-(id)peerWithCompanionLinkDevice:(id)arg1 ;
-(id)lastSuccessfulActivityDateOnTransport:(long long)arg1 forPeer:(id)arg2 ;
-(id)description;
-(void)removePeer:(id)arg1 ;
-(id)addStatusChangeObserverWithBlock:(/*^block*/id)arg1 ;
-(void)addActiveTransports:(long long)arg1 toPeer:(id)arg2 ;
-(id)pseudoPeerForSyncTransportCloudUp;
-(void)removeStatusChangeObserver:(id)arg1 ;
-(unsigned long long)foreignPeersCount;
-(void)removeActiveTransports:(long long)arg1 fromPeer:(id)arg2 ;
-(BOOL)isSingleDevice;
-(id)existingPeerWithIDSDeviceIdentifier:(id)arg1 ;
-(void)debugLogPeers;
-(id)peerWithIDSDeviceIdentifier:(id)arg1 ;
-(id)existingPeerWithSourceDeviceID:(id)arg1 ;
-(id)peersWithActiveTransports:(long long)arg1 ;
@end

