/*
* Generated on Monday, March 1, 2021 at 2:30:27 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithRequestClass:(Class)arg1 ;
-(VNSupportedImageSize *)detectorPreferredImageSize;
-(void)setDetectorPreferredImageSize:(VNSupportedImageSize *)arg1 ;
-(BOOL)detectorWantsAnisotropicScaling;
-(void)setDetectorWantsAnisotropicScaling:(BOOL)arg1 ;
-(double)detectorExecutionTimeInterval;
-(void)setDetectorExecutionTimeInterval:(double)arg1 ;
@end

