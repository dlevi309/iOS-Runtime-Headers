/*
* Generated on Monday, March 1, 2021 at 2:33:03 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NewsUI.framework/NewsUI
*/

#import <UIKitCore/UIScrollView.h>

@protocol NUPageViewControllerScrollViewAccessibilityDelegate;
@interface NUPageViewControllerScrollView : UIScrollView {

	id<NUPageViewControllerScrollViewAccessibilityDelegate> _accessibilityDelegate;

}

@property (assign,nonatomic,__weak) id<NUPageViewControllerScrollViewAccessibilityDelegate> accessibilityDelegate;              //@synthesize accessibilityDelegate=_accessibilityDelegate - In the implementation block
-(BOOL)accessibilityScroll:(long long)arg1 ;
-(void)setAccessibilityDelegate:(id<NUPageViewControllerScrollViewAccessibilityDelegate>)arg1 ;
-(id<NUPageViewControllerScrollViewAccessibilityDelegate>)accessibilityDelegate;
@end

