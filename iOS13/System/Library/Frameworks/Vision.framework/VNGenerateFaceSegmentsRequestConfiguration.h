/*
* Generated on Monday, March 1, 2021 at 2:30:27 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/Vision.framework/Vision
*/

#import <Vision/Vision-Structs.h>
#import <Vision/VNImageBasedRequestConfiguration.h>

@interface VNGenerateFaceSegmentsRequestConfiguration : VNImageBasedRequestConfiguration {

	float _faceBoundingBoxExpansionRatio;

}

@property (assign,nonatomic) float faceBoundingBoxExpansionRatio; 
+(BOOL)expansionRatioWithinValidRange:(float)arg1 ;
+(float)defaultFaceBoundingBoxExpansionRatio;
+(float)beginRangeFaceBoundingBoxExpansionRatio;
+(float)endRangeFaceBoundingBoxExpansionRatio;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithRequestClass:(Class)arg1 ;
-(void)setFaceBoundingBoxExpansionRatio:(float)arg1 ;
-(float)faceBoundingBoxExpansionRatio;
@end

