/*
* Generated on Monday, March 1, 2021 at 2:35:59 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/


@protocol SBFTodayOverlayControlling
@property (nonatomic,readonly) double contentWidth; 
@property (assign,nonatomic) double presentationProgress; 
@property (getter=isPresented,nonatomic,readonly) BOOL presented; 
@required
-(double)contentWidth;
-(void)dismissAnimated:(BOOL)arg1;
-(void)presentAnimated:(BOOL)arg1;
-(BOOL)isPresented;
-(double)presentationProgress;
-(void)setPresentationProgress:(double)arg1 interactive:(BOOL)arg2 animated:(BOOL)arg3 completionHandler:(/*^block*/id)arg4;
-(void)addTodayOverlayObserver:(id)arg1;
-(void)setPresentationProgress:(double)arg1;
-(double)finalPresentationProgressForPresentationProgress:(double)arg1 gestureVelocity:(double)arg2;
-(void)removeTodayOverlayObserver:(id)arg1;

@end

