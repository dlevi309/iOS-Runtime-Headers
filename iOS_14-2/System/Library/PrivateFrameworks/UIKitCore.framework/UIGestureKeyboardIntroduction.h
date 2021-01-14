/*
* Generated on Thursday, January 14, 2021 at 2:20:27 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/


#import <UIKitCore/UIKitCore-Structs.h>
@class UIKeyboardLayoutStar, UIView, UIKBKeyView, NSTimer;

@interface UIGestureKeyboardIntroduction : NSObject {

	UIKeyboardLayoutStar* m_layout;
	UIView* m_view;
	UIKBKeyView* m_firstKeyView;
	UIKBKeyView* m_secondKeyView;
	/*^block*/id m_completionBlock;
	double m_start;
	NSTimer* m_gestureKeyboardInfoTimer;
	CGPoint m_initPoint;
	BOOL m_isInTransition;
	BOOL m_hasPeeked;
	unsigned long long m_insertedTextLength;

}
-(void)insertText:(id)arg1 forKey:(id)arg2 ;
-(void)tryGestureKeyboardFromView:(id)arg1 withEvent:(id)arg2 ;
-(void)dismissGestureKeyboardIntroduction:(id)arg1 ;
-(void)playGestureKeyboardIntroduction:(id)arg1 ;
-(id)initWithLayoutStar:(id)arg1 completion:(/*^block*/id)arg2 ;
-(BOOL)showGestureKeyboardIntroduction;
-(void)dismissGestureKeyboardIntroduction;
@end

