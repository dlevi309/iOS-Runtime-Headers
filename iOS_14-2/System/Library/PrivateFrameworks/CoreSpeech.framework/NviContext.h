/*
* Generated on Thursday, January 14, 2021 at 2:24:39 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreSpeech.framework/CoreSpeech
*/


@class NSDictionary, NSString;

@interface NviContext : NSObject {

	BOOL _requestHistoricalAudio;
	BOOL _shouldLogRawSensorData;
	NSDictionary* _voiceTriggerInfo;
	unsigned long long _reqStartAudioSampleId;
	unsigned long long _reqStartMachAbsTime;
	NSString* _rootLogDir;

}

@property (nonatomic,retain) NSDictionary * voiceTriggerInfo;                       //@synthesize voiceTriggerInfo=_voiceTriggerInfo - In the implementation block
@property (assign,nonatomic) BOOL requestHistoricalAudio;                           //@synthesize requestHistoricalAudio=_requestHistoricalAudio - In the implementation block
@property (assign,nonatomic) unsigned long long reqStartAudioSampleId;              //@synthesize reqStartAudioSampleId=_reqStartAudioSampleId - In the implementation block
@property (assign,nonatomic) unsigned long long reqStartMachAbsTime;                //@synthesize reqStartMachAbsTime=_reqStartMachAbsTime - In the implementation block
@property (assign,nonatomic) BOOL shouldLogRawSensorData;                           //@synthesize shouldLogRawSensorData=_shouldLogRawSensorData - In the implementation block
@property (nonatomic,retain) NSString * rootLogDir;                                 //@synthesize rootLogDir=_rootLogDir - In the implementation block
-(id)description;
-(NSDictionary *)voiceTriggerInfo;
-(NSString *)rootLogDir;
-(void)setVoiceTriggerInfo:(NSDictionary *)arg1 ;
-(BOOL)requestHistoricalAudio;
-(unsigned long long)reqStartAudioSampleId;
-(void)setRequestHistoricalAudio:(BOOL)arg1 ;
-(void)setReqStartAudioSampleId:(unsigned long long)arg1 ;
-(unsigned long long)reqStartMachAbsTime;
-(void)setReqStartMachAbsTime:(unsigned long long)arg1 ;
-(BOOL)shouldLogRawSensorData;
-(void)setShouldLogRawSensorData:(BOOL)arg1 ;
-(void)setRootLogDir:(NSString *)arg1 ;
@end

