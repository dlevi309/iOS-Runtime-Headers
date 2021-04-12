/*
* Generated on Monday, March 1, 2021 at 2:35:12 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ProVideo.framework/ProVideo
*/

#import <ProVideo/ProVideo-Structs.h>
#import <ProVideo/PVInstructionGraphSourceNode.h>

@class PVImageBuffer;

@interface PVInstructionGraphImageBufferSourceNode : PVInstructionGraphSourceNode {

	PVImageBuffer* _imageBuffer;
	HGRef<PVRenderManager>* _renderManager;

}
-(id)initWithPVImageBuffer:(id)arg1 transform:(CGAffineTransform)arg2 ;
-(HGRef<HGNode>*)internalHGNodeForTime:(SCD_Struct_PV20)arg1 trackInputs:(const PVInputHGNodeMap<PVInstructionGraphSourceNode *>Ref)arg2 renderer:(const HGRef<HGRenderer>*)arg3 igContext:(HGRef<PVInstructionGraphContext>*)arg4 ;
-(id)dotTreeLabel:(HGRef<PVInstructionGraphContext>*)arg1 ;
-(id)instructionGraphNodeDescription;
-(void)loadIGNode:(HGRef<PVInstructionGraphContext>*)arg1 ;
-(PCRect<double>)inputSizeForPVEffect:(id)arg1 igContext:(HGRef<PVInstructionGraphContext>*)arg2 ;
-(PCMatrix44Tmpl<double>)pixelTransformForPVEffect:(id)arg1 igContext:(HGRef<PVInstructionGraphContext>*)arg2 ;
@end

