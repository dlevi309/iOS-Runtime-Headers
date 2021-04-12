/*
* Generated on Monday, March 1, 2021 at 2:35:08 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
*/


@class PDAnimateTimeBehavior, PDAnimateEffectBehavior, PDAnimateMotionBehavior, PDAnimateRotateBehavior, PDAnimateScaleBehavior, PDAnimateColorBehavior, PDAudioNode, PDVideoNode, PDParallelTimeNode, PDSequentialTimeNode, PDSetBehavior, PDCmdBehavior;

@interface PDTimeNodeUnion : NSObject {

	PDAnimateTimeBehavior* mTimeBehavior;
	PDAnimateEffectBehavior* mEffectBehavior;
	PDAnimateMotionBehavior* mMotionBehavior;
	PDAnimateRotateBehavior* mRotateBehavior;
	PDAnimateScaleBehavior* mScaleBehavior;
	PDAnimateColorBehavior* mColorBehavior;
	PDAudioNode* mAudio;
	PDVideoNode* mVideo;
	PDParallelTimeNode* mParallelTimeNodeGroup;
	PDSequentialTimeNode* mSequentialTimeNodeGroup;
	PDSetBehavior* mSetBehavior;
	PDCmdBehavior* mCmdBehavior;

}
-(id)init;
-(id)description;
-(id)behavior;
-(void)setBehavior:(id)arg1 ;
-(id)video;
-(void)setVideo:(id)arg1 ;
-(id)audio;
-(void)setAudio:(id)arg1 ;
-(void)setSequential:(id)arg1 ;
-(void)setScaleBehavior:(id)arg1 ;
-(id)scaleBehavior;
-(id)timeBehavior;
-(id)colorBehavior;
-(id)effectBehavior;
-(id)motionBehavior;
-(id)rotateBehavior;
-(id)cmdBehavior;
-(void)setParallel:(id)arg1 ;
-(void)setTimeBehavior:(id)arg1 ;
-(void)setColorBehavior:(id)arg1 ;
-(void)setEffectBehavior:(id)arg1 ;
-(void)setMotionBehavior:(id)arg1 ;
-(void)setRotateBehavior:(id)arg1 ;
-(void)setCmdBehavior:(id)arg1 ;
-(id)commonBehavior;
-(id)parallel;
-(id)sequential;
@end

