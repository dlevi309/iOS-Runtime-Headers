/*
* Generated on Thursday, January 14, 2021 at 2:28:51 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
*/


#import <WorkflowUI/WorkflowUI-Structs.h>
@interface WFDrawerVelocityFilter : NSObject {

	double _previousTime;
	double _previousValue;
	SCD_Struct_WF1 _currentSample;
	SCD_Struct_WF1 _previousSample;

}

@property (assign,nonatomic) SCD_Struct_WF1 currentSample;               //@synthesize currentSample=_currentSample - In the implementation block
@property (assign,nonatomic) SCD_Struct_WF1 previousSample;              //@synthesize previousSample=_previousSample - In the implementation block
@property (assign,nonatomic) double previousTime;                        //@synthesize previousTime=_previousTime - In the implementation block
@property (assign,nonatomic) double previousValue;                       //@synthesize previousValue=_previousValue - In the implementation block
@property (nonatomic,readonly) double calculatedVelocity; 
-(void)addSample:(double)arg1 ;
-(void)setPreviousValue:(double)arg1 ;
-(double)previousValue;
-(SCD_Struct_WF1)currentSample;
-(void)setPreviousSample:(SCD_Struct_WF1)arg1 ;
-(void)setCurrentSample:(SCD_Struct_WF1)arg1 ;
-(SCD_Struct_WF1)previousSample;
-(void)setPreviousTime:(double)arg1 ;
-(double)previousTime;
-(double)calculatedVelocity;
-(void)resetWithValue:(double)arg1 ;
@end

