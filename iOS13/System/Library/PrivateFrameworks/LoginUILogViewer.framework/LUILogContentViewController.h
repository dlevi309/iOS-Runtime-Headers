/*
* Generated on Monday, March 1, 2021 at 2:35:00 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/LoginUILogViewer.framework/LoginUILogViewer
*/

#import <LoginUILogViewer/LoginUILogViewer-Structs.h>
#import <UIKitCore/UIViewController.h>
#import <UIKit/UICollectionViewDelegate.h>
#import <UIKit/UICollectionViewDataSource.h>
#import <UIKit/UIGestureRecognizerDelegate.h>

@protocol LUILogContentViewControllerDelegate;
@class UITextView, LUILogOptionsView, LUILogLocatorView, UIActivityIndicatorView, NSArray, UIView, UIPanGestureRecognizer, UILabel, NSString;

@interface LUILogContentViewController : UIViewController <UICollectionViewDelegate, UICollectionViewDataSource, UIGestureRecognizerDelegate> {

	UITextView* _textView;
	id<LUILogContentViewControllerDelegate> _delegate;
	LUILogOptionsView* _logOptionsView;
	LUILogLocatorView* _logLocatorView;
	UIActivityIndicatorView* _spinner;
	NSArray* _screenshotItems;
	UIView* _textViewHolderView;
	UIPanGestureRecognizer* _panGesture;
	UILabel* _scrollIndicatorView;

}

@property (nonatomic,retain) LUILogOptionsView * logOptionsView;                                   //@synthesize logOptionsView=_logOptionsView - In the implementation block
@property (nonatomic,retain) LUILogLocatorView * logLocatorView;                                   //@synthesize logLocatorView=_logLocatorView - In the implementation block
@property (nonatomic,retain) UIActivityIndicatorView * spinner;                                    //@synthesize spinner=_spinner - In the implementation block
@property (nonatomic,retain) NSArray * screenshotItems;                                            //@synthesize screenshotItems=_screenshotItems - In the implementation block
@property (nonatomic,retain) UIView * textViewHolderView;                                          //@synthesize textViewHolderView=_textViewHolderView - In the implementation block
@property (nonatomic,retain) UIPanGestureRecognizer * panGesture;                                  //@synthesize panGesture=_panGesture - In the implementation block
@property (nonatomic,retain) UILabel * scrollIndicatorView;                                        //@synthesize scrollIndicatorView=_scrollIndicatorView - In the implementation block
@property (nonatomic,readonly) UITextView * textView;                                              //@synthesize textView=_textView - In the implementation block
@property (assign,nonatomic,__weak) id<LUILogContentViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(id<LUILogContentViewControllerDelegate>)delegate;
-(void)setDelegate:(id<LUILogContentViewControllerDelegate>)arg1 ;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(UITextView *)textView;
-(void)loadView;
-(BOOL)gestureRecognizerShouldBegin:(id)arg1 ;
-(void)viewDidLoad;
-(void)viewWillLayoutSubviews;
-(long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2 ;
-(id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2 ;
-(BOOL)_canShowWhileLocked;
-(void)handlePan:(id)arg1 ;
-(void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2 ;
-(CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3 ;
-(UIEdgeInsets)collectionView:(id)arg1 layout:(id)arg2 insetForSectionAtIndex:(long long)arg3 ;
-(double)collectionView:(id)arg1 layout:(id)arg2 minimumLineSpacingForSectionAtIndex:(long long)arg3 ;
-(void)setPanGesture:(UIPanGestureRecognizer *)arg1 ;
-(UIPanGestureRecognizer *)panGesture;
-(UIActivityIndicatorView *)spinner;
-(void)setSpinner:(UIActivityIndicatorView *)arg1 ;
-(void)showSpinner:(BOOL)arg1 ;
-(void)clearScreenshots;
-(void)enableTimeConsumingOptions:(BOOL)arg1 ;
-(void)showLogOptionsView;
-(void)showLogTextView;
-(void)_setupButtonActions;
-(void)setScreenshotItems:(NSArray *)arg1 ;
-(NSArray *)screenshotItems;
-(void)_setupTextViewGesture;
-(id)_createLogTextView;
-(id)_createLogOptionsView;
-(id)_createLogLocatorView;
-(UIView *)textViewHolderView;
-(LUILogLocatorView *)logLocatorView;
-(LUILogOptionsView *)logOptionsView;
-(void)logOptionButtonTapped:(id)arg1 ;
-(void)screenshotButtonTapped:(id)arg1 ;
-(void)upArrowButtonTapped:(id)arg1 ;
-(void)downArrowButtonTapped:(id)arg1 ;
-(NSRange)_visibleRangeOfTextView:(id)arg1 ;
-(id)_generateScreenshotItem;
-(void)_applyScreenShotAnimation;
-(UILabel *)scrollIndicatorView;
-(id)_dateWithPercentage:(double)arg1 ;
-(void)setLogOptionsView:(LUILogOptionsView *)arg1 ;
-(void)setLogLocatorView:(LUILogLocatorView *)arg1 ;
-(void)setTextViewHolderView:(UIView *)arg1 ;
-(void)setScrollIndicatorView:(UILabel *)arg1 ;
@end

