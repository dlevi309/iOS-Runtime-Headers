/*
* Generated on Thursday, January 14, 2021 at 2:25:34 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
*/

#import <AVConference/VCObject.h>

@class VCSessionBandwidthAllocationTable, NSDictionary, NSArray;

@interface VCSessionUplinkBandwidthAllocator : VCObject {

	VCSessionBandwidthAllocationTable* _table;
	NSDictionary* _currentTable;
	BOOL _videoEnabled;
	BOOL _redundancyEnabled;
	BOOL _redundancyEnabledFor720Stream;

}

@property (assign,getter=isVideoEnabled,nonatomic) BOOL videoEnabled;                                                //@synthesize videoEnabled=_videoEnabled - In the implementation block
@property (assign,getter=isRedundancyEnabled,nonatomic) BOOL redundancyEnabled; 
@property (nonatomic,readonly) NSArray * videoStreamIDs; 
@property (nonatomic,readonly) NSArray * videoRepairStreamIDs; 
@property (getter=getBitrateToStreamTable,nonatomic,readonly) NSDictionary * bitrateToStreamTable; 
@property (assign,getter=isRedundancyEnabledFor720Stream,nonatomic) BOOL redundancyEnabledFor720Stream; 
-(id)init;
-(BOOL)isVideoEnabled;
-(void)setVideoEnabled:(BOOL)arg1 ;
-(void)dealloc;
-(void)_recomputeCurrentTable;
-(id)_audioEntriesForTargetBitrate:(unsigned)arg1 ;
-(id)_videoEntriesForTargetBitrate:(unsigned)arg1 remainingBitrate:(unsigned*)arg2 ;
-(void)addBandwidthAllocationTableEntry:(id)arg1 updateNow:(BOOL)arg2 ;
-(void)setRedundancyEnabled:(BOOL)arg1 ;
-(BOOL)isRedundancyEnabled;
-(void)setRedundancyEnabledFor720Stream:(BOOL)arg1 ;
-(BOOL)isRedundancyEnabledFor720Stream;
-(BOOL)peerSubscription:(BOOL)arg1 streamID:(unsigned short)arg2 ;
-(id)audioStreamIDsforTargetBitrate:(unsigned)arg1 ;
-(id)audioRepairStreamIDsforTargetBitrate:(unsigned)arg1 ;
-(id)videoStreamsAndMediaBitratesForTargetNetworkBitrate:(unsigned)arg1 ;
-(id)videoBitratesForTargetNetworkBitrate:(unsigned)arg1 ;
-(NSArray *)videoStreamIDs;
-(NSArray *)videoRepairStreamIDs;
-(id)videoStreamIDsforTargetBitrate:(unsigned)arg1 ;
-(id)videoStreamIDsforTargetBitrateCap:(unsigned)arg1 ;
-(id)videoRepairStreamIDsForStreamIDs;
-(id)audioRepairStreamIDsForStreamIDs;
-(id)getBitrateToStreamTable;
@end

