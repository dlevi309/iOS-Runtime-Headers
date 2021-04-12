/*
* Generated on Monday, March 1, 2021 at 2:34:28 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/ControlCenter/Bundles/AccessibilityTextSizeModule.bundle/AccessibilityTextSizeModule
*/

#import <AccessibilityTextSizeModule/AccessibilityTextSizeModule-Structs.h>
#import <UIKitCore/UIViewController.h>

@class NSArray, CCUISteppedSliderView, UISelectionFeedbackGenerator;

@interface AXCCTextSizeDetailViewController : UIViewController {

	NSArray* _contentSizeCategories;
	unsigned long long _selectedCategoryIndex;
	BOOL _selectedCategoryIndexNeedsCommit;
	CCUISteppedSliderView* _slider;
	UISelectionFeedbackGenerator* _selectionFeedback;

}

@property (nonatomic,readonly) CCUISteppedSliderView * slider;              //@synthesize slider=_slider - In the implementation block
-(void)dealloc;
-(void)loadView;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(BOOL)_canShowWhileLocked;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(void)beginAppearanceTransition:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)_sliderValueDidChange:(id)arg1 ;
-(double)expandedContentWidth;
-(double)expandedContentHeight;
-(CCUISteppedSliderView *)slider;
-(void)sizeCategoryDidChange:(id)arg1 ;
-(void)_sliderValueDidCommit:(id)arg1 ;
-(void)_refreshTextSizes;
-(void)_commitTextSizeIfNeeded;
-(void)endTransitionToSize:(CGSize)arg1 withTransitionCoordinator:(id)arg2 ;
@end

