/*
* Generated on Monday, March 1, 2021 at 2:35:57 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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

