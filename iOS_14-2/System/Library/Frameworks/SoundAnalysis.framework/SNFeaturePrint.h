/*
* Generated on Thursday, January 14, 2021 at 2:27:02 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/SoundAnalysis.framework/SoundAnalysis
*/

#import <SoundAnalysis/SoundAnalysis-Structs.h>
#import <libobjc.A.dylib/SNTimeRangeProvidingWritable.h>
#import <libobjc.A.dylib/SNTimeRangeProviding.h>

@class MLMultiArray, NSString;

@interface SNFeaturePrint : NSObject <SNTimeRangeProvidingWritable, SNTimeRangeProviding> {

	long long _featurePrintType;
	MLMultiArray* _featureVector;
	SCD_Struct_SN4 _timeRange;

}

@property (nonatomic,readonly) long long featurePrintType;                //@synthesize featurePrintType=_featurePrintType - In the implementation block
@property (nonatomic,readonly) MLMultiArray * featureVector;              //@synthesize featureVector=_featureVector - In the implementation block
@property (assign,nonatomic) SCD_Struct_SN4 timeRange;                    //@synthesize timeRange=_timeRange - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
-(void)setTimeRange:(SCD_Struct_SN4)arg1 ;
-(SCD_Struct_SN4)timeRange;
-(void)encodeWithCoder:(id)arg1 ;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(long long)featurePrintType;
-(id)initWithFeaturePrintType:(long long)arg1 featureVector:(id)arg2 ;
-(MLMultiArray *)featureVector;
-(BOOL)isEqualToFeaturePrint:(id)arg1 ;
@end

