/*
* Generated on Monday, March 1, 2021 at 2:32:59 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/ARKit.framework/ARKit
*/

#import <ARKit/ARResultData.h>

@class NSArray, ARImageData, NSString;

@interface ARMLImageDownScalingResultData : NSObject <ARResultData> {

	double _timestamp;
	long long _rotationOfResultTensor;
	NSArray* _downScalingResults;
	ARImageData* _originalImageData;
	ARMLImageDownScalingResultData* _latestResizedUltraWideImageData;

}

@property (nonatomic,readonly) double timestamp;                                                            //@synthesize timestamp=_timestamp - In the implementation block
@property (nonatomic,readonly) long long rotationOfResultTensor;                                            //@synthesize rotationOfResultTensor=_rotationOfResultTensor - In the implementation block
@property (nonatomic,copy,readonly) NSArray * downScalingResults;                                           //@synthesize downScalingResults=_downScalingResults - In the implementation block
@property (nonatomic,readonly) ARImageData * originalImageData;                                             //@synthesize originalImageData=_originalImageData - In the implementation block
@property (nonatomic,retain) ARMLImageDownScalingResultData * latestResizedUltraWideImageData;              //@synthesize latestResizedUltraWideImageData=_latestResizedUltraWideImageData - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)isEqual:(id)arg1 ;
-(double)timestamp;
-(ARImageData *)originalImageData;
-(void)setLatestResizedUltraWideImageData:(ARMLImageDownScalingResultData *)arg1 ;
-(id)initWithResultDataArray:(id)arg1 timestamp:(double)arg2 rotationOfResultTensor:(long long)arg3 originalImageData:(id)arg4 ;
-(NSArray *)downScalingResults;
-(ARMLImageDownScalingResultData *)latestResizedUltraWideImageData;
-(long long)rotationOfResultTensor;
@end

