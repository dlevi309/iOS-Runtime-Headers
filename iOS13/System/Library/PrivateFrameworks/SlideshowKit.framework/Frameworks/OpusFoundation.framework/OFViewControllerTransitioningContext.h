/*
* Generated on Monday, March 1, 2021 at 2:35:16 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SlideshowKit.framework/Frameworks/OpusFoundation.framework/OpusFoundation
*/


@protocol OFViewControllerTransitioningContext <NSObject>
@property (assign,nonatomic) double progressVelocity; 
@required
-(double)progress;
-(BOOL)wasCancelled;
-(id)containerView;
-(BOOL)isInteractive;
-(void)completeTransition:(BOOL)arg1;
-(void)updateInteractiveTransition:(double)arg1;
-(void)startInteractiveTransition;
-(id)fromViewController;
-(id)toViewController;
-(BOOL)initiallyInteractive;
-(BOOL)isCompleting;
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

