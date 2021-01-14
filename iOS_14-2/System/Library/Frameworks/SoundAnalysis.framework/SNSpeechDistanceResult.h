/*
* Generated on Thursday, January 14, 2021 at 2:27:02 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/SoundAnalysis.framework/SoundAnalysis
*/

#import <SoundAnalysis/SoundAnalysis-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/SNTimeRangeProvidingWritable.h>
#import <libobjc.A.dylib/SNTimeRangeProviding.h>

@class NSString;

@interface SNSpeechDistanceResult : NSObject <NSCopying, NSSecureCoding, SNTimeRangeProvidingWritable, SNTimeRangeProviding> {

	double _currentFrameValue;
	double _meanValue;
	double _standardDeviation;
	SCD_Struct_SN4 _timeRange;

}

@property (assign,nonatomic) double currentFrameValue;              //@synthesize currentFrameValue=_currentFrameValue - In the implementation block
@property (assign,nonatomic) double meanValue;                      //@synthesize meanValue=_meanValue - In the implementation block
@property (assign,nonatomic) double standardDeviation;              //@synthesize standardDeviation=_standardDeviation - In the implementation block
@property (assign,nonatomic) SCD_Struct_SN4 timeRange;              //@synthesize timeRange=_timeRange - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
-(void)setTimeRange:(SCD_Struct_SN4)arg1 ;
-(SCD_Struct_SN4)timeRange;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setStandardDeviation:(double)arg1 ;
-(NSString *)description;
-(double)meanValue;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(double)standardDeviation;
-(void)setCurrentFrameValue:(double)arg1 ;
-(void)setMeanValue:(double)arg1 ;
-(double)currentFrameValue;
-(BOOL)isEqualToSpeechDistanceResult:(id)arg1 ;
@end

