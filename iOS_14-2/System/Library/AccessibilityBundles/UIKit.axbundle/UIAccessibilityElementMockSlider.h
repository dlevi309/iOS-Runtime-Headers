/*
* Generated on Thursday, January 14, 2021 at 2:29:14 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/AccessibilityBundles/UIKit.axbundle/UIKit
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKitCore/UIAccessibilityElement.h>

@class UIView;

@interface UIAccessibilityElementMockSlider : UIAccessibilityElement {

	UIView* _view;
	id _delegate;

}

@property (nonatomic,retain) UIView * view;                   //@synthesize view=_view - In the implementation block
@property (assign,nonatomic,__weak) id delegate;              //@synthesize delegate=_delegate - In the implementation block
-(id)delegate;
-(void)setView:(UIView *)arg1 ;
-(unsigned long long)accessibilityTraits;
-(void)setDelegate:(id)arg1 ;
-(UIView *)view;
-(CGPoint)_accessibilityMinScrubberPosition;
-(CGPoint)_accessibilityMaxScrubberPosition;
-(CGRect)accessibilityFrame;
-(BOOL)accessibilityScroll:(long long)arg1 ;
-(void)accessibilityIncrement;
-(void)accessibilityDecrement;
@end

