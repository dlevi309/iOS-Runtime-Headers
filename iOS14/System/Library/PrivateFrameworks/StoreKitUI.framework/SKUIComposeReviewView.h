/*
* Generated on Thursday, January 14, 2021 at 2:25:03 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(float)rating;
-(id)_body;
-(void)_layoutLoadingView;
-(void)setLoading:(BOOL)arg1 ;
-(void)setReview:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 style:(long long)arg2 ;
-(BOOL)isLoading;
-(id<SKUIComposeReviewViewDelegate>)delegate;
-(id)hitTest:(CGPoint)arg1 withEvent:(id)arg2 ;
-(void)setRating:(float)arg1 ;
-(void)setDelegate:(id<SKUIComposeReviewViewDelegate>)arg1 ;
-(void)layoutSubviews;
-(BOOL)isValid;
-(void)setFrame:(CGRect)arg1 ;
-(void)reloadData;
-(BOOL)textContentView:(id)arg1 shouldScrollForPendingContentSize:(CGSize)arg2 ;
-(BOOL)textContentView:(id)arg1 shouldChangeSizeForContentSize:(CGSize)arg2 ;
-(void)textContentView:(id)arg1 didChangeSize:(CGSize)arg2 ;
-(void)textContentViewDidChange:(id)arg1 ;
-(BOOL)textContentView:(id)arg1 shouldChangeTextInRange:(NSRange)arg2 replacementText:(id)arg3 ;
-(void)_updateContentSize;
-(void)dealloc;
-(void)_keyboardVisibilityDidChangeNotification:(id)arg1 ;
-(id)copyReview;
-(void)composeHeaderViewValidityDidChange:(id)arg1 ;
-(void)composeHeaderViewValuesDidChange:(id)arg1 ;
-(long long)composeReviewStyle;
-(void)_showComposeView;
-(void)_remoteKeyboardVisibilityDidChangeNotification:(id)arg1 ;
-(void)_layoutComposeView;
-(void)_showLoadingView;
-(id)_reviewPlaceholder;
-(void)_delayedUpdateReviewLength;
-(BOOL)_isReviewTextOptional;
@end

