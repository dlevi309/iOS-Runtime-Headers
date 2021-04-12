/*
* Generated on Thursday, January 14, 2021 at 2:28:14 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ProVideo.framework/ProVideo
*/

#import <ProVideo/ProVideo-Structs.h>
#import <ProVideo/PVHeliumEffect.h>

@interface PVPushTransition : PVHeliumEffect {

	int _transitionDirection;

}

@property (assign,nonatomic) int transitionDirection;              //@synthesize transitionDirection=_transitionDirection - In the implementation block
+(void)registerEffectWithID:(id)arg1 displayName:(id)arg2 ;
-(void)setTransitionDirection:(int)arg1 ;
-(int)transitionDirection;
-(HGRef<HGNode>*)hgNodeForTime:(SCD_Struct_PV22)arg1 inputs:(const PVInputHGNodeMap<unsigned int>*)arg2 renderer:(const HGRef<HGRenderer>*)arg3 igContext:(HGRef<PVInstructionGraphContext>*)arg4 ;
@end

