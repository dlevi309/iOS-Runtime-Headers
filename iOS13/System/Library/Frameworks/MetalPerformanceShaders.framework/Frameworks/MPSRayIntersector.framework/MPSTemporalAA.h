/*
* Generated on Monday, March 1, 2021 at 2:34:31 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/MetalPerformanceShaders.framework/Frameworks/MPSRayIntersector.framework/MPSRayIntersector
*/

#import <MPSRayIntersector/MPSRayIntersector-Structs.h>
#import <MPSCore/MPSKernel.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface MPSTemporalAA : MPSKernel <NSSecureCoding, NSCopying> {

	float _blendFactor;

}

@property (assign,nonatomic) float blendFactor; 
+(BOOL)supportsSecureCoding;
+(const MPSLibraryInfo*)libraryInfo;
-(void)dealloc;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithDevice:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 device:(id)arg2 ;
-(MPSTemporalAAParams)params;
-(float)blendFactor;
-(void)setBlendFactor:(float)arg1 ;
-(id)initWithCoder:(id)arg1 device:(id)arg2 ;
-(unsigned long long)channelCount:(id)arg1 ;
-(MPSTemporalAAFunctionHash)getHashForKernelID:(unsigned long long)arg1 haveMotionVectorTexture:(BOOL)arg2 haveDepthTexture:(BOOL)arg3 ;
-(id)getPipelineForFunctionName:(id)arg1 kernelID:(unsigned long long)arg2 haveMotionVectorTexture:(BOOL)arg3 haveDepthTexture:(BOOL)arg4 ;
-(void)encodeToCommandBuffer:(id)arg1 sourceTexture:(id)arg2 previousTexture:(id)arg3 destinationTexture:(id)arg4 motionVectorTexture:(id)arg5 depthTexture:(id)arg6 ;
@end

