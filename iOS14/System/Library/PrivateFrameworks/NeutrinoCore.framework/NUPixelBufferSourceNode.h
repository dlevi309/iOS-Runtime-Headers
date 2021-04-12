/*
* Generated on Thursday, January 14, 2021 at 2:25:28 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
*/

#import <NeutrinoCore/NeutrinoCore-Structs.h>
#import <NeutrinoCore/NUVideoFrameSourceNode.h>

@interface NUPixelBufferSourceNode : NUVideoFrameSourceNode {

	CVBufferRef _pixelBuffer;

}
-(void)dealloc;
-(id)_evaluateImageWithSourceOptions:(id)arg1 subsampleFactor:(long long*)arg2 error:(out id*)arg3 ;
-(SCD_Struct_NU7)pixelSizeWithSourceOptions:(id)arg1 ;
-(id)initWithSettings:(id)arg1 orientation:(long long)arg2 ;
-(id)initWithPixelBuffer:(CVBufferRef)arg1 settings:(id)arg2 orientation:(long long)arg3 ;
@end

