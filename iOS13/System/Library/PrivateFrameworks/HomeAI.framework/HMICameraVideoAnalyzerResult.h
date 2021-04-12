/*
* Generated on Monday, March 1, 2021 at 2:33:51 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HomeAI.framework/HomeAI
*/

#import <HomeAI/HomeAI-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSDictionary, NSArray, NSDate, HMICameraVideoFragment;

@interface HMICameraVideoAnalyzerResult : NSObject <NSSecureCoding> {

	float _analysisFPS;
	long long _events;
	NSDictionary* _annotationScores;
	NSArray* _posterFrames;
	NSArray* _frameResults;
	NSDate* _creationDate;
	long long _resultCode;
	double _timeToAnalyzeFragment;
	double _timeSinceFragmentWasSubmitted;
	HMICameraVideoFragment* _videoFragment;
	unsigned long long _lastSequenceNumber;
	SCD_Struct_HM4 _duration;

}

@property (assign) SCD_Struct_HM4 duration;                              //@synthesize duration=_duration - In the implementation block
@property (retain) NSDate * creationDate;                                //@synthesize creationDate=_creationDate - In the implementation block
@property (readonly) unsigned long long lastSequenceNumber;              //@synthesize lastSequenceNumber=_lastSequenceNumber - In the implementation block
@property (readonly) long long events;                                   //@synthesize events=_events - In the implementation block
@property (readonly) NSDictionary * annotationScores;                    //@synthesize annotationScores=_annotationScores - In the implementation block
@property (readonly) NSArray * posterFrames;                             //@synthesize posterFrames=_posterFrames - In the implementation block
@property (readonly) NSArray * frameResults;                             //@synthesize frameResults=_frameResults - In the implementation block
@property (assign) long long resultCode;                                 //@synthesize resultCode=_resultCode - In the implementation block
@property (assign) double timeToAnalyzeFragment;                         //@synthesize timeToAnalyzeFragment=_timeToAnalyzeFragment - In the implementation block
@property (assign) double timeSinceFragmentWasSubmitted;                 //@synthesize timeSinceFragmentWasSubmitted=_timeSinceFragmentWasSubmitted - In the implementation block
@property (retain) HMICameraVideoFragment * videoFragment;               //@synthesize videoFragment=_videoFragment - In the implementation block
@property (assign) float analysisFPS;                                    //@synthesize analysisFPS=_analysisFPS - In the implementation block
+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(SCD_Struct_HM4)duration;
-(NSDate *)creationDate;
-(long long)events;
-(void)setCreationDate:(NSDate *)arg1 ;
-(void)setDuration:(SCD_Struct_HM4)arg1 ;
-(void)setResultCode:(long long)arg1 ;
-(long long)resultCode;
-(NSArray *)posterFrames;
-(long long)confidenceThatEventOccurred:(long long)arg1 ;
-(NSDictionary *)annotationScores;
-(unsigned long long)lastSequenceNumber;
-(float)analysisFPS;
-(NSArray *)frameResults;
-(HMICameraVideoFragment *)videoFragment;
-(double)timeToAnalyzeFragment;
-(double)timeSinceFragmentWasSubmitted;
-(id)initWithEvents:(long long)arg1 posterFrames:(id)arg2 frameResults:(id)arg3 annotationScores:(id)arg4 duration:(SCD_Struct_HM4)arg5 creationDate:(id)arg6 resultCode:(long long)arg7 lastSequenceNumber:(unsigned long long)arg8 ;
-(BOOL)isEqual:(id)arg1 excludeTime:(BOOL)arg2 ;
-(void)setTimeToAnalyzeFragment:(double)arg1 ;
-(void)setTimeSinceFragmentWasSubmitted:(double)arg1 ;
-(void)setVideoFragment:(HMICameraVideoFragment *)arg1 ;
-(void)setAnalysisFPS:(float)arg1 ;
@end

