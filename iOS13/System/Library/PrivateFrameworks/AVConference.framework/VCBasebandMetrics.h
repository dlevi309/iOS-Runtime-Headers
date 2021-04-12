/*
* Generated on Monday, March 1, 2021 at 2:33:10 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
*/


#import <AVConference/AVConference-Structs.h>
@class VCRateControlMediaController;

@interface VCBasebandMetrics : NSObject {

	VCRateControlMediaController* _mediaController;
	SCD_Struct_VC103 _lastBasebandNotification;
	double _bdcd;
	double _normalizedBDCD;
	double _normalizedDelay;
	BOOL _isBDCDListReady;
	SCD_Struct_VC104 _bdcdList;
	SCD_Struct_VC105 _infoList;
	unsigned _targetBitrate;
	unsigned _txBitrate;
	unsigned _averageBitrate;
	unsigned _previousAverageBitrate;
	unsigned _averageBitrateLong;
	double _expectedQueuingDelay;
	double _expectedQueuingDelayLong;
	BOOL _isTargetBitrateStabilized;
	BOOL _resetAverageBitrateLong;
	void* _logBasebandDump;

}

@property (assign,nonatomic) unsigned targetBitrate;                                      //@synthesize targetBitrate=_targetBitrate - In the implementation block
@property (assign,nonatomic) BOOL isTargetBitrateStabilized;                              //@synthesize isTargetBitrateStabilized=_isTargetBitrateStabilized - In the implementation block
@property (nonatomic,retain) VCRateControlMediaController * mediaController;              //@synthesize mediaController=_mediaController - In the implementation block
-(void)dealloc;
-(VCRateControlMediaController *)mediaController;
-(void)setMediaController:(VCRateControlMediaController *)arg1 ;
-(void)enableBasebandLogDump:(void*)arg1 ;
-(unsigned)targetBitrate;
-(void)setIsTargetBitrateStabilized:(BOOL)arg1 ;
-(void)setTargetBitrate:(unsigned)arg1 ;
-(void)addInfoListWithNotification:(SCD_Struct_VC106*)arg1 ;
-(void)calculateBitratesAndDelaysWithTotalQueueDepth:(unsigned)arg1 ;
-(void)normalizeBDCD:(double)arg1 ;
-(void)addBDCDListWithNotificationArrivalTime:(double)arg1 bdcd:(double)arg2 queuingDelay:(double)arg3 ;
-(void)resetBDCDList;
-(SCD_Struct_AV29)getBasebandMetricsWithNotification:(SCD_Struct_VC106*)arg1 ;
-(BOOL)isTargetBitrateStabilized;
@end

