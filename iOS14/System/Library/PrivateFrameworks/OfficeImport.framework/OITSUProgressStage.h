/*
* Generated on Thursday, January 14, 2021 at 2:28:05 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
*/


@class OITSUProgressContext;

@interface OITSUProgressStage : NSObject {

	double m_currentPosition;
	double m_totalSteps;
	double m_stepsInParent;
	double m_startInParent;
	double m_nextSubStageParentSize;
	OITSUProgressStage* m_parentStage;
	OITSUProgressContext* m_context;

}
-(void)end;
-(double)currentPosition;
-(id)description;
-(void)setProgress:(double)arg1 ;
-(void)dealloc;
-(id)initRootStageInContext:(id)arg1 ;
-(id)initWithSteps:(double)arg1 takingSteps:(double)arg2 inContext:(id)arg3 ;
-(double)nextSubStageParentSize;
-(void)setNextSubStageParentSize:(double)arg1 ;
-(id)parentStage;
-(void)advanceProgress:(double)arg1 ;
-(void)setProgressPercentage:(double)arg1 ;
-(double)overallProgress;
@end

