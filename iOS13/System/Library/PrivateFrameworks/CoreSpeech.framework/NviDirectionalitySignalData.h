/*
* Generated on Monday, March 1, 2021 at 2:34:03 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CoreSpeech.framework/CoreSpeech
*/

#import <CoreSpeech/NviSignalData.h>

@class NSArray, NSDictionary;

@interface NviDirectionalitySignalData : NviSignalData {

	float _confidence;
	float _azimuth;
	float _estimatedAzimuth;
	unsigned long long _startSample;
	unsigned long long _endSample;
	double _processedAudioDurMs;
	NSArray* _spatialSpectrumData;
	NSDictionary* _azDistribution;

}

@property (assign,nonatomic) unsigned long long startSample;              //@synthesize startSample=_startSample - In the implementation block
@property (assign,nonatomic) unsigned long long endSample;                //@synthesize endSample=_endSample - In the implementation block
@property (assign,nonatomic) float confidence;                            //@synthesize confidence=_confidence - In the implementation block
@property (assign,nonatomic) float azimuth;                               //@synthesize azimuth=_azimuth - In the implementation block
@property (assign,nonatomic) float estimatedAzimuth;                      //@synthesize estimatedAzimuth=_estimatedAzimuth - In the implementation block
@property (assign,nonatomic) double processedAudioDurMs;                  //@synthesize processedAudioDurMs=_processedAudioDurMs - In the implementation block
@property (nonatomic,retain) NSArray * spatialSpectrumData;               //@synthesize spatialSpectrumData=_spatialSpectrumData - In the implementation block
@property (nonatomic,retain) NSDictionary * azDistribution;               //@synthesize azDistribution=_azDistribution - In the implementation block
@property (nonatomic,readonly) float mostSampledAzimuth; 
+(id)headerString;
-(id)description;
-(float)confidence;
-(void)setConfidence:(float)arg1 ;
-(float)azimuth;
-(void)setAzimuth:(float)arg1 ;
-(void)setStartSample:(unsigned long long)arg1 ;
-(void)setEndSample:(unsigned long long)arg1 ;
-(void)setEstimatedAzimuth:(float)arg1 ;
-(void)setProcessedAudioDurMs:(double)arg1 ;
-(void)setSpatialSpectrumData:(NSArray *)arg1 ;
-(id)stringForLogging;
-(NSDictionary *)azDistribution;
-(void)setAzDistribution:(NSDictionary *)arg1 ;
-(id)initWithStartSample:(unsigned long long)arg1 endSample:(unsigned long long)arg2 confidence:(float)arg3 azimuth:(float)arg4 estimatedAzimuth:(float)arg5 ;
-(float)mostSampledAzimuth;
-(id)_spatialSpectrumLogStr;
-(unsigned long long)startSample;
-(unsigned long long)endSample;
-(float)estimatedAzimuth;
-(double)processedAudioDurMs;
-(NSArray *)spatialSpectrumData;
@end
