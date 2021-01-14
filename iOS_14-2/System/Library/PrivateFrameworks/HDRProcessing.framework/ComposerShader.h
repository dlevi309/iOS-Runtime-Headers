/*
* Generated on Thursday, January 14, 2021 at 2:29:28 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HDRProcessing.framework/HDRProcessing
*/

#import <HDRProcessing/ForwardDmShader.h>

@interface ComposerShader : ForwardDmShader {

	BOOL _dolby84;
	BOOL _forLLDovi;

}
+(id)createShaderWithName:(id)arg1 dolby84:(BOOL)arg2 forLLDovi:(BOOL)arg3 ;
-(id)getComputePipeLineStateForDevice:(id)arg1 Library:(id)arg2 ;
-(id)initShaderWithName:(id)arg1 dolby84:(BOOL)arg2 forLLDovi:(BOOL)arg3 ;
@end

