/*
* Generated on Monday, March 1, 2021 at 2:34:23 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
*/


#import <WorkflowUI/WorkflowUI-Structs.h>
@interface WFDrawerVelocityFilter : NSObject {

	double _previousTime;
	double _previousValue;
	SCD_Struct_WF21 _currentSample;
	SCD_Struct_WF21 _previousSample;

}

@property (assign,nonatomic) SCD_Struct_WF21 currentSample;               //@synthesize currentSample=_currentSample - In the implementation block
@property (assign,nonatomic) SCD_Struct_WF21 previousSample;              //@synthesize previousSample=_previousSample - In the implementation block
@property (assign,nonatomic) double previousTime;                         //@synthesize previousTime=_previousTime - In the implementation block
@property (assign,nonatomic) double previousValue;                        //@synthesize previousValue=_previousValue - In the implementation block
@property (nonatomic,readonly) double calculatedVelocity; 
-(void)addSample:(double)arg1 ;
-(double)previousValue;
-(void)setPreviousValue:(double)arg1 ;
-(double)calculatedVelocity;
-(void)resetWithValue:(double)arg1 ;
-(SCD_Struct_WF21)currentSample;
-(void)setCurrentSample:(SCD_Struct_WF21)arg1 ;
-(SCD_Struct_WF21)previousSample;
-(void)setPreviousSample:(SCD_Struct_WF21)arg1 ;
-(double)previousTime;
-(void)setPreviousTime:(double)arg1 ;
@end

