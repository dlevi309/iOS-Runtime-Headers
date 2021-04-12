/*
* Generated on Thursday, January 14, 2021 at 2:21:57 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/WebKit.framework/WebKit
*/

#import <WebKit/WebKit-Structs.h>
#import <UIKitCore/UIGestureRecognizer.h>

@protocol WKTouchActionGestureRecognizerDelegate;
@interface WKTouchActionGestureRecognizer : UIGestureRecognizer {

	HashMap<unsigned int, WTF::OptionSet<WebCore::TouchAction>, WTF::DefaultHash<unsigned int>, WTF::HashTraits<unsigned int>, WTF::HashTraits<WTF::OptionSet<WebCore::TouchAction> > >* _touchActionsByTouchIdentifier;
	id<WKTouchActionGestureRecognizerDelegate> _touchActionDelegate;

}
-(BOOL)canPreventGestureRecognizer:(id)arg1 ;
-(BOOL)canBePreventedByGestureRecognizer:(id)arg1 ;
-(void)touchesMoved:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesEnded:(id)arg1 withEvent:(id)arg2 ;
-(void)_updateState;
-(id)initWithTouchActionDelegate:(id)arg1 ;
-(void)touchesCancelled:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesBegan:(id)arg1 withEvent:(id)arg2 ;
-(void)clearTouchActionsForTouchIdentifier:(unsigned)arg1 ;
-(void)setTouchActions:(OptionSet<WebCore::TouchAction>)arg1 forTouchIdentifier:(unsigned)arg2 ;
@end

