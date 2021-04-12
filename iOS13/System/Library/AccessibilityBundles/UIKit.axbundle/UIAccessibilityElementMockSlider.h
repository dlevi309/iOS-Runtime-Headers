/*
* Generated on Monday, March 1, 2021 at 2:35:39 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)setDelegate:(id)arg1 ;
-(UIView *)view;
-(void)setView:(UIView *)arg1 ;
-(CGRect)accessibilityFrame;
-(unsigned long long)accessibilityTraits;
-(void)accessibilityIncrement;
-(void)accessibilityDecrement;
-(BOOL)accessibilityScroll:(long long)arg1 ;
-(CGPoint)_accessibilityMinScrubberPosition;
-(CGPoint)_accessibilityMaxScrubberPosition;
@end

