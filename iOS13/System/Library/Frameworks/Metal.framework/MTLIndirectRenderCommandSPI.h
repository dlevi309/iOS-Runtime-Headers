/*
* Generated on Monday, March 1, 2021 at 2:32:20 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/Metal.framework/Metal
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
-(unsigned long long)getPipelineStateUniqueIdentifier;

@end

