/*
* Generated on Thursday, January 14, 2021 at 2:27:58 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MetalTools.framework/MetalTools
*/

#import <MetalTools/MTLToolsFunction.h>

@class MTLFunctionConstantValues;

@interface MTLDebugFunction : MTLToolsFunction {

	MTLFunctionConstantValues* _constantValues;

}

@property (nonatomic,retain) MTLFunctionConstantValues * constantValues;              //@synthesize constantValues=_constantValues - In the implementation block
+(id)newFunctionWithBaseObject:(id)arg1 parent:(id)arg2 ;
-(id)bitcodeData;
-(id)newArgumentEncoderWithBufferIndex:(unsigned long long)arg1 ;
-(id)newArgumentEncoderWithBufferIndex:(unsigned long long)arg1 reflection:(id*)arg2 pipelineLibrary:(id)arg3 ;
-(id)newArgumentEncoderWithBufferIndex:(unsigned long long)arg1 reflection:(id*)arg2 ;
-(id)formattedDescription:(unsigned long long)arg1 ;
-(id)newArgumentEncoderWithBufferIndex:(unsigned long long)arg1 reflection:(id*)arg2 binaryArchives:(id)arg3 ;
-(void)setConstantValues:(MTLFunctionConstantValues *)arg1 ;
-(id)newArgumentEncoderWithBufferIndex:(unsigned long long)arg1 pipelineLibrary:(id)arg2 ;
-(id)precompiledOutput;
-(MTLFunctionConstantValues *)constantValues;
-(void)dealloc;
@end

