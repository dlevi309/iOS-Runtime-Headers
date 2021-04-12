/*
* Generated on Thursday, January 14, 2021 at 2:23:41 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Vision.framework/Vision
*/

#import <Vision/Vision-Structs.h>
#import <Vision/VNImageBasedRequest.h>

@class NSUUID;

@interface VNStatefulRequest : VNImageBasedRequest {

	NSUUID* _requestUUID;

}

@property (readonly) NSUUID * requestUUID;                                     //@synthesize requestUUID=_requestUUID - In the implementation block
@property (readonly) long long minimumLatencyFrameCount; 
@property (readonly) SCD_Struct_VN49 frameAnalysisSpacing; 
@property (readonly) SCD_Struct_VN49 requestFrameAnalysisSpacing; 
+(Class)configurationClass;
-(NSUUID *)requestUUID;
-(id)description;
-(SCD_Struct_VN49)frameAnalysisSpacing;
-(id)initWithFrameAnalysisSpacing:(SCD_Struct_VN49)arg1 completionHandler:(/*^block*/id)arg2 ;
-(long long)minimumLatencyFrameCount;
-(SCD_Struct_VN49)requestFrameAnalysisSpacing;
-(id)newDefaultRequestInstance;
@end

