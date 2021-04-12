/*
* Generated on Monday, March 1, 2021 at 2:33:10 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
*/

#import <AVConference/VCObject.h>

@class VCSessionBandwidthAllocationTable, NSDictionary;

@interface VCSessionUplinkBandwidthAllocator : VCObject {

	VCSessionBandwidthAllocationTable* _table;
	NSDictionary* _currentTable;
	BOOL _videoEnabled;
	BOOL _redundancyEnabled;

}

@property (assign,getter=isVideoEnabled,nonatomic) BOOL videoEnabled;                        //@synthesize videoEnabled=_videoEnabled - In the implementation block
@property (assign,getter=isRedundancyEnabled,nonatomic) BOOL redundancyEnabled; 
-(id)init;
-(void)dealloc;
-(BOOL)isVideoEnabled;
-(void)setVideoEnabled:(BOOL)arg1 ;
-(void)_assignCurrentTables;
-(BOOL)_isAvailableStreamConfiguration:(id)arg1 ;
-(id)_audioEntriesForTargetBitrate:(unsigned)arg1 ;
-(id)_videoEntriesForTargetBitrate:(unsigned)arg1 ignorePausedOnDemandStreams:(BOOL)arg2 remainingBitrate:(unsigned*)arg3 ;
-(void)addBandwidthAllocationTableEntry:(id)arg1 updateNow:(BOOL)arg2 ;
-(void)setRedundancyEnabled:(BOOL)arg1 ;
-(BOOL)isRedundancyEnabled;
-(BOOL)enableVideoStream:(BOOL)arg1 streamID:(unsigned short)arg2 ;
-(id)audioStreamIDsforTargetBitrate:(unsigned)arg1 ;
-(id)audioRepairStreamIDsforTargetBitrate:(unsigned)arg1 ;
-(id)videoMediaBitratesForTargetNetworkBitrate:(unsigned)arg1 ignorePausedOnDemandStreams:(BOOL)arg2 ;
-(id)videoStreamIDsforTargetBitrate:(unsigned)arg1 ignorePausedOnDemandStreams:(BOOL)arg2 ;
-(id)videoRepairStreamIDsforTargetBitrate:(unsigned)arg1 ignorePausedOnDemandStreams:(BOOL)arg2 ;
-(id)videoRepairStreamIDsForStreamIDs;
-(id)audioRepairStreamIDsForStreamIDs;
@end

