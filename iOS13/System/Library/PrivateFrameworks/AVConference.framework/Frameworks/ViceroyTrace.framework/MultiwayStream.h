/*
* Generated on Monday, March 1, 2021 at 2:33:57 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
	unsigned short _audioErasureCount;
	double _totalAudioErasureTime;
	double _averageFramerateSum;
	unsigned short _averageFramerateReportCounter;
	double _averageJitterLengthSum;
	unsigned short _averageJitterReportCounter;
	int _totalVideoPacketsReceived;
	int _oooPacketCount;
	unsigned _totalFIRDemandCounter;
	unsigned _totalFIRCounter;
	unsigned _videoFrameDecodedButSkippedCounter;
	unsigned _videoFrameImcompleteNextTSCounter;
	unsigned _videoFrameTotalIncompleteCounter;
	unsigned _decodedVideoFrameEnqueueCounter;

}
-(void)dealloc;
-(void)processData:(id)arg1 ;
-(unsigned)RTPeriod;
-(unsigned)totalFIRDemandCounter;
-(unsigned)totalFIRCounter;
-(unsigned)videoFrameDecodedButSkippedCounter;
-(unsigned)videoFrameImcompleteNextTSCounter;
-(unsigned)videoFrameTotalIncompleteCounter;
-(unsigned)decodedVideoFrameEnqueueCounter;
-(id)initStreamWithID:(id)arg1 ;
-(unsigned short)significantVideoStallCount;
-(double)videoStallTotalTime;
-(unsigned short)audioErasureCount;
-(double)audioErasureTotalTime;
-(double)averageFramerateSum;
-(unsigned short)averageFramerateReportCounter;
-(double)averageJitterLengthSum;
-(unsigned short)averageJitterReportCounter;
-(unsigned)oooPacketCount;
-(unsigned)totalVideoPacketsReceived;
@end

