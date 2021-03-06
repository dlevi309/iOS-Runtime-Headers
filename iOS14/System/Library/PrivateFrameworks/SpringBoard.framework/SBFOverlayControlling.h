/*
* Generated on Thursday, January 14, 2021 at 2:25:27 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/


@protocol SBFOverlayControlling
@property (nonatomic,readonly) double contentWidth; 
@property (assign,nonatomic) double presentationProgress; 
@property (getter=isPresented,nonatomic,readonly) BOOL presented; 
@property (getter=isAnimatingPresentationProgress,nonatomic,readonly) BOOL animatingPresentationProgress; 
@property (assign,nonatomic,__weak) id<SBFOverlayDismissalDelegate> dismissalDelegate; 
@property (assign,getter=isOccluded,nonatomic) BOOL occluded; 
@required
-(void)setOccluded:(BOOL)arg1;
-(double)contentWidth;
-(void)presentAnimated:(BOOL)arg1;
-(BOOL)isOccluded;
-(void)dismissAnimated:(BOOL)arg1 completionHandler:(/*^block*/id)arg2;
-(BOOL)isPresented;
-(double)presentationProgress;
-(void)presentAnimated:(BOOL)arg1 completionHandler:(/*^block*/id)arg2;
-(void)setDismissalDelegate:(id)arg1;
-(id<SBFOverlayDismissalDelegate>)dismissalDelegate;
-(void)setPresentationProgress:(double)arg1 interactive:(BOOL)arg2 animated:(BOOL)arg3 completionHandler:(/*^block*/id)arg4;
-(void)dismissUsingViewControllerTransitionCoordinator:(id)arg1;
-(void)addHomeScreenOverlayObserver:(id)arg1;
-(void)setPresentationProgress:(double)arg1 fromLeading:(BOOL)arg2;
-(double)layerPresentationProgress;
-(double)presentationProgressForTranslation:(double)arg1 initialPresentationProgress:(double)arg2 fromLeading:(BOOL)arg3;
-(void)setPresentationProgress:(double)arg1 fromLeading:(BOOL)arg2 interactive:(BOOL)arg3 animated:(BOOL)arg4 completionHandler:(/*^block*/id)arg5;
-(double)finalPresentationProgressForTranslation:(double)arg1 velocity:(double)arg2 initialPresentationProgress:(double)arg3 fromLeading:(BOOL)arg4;
-(BOOL)isAnimatingPresentationProgress;
-(void)presentAnimated:(BOOL)arg1 fromLeading:(BOOL)arg2;
-(void)setPresentationProgress:(double)arg1;
-(void)removeHomeScreenOverlayObserver:(id)arg1;

@end

