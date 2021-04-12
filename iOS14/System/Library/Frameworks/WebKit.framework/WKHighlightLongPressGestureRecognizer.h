/*
* Generated on Thursday, January 14, 2021 at 2:21:57 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(UIScrollView *)lastTouchedScrollView;
-(void)touchesBegan:(id)arg1 withEvent:(id)arg2 ;
@end

