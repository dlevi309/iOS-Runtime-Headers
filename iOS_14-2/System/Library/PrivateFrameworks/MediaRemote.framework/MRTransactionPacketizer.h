/*
* Generated on Thursday, January 14, 2021 at 2:21:47 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
*/


@class NSMutableArray, NSMutableDictionary;

@interface MRTransactionPacketizer : NSObject {

	NSMutableArray* _outgoingPackets;
	NSMutableDictionary* _incomingPackets;

}
-(void)unpacketize:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)packetize:(id)arg1 packageSize:(unsigned long long)arg2 completion:(/*^block*/id)arg3 ;
-(BOOL)isEmpty;
@end

