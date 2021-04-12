/*
* Generated on Thursday, January 14, 2021 at 2:20:26 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIViewController.h>
#import <UIKit/UIKBAutoFillTestTaggerViewDelegate.h>

@protocol UIKBAutoFillTestGroundTruthGenerationViewControllerDelegate;
@class UIKBAutoFillTestViewController, UIKBAutoFillTestExpectedResult, UIScrollView, UIKBAutoFillTestTaggerView, NSLayoutConstraint, UIView, UIBarButtonItem, NSString;

@interface UIKBAutoFillTestGroundTruthGenerationViewController : UIViewController <UIKBAutoFillTestTaggerViewDelegate> {

	UIKBAutoFillTestViewController* _testViewController;
	UIKBAutoFillTestExpectedResult* _expectedResult;
	UIScrollView* _scrollView;
	UIKBAutoFillTestTaggerView* _taggerView;
	NSLayoutConstraint* _scrollViewBottomConstraint;
	UIView* _highlightView;
	UIView* _highlightBox;
	UIBarButtonItem* _doneBarButtonItem;
	id<UIKBAutoFillTestGroundTruthGenerationViewControllerDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<UIKBAutoFillTestGroundTruthGenerationViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) UIKBAutoFillTestViewController * testViewController;                                        //@synthesize testViewController=_testViewController - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)viewDidAppear:(BOOL)arg1 ;
-(id<UIKBAutoFillTestGroundTruthGenerationViewControllerDelegate>)delegate;
-(void)setDelegate:(id<UIKBAutoFillTestGroundTruthGenerationViewControllerDelegate>)arg1 ;
-(void)viewDidLoad;
-(void)taggerView:(id)arg1 didTagFormRequest:(id)arg2 withSelectedType:(long long)arg3 ;
-(void)taggerView:(id)arg1 didTagTextFieldRequest:(id)arg2 withSelectedType:(long long)arg3 ;
-(void)taggerView:(id)arg1 willTagRequest:(id)arg2 ;
-(long long)taggerView:(id)arg1 selectedTypeForFormRequest:(id)arg2 ;
-(void)taggerViewDidFinish:(id)arg1 ;
-(long long)taggerView:(id)arg1 selectedTypeForTextFieldRequest:(id)arg2 ;
-(void)_cancelBarButtonItemAction:(id)arg1 ;
-(void)_removeTaggerHighlightView;
-(void)_enumerateSubviewsOfRootView:(id)arg1 usingBlock:(/*^block*/id)arg2 ;
-(UIKBAutoFillTestViewController *)testViewController;
-(void)_moveTaggerHighlightViewOverView:(id)arg1 ;
-(id)initWithAutoFillTestViewController:(id)arg1 ;
@end

