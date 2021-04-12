/*
* Generated on Thursday, January 14, 2021 at 2:21:47 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
*/


@protocol OS_dispatch_queue;
@class MRTransactionPacketizer, NSObject, MRPlayerPath;

@interface MRTransactionDestination : NSObject {

	MRTransactionPacketizer* _packetizer;
	NSObject*<OS_dispatch_queue> _serialQueue;
	unsigned long long _name;
	MRPlayerPath* _playerPath;

}

@property (nonatomic,readonly) unsigned long long name;                //@synthesize name=_name - In the implementation block
@property (nonatomic,readonly) MRPlayerPath * playerPath;              //@synthesize playerPath=_playerPath - In the implementation block
-(void)unpacketize:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)initWithName:(unsigned long long)arg1 playerPath:(id)arg2 ;
-(void)packetsFromMessage:(id)arg1 completion:(/*^block*/id)arg2 ;
-(unsigned long long)name;
-(MRPlayerPath *)playerPath;
@end

