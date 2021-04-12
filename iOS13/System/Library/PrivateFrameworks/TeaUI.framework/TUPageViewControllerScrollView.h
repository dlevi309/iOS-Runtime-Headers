/*
* Generated on Monday, March 1, 2021 at 2:33:20 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TeaUI.framework/TeaUI
*/

#import <UIKitCore/UIScrollView.h>

@protocol TUPageViewControllerScrollViewAccessibilityDelegate;
@interface TUPageViewControllerScrollView : UIScrollView {

	id<TUPageViewControllerScrollViewAccessibilityDelegate> _accessibilityDelegate;

}

@property (assign,nonatomic,__weak) id<TUPageViewControllerScrollViewAccessibilityDelegate> accessibilityDelegate;              //@synthesize accessibilityDelegate=_accessibilityDelegate - In the implementation block
-(BOOL)accessibilityScroll:(long long)arg1 ;
-(void)setAccessibilityDelegate:(id<TUPageViewControllerScrollViewAccessibilityDelegate>)arg1 ;
-(id<TUPageViewControllerScrollViewAccessibilityDelegate>)accessibilityDelegate;
@end

