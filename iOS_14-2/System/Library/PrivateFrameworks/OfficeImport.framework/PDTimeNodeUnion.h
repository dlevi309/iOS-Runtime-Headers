/*
* Generated on Thursday, January 14, 2021 at 2:28:09 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setVideo:(id)arg1 ;
-(void)setBehavior:(id)arg1 ;
-(id)init;
-(id)audio;
-(id)video;
-(id)behavior;
-(id)description;
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

