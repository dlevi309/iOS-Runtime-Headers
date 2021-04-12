/*
* Generated on Monday, March 1, 2021 at 2:31:42 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/LinkPresentation.framework/LinkPresentation
*/

#import <LinkPresentation/LinkPresentation-Structs.h>
#import <UIKitCore/UIGestureRecognizer.h>

@interface LPHighlightGestureRecognizer : UIGestureRecognizer {

	CGPoint _startPointInWindowCoordinates;

}
-(void)touchesBegan:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesMoved:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesEnded:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesCancelled:(id)arg1 withEvent:(id)arg2 ;
-(CGPoint)_locationInWindow;
-(void)startHighlightIfPossible;
-(void)updateHighlight;
-(void)cancelHighlight;
@end

