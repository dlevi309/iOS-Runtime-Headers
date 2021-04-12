/*
* Generated on Thursday, January 14, 2021 at 2:27:46 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeAI.framework/HomeAI
*/

#import <HomeAI/HomeAI-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class HMICamera, NSUUID;

@interface HMICameraVideoAnalyzerConfiguration : NSObject <NSSecureCoding, NSCopying> {

	BOOL _transcodeFragment;
	BOOL _useScheduler;
	BOOL _inMediaAnalysis;
	BOOL _faceClassificationEnabled;
	unsigned long long _posterFrameGenerationInterval;
	unsigned long long _posterFrameHeight;
	double _maxFragmentAnalysisDuration;
	double _maxFragmentDuration;
	HMICamera* _camera;
	unsigned long long _serviceType;
	unsigned long long _startingMediaIntegritySequenceNumber;
	NSUUID* _homeUUID;
	SCD_Struct_HM3 _currentSessionDuration;

}

@property (assign) unsigned long long serviceType;                                       //@synthesize serviceType=_serviceType - In the implementation block
@property (assign) unsigned long long startingMediaIntegritySequenceNumber;              //@synthesize startingMediaIntegritySequenceNumber=_startingMediaIntegritySequenceNumber - In the implementation block
@property (assign) BOOL useScheduler;                                                    //@synthesize useScheduler=_useScheduler - In the implementation block
@property (assign) BOOL inMediaAnalysis;                                                 //@synthesize inMediaAnalysis=_inMediaAnalysis - In the implementation block
@property (assign) BOOL faceClassificationEnabled;                                       //@synthesize faceClassificationEnabled=_faceClassificationEnabled - In the implementation block
@property (assign) SCD_Struct_HM3 currentSessionDuration;                                //@synthesize currentSessionDuration=_currentSessionDuration - In the implementation block
@property (retain) NSUUID * homeUUID;                                                    //@synthesize homeUUID=_homeUUID - In the implementation block
@property (readonly) unsigned long long posterFrameGenerationInterval;                   //@synthesize posterFrameGenerationInterval=_posterFrameGenerationInterval - In the implementation block
@property (readonly) unsigned long long posterFrameHeight;                               //@synthesize posterFrameHeight=_posterFrameHeight - In the implementation block
@property (readonly) double maxFragmentAnalysisDuration;                                 //@synthesize maxFragmentAnalysisDuration=_maxFragmentAnalysisDuration - In the implementation block
@property (readonly) double maxFragmentDuration;                                         //@synthesize maxFragmentDuration=_maxFragmentDuration - In the implementation block
@property (assign) BOOL transcodeFragment;                                               //@synthesize transcodeFragment=_transcodeFragment - In the implementation block
@property (readonly) HMICamera * camera;                                                 //@synthesize camera=_camera - In the implementation block
+(BOOL)supportsSecureCoding;
-(HMICamera *)camera;
-(NSUUID *)homeUUID;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setServiceType:(unsigned long long)arg1 ;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(void)setFaceClassificationEnabled:(BOOL)arg1 ;
-(void)setHomeUUID:(NSUUID *)arg1 ;
-(unsigned long long)serviceType;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithPosterFrameGenerationInterval:(unsigned long long)arg1 posterFrameHeight:(unsigned long long)arg2 maxFragmentAnalysisDuration:(double)arg3 maxFragmentDuration:(double)arg4 transcodeFragment:(BOOL)arg5 camera:(id)arg6 ;
-(unsigned long long)getAnalysisServiceTypePreference;
-(id)initWithPosterFrameGenerationInterval:(unsigned long long)arg1 posterFrameHeight:(unsigned long long)arg2 maxFragmentAnalysisDuration:(double)arg3 maxFragmentDuration:(double)arg4 transcodeFragment:(BOOL)arg5 ;
-(unsigned long long)posterFrameGenerationInterval;
-(unsigned long long)posterFrameHeight;
-(double)maxFragmentAnalysisDuration;
-(double)maxFragmentDuration;
-(BOOL)transcodeFragment;
-(void)setTranscodeFragment:(BOOL)arg1 ;
-(unsigned long long)startingMediaIntegritySequenceNumber;
-(void)setStartingMediaIntegritySequenceNumber:(unsigned long long)arg1 ;
-(BOOL)useScheduler;
-(void)setUseScheduler:(BOOL)arg1 ;
-(BOOL)inMediaAnalysis;
-(void)setInMediaAnalysis:(BOOL)arg1 ;
-(BOOL)faceClassificationEnabled;
-(SCD_Struct_HM3)currentSessionDuration;
-(void)setCurrentSessionDuration:(SCD_Struct_HM3)arg1 ;
@end

