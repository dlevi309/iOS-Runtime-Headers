/*
* Generated on Monday, March 1, 2021 at 2:31:56 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
*/

#import <StoreKitUI/StoreKitUI-Structs.h>
#import <UIKitCore/UIView.h>
#import <libobjc.A.dylib/SKUIComposeReviewHeaderDelegate.h>
#import <UIKit/UITextContentViewDelegate.h>

@protocol SKUIComposeReviewViewDelegate;
@class SKUIComposeReviewHeaderView, SULoadingView, SKUIReviewMetadata, UIScrollView, SUTextContentView, NSString;

@interface SKUIComposeReviewView : UIView <SKUIComposeReviewHeaderDelegate, UITextContentViewDelegate> {

	long long _currentBodyLength;
	id<SKUIComposeReviewViewDelegate> _delegate;
	SKUIComposeReviewHeaderView* _headerView;
	CGRect _keyboardFrame;
	CGRect _remoteKeyboardFrame;
	unsigned _loading : 1;
	SULoadingView* _loadingView;
	SKUIReviewMetadata* _review;
	UIScrollView* _scrollView;
	long long _style;
	SUTextContentView* _textContentView;

}

@property (nonatomic,readonly) long long composeReviewStyle;                                 //@synthesize style=_style - In the implementation block
@property (assign,nonatomic,__weak) id<SKUIComposeReviewViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,getter=isLoading,nonatomic) BOOL loading; 
@property (assign,nonatomic) float rating; 
@property (getter=isValid,nonatomic,readonly) BOOL valid; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(BOOL)isValid;
-(id<SKUIComposeReviewViewDelegate>)delegate;
-(void)setDelegate:(id<SKUIComposeReviewViewDelegate>)arg1 ;
-(void)setFrame:(CGRect)arg1 ;
-(id)hitTest:(CGPoint)arg1 withEvent:(id)arg2 ;
-(void)layoutSubviews;
-(void)reloadData;
-(id)initWithFrame:(CGRect)arg1 style:(long long)arg2 ;
-(id)_body;
-(void)_updateContentSize;
-(BOOL)textContentView:(id)arg1 shouldScrollForPendingContentSize:(CGSize)arg2 ;
-(BOOL)textContentView:(id)arg1 shouldChangeSizeForContentSize:(CGSize)arg2 ;
-(void)textContentView:(id)arg1 didChangeSize:(CGSize)arg2 ;
-(BOOL)textContentView:(id)arg1 shouldChangeTextInRange:(NSRange)arg2 replacementText:(id)arg3 ;
-(void)textContentViewDidChange:(id)arg1 ;
-(BOOL)isLoading;
-(float)rating;
-(void)setRating:(float)arg1 ;
-(void)setReview:(id)arg1 ;
-(void)setLoading:(BOOL)arg1 ;
-(void)_keyboardVisibilityDidChangeNotification:(id)arg1 ;
-(id)copyReview;
-(void)composeHeaderViewValidityDidChange:(id)arg1 ;
-(void)composeHeaderViewValuesDidChange:(id)arg1 ;
-(long long)composeReviewStyle;
-(void)_showComposeView;
-(void)_remoteKeyboardVisibilityDidChangeNotification:(id)arg1 ;
-(void)_layoutLoadingView;
-(void)_layoutComposeView;
-(void)_showLoadingView;
-(id)_reviewPlaceholder;
-(void)_delayedUpdateReviewLength;
-(BOOL)_isReviewTextOptional;
@end

