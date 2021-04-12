/*
* Generated on Thursday, January 14, 2021 at 2:25:34 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
*/


#import <AVConference/AVConference-Structs.h>
@interface VCStatsRecorder : NSObject {

	opaque_pthread_rwlock_t _stateRWLock;
	SCD_Struct_VC89 _localStats[128];
	unsigned short _currentLocalStatsIndex;
	unsigned _uplinkServerStatsByteUsed;

}
-(id)init;
-(void)dealloc;
-(int)serverStatsSizeInByteForUplink:(BOOL)arg1 connection:(id)arg2 ;
-(void)updateSessionStats:(unsigned short)arg1 connection:(id)arg2 totalPacketSent:(unsigned)arg3 totalPacketReceived:(unsigned)arg4 ;
-(void)getLocalStats:(unsigned short)arg1 localSessionStats:(SCD_Struct_VC89*)arg2 ;
-(SCD_Struct_VC89)getMostRecentLocalStats;
@end

