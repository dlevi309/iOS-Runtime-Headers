/*
* Generated on Monday, March 1, 2021 at 2:33:51 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HomeAI.framework/HomeAI
*/

#import <HomeAI/HomeAI-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface HMICameraVideoAnalyzerConfiguration : NSObject <NSSecureCoding, NSCopying> {

	BOOL _transcodeFragment;
	BOOL _useScheduler;
	BOOL _inMediaAnalysis;
	unsigned long long _posterFrameGenerationInterval;
	unsigned long long _posterFrameHeight;
	double _maxFragmentAnalysisDuration;
	double _maxFragmentDuration;
	unsigned long long _serviceType;
	unsigned long long _startingMediaIntegritySequenceNumber;

}

@property (assign) unsigned long long serviceType;                                       //@synthesize serviceType=_serviceType - In the implementation block
@property (assign) unsigned long long startingMediaIntegritySequenceNumber;              //@synthesize startingMediaIntegritySequenceNumber=_startingMediaIntegritySequenceNumber - In the implementation block
@property (assign) BOOL transcodeFragment;                                               //@synthesize transcodeFragment=_transcodeFragment - In the implementation block
@property (assign) BOOL useScheduler;                                                    //@synthesize useScheduler=_useScheduler - In the implementation block
@property (assign) BOOL inMediaAnalysis;                                                 //@synthesize inMediaAnalysis=_inMediaAnalysis - In the implementation block
@property (readonly) unsigned long long posterFrameGenerationInterval;                   //@synthesize posterFrameGenerationInterval=_posterFrameGenerationInterval - In the implementation block
@property (readonly) unsigned long long posterFrameHeight;                               //@synthesize posterFrameHeight=_posterFrameHeight - In the implementation block
@property (readonly) double maxFragmentAnalysisDuration;                                 //@synthesize maxFragmentAnalysisDuration=_maxFragmentAnalysisDuration - In the implementation block
@property (readonly) double maxFragmentDuration;                                         //@synthesize maxFragmentDuration=_maxFragmentDuration - In the implementation block
+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(unsigned long long)serviceType;
-(void)setServiceType:(unsigned long long)arg1 ;
-(id)initWithPosterFrameGenerationInterval:(unsigned long long)arg1 posterFrameHeight:(unsigned long long)arg2 maxFragmentAnalysisDuration:(double)arg3 maxFragmentDuration:(double)arg4 ;
-(unsigned long long)getAnalysisServiceTypePreference;
-(unsigned long long)posterFrameGenerationInterval;
-(unsigned long long)posterFrameHeight;
-(double)maxFragmentAnalysisDuration;
-(double)maxFragmentDuration;
-(unsigned long long)startingMediaIntegritySequenceNumber;
-(void)setStartingMediaIntegritySequenceNumber:(unsigned long long)arg1 ;
-(BOOL)transcodeFragment;
-(void)setTranscodeFragment:(BOOL)arg1 ;
-(BOOL)useScheduler;
-(void)setUseScheduler:(BOOL)arg1 ;
-(BOOL)inMediaAnalysis;
-(void)setInMediaAnalysis:(BOOL)arg1 ;
@end

