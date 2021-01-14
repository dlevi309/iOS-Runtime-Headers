/*
* Generated on Thursday, January 14, 2021 at 2:25:28 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
*/

#import <NeutrinoCore/NeutrinoCore-Structs.h>
#import <NeutrinoCore/NUSourceNode.h>

@interface NUVideoFrameSourceNode : NUSourceNode {

	long long _orientation;

}
-(id)initWithSettings:(id)arg1 ;
-(id)_evaluateImagePropertiesWithSourceOptions:(id)arg1 error:(out id*)arg2 ;
-(id)_evaluateImageWithSourceOptions:(id)arg1 subsampleFactor:(long long*)arg2 error:(out id*)arg3 ;
-(long long)sourceOrientation;
-(BOOL)shouldCacheNodeForPipelineState:(id)arg1 ;
-(SCD_Struct_NU7)pixelSizeWithSourceOptions:(id)arg1 ;
-(id)initWithSettings:(id)arg1 orientation:(long long)arg2 ;
-(id)applySourceOptions:(id)arg1 image:(id)arg2 ;
@end

