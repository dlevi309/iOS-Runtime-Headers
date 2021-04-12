/*
* Generated on Monday, March 1, 2021 at 2:35:57 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/


@protocol UIViewControllerInteractiveTransitioning <NSObject>
@property (nonatomic,readonly) double completionSpeed; 
@property (nonatomic,readonly) long long completionCurve; 
@property (nonatomic,readonly) BOOL wantsInteractiveStart; 
@optional
-(double)completionSpeed;
-(long long)completionCurve;
-(BOOL)wantsInteractiveStart;

@required
-(void)startInteractiveTransition:(id)arg1;

@end

