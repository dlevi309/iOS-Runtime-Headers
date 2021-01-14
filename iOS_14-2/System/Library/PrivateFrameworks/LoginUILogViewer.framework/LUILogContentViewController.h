/*
* Generated on Thursday, January 14, 2021 at 2:27:51 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(double)collectionView:(id)arg1 layout:(id)arg2 minimumLineSpacingForSectionAtIndex:(long long)arg3 ;
-(UITextView *)textView;
-(void)viewWillLayoutSubviews;
-(void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2 ;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(id<LUILogContentViewControllerDelegate>)delegate;
-(UIActivityIndicatorView *)spinner;
-(id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2 ;
-(long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2 ;
-(void)setDelegate:(id<LUILogContentViewControllerDelegate>)arg1 ;
-(CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3 ;
-(UIEdgeInsets)collectionView:(id)arg1 layout:(id)arg2 insetForSectionAtIndex:(long long)arg3 ;
-(BOOL)_canShowWhileLocked;
-(void)viewDidLoad;
-(void)showSpinner:(BOOL)arg1 ;
-(void)handlePan:(id)arg1 ;
-(UIPanGestureRecognizer *)panGesture;
-(void)loadView;
-(void)setSpinner:(UIActivityIndicatorView *)arg1 ;
-(BOOL)gestureRecognizerShouldBegin:(id)arg1 ;
-(void)setPanGesture:(UIPanGestureRecognizer *)arg1 ;
-(void)dealloc;
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

