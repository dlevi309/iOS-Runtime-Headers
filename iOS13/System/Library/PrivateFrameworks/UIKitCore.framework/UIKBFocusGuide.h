/*
* Generated on Monday, March 1, 2021 at 2:30:17 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(unsigned long long)focusHeading;
-(void)_didUpdateFocusToPreferredFocusedView;
-(void)setFocusHeading:(unsigned long long)arg1 ;
-(void)setKeyboardDelegate:(id<UIKBFocusGuideDelegate>)arg1 ;
-(id<UIKBFocusGuideDelegate>)keyboardDelegate;
@end

