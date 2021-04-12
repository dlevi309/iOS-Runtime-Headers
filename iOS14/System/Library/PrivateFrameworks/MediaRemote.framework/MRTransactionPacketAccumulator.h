/*
* Generated on Thursday, January 14, 2021 at 2:21:47 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
*/


@class NSMutableOrderedSet;

@interface MRTransactionPacketAccumulator : NSObject {

	NSMutableOrderedSet* _packets;
	unsigned long long _currentLength;

}
-(id)init;
-(id)mergePacket:(id)arg1 ;
@end

