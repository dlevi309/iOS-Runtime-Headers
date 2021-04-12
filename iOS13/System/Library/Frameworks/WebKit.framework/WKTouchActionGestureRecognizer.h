/*
* Generated on Monday, March 1, 2021 at 2:30:46 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/WebKit.framework/WebKit
*/

#import <WebKit/WebKit-Structs.h>
#import <UIKitCore/UIGestureRecognizer.h>

@protocol WKTouchActionGestureRecognizerDelegate;
@interface WKTouchActionGestureRecognizer : UIGestureRecognizer {

	HashMap<unsigned int, WTF::OptionSet<WebCore::TouchAction>, WTF::IntHash<unsigned int>, WTF::HashTraits<unsigned int>, WTF::HashTraits<WTF::OptionSet<WebCore::TouchAction> > >* _touchActionsByTouchIdentifier;
	id<WKTouchActionGestureRecognizerDelegate> _touchActionDelegate;

}
-(void)touchesBegan:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesMoved:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesEnded:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesCancelled:(id)arg1 withEvent:(id)arg2 ;
-(BOOL)canPreventGestureRecognizer:(id)arg1 ;
-(BOOL)canBePreventedByGestureRecognizer:(id)arg1 ;
-(void)_updateState;
-(id)initWithTouchActionDelegate:(id)arg1 ;
-(void)setTouchActions:(OptionSet<WebCore::TouchAction>)arg1 forTouchIdentifier:(unsigned)arg2 ;
-(void)clearTouchActionsForTouchIdentifier:(unsigned)arg1 ;
@end

