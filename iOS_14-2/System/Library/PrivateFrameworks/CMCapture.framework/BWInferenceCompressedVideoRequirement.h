/*
* Generated on Thursday, January 14, 2021 at 2:23:48 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CMCapture.framework/CMCapture
*/

#import <CMCapture/CMCapture-Structs.h>
#import <CMCapture/BWInferenceVideoRequirement.h>

@class BWInferenceVideoRequirement;

@interface BWInferenceCompressedVideoRequirement : BWInferenceVideoRequirement {

	BWInferenceVideoRequirement* _uncompressedRequirement;

}

@property (nonatomic,readonly) BWInferenceVideoRequirement * uncompressedRequirement;              //@synthesize uncompressedRequirement=_uncompressedRequirement - In the implementation block
+(id)newRequirementWithUncompressedRequirement:(id)arg1 supportedCompressionType:(int)arg2 ;
-(id)initWithUncompressedRequirement:(id)arg1 compressedVideoFormat:(id)arg2 ;
-(unsigned long long)satisfactionHash;
-(BWInferenceVideoRequirement *)uncompressedRequirement;
-(BOOL)isSatisfiedByRequirement:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)dealloc;
@end

