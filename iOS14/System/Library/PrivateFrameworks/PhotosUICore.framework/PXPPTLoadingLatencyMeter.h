/*
* Generated on Thursday, January 14, 2021 at 2:22:37 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/


#import <PhotosUICore/PhotosUICore-Structs.h>
@class NSString, NSDictionary;

@interface PXPPTLoadingLatencyMeter : NSObject {

	SCD_Struct_PX92 _lowQualityResults;
	SCD_Struct_PX92 _mediumQualityResults;
	SCD_Struct_PX92 _highQualityResults;
	NSString* _outputType;
	NSString* _measurementsUnit;

}

@property (nonatomic,retain) NSString * measurementsUnit;                                        //@synthesize measurementsUnit=_measurementsUnit - In the implementation block
@property (nonatomic,readonly) NSDictionary * measurementsDictionaryRepresentation; 
+(id)sharedInstance;
+(void)startMeasurementsForOutputType:(id)arg1 ;
+(void)stopMeasurements;
-(id)initWithOutputType:(id)arg1 ;
-(NSString *)measurementsUnit;
-(void)reportLatency:(double)arg1 forOutputQuality:(long long)arg2 ;
-(SCD_Struct_PX92)measurementsForOutputQuality:(long long)arg1 ;
-(NSDictionary *)measurementsDictionaryRepresentation;
-(id)_measurementsDictionaryForOutputQuality:(long long)arg1 ;
-(void)setMeasurementsUnit:(NSString *)arg1 ;
@end

