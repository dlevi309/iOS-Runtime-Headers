/*
* Generated on Monday, March 1, 2021 at 2:35:05 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
*/

#import <NeutrinoCore/NeutrinoCore-Structs.h>
#import <NeutrinoCore/NUSourceNode.h>

@class CIImage;

@interface NUCISourceNode : NUSourceNode {

	CIImage* _image;
	long long _orientation;

}
-(id)initWithSettings:(id)arg1 ;
-(id)resolvedNodeWithCachedInputs:(id)arg1 settings:(id)arg2 pipelineState:(id)arg3 error:(out id*)arg4 ;
-(id)_evaluateImagePropertiesWithSourceOptions:(id)arg1 error:(out id*)arg2 ;
-(id)_evaluateImageWithSourceOptions:(id)arg1 subsampleFactor:(long long*)arg2 error:(out id*)arg3 ;
-(long long)sourceOrientation;
-(BOOL)shouldCacheNodeForPipelineState:(id)arg1 ;
-(SCD_Struct_NU7)pixelSizeWithSourceOptions:(id)arg1 ;
-(BOOL)supportsPipelineState:(id)arg1 error:(out id*)arg2 ;
-(id)initWithImage:(id)arg1 identifier:(id)arg2 orientation:(long long)arg3 ;
-(id)initWithImage:(id)arg1 settings:(id)arg2 orientation:(long long)arg3 ;
@end

