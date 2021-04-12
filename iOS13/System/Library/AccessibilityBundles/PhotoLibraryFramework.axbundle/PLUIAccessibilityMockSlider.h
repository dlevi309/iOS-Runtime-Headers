/*
* Generated on Monday, March 1, 2021 at 2:35:40 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/AccessibilityBundles/PhotoLibraryFramework.axbundle/PhotoLibraryFramework
*/

#import <PhotoLibraryFramework/PhotoLibraryFramework-Structs.h>
#import <UIKitCore/UIAccessibilityElement.h>

@class UIView;

@interface PLUIAccessibilityMockSlider : UIAccessibilityElement {

	UIView* _view;
	id _mockSliderDelegate;

}

@property (nonatomic,retain) UIView * view;                             //@synthesize view=_view - In the implementation block
@property (assign,nonatomic,__weak) id mockSliderDelegate;              //@synthesize mockSliderDelegate=_mockSliderDelegate - In the implementation block
-(UIView *)view;
-(void)setView:(UIView *)arg1 ;
-(CGRect)accessibilityFrame;
-(unsigned long long)accessibilityTraits;
-(void)accessibilityIncrement;
-(void)accessibilityDecrement;
-(BOOL)accessibilityScroll:(long long)arg1 ;
-(id)mockSliderDelegate;
-(void)setMockSliderDelegate:(id)arg1 ;
@end

