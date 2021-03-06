/*
* Generated on Thursday, January 14, 2021 at 2:26:41 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AVConference.framework/Frameworks/ViceroyTrace.framework/ViceroyTrace
*/


@class NSString;

@interface MultiwayStream : NSObject {

	NSString* _streamID;
	int _interval;
	int _frequency;
	double _lastReceivedVideoStallTime;
	double _currentStallTime;
	double _totalVideoStallTime;
	double _maxVideoStallTime;
	unsigned short _significantVideoStallCount;
	unsigned short _maxVideoStallCount;
	unsigned short _minVideoFrameRate;
	unsigned short _audioErasureCount;
	double _totalAudioErasureTime;
	unsigned short _maxAudioErasureCount;
	double _averageFramerateSum;
	unsigned short _averageFramerateReportCounter;
	double _averageJitterLengthSum;
	unsigned short _averageJitterReportCounter;
	double _averageJitterBufferDelay;
	unsigned short _totalJitterBufferDelayCnt;
	unsigned short _targetJBSizeAccumulation;
	unsigned short _targetJBSizeChngCnt;
	unsigned short _maxTargetJBSizeChanges;
	int _totalVideoPacketsReceived;
	int _oooPacketCount;
	unsigned _totalFIRDemandCounter;
	unsigned _totalFIRCounter;
	unsigned _videoFrameDecodedButSkippedCounter;
	unsigned _videoFrameIncompleteNextTSCounter;
	unsigned _videoFrameTotalIncompleteCounter;
	unsigned _decodedVideoFrameEnqueueCounter;
	unsigned _evictedFramesLikelyRecoverableCount;
	unsigned _evictedFramesTrackedCount;
	unsigned _evictedFramesAnalysisValidIntervals;
	double _evictedFramesAverageLatePacketDelay;

}

@property (readonly) double currentStallTime;                   //@synthesize currentStallTime=_currentStallTime - In the implementation block
@property (readonly) double totalAudioErasureTime;              //@synthesize totalAudioErasureTime=_totalAudioErasureTime - In the implementation block
-(void)processData:(id)arg1 ;
-(void)dealloc;
-(unsigned)RTPeriod;
-(unsigned)totalFIRDemandCounter;
-(unsigned)totalFIRCounter;
-(unsigned)videoFrameDecodedButSkippedCounter;
-(unsigned)videoFrameIncompleteNextTSCounter;
-(unsigned)videoFrameTotalIncompleteCounter;
-(unsigned)decodedVideoFrameEnqueueCounter;
-(unsigned)evictedFramesLikelyRecoverableCount;
-(unsigned)evictedFramesTrackedCount;
-(double)evictedFramesAnalysisValidIntervals;
-(double)evictedFramesAverageLatePacketDelay;
-(id)initStreamWithID:(id)arg1 ;
-(unsigned short)significantVideoStallCount;
-(double)videoStallTotalTime;
-(unsigned short)audioErasureCount;
-(double)audioErasureTotalTime;
-(unsigned short)maxAudioErasureCount;
-(unsigned short)maxVideoStallCount;
-(double)averageJitterBufferDelay;
-(double)averageJBTargetSizeChanges;
-(unsigned short)maxJBTargetSizeChanges;
-(unsigned short)minVideoFrameRate;
-(double)averageFramerateSum;
-(unsigned short)averageFramerateReportCounter;
-(double)averageJitterLengthSum;
-(unsigned short)averageJitterReportCounter;
-(unsigned)oooPacketCount;
-(unsigned)totalVideoPacketsReceived;
-(double)currentStallTime;
-(double)totalAudioErasureTime;
@end

