/*
* Generated on Thursday, January 14, 2021 at 2:25:28 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
*/

#import <NeutrinoCore/NeutrinoCore-Structs.h>
#import <NeutrinoCore/NUSourceNode.h>

@class NUCGAuxiliaryImageProperties, NUCGImageSourceNode;

@interface NUCGImageDepthSourceNode : NUSourceNode {

	NUCGAuxiliaryImageProperties* _auxiliaryImageProperties;
	NUCGImageSourceNode* _sourceNode;
	BOOL _needsAspectRatioCorrection;
	CGAffineTransform _aspectTransform;
	SCD_Struct_NU7 _aspectMatchedPixelSize;

}

@property (retain) NUCGImageSourceNode * sourceNode;              //@synthesize sourceNode=_sourceNode - In the implementation block
-(id)initWithSettings:(id)arg1 ;
-(NUCGImageSourceNode *)sourceNode;
-(id)_evaluateImagePropertiesWithSourceOptions:(id)arg1 error:(out id*)arg2 ;
-(id)_evaluateImageWithSourceOptions:(id)arg1 subsampleFactor:(long long*)arg2 error:(out id*)arg3 ;
-(long long)sourceOrientation;
-(SCD_Struct_NU7)pixelSizeWithSourceOptions:(id)arg1 ;
-(id)pipelineOptionsForPipelineState:(id)arg1 error:(out id*)arg2 ;
-(id)initWithSourceNode:(id)arg1 auxiliaryImageProperties:(id)arg2 ;
-(id)_evaluateAuxiliaryImageForType:(long long)arg1 error:(out id*)arg2 ;
-(BOOL)canPropagateOriginalAuxiliaryData;
-(void)setSourceNode:(NUCGImageSourceNode *)arg1 ;
@end

