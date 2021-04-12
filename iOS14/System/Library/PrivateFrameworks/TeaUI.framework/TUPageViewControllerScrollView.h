/*
* Generated on Thursday, January 14, 2021 at 2:23:26 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/TeaUI.framework/TeaUI
*/

#import <UIKitCore/UIScrollView.h>

@protocol TUPageViewControllerScrollViewAccessibilityDelegate;
@interface TUPageViewControllerScrollView : UIScrollView {

	id<TUPageViewControllerScrollViewAccessibilityDelegate> _accessibilityDelegate;

}

@property (assign,nonatomic,__weak) id<TUPageViewControllerScrollViewAccessibilityDelegate> accessibilityDelegate;              //@synthesize accessibilityDelegate=_accessibilityDelegate - In the implementation block
-(id<TUPageViewControllerScrollViewAccessibilityDelegate>)accessibilityDelegate;
-(void)setAccessibilityDelegate:(id<TUPageViewControllerScrollViewAccessibilityDelegate>)arg1 ;
-(BOOL)accessibilityScroll:(long long)arg1 ;
@end

