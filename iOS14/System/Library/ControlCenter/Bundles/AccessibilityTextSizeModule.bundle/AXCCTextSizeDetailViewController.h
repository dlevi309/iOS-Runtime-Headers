/*
* Generated on Thursday, January 14, 2021 at 2:29:19 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(CCUISteppedSliderView *)slider;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)sizeCategoryDidChange:(id)arg1 ;
-(void)_sliderValueDidChange:(id)arg1 ;
-(BOOL)_canShowWhileLocked;
-(void)viewDidLoad;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(double)expandedContentWidth;
-(double)expandedContentHeight;
-(void)loadView;
-(void)dealloc;
-(void)beginAppearanceTransition:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)_sliderValueDidCommit:(id)arg1 ;
-(void)_refreshTextSizes;
-(void)_commitTextSizeIfNeeded;
-(void)endTransitionToSize:(CGSize)arg1 withTransitionCoordinator:(id)arg2 ;
@end

