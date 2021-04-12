/*
* Generated on Thursday, January 14, 2021 at 2:23:41 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Vision.framework/Vision
*/

#import <Vision/Vision-Structs.h>
#import <Vision/VNImageBasedRequestConfiguration.h>

@class VNSupportedImageSize;

@interface VNNOPRequestConfiguration : VNImageBasedRequestConfiguration {

	BOOL _detectorWantsAnisotropicScaling;
	VNSupportedImageSize* _detectorPreferredImageSize;
	double _detectorExecutionTimeInterval;

}

@property (nonatomic,retain) VNSupportedImageSize * detectorPreferredImageSize;              //@synthesize detectorPreferredImageSize=_detectorPreferredImageSize - In the implementation block
@property (assign,nonatomic) BOOL detectorWantsAnisotropicScaling;                           //@synthesize detectorWantsAnisotropicScaling=_detectorWantsAnisotropicScaling - In the implementation block
@property (assign,nonatomic) double detectorExecutionTimeInterval;                           //@synthesize detectorExecutionTimeInterval=_detectorExecutionTimeInterval - In the implementation block
-(id)initWithRequestClass:(Class)arg1 ;
-(VNSupportedImageSize *)detectorPreferredImageSize;
-(void)setDetectorPreferredImageSize:(VNSupportedImageSize *)arg1 ;
-(BOOL)detectorWantsAnisotropicScaling;
-(void)setDetectorWantsAnisotropicScaling:(BOOL)arg1 ;
-(double)detectorExecutionTimeInterval;
-(void)setDetectorExecutionTimeInterval:(double)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

