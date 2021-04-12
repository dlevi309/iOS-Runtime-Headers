/*
* Generated on Thursday, January 14, 2021 at 2:25:23 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/


@protocol SBUIAnimationStepping <NSObject>
@property (getter=isStepped,nonatomic,readonly) BOOL stepped; 
@property (assign,nonatomic) double stepPercentage; 
@required
-(BOOL)isStepped;
-(double)stepPercentage;
-(void)setStepPercentage:(double)arg1;
-(void)finishSteppingForwardToEnd;
-(void)finishSteppingBackwardToStart;

@end

