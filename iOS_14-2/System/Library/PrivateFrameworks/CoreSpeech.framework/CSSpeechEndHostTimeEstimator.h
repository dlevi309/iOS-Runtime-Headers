/*
* Generated on Thursday, January 14, 2021 at 2:24:38 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreSpeech.framework/CoreSpeech
*/


@interface CSSpeechEndHostTimeEstimator : NSObject {

	BOOL _endPointNotified;
	unsigned long long _numAudioSampleForwarded;
	unsigned long long _lastAudioChunkHostTime;
	double _trailingSilenceDurationAtEndpoint;

}

@property (assign,nonatomic) unsigned long long numAudioSampleForwarded;              //@synthesize numAudioSampleForwarded=_numAudioSampleForwarded - In the implementation block
@property (assign,nonatomic) unsigned long long lastAudioChunkHostTime;               //@synthesize lastAudioChunkHostTime=_lastAudioChunkHostTime - In the implementation block
@property (assign,nonatomic) BOOL endPointNotified;                                   //@synthesize endPointNotified=_endPointNotified - In the implementation block
@property (assign,nonatomic) double trailingSilenceDurationAtEndpoint;                //@synthesize trailingSilenceDurationAtEndpoint=_trailingSilenceDurationAtEndpoint - In the implementation block
-(id)init;
-(void)reset;
-(double)trailingSilenceDurationAtEndpoint;
-(void)addNumSamples:(unsigned long long)arg1 hostTime:(unsigned long long)arg2 ;
-(void)notifyTrailingSilenceDurationAtEndpoint:(double)arg1 ;
-(unsigned long long)estimatedSpeechEndHostTime;
-(unsigned long long)numAudioSampleForwarded;
-(void)setNumAudioSampleForwarded:(unsigned long long)arg1 ;
-(unsigned long long)lastAudioChunkHostTime;
-(void)setLastAudioChunkHostTime:(unsigned long long)arg1 ;
-(BOOL)endPointNotified;
-(void)setEndPointNotified:(BOOL)arg1 ;
-(void)setTrailingSilenceDurationAtEndpoint:(double)arg1 ;
@end

