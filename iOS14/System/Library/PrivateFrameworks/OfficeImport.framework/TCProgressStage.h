/*
* Generated on Thursday, January 14, 2021 at 2:28:06 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
*/


@class NSString, TCProgressContext;

@interface TCProgressStage : NSObject {

	double m_currentPosition;
	double m_totalSteps;
	double m_stepsInParent;
	NSString* m_name;
	TCProgressStage* m_parentStage;
	TCProgressContext* m_context;

}
-(void)end;
-(double)currentPosition;
-(void)setProgress:(double)arg1 ;
-(void)dealloc;
-(id)initRootStageInContext:(id)arg1 ;
-(id)parentStage;
-(void)advanceProgress:(double)arg1 ;
-(id)initWithSteps:(double)arg1 takingSteps:(double)arg2 name:(id)arg3 inContext:(id)arg4 ;
-(id)initBranchWithSteps:(double)arg1 takingSteps:(double)arg2 name:(id)arg3 inContext:(id)arg4 ;
@end

