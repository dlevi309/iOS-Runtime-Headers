/*
* Generated on Monday, March 1, 2021 at 2:35:03 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/MetalTools.framework/MetalTools
*/

#import <MetalTools/MTLToolsFunction.h>

@class MTLFunctionConstantValues;

@interface MTLDebugFunction : MTLToolsFunction {

	MTLFunctionConstantValues* _constantValues;

}

@property (nonatomic,retain) MTLFunctionConstantValues * constantValues;              //@synthesize constantValues=_constantValues - In the implementation block
-(void)dealloc;
-(id)formattedDescription:(unsigned long long)arg1 ;
-(id)newArgumentEncoderWithBufferIndex:(unsigned long long)arg1 ;
-(id)newArgumentEncoderWithBufferIndex:(unsigned long long)arg1 reflection:(id*)arg2 ;
-(id)bitcodeData;
-(MTLFunctionConstantValues *)constantValues;
-(void)setConstantValues:(MTLFunctionConstantValues *)arg1 ;
@end

