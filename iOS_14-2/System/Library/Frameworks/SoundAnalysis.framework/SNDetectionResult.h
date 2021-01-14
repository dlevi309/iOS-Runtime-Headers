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

@interface SNDetectionResult : NSObject <NSCopying, NSSecureCoding, SNTimeRangeProvidingWritable, SNConfidenceProvidingWritable, SNResult, SNTimeRangeProviding, SNConfidenceProviding> {

	BOOL _detected;
	double _confidence;
	NSString* _identifier;
	SCD_Struct_SN4 _timeRange;

}

@property (assign,nonatomic) BOOL detected;                         //@synthesize detected=_detected - In the implementation block
@property (nonatomic,readonly) NSString * identifier;               //@synthesize identifier=_identifier - In the implementation block
@property (assign,nonatomic) SCD_Struct_SN4 timeRange;              //@synthesize timeRange=_timeRange - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) double confidence;                     //@synthesize confidence=_confidence - In the implementation block
+(BOOL)supportsSecureCoding;
-(double)confidence;
-(void)setTimeRange:(SCD_Struct_SN4)arg1 ;
-(SCD_Struct_SN4)timeRange;
-(void)encodeWithCoder:(id)arg1 ;
-(NSString *)description;
-(void)setConfidence:(double)arg1 ;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)identifier;
-(BOOL)detected;
-(id)initWithIdentifier:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)setDetected:(BOOL)arg1 ;
-(BOOL)isEqualToDetectionResult:(id)arg1 ;
@end

