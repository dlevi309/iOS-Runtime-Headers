/*
* Generated on Thursday, January 14, 2021 at 2:24:06 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/QuickLook.framework/QuickLook
*/


@protocol UIViewControllerInteractiveTransitioning <NSObject>
@property (nonatomic,readonly) double completionSpeed; 
@property (nonatomic,readonly) long long completionCurve; 
@property (nonatomic,readonly) BOOL wantsInteractiveStart; 
@optional
-(long long)completionCurve;
-(BOOL)wantsInteractiveStart;
-(double)completionSpeed;

@required
-(void)startInteractiveTransition:(id)arg1;

@end

