/*
* Generated on Thursday, January 14, 2021 at 2:27:02 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/SoundAnalysis.framework/SoundAnalysis
*/

#import <SoundAnalysis/SoundAnalysis-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/SNTimeRangeProvidingWritable.h>
#import <libobjc.A.dylib/SNConfidenceProvidingWritable.h>
#import <libobjc.A.dylib/SNResult.h>
#import <libobjc.A.dylib/SNTimeRangeProviding.h>
#import <libobjc.A.dylib/SNConfidenceProviding.h>

@class NSString;

@interface SNSpeechEmotionResult : NSObject <NSCopying, NSSecureCoding, SNTimeRangeProvidingWritable, SNConfidenceProvidingWritable, SNResult, SNTimeRangeProviding, SNConfidenceProviding> {

	double _confidence;
	double _mood;
	double _valence;
	double _arousal;
	double _dominance;
	SCD_Struct_SN4 _timeRange;

}

@property (assign) double mood;                                     //@synthesize mood=_mood - In the implementation block
@property (assign) double valence;                                  //@synthesize valence=_valence - In the implementation block
@property (assign) double arousal;                                  //@synthesize arousal=_arousal - In the implementation block
@property (assign) double dominance;                                //@synthesize dominance=_dominance - In the implementation block
@property (assign,nonatomic) SCD_Struct_SN4 timeRange;              //@synthesize timeRange=_timeRange - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) double confidence;                     //@synthesize confidence=_confidence - In the implementation block
+(BOOL)supportsSecureCoding;
-(double)mood;
-(double)confidence;
-(void)setMood:(double)arg1 ;
-(void)setTimeRange:(SCD_Struct_SN4)arg1 ;
-(SCD_Struct_SN4)timeRange;
-(void)encodeWithCoder:(id)arg1 ;
-(NSString *)description;
-(void)setConfidence:(double)arg1 ;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(double)valence;
-(double)arousal;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(double)dominance;
-(void)setValence:(double)arg1 ;
-(void)setArousal:(double)arg1 ;
-(void)setDominance:(double)arg1 ;
-(BOOL)isEqualToSpeechEmotionResult:(id)arg1 ;
@end

