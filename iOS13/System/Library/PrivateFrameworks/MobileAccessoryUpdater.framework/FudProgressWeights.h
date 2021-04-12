/*
* Generated on Monday, March 1, 2021 at 2:35:04 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/MobileAccessoryUpdater.framework/MobileAccessoryUpdater
*/


@interface FudProgressWeights : NSObject {

	float prepareWeight;
	float applyWeight;
	float finishWeight;

}

@property (assign) float prepareWeight; 
@property (assign) float applyWeight; 
@property (assign) float finishWeight; 
-(id)description;
-(id)initWithPrepareWeight:(float)arg1 applyWeight:(float)arg2 finishWeight:(float)arg3 ;
-(double)calculateOverallProgressWithStepProgress:(double)arg1 step:(int)arg2 ;
-(float)prepareWeight;
-(void)setPrepareWeight:(float)arg1 ;
-(float)applyWeight;
-(void)setApplyWeight:(float)arg1 ;
-(float)finishWeight;
-(void)setFinishWeight:(float)arg1 ;
@end

