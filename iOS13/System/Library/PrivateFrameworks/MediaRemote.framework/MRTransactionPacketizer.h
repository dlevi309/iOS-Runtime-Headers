/*
* Generated on Monday, March 1, 2021 at 2:32:07 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
*/


@class NSMutableArray, NSMutableDictionary;

@interface MRTransactionPacketizer : NSObject {

	NSMutableArray* _outgoingPackets;
	NSMutableDictionary* _incomingPackets;

}
-(BOOL)isEmpty;
-(void)packetize:(id)arg1 packageSize:(unsigned long long)arg2 completion:(/*^block*/id)arg3 ;
-(void)unpacketize:(id)arg1 completion:(/*^block*/id)arg2 ;
@end

