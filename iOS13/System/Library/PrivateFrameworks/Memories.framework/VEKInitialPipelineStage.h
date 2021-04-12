/*
* Generated on Monday, March 1, 2021 at 2:35:02 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Memories.framework/Memories
*/

#import <Memories/VEKPipelineStage.h>

@class VEKProduction;

@interface VEKInitialPipelineStage : VEKPipelineStage {

	VEKProduction* _production;

}

@property (assign,nonatomic,__weak) VEKProduction * production;              //@synthesize production=_production - In the implementation block
-(VEKProduction *)production;
-(void)setProduction:(VEKProduction *)arg1 ;
-(id)runStageWithInput:(id)arg1 ;
@end

