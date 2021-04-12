/*
* Generated on Monday, March 1, 2021 at 2:32:58 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/ARKit.framework/ARKit
*/


@class NSDictionary, ADPointCloudAggregator, ADAggregationParameters;

@interface ARDepthPointCloudCoalescer : NSObject {

	NSDictionary* _jasperCameraCalibrationDataDictionary;
	ADPointCloudAggregator* _aggregator;
	ADAggregationParameters* _aggregationParameters;

}

@property (nonatomic,retain) ADAggregationParameters * aggregationParameters;              //@synthesize aggregationParameters=_aggregationParameters - In the implementation block
-(id)init;
-(void)flush;
-(void)_commonInit:(id)arg1 ;
-(ADAggregationParameters *)aggregationParameters;
-(id)initWithCameraCalibration:(id)arg1 ;
-(void)addDepthPointCloudData:(id)arg1 ;
-(id)depthPointCloudWithPose:(id)arg1 imageData:(id)arg2 ;
-(void)setAggregationParameters:(ADAggregationParameters *)arg1 ;
@end

