/*
* Generated on Monday, March 1, 2021 at 2:34:32 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/SoundAnalysis.framework/SoundAnalysis
*/

#import <SoundAnalysis/SoundAnalysis-Structs.h>
#import <libobjc.A.dylib/SNTimeRangeProvidingWritable.h>
#import <libobjc.A.dylib/SNConfidenceProvidingWritable.h>
#import <libobjc.A.dylib/SNTimeRangeProviding.h>
#import <libobjc.A.dylib/SNConfidenceProviding.h>

@class NSString;

@interface SNSpeechUtteranceResult : NSObject <SNTimeRangeProvidingWritable, SNConfidenceProvidingWritable, SNTimeRangeProviding, SNConfidenceProviding> {

	BOOL _detected;
	double confidence;
	SCD_Struct_SN4 timeRange;

}

@property (assign,nonatomic) BOOL detected;                           //@synthesize detected=_detected - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) SCD_Struct_SN4 timeRange; 
@property (nonatomic,readonly) double confidence; 
-(NSString *)description;
-(double)confidence;
-(void)setConfidence:(double)arg1 ;
-(void)setTimeRange:(SCD_Struct_SN4)arg1 ;
-(SCD_Struct_SN4)timeRange;
-(BOOL)detected;
-(void)setDetected:(BOOL)arg1 ;
@end

