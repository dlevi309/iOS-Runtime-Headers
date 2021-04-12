/*
* Generated on Thursday, January 14, 2021 at 2:23:42 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)initWithRequestClass:(Class)arg1 ;
-(float)faceBoundingBoxExpansionRatio;
-(void)setFaceBoundingBoxExpansionRatio:(float)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

