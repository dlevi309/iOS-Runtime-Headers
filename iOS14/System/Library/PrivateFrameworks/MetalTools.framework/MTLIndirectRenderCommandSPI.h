/*
* Generated on Thursday, January 14, 2021 at 2:27:58 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MetalTools.framework/MetalTools
*/


@protocol MTLIndirectRenderCommandSPI <MTLIndirectRenderCommand>
@required
-(void*)getVertexBufferAtIndex:(unsigned long long)arg1;
-(void*)getFragmentBufferAtIndex:(unsigned long long)arg1;
-(unsigned long long)getCommandType;
-(id)drawArguments;
-(id)drawIndexedArguments;
-(id)drawPatchesArguments;
-(id)drawIndexedPatchesArguments;
-(id)getTessellationFactorArguments;
-(unsigned long long)getOptimizedStatus;
-(unsigned long long)getPipelineStateUniqueIdentifier;

@end

