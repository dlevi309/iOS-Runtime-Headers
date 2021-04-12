/*
* Generated on Thursday, January 14, 2021 at 2:28:05 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
*/


@class OITSUProgressStage, NSDate;

@interface OITSUProgressContext : NSObject {

	OITSUProgressStage* m_currentStage;
	NSDate* m_lastReportTime;
	double m_lastProgressReport;
	double m_lastOverallProgress;

}
-(void)setMessage:(id)arg1 ;
-(void)removeProgressObserver:(id)arg1 ;
-(id)init;
-(double)currentPosition;
-(id)description;
-(void)setProgress:(double)arg1 ;
-(void)reset;
-(void)dealloc;
-(id)currentStage;
-(void)createStageWithSteps:(double)arg1 takingSteps:(double)arg2 ;
-(void)advanceProgress:(double)arg1 ;
-(double)overallProgress;
-(void)addProgressObserver:(id)arg1 selector:(SEL)arg2 ;
-(id)addProgressObserverBlock:(/*^block*/id)arg1 ;
-(void)createStageWithSteps:(double)arg1 ;
-(void)nextSubStageWillTakeThisManyOfMySteps:(double)arg1 ;
-(void)endStage;
-(void)setPercentageProgressFromTCProgressContext:(double)arg1 ;
-(void)reportProgress:(double)arg1 overallProgress:(double)arg2 ;
@end

