/*
* Generated on Thursday, January 14, 2021 at 2:25:22 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(BOOL)isDismissed;
-(BOOL)isVisible;
-(BOOL)isPresented;
-(NSString *)identifier;
-(BOOL)isDismissing;
-(void)dismissAnimated:(BOOL)arg1;
-(BOOL)isPresenting;
-(void)dismiss;
-(UIViewController*<SBHUDViewControlling>)HUDViewController;
-(void)presentWithDismissalInterval:(double)arg1 animated:(BOOL)arg2;
-(void)presentWithDismissalInterval:(double)arg1;
-(void)rescheduleDismissalTimer;
-(void)invalidateDismissalTimer;
-(BOOL)isDismissalScheduled;
-(void)scheduleDismissalTimer;

@end

