/*
* Generated on Monday, March 1, 2021 at 2:30:05 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet
*/


@class NSUUID, _DKSyncPeer;

@interface _DKSyncPeerInfo : NSObject {

	NSUUID* _uuid;
	_DKSyncPeer* _peer;
	long long _transports;

}

@property (nonatomic,retain) NSUUID * uuid;                     //@synthesize uuid=_uuid - In the implementation block
@property (nonatomic,retain) _DKSyncPeer * peer;                //@synthesize peer=_peer - In the implementation block
@property (assign,nonatomic) long long transports;              //@synthesize transports=_transports - In the implementation block
-(id)description;
-(id)debugDescription;
-(NSUUID *)uuid;
-(void)setUuid:(NSUUID *)arg1 ;
-(void)setPeer:(_DKSyncPeer *)arg1 ;
-(_DKSyncPeer *)peer;
-(long long)transports;
-(id)transportsString;
-(void)setTransports:(long long)arg1 ;
@end

