/*
* Generated on Monday, March 1, 2021 at 2:31:46 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/SafariServices.framework/SafariServices
*/

#import <UIKitCore/UIViewController.h>
#import <UIKit/UIGestureRecognizerDelegate.h>

@class NSMutableArray, NSMutableIndexSet, UIScrollView, UIStackView, NSArray, UIView, UIControl, UISelectionFeedbackGenerator, _SFSettingsAlertItem, NSString;

@interface _SFSettingsAlertContentController : UIViewController <UIGestureRecognizerDelegate> {

	NSMutableArray* _items;
	NSMutableIndexSet* _groupStartIndices;
	UIScrollView* _scrollView;
	UIStackView* _stackView;
	NSArray* _focusedItemConstraints;
	NSArray* _stackViewTopBottomConstraints;
	UIView* _lastViewForAlignment;
	UIControl* _controlHighlightedForPan;
	UISelectionFeedbackGenerator* _feedbackGenerator;
	_SFSettingsAlertItem* _focusedItem;

}

@property (nonatomic,readonly) NSArray * items; 
@property (nonatomic,retain) _SFSettingsAlertItem * focusedItem;              //@synthesize focusedItem=_focusedItem - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(NSArray *)items;
-(void)addItem:(id)arg1 ;
-(void)loadView;
-(_SFSettingsAlertItem *)focusedItem;
-(BOOL)gestureRecognizerShouldBegin:(id)arg1 ;
-(BOOL)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2 ;
-(id)_alertController;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)_updatePreferredContentSize;
-(void)addDivider;
-(void)setFocusedItem:(_SFSettingsAlertItem *)arg1 ;
-(void)_updateSeparators;
-(void)_addGroupSeparatorIfNeededBeforeItemAtIndex:(unsigned long long)arg1 ;
-(void)_addViewForItem:(id)arg1 ;
-(void)_panRecognized:(id)arg1 ;
-(void)_updateFocusedItemConstraints;
-(id)_createViewForItem:(id)arg1 ;
-(void)_alignButtonImageView:(id)arg1 ;
-(void)_tappedItemView:(id)arg1 ;
-(void)_stepperValueChanged:(id)arg1 ;
@end

