/*
* Generated on Thursday, January 14, 2021 at 2:26:57 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
+(const MPSLibraryInfo*)libraryInfo:(MPSDevice*)arg1 ;
-(id)initWithDevice:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 device:(id)arg2 ;
-(id)description;
-(id)initWithCoder:(id)arg1 device:(id)arg2 ;
-(void)dealloc;
-(MPSTemporalAAParams)params;
-(float)blendFactor;
-(void)setBlendFactor:(float)arg1 ;
-(unsigned long long)channelCount:(id)arg1 ;
-(MPSTemporalAAFunctionHash)getHashForKernelID:(unsigned long long)arg1 haveMotionVectorTexture:(BOOL)arg2 haveDepthTexture:(BOOL)arg3 ;
-(id)getPipelineForFunctionName:(id)arg1 kernelID:(unsigned long long)arg2 haveMotionVectorTexture:(BOOL)arg3 haveDepthTexture:(BOOL)arg4 ;
-(void)encodeToCommandBuffer:(id)arg1 sourceTexture:(id)arg2 previousTexture:(id)arg3 destinationTexture:(id)arg4 motionVectorTexture:(id)arg5 depthTexture:(id)arg6 ;
@end

