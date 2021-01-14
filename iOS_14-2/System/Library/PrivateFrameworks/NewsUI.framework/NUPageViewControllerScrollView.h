/*
* Generated on Thursday, January 14, 2021 at 2:25:57 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NewsUI.framework/NewsUI
*/

#import <UIKitCore/UIScrollView.h>

@protocol NUPageViewControllerScrollViewAccessibilityDelegate;
@interface NUPageViewControllerScrollView : UIScrollView {

	id<NUPageViewControllerScrollViewAccessibilityDelegate> _accessibilityDelegate;

}

@property (assign,nonatomic,__weak) id<NUPageViewControllerScrollViewAccessibilityDelegate> accessibilityDelegate;              //@synthesize accessibilityDelegate=_accessibilityDelegate - In the implementation block
-(id<NUPageViewControllerScrollViewAccessibilityDelegate>)accessibilityDelegate;
-(void)setAccessibilityDelegate:(id<NUPageViewControllerScrollViewAccessibilityDelegate>)arg1 ;
-(BOOL)accessibilityScroll:(long long)arg1 ;
@end

