/*
* Generated on Thursday, January 14, 2021 at 2:28:16 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ProxCardKit.framework/ProxCardKit
*/

#import <ProxCardKit/ProxCardKit-Structs.h>
#import <UIKitCore/UIView.h>
#import <UIKit/UIGestureRecognizerDelegate.h>

@protocol PRXCardContainerViewDelegate;
@class NSLayoutConstraint, UITapGestureRecognizer, UIView, PRXCardBackgroundView, PRXPullDismissalScrollView, NSString;

@interface PRXCardContainerView : UIView <UIGestureRecognizerDelegate> {

	NSLayoutConstraint* _scrollViewBottomConstraint;
	NSLayoutConstraint* _visibleHeightConstraint;
	NSLayoutConstraint* _contentWidthConstraint;
	NSLayoutConstraint* _contentHeightConstraint;
	NSLayoutConstraint* _contentTopConstraint;
	NSLayoutConstraint* _scrollViewHeightConstraint;
	NSLayoutConstraint* _scrollViewTopConstraint;
	UITapGestureRecognizer* _tapRecognizer;
	double _keyboardHeight;
	BOOL _shouldDismissKeyboardOnTap;
	NSDirectionalEdgeInsets _containerLayoutMargins;
	BOOL _usePortraitTopInset;
	BOOL _defersKeyboardUpdates;
	UIView* _contentContainerView;
	PRXCardBackgroundView* _backgroundView;
	PRXPullDismissalScrollView* _pullDismissalScrollView;
	id<PRXCardContainerViewDelegate> _delegate;
	CGSize _preferredContentSize;

}

@property (assign,nonatomic) BOOL defersKeyboardUpdates;                                          //@synthesize defersKeyboardUpdates=_defersKeyboardUpdates - In the implementation block
@property (nonatomic,readonly) UIView * contentContainerView;                                     //@synthesize contentContainerView=_contentContainerView - In the implementation block
@property (nonatomic,readonly) PRXCardBackgroundView * backgroundView;                            //@synthesize backgroundView=_backgroundView - In the implementation block
@property (nonatomic,readonly) PRXPullDismissalScrollView * pullDismissalScrollView;              //@synthesize pullDismissalScrollView=_pullDismissalScrollView - In the implementation block
@property (assign,nonatomic,__weak) id<PRXCardContainerViewDelegate> delegate;                    //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) CGSize preferredContentSize;                                         //@synthesize preferredContentSize=_preferredContentSize - In the implementation block
@property (assign,nonatomic) BOOL usePortraitTopInset;                                            //@synthesize usePortraitTopInset=_usePortraitTopInset - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setPreferredContentSize:(CGSize)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(id)init;
-(UIView *)contentContainerView;
-(id<PRXCardContainerViewDelegate>)delegate;
-(PRXCardBackgroundView *)backgroundView;
-(void)setDelegate:(id<PRXCardContainerViewDelegate>)arg1 ;
-(CGSize)preferredContentSize;
-(void)keyboardWillShow:(id)arg1 ;
-(void)keyboardWillHide:(id)arg1 ;
-(BOOL)gestureRecognizerShouldBegin:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 containerLayoutMargins:(NSDirectionalEdgeInsets)arg2 ;
-(PRXPullDismissalScrollView *)pullDismissalScrollView;
-(void)setUsePortraitTopInset:(BOOL)arg1 ;
-(void)setDefersKeyboardUpdates:(BOOL)arg1 ;
-(void)tappedView:(id)arg1 ;
-(void)_updateKeyboardDeferred:(BOOL)arg1 ;
-(BOOL)usePortraitTopInset;
-(BOOL)defersKeyboardUpdates;
@end

