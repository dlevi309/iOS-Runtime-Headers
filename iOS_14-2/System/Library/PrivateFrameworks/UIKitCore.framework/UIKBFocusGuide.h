/*
* Generated on Thursday, January 14, 2021 at 2:20:28 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIFocusGuide.h>

@protocol UIKBFocusGuideDelegate;
@interface UIKBFocusGuide : UIFocusGuide {

	unsigned long long focusHeading;
	id<UIKBFocusGuideDelegate> _keyboardDelegate;

}

@property (assign,nonatomic) unsigned long long focusHeading; 
@property (assign,nonatomic) id<UIKBFocusGuideDelegate> keyboardDelegate;              //@synthesize keyboardDelegate=_keyboardDelegate - In the implementation block
-(id<UIKBFocusGuideDelegate>)keyboardDelegate;
-(BOOL)_isUnoccludable;
-(void)_didUpdateFocusToPreferredFocusedView;
-(void)setFocusHeading:(unsigned long long)arg1 ;
-(double)_focusPriority;
-(unsigned long long)focusHeading;
-(void)setKeyboardDelegate:(id<UIKBFocusGuideDelegate>)arg1 ;
@end

