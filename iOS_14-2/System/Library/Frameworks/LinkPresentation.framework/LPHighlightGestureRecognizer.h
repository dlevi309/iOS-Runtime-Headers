/*
* Generated on Thursday, January 14, 2021 at 2:22:46 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/LinkPresentation.framework/LinkPresentation
*/

#import <LinkPresentation/LinkPresentation-Structs.h>
#import <UIKitCore/UIGestureRecognizer.h>

@interface LPHighlightGestureRecognizer : UIGestureRecognizer {

	CGPoint _startPointInWindowCoordinates;

}
-(void)touchesMoved:(id)arg1 withEvent:(id)arg2 ;
-(void)startHighlightIfPossible;
-(void)updateHighlight;
-(void)cancelHighlight;
-(void)touchesEnded:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesCancelled:(id)arg1 withEvent:(id)arg2 ;
-(CGPoint)_locationInWindow;
-(void)touchesBegan:(id)arg1 withEvent:(id)arg2 ;
@end

