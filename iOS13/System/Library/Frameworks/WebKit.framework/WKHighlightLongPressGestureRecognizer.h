/*
* Generated on Monday, March 1, 2021 at 2:30:46 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/WebKit.framework/WebKit
*/

#import <WebKit/WebKit-Structs.h>
#import <UIKitCore/_UIWebHighlightLongPressGestureRecognizer.h>

@class UIScrollView;

@interface WKHighlightLongPressGestureRecognizer : _UIWebHighlightLongPressGestureRecognizer {

	WeakObjCPtr<UIScrollView> _lastTouchedScrollView;

}

@property (nonatomic,__weak,readonly) UIScrollView * lastTouchedScrollView; 
-(void)reset;
-(void)touchesBegan:(id)arg1 withEvent:(id)arg2 ;
-(UIScrollView *)lastTouchedScrollView;
@end

