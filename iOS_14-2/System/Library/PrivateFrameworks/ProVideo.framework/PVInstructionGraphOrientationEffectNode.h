/*
* Generated on Thursday, January 14, 2021 at 2:28:14 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ProVideo.framework/ProVideo
*/

#import <ProVideo/ProVideo-Structs.h>
#import <ProVideo/PVInstructionGraphEffectNode.h>

@class PVEffect;

@interface PVInstructionGraphOrientationEffectNode : PVInstructionGraphEffectNode {

	BOOL _bypassOutOfRangeEffects;
	PVEffect* _effect;

}
+(id)newOrientationEffectNodeWithInputs:(id)arg1 inputIDs:(id)arg2 effect:(id)arg3 ;
-(void)setEffect:(id)arg1 ;
-(id)effect;
-(void)setBypassOutOfRangeEffects:(BOOL)arg1 ;
-(HGRef<HGNode>*)internalHGNodeForTime:(SCD_Struct_PV22)arg1 trackInputs:(const PVInputHGNodeMap<PVInstructionGraphSourceNode *>Ref)arg2 renderer:(const HGRef<HGRenderer>Ref)arg3 igContext:(HGRef<PVInstructionGraphContext>*)arg4 ;
-(id)dotTreeLabel:(HGRef<PVInstructionGraphContext>*)arg1 ;
-(PCRect<double>)inputSizeForPVEffect:(id)arg1 igContext:(HGRef<PVInstructionGraphContext>*)arg2 ;
-(BOOL)bypassOutOfRangeEffects;
@end

