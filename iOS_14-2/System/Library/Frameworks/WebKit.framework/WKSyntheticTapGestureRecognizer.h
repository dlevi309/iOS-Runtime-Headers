/*
* Generated on Thursday, January 14, 2021 at 2:21:57 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/WebKit.framework/WebKit
*/

#import <WebKit/WebKit-Structs.h>
#import <UIKitCore/UITapGestureRecognizer.h>

@class UIWebTouchEventsGestureRecognizer, NSNumber, UIScrollView;

@interface WKSyntheticTapGestureRecognizer : UITapGestureRecognizer {

	id _gestureIdentifiedTarget;
	SEL _gestureIdentifiedAction;
	id _gestureFailedTarget;
	SEL _gestureFailedAction;
	id _resetTarget;
	SEL _resetAction;
	RetainPtr<NSNumber>* _lastActiveTouchIdentifier;
	WeakObjCPtr<UIScrollView> _lastTouchedScrollView;
	UIWebTouchEventsGestureRecognizer* _supportingWebTouchEventsGestureRecognizer;

}

@property (assign,nonatomic,__weak) UIWebTouchEventsGestureRecognizer * supportingWebTouchEventsGestureRecognizer;              //@synthesize supportingWebTouchEventsGestureRecognizer=_supportingWebTouchEventsGestureRecognizer - In the implementation block
@property (nonatomic,readonly) NSNumber * lastActiveTouchIdentifier; 
@property (nonatomic,__weak,readonly) UIScrollView * lastTouchedScrollView; 
-(UIWebTouchEventsGestureRecognizer *)supportingWebTouchEventsGestureRecognizer;
-(void)setGestureFailedTarget:(id)arg1 action:(SEL)arg2 ;
-(NSNumber *)lastActiveTouchIdentifier;
-(void)touchesEnded:(id)arg1 withEvent:(id)arg2 ;
-(void)setGestureIdentifiedTarget:(id)arg1 action:(SEL)arg2 ;
-(void)setResetTarget:(id)arg1 action:(SEL)arg2 ;
-(void)setState:(long long)arg1 ;
-(void)reset;
-(UIScrollView *)lastTouchedScrollView;
-(void)touchesBegan:(id)arg1 withEvent:(id)arg2 ;
-(void)setSupportingWebTouchEventsGestureRecognizer:(UIWebTouchEventsGestureRecognizer *)arg1 ;
@end

