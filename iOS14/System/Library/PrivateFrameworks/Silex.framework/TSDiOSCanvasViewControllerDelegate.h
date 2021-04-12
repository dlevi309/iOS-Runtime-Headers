/*
* Generated on Thursday, January 14, 2021 at 2:24:29 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
*/


@protocol TSDiOSCanvasViewControllerDelegate <NSObject>
@optional
-(id)backgroundColorForDragUIPlatter;
-(id)viewForGestureRecognizer:(id)arg1;
-(BOOL)allowTouchOutsideCanvasView:(id)arg1 forGesture:(id)arg2;
-(BOOL)shouldIgnoreTextGestures;
-(Class)canvasViewClassOverride;
-(BOOL)isPopoverGestureInFlight;
-(BOOL)allowEditMenuToAppear;
-(BOOL)canvasViewController:(id)arg1 shouldBeginTapHoldDragAtPoint:(CGPoint)arg2;
-(BOOL)canvasViewControllerShouldShowScaleFeedback:(id)arg1;
-(BOOL)inFindReplaceMode;
-(void)handleFindTapAtPoint:(CGPoint)arg1;
-(id)viewControllerForPresentingAnnotationAuthorUI;
-(BOOL)canvasViewController:(id)arg1 enableSwipeGestureWithNumberOfTouches:(unsigned long long)arg2;

@end

