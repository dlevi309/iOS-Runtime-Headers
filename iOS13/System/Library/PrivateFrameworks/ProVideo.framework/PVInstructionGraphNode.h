/*
* Generated on Monday, March 1, 2021 at 2:35:12 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ProVideo.framework/ProVideo
*/


#import <ProVideo/ProVideo-Structs.h>
@interface PVInstructionGraphNode : NSObject {

	unsigned long long _uuid;

}
-(id)init;
-(id)description;
-(id)requiredSourceTrackIDs;
-(id)getAllSourceNodes;
-(void)loadIGNode:(HGRef<PVInstructionGraphContext>*)arg1 returnLoadedEffects:(id)arg2 ;
-(PVIGHGNodeCacheKey)contextHGNodeCacheKeyAtTime:(SCD_Struct_PV0)arg1 ;
-(HGRef<HGNode>*)internalHGNodeForTime:(SCD_Struct_PV0)arg1 trackInputs:(const PVInputHGNodeMap<PVInstructionGraphSourceNode *>Ref)arg2 renderer:(const HGRef<HGRenderer>Ref)arg3 igContext:(HGRef<PVInstructionGraphContext>*)arg4 ;
-(id)dotTreeLabel:(HGRef<PVInstructionGraphContext>*)arg1 ;
-(id)instructionGraphNodeDescription;
-(BOOL)isPassthru;
-(void)loadIGNode:(HGRef<PVInstructionGraphContext>*)arg1 ;
-(void)unloadIGNode;
-(HGRef<HGNode>*)hgNodeForTime:(SCD_Struct_PV0)arg1 trackInputs:(const PVInputHGNodeMap<PVInstructionGraphSourceNode *>Ref)arg2 renderer:(const HGRef<HGRenderer>Ref)arg3 igContext:(HGRef<PVInstructionGraphContext>*)arg4 ;
-(PCRect<double>)inputSizeForPVEffect:(id)arg1 igContext:(HGRef<PVInstructionGraphContext>*)arg2 ;
-(PCMatrix44Tmpl<double>)pixelTransformForPVEffect:(id)arg1 igContext:(HGRef<PVInstructionGraphContext>*)arg2 ;
@end

