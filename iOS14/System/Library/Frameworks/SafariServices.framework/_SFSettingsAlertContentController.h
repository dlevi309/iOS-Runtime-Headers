/*
* Generated on Thursday, January 14, 2021 at 2:23:57 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/SafariServices.framework/SafariServices
*/

#import <UIKitCore/UIViewController.h>
#import <UIKit/UIGestureRecognizerDelegate.h>
#import <libobjc.A.dylib/SFSettingsAlertItemViewDelegate.h>

@class NSMutableArray, NSMutableIndexSet, UIScrollView, UIStackView, NSArray, NSLayoutConstraint, UIView, UIControl, UISelectionFeedbackGenerator, _SFSettingsAlertItem, NSString;

@interface _SFSettingsAlertContentController : UIViewController <UIGestureRecognizerDelegate, SFSettingsAlertItemViewDelegate> {

	NSMutableArray* _items;
	NSMutableIndexSet* _groupStartIndices;
	UIScrollView* _scrollView;
	UIStackView* _stackView;
	NSArray* _focusedItemConstraints;
	NSArray* _stackViewTopBottomConstraints;
	NSLayoutConstraint* _stackViewWidthConstraint;
	UIView* _lastViewForAlignment;
	UIControl* _controlHighlightedForPan;
	UISelectionFeedbackGenerator* _feedbackGenerator;
	BOOL _updatePreferredContentSizeAfterLayout;
	_SFSettingsAlertItem* _focusedItem;

}

@property (nonatomic,readonly) NSArray * items; 
@property (nonatomic,retain) _SFSettingsAlertItem * focusedItem;              //@synthesize focusedItem=_focusedItem - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)addItem:(id)arg1 ;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(id)_alertController;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)_updatePreferredContentSize;
-(NSArray *)items;
-(_SFSettingsAlertItem *)focusedItem;
-(void)addDivider;
-(void)setFocusedItem:(_SFSettingsAlertItem *)arg1 ;
-(void)_updateSeparators;
-(void)_addGroupSeparatorIfNeededBeforeItemAtIndex:(unsigned long long)arg1 ;
-(void)_addViewForItem:(id)arg1 ;
-(void)_panRecognized:(id)arg1 ;
-(id)_createViewForItem:(id)arg1 ;
-(void)_updateFocusedItemConstraints;
-(void)_alignButtonImageView:(id)arg1 ;
-(void)_tappedItemView:(id)arg1 ;
-(void)_stepperValueChanged:(id)arg1 ;
-(void)alertItemViewContentSizeDidChange:(id)arg1 ;
-(void)loadView;
-(void)traitCollectionDidChange:(id)arg1 ;
-(BOOL)gestureRecognizerShouldBegin:(id)arg1 ;
-(void)viewDidLayoutSubviews;
-(BOOL)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2 ;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
@end

