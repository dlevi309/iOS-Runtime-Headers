/*
* Generated on Thursday, January 14, 2021 at 2:27:38 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/DocumentCamera.framework/DocumentCamera
*/

#import <DocumentCamera/DocumentCamera-Structs.h>
#import <UIKitCore/UIViewController.h>
#import <UIKit/UIScrollViewDelegate.h>
#import <UIKit/UIGestureRecognizerDelegate.h>

@protocol ICDocCamFilterViewDelegate;
@class UIScrollView, NSLayoutConstraint, UIView, DCSinglePixelVerticalLineView, DCSinglePixelHorizontalLineView, NSArray, NSMutableArray, UILongPressGestureRecognizer, NSString;

@interface ICDocCamFilterViewController : UIViewController <UIScrollViewDelegate, UIGestureRecognizerDelegate> {

	BOOL _transitioning;
	short _currentFilterType;
	double _horizontalOffset;
	double _bottomOffset;
	double _bottomContentInset;
	id<ICDocCamFilterViewDelegate> _filterViewDelegate;
	UIScrollView* _scrollView;
	NSLayoutConstraint* _scrollViewBottomConstraint;
	NSLayoutConstraint* _scrollViewTrailingConstraint;
	UIView* _backgroundView;
	DCSinglePixelVerticalLineView* _verticalLineView;
	DCSinglePixelHorizontalLineView* _horizontalLineView;
	NSArray* _layoutConstraints;
	NSMutableArray* _filterButtons;
	UILongPressGestureRecognizer* _longPressGesture;

}

@property (assign,nonatomic,__weak) UIScrollView * scrollView;                                         //@synthesize scrollView=_scrollView - In the implementation block
@property (assign,nonatomic,__weak) UIView * backgroundView;                                           //@synthesize backgroundView=_backgroundView - In the implementation block
@property (assign,nonatomic,__weak) DCSinglePixelVerticalLineView * verticalLineView;                  //@synthesize verticalLineView=_verticalLineView - In the implementation block
@property (assign,nonatomic,__weak) DCSinglePixelHorizontalLineView * horizontalLineView;              //@synthesize horizontalLineView=_horizontalLineView - In the implementation block
@property (nonatomic,copy) NSArray * layoutConstraints;                                                //@synthesize layoutConstraints=_layoutConstraints - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * scrollViewBottomConstraint;                          //@synthesize scrollViewBottomConstraint=_scrollViewBottomConstraint - In the implementation block
@property (assign,nonatomic) BOOL transitioning;                                                       //@synthesize transitioning=_transitioning - In the implementation block
@property (nonatomic,retain) NSMutableArray * filterButtons;                                           //@synthesize filterButtons=_filterButtons - In the implementation block
@property (nonatomic,retain) UILongPressGestureRecognizer * longPressGesture;                          //@synthesize longPressGesture=_longPressGesture - In the implementation block
@property (assign,nonatomic) double horizontalOffset;                                                  //@synthesize horizontalOffset=_horizontalOffset - In the implementation block
@property (assign,nonatomic) double bottomOffset;                                                      //@synthesize bottomOffset=_bottomOffset - In the implementation block
@property (assign,nonatomic) double bottomContentInset;                                                //@synthesize bottomContentInset=_bottomContentInset - In the implementation block
@property (assign,nonatomic,__weak) id<ICDocCamFilterViewDelegate> filterViewDelegate;                 //@synthesize filterViewDelegate=_filterViewDelegate - In the implementation block
@property (assign,nonatomic) short currentFilterType;                                                  //@synthesize currentFilterType=_currentFilterType - In the implementation block
@property (nonatomic,readonly) CGSize contentSize; 
@property (nonatomic,readonly) NSLayoutConstraint * scrollViewTrailingConstraint;                      //@synthesize scrollViewTrailingConstraint=_scrollViewTrailingConstraint - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)prefersStatusBarHidden;
-(double)bottomContentInset;
-(id)init;
-(void)setBottomContentInset:(double)arg1 ;
-(UILongPressGestureRecognizer *)longPressGesture;
-(void)setLongPressGesture:(UILongPressGestureRecognizer *)arg1 ;
-(void)setBackgroundView:(UIView *)arg1 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(UIView *)backgroundView;
-(CGSize)contentSize;
-(unsigned long long)supportedInterfaceOrientations;
-(NSArray *)layoutConstraints;
-(void)setLayoutConstraints:(NSArray *)arg1 ;
-(void)setTransitioning:(BOOL)arg1 ;
-(void)updateConstraints;
-(BOOL)_canShowWhileLocked;
-(void)viewDidLoad;
-(void)setScrollView:(UIScrollView *)arg1 ;
-(double)horizontalOffset;
-(BOOL)transitioning;
-(double)bottomOffset;
-(void)setBottomOffset:(double)arg1 ;
-(DCSinglePixelHorizontalLineView *)horizontalLineView;
-(void)setHorizontalLineView:(DCSinglePixelHorizontalLineView *)arg1 ;
-(void)viewWillTransitionToSize:(CGSize)arg1 withTransitionCoordinator:(id)arg2 ;
-(void)setHorizontalOffset:(double)arg1 ;
-(void)longPressGesture:(id)arg1 ;
-(UIScrollView *)scrollView;
-(BOOL)gestureRecognizerShouldBegin:(id)arg1 ;
-(void)viewDidLayoutSubviews;
-(void)dealloc;
-(void)setFilterViewDelegate:(id<ICDocCamFilterViewDelegate>)arg1 ;
-(void)prepareToAnimateIn:(BOOL)arg1 ;
-(void)setCurrentFilterType:(short)arg1 ;
-(void)initializeFilters;
-(void)updateScrollViewContentSize;
-(void)setUpScrollView;
-(void)centerContent:(BOOL)arg1 isPortrait:(BOOL)arg2 ;
-(DCSinglePixelVerticalLineView *)verticalLineView;
-(void)setScrollViewBottomConstraint:(NSLayoutConstraint *)arg1 ;
-(void)updateConstraintsPad;
-(void)updateConstraintsPhone;
-(NSLayoutConstraint *)scrollViewBottomConstraint;
-(short)currentFilterType;
-(NSMutableArray *)filterButtons;
-(id<ICDocCamFilterViewDelegate>)filterViewDelegate;
-(void)filterSelected:(id)arg1 ;
-(void)setFilterButtons:(NSMutableArray *)arg1 ;
-(id)filterButtonFromLocation:(CGPoint)arg1 ;
-(void)applyToAll:(short)arg1 ;
-(NSLayoutConstraint *)scrollViewTrailingConstraint;
-(void)setVerticalLineView:(DCSinglePixelVerticalLineView *)arg1 ;
@end

