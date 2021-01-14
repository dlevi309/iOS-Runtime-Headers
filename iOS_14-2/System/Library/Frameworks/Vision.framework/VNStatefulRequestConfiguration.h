/*
* Generated on Thursday, January 14, 2021 at 2:23:41 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Vision.framework/Vision
*/

#import <Vision/Vision-Structs.h>
#import <Vision/VNImageBasedRequestConfiguration.h>

@class NSUUID;

@interface VNStatefulRequestConfiguration : VNImageBasedRequestConfiguration {

	NSUUID* _requestUUID;
	SCD_Struct_VN49 _frameAnalysisSpacing;

}

@property (assign) SCD_Struct_VN49 frameAnalysisSpacing;              //@synthesize frameAnalysisSpacing=_frameAnalysisSpacing - In the implementation block
@property (readonly) NSUUID * requestUUID;                            //@synthesize requestUUID=_requestUUID - In the implementation block
-(NSUUID *)requestUUID;
-(id)initWithRequestClass:(Class)arg1 ;
-(SCD_Struct_VN49)frameAnalysisSpacing;
-(void)setFrameAnalysisSpacing:(SCD_Struct_VN49)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

