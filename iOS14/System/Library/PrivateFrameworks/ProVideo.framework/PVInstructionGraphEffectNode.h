/*
* Generated on Thursday, January 14, 2021 at 2:28:14 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ProVideo.framework/ProVideo
*/

#import <ProVideo/ProVideo-Structs.h>
#import <ProVideo/PVInstructionGraphNode.h>

@class PVEffect;

@interface PVInstructionGraphEffectNode : PVInstructionGraphNode {

	map<unsigned int, PVInstructionGraphNode *, std::__1::less<unsigned int>, std::__1::allocator<std::__1::pair<const unsigned int, PVInstructionGraphNode *> > >* _inputMap;
	BOOL _bypassOutOfRangeEffects;
	PVEffect* _effect;

}

@property (nonatomic,retain) PVEffect * effect;                         //@synthesize effect=_effect - In the implementation block
@property (assign,nonatomic) BOOL bypassOutOfRangeEffects;              //@synthesize bypassOutOfRangeEffects=_bypassOutOfRangeEffects - In the implementation block
+(id)newEffectNodeToTransitionFrom:(id)arg1 to:(id)arg2 effect:(id)arg3 ;
+(id)newEffectNodeToFilterInput:(id)arg1 effect:(id)arg2 ;
+(id)newEffectNodeToOverlayInputs:(id)arg1 inputIDs:(id)arg2 effect:(id)arg3 ;
+(id)newEffectNodeToAddTitle:(id)arg1 effect:(id)arg2 ;
-(void)setEffect:(PVEffect *)arg1 ;
-(PVEffect *)effect;
-(id)init;
-(id)requiredSourceTrackIDs;
-(void)setInputNode:(id)arg1 forInputID:(unsigned)arg2 ;
-(void)setBypassOutOfRangeEffects:(BOOL)arg1 ;
-(id)getAllSourceNodes;
-(void)loadIGNode:(HGRef<PVInstructionGraphContext>*)arg1 returnLoadedEffects:(id)arg2 ;
-(PVIGHGNodeCacheKey)contextHGNodeCacheKeyAtTime:(SCD_Struct_PV0)arg1 ;
-(HGRef<HGNode>*)internalHGNodeForTime:(SCD_Struct_PV0)arg1 trackInputs:(const PVInputHGNodeMap<PVInstructionGraphSourceNode *>Ref)arg2 renderer:(const HGRef<HGRenderer>Ref)arg3 igContext:(HGRef<PVInstructionGraphContext>*)arg4 ;
-(id)dotTreeLabel:(HGRef<PVInstructionGraphContext>*)arg1 ;
-(id)instructionGraphNodeDescription;
-(void)unloadIGNode;
-(PCRect<double>)inputSizeForPVEffect:(id)arg1 igContext:(HGRef<PVInstructionGraphContext>*)arg2 ;
-(PCMatrix44Tmpl<double>)pixelTransformForPVEffect:(id)arg1 igContext:(HGRef<PVInstructionGraphContext>*)arg2 ;
-(void)addDotTreeLinks:(HGRef<PVInstructionGraphContext>*)arg1 ;
-(BOOL)bypassOutOfRangeEffects;
@end

