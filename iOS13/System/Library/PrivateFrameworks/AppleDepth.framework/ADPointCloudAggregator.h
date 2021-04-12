/*
* Generated on Monday, March 1, 2021 at 2:35:52 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AppleDepth.framework/AppleDepth
*/


#import <AppleDepth/AppleDepth-Structs.h>
@class ADAggregationParameters, ADJasperPointCloudFilterParamaters, ADCameraCalibration;

@interface ADPointCloudAggregator : NSObject {

	SCD_Struct_AD6* _history;
	unsigned long long _historyIndex;
	ADAggregationParameters* _aggregationParameters;
	ADJasperPointCloudFilterParamaters* _pointCloudFilterParameters;
	ADCameraCalibration* _colorCameraCalibration;
	SCD_Struct_AD5 _jasperToCameraTransform;

}

@property (nonatomic,retain,readonly) ADAggregationParameters * aggregationParameters;                     //@synthesize aggregationParameters=_aggregationParameters - In the implementation block
@property (nonatomic,retain) ADJasperPointCloudFilterParamaters * pointCloudFilterParameters;              //@synthesize pointCloudFilterParameters=_pointCloudFilterParameters - In the implementation block
@property (assign) SCD_Struct_AD5 jasperToCameraTransform;                                                 //@synthesize jasperToCameraTransform=_jasperToCameraTransform - In the implementation block
@property (retain) ADCameraCalibration * colorCameraCalibration;                                           //@synthesize colorCameraCalibration=_colorCameraCalibration - In the implementation block
+(SCD_Struct_AD5)transformMetersToMillimiters:(SCD_Struct_AD5)arg1 ;
-(void)dealloc;
-(long long)clear;
-(id)initWithAggregationParameters:(id)arg1 jasperToColorTransform:(SCD_Struct_AD5)arg2 colorCamera:(id)arg3 ;
-(long long)pushPointCloud:(id)arg1 timestamp:(double)arg2 worldToCameraTransform:(SCD_Struct_AD5)arg3 ;
-(ADAggregationParameters *)aggregationParameters;
-(void)setColorCameraCalibration:(ADCameraCalibration *)arg1 ;
-(void)setJasperToCameraTransform:(SCD_Struct_AD5)arg1 ;
-(ADCameraCalibration *)colorCameraCalibration;
-(id)aggregateForTime:(double)arg1 worldToCameraTransform:(SCD_Struct_AD5)arg2 ;
-(SCD_Struct_AD5)jasperToCameraTransform;
-(long long)aggregateAndProjectForTime:(double)arg1 worldToCameraTransform:(SCD_Struct_AD5)arg2 cropTo:(CGRect)arg3 rotateBy:(long long)arg4 projectedPointsBuffer:(CVBufferRef)arg5 ;
-(long long)aggregateAndProjectForTime:(double)arg1 worldToCameraTransform:(SCD_Struct_AD5)arg2 filterParams:(id)arg3 cropTo:(CGRect)arg4 rotateBy:(long long)arg5 projectedPointsBuffer:(CVBufferRef)arg6 ;
-(ADJasperPointCloudFilterParamaters *)pointCloudFilterParameters;
-(void)setPointCloudFilterParameters:(ADJasperPointCloudFilterParamaters *)arg1 ;
@end

