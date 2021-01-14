/*
* Generated on Thursday, January 14, 2021 at 2:24:38 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(float)confidence;
-(float)azimuth;
-(id)description;
-(void)setConfidence:(float)arg1 ;
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

