/*
* Generated on Thursday, January 14, 2021 at 2:29:12 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setView:(UIView *)arg1 ;
-(unsigned long long)accessibilityTraits;
-(UIView *)view;
-(CGRect)accessibilityFrame;
-(BOOL)accessibilityScroll:(long long)arg1 ;
-(void)accessibilityIncrement;
-(void)accessibilityDecrement;
-(id)mockSliderDelegate;
-(void)setMockSliderDelegate:(id)arg1 ;
@end

