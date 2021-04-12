/*
* Generated on Thursday, January 14, 2021 at 2:28:29 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SlideshowKit.framework/Frameworks/OpusFoundation.framework/OpusFoundation
*/


@protocol OFViewControllerTransitioningContext <NSObject>
@property (assign,nonatomic) double progressVelocity; 
@required
-(void)completeTransition:(BOOL)arg1;
-(BOOL)initiallyInteractive;
-(double)progress;
-(BOOL)isInteractive;
-(id)containerView;
-(void)updateInteractiveTransition:(double)arg1;
-(BOOL)isCompleting;
-(void)startInteractiveTransition;
-(BOOL)wasCancelled;
-(id)toViewController;
-(id)fromViewController;
-(BOOL)isRubberBanding;
-(void)finishInteractiveTransitionWithVelocity:(double)arg1;
-(void)cancelInteractiveTransitionWithVelocity:(double)arg1;
-(void)setProgressVelocity:(double)arg1;
-(double)progressVelocity;
-(void)updateNonInteractiveTransitionWithProgress:(double)arg1;
-(BOOL)doEaseIn;
-(BOOL)doEaseOut;
-(void)makeTransitionInteractiveWithInteractor:(id)arg1 andProgress:(double)arg2;

@end

