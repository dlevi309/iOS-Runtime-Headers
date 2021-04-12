/*
* Generated on Thursday, January 14, 2021 at 2:21:47 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
*/


@protocol MRTransactionSourceDelegate;
@class MRTransactionPacketizer, NSMutableArray, MRPlayerPath;

@interface MRTransactionSource : NSObject {

	unsigned long long _name;
	MRTransactionPacketizer* _packetizer;
	NSMutableArray* _packets;
	id<MRTransactionSourceDelegate> _delegate;
	MRPlayerPath* _playerPath;

}

@property (nonatomic,readonly) unsigned long long name;                //@synthesize name=_name - In the implementation block
@property (nonatomic,readonly) MRPlayerPath * playerPath;              //@synthesize playerPath=_playerPath - In the implementation block
-(void)_begin;
-(void)_processMessage:(id)arg1 ;
-(id)initWithName:(unsigned long long)arg1 playerPath:(id)arg2 packets:(id)arg3 delegate:(id)arg4 ;
-(unsigned long long)name;
-(MRPlayerPath *)playerPath;
@end

