/*
* Generated on Monday, March 1, 2021 at 2:33:10 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
*/


#import <AVConference/AVConference-Structs.h>
@interface VCStatsRecorder : NSObject {

	opaque_pthread_rwlock_t _stateRWLock;
	SCD_Struct_VC75 _localStats[128];
	unsigned short _currentLocalStatsIndex;
	unsigned _uplinkServerStatsByteUsed;

}
-(id)init;
-(void)dealloc;
-(int)serverStatsSizeInByteForUplink:(BOOL)arg1 connection:(id)arg2 ;
-(void)updateSessionStats:(unsigned short)arg1 connection:(id)arg2 totalPacketSent:(unsigned)arg3 totalPacketReceived:(unsigned)arg4 ;
-(void)getLocalStats:(unsigned short)arg1 localSessionStats:(SCD_Struct_VC75*)arg2 ;
-(SCD_Struct_VC75)getMostRecentLocalStats;
@end

