/*
* Generated on Monday, March 1, 2021 at 2:33:20 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TSUtility.framework/TSUtility
*/


@class TSUProgressContext;

@interface TSUProgressStage : NSObject {

	double m_currentPosition;
	double m_totalSteps;
	double m_stepsInParent;
	double m_startInParent;
	double m_nextSubStageParentSize;
	TSUProgressStage* m_parentStage;
	TSUProgressContext* m_context;

}
-(void)dealloc;
-(id)description;
-(void)end;
-(void)setProgress:(double)arg1 ;
-(double)currentPosition;
-(id)initRootStageInContext:(id)arg1 ;
-(id)initWithSteps:(double)arg1 takingSteps:(double)arg2 inContext:(id)arg3 ;
-(double)nextSubStageParentSize;
-(void)setNextSubStageParentSize:(double)arg1 ;
-(id)parentStage;
-(void)advanceProgress:(double)arg1 ;
-(void)setProgressPercentage:(double)arg1 ;
-(double)overallProgress;
@end

