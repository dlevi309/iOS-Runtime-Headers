/*
* Generated on Monday, March 1, 2021 at 2:33:10 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
*/


#import <AVConference/AVConference-Structs.h>
@class AVCStatisticsCollector, VCRateControlMediaController, VCBasebandMetrics;

@interface AVCBasebandCongestionDetector : NSObject {

	unsigned _radioAccessTechnology;
	unsigned _mode;
	AVCStatisticsCollector* _statisticsCollector;
	VCRateControlMediaController* _mediaController;
	VCBasebandMetrics* _basebandMetrics;
	double _notificationArrivalTime;
	unsigned _basebandTxBitrate;
	unsigned _basebandAverageBitrate;
	unsigned _basebandQueueDepth;
	double _basebandExpectedQueuingDelay;
	unsigned _targetBitrate;
	BOOL _isTargetBitrateStabilized;
	void* _logBasebandDump;

}

@property (assign,nonatomic) unsigned radioAccessTechnology;                              //@synthesize radioAccessTechnology=_radioAccessTechnology - In the implementation block
@property (assign,nonatomic) unsigned mode;                                               //@synthesize mode=_mode - In the implementation block
@property (assign,nonatomic) unsigned targetBitrate;                                      //@synthesize targetBitrate=_targetBitrate - In the implementation block
@property (assign,nonatomic) BOOL isTargetBitrateStabilized;                              //@synthesize isTargetBitrateStabilized=_isTargetBitrateStabilized - In the implementation block
@property (nonatomic,retain) AVCStatisticsCollector * statisticsCollector;                //@synthesize statisticsCollector=_statisticsCollector - In the implementation block
@property (nonatomic,retain) VCRateControlMediaController * mediaController;              //@synthesize mediaController=_mediaController - In the implementation block
@property (nonatomic,readonly) unsigned basebandTxBitrate;                                //@synthesize basebandTxBitrate=_basebandTxBitrate - In the implementation block
@property (nonatomic,readonly) unsigned basebandAverageBitrate;                           //@synthesize basebandAverageBitrate=_basebandAverageBitrate - In the implementation block
@property (nonatomic,readonly) unsigned basebandQueueDepth;                               //@synthesize basebandQueueDepth=_basebandQueueDepth - In the implementation block
@property (nonatomic,readonly) double basebandExpectedQueuingDelay;                       //@synthesize basebandExpectedQueuingDelay=_basebandExpectedQueuingDelay - In the implementation block
-(id)init;
-(void)dealloc;
-(void)setMode:(unsigned)arg1 ;
-(unsigned)mode;
-(unsigned)radioAccessTechnology;
-(void)setRadioAccessTechnology:(unsigned)arg1 ;
-(VCRateControlMediaController *)mediaController;
-(void)setStatisticsCollector:(AVCStatisticsCollector *)arg1 ;
-(void)setMediaController:(VCRateControlMediaController *)arg1 ;
-(void)enableBasebandLogDump:(void*)arg1 ;
-(double)basebandExpectedQueuingDelay;
-(unsigned)basebandQueueDepth;
-(unsigned)basebandAverageBitrate;
-(unsigned)basebandTxBitrate;
-(unsigned)targetBitrate;
-(void)setIsTargetBitrateStabilized:(BOOL)arg1 ;
-(void)setTargetBitrate:(unsigned)arg1 ;
-(AVCStatisticsCollector *)statisticsCollector;
-(BOOL)isTargetBitrateStabilized;
-(BOOL)processBasebandNotification:(SCD_Struct_VC106*)arg1 arrivalTime:(double)arg2 error:(id*)arg3 ;
-(void)processBasebandAck:(SCD_Struct_VC106*)arg1 ;
-(void)printFlushAckToBasebandDump:(unsigned char)arg1 transactionID:(unsigned short)arg2 packetDropped:(unsigned short)arg3 sequenceNumberArray:(unsigned short*)arg4 ;
-(BOOL)processBasebandNotification:(id)arg1 metaData:(id)arg2 error:(id*)arg3 ;
@end

