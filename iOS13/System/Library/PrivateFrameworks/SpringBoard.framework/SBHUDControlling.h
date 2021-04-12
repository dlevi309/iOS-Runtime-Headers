/*
* Generated on Monday, March 1, 2021 at 2:35:56 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

@class NSString;


@protocol SBHUDControlling <NSObject>
@property (nonatomic,readonly) NSString * identifier; 
@property (nonatomic,readonly) UIViewController*<SBHUDViewControlling> HUDViewController; 
@property (getter=isDismissalScheduled,nonatomic,readonly) BOOL dismissalScheduled; 
@property (nonatomic,readonly) BOOL isPresented; 
@property (nonatomic,readonly) BOOL isPresenting; 
@property (nonatomic,readonly) BOOL isDismissing; 
@property (nonatomic,readonly) BOOL isDismissed; 
@property (nonatomic,readonly) BOOL isVisible; 
@required
-(NSString *)identifier;
-(BOOL)isVisible;
-(void)dismissAnimated:(BOOL)arg1;
-(void)dismiss;
-(BOOL)isPresenting;
-(BOOL)isDismissing;
-(BOOL)isPresented;
-(BOOL)isDismissed;
-(UIViewController*<SBHUDViewControlling>)HUDViewController;
-(void)presentWithDismissalInterval:(double)arg1 animated:(BOOL)arg2;
-(void)presentWithDismissalInterval:(double)arg1;
-(void)rescheduleDismissalTimer;
-(void)invalidateDismissalTimer;
-(BOOL)isDismissalScheduled;
-(void)scheduleDismissalTimer;

@end

