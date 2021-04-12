/*
* Generated on Monday, March 1, 2021 at 2:32:07 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
*/


@protocol OS_dispatch_queue;
@class MRTransactionPacketizer, NSObject, _MRNowPlayingPlayerPathProtobuf;

@interface MRTransactionDestination : NSObject {

	MRTransactionPacketizer* _packetizer;
	NSObject*<OS_dispatch_queue> _serialQueue;
	unsigned long long _name;
	_MRNowPlayingPlayerPathProtobuf* _playerPath;

}

@property (nonatomic,readonly) unsigned long long name;                                   //@synthesize name=_name - In the implementation block
@property (nonatomic,readonly) _MRNowPlayingPlayerPathProtobuf * playerPath;              //@synthesize playerPath=_playerPath - In the implementation block
-(unsigned long long)name;
-(_MRNowPlayingPlayerPathProtobuf *)playerPath;
-(void)unpacketize:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)initWithName:(unsigned long long)arg1 playerPath:(id)arg2 ;
-(void)packetsFromMessage:(id)arg1 completion:(/*^block*/id)arg2 ;
@end

