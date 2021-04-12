/*
* Generated on Thursday, January 14, 2021 at 2:23:16 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GameCenterUI.framework/GameCenterUI
*/

#import <GameCenterUI/GameCenterUI-Structs.h>
#import <GameCenterUI/GKLoadableContentViewController.h>
#import <UIKit/UITextViewDelegate.h>

@class UIScrollView, NSArray, GKTextView, UIView, GKContiguousContainerView, NSLayoutConstraint, NSString;

@interface GKBaseComposeController : GKLoadableContentViewController <UITextViewDelegate> {

	BOOL _showHeaderFieldContainer;
	UIScrollView* _backgroundView;
	NSArray* _composeHeaderFields;
	GKTextView* _messageField;
	UIView* _intendedFirstResponder;
	GKContiguousContainerView* _headerFieldContainer;
	UIView* _contentView;
	double _scrollContentInsetAdjustY;
	NSLayoutConstraint* _contentHeightConstraint;
	NSLayoutConstraint* _contentLeadingConstraint;
	NSLayoutConstraint* _messageFieldTrailingConstraint;
	CGRect _lastKnownKeyboardFrame;

}

@property (nonatomic,retain) GKContiguousContainerView * headerFieldContainer;                 //@synthesize headerFieldContainer=_headerFieldContainer - In the implementation block
@property (nonatomic,retain) UIView * contentView;                                             //@synthesize contentView=_contentView - In the implementation block
@property (assign,nonatomic) double scrollContentInsetAdjustY;                                 //@synthesize scrollContentInsetAdjustY=_scrollContentInsetAdjustY - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * contentHeightConstraint;                     //@synthesize contentHeightConstraint=_contentHeightConstraint - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * contentLeadingConstraint;                    //@synthesize contentLeadingConstraint=_contentLeadingConstraint - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * messageFieldTrailingConstraint;              //@synthesize messageFieldTrailingConstraint=_messageFieldTrailingConstraint - In the implementation block
@property (assign,nonatomic) BOOL showHeaderFieldContainer;                                    //@synthesize showHeaderFieldContainer=_showHeaderFieldContainer - In the implementation block
@property (nonatomic,retain) UIScrollView * backgroundView;                                    //@synthesize backgroundView=_backgroundView - In the implementation block
@property (nonatomic,retain) NSArray * composeHeaderFields;                                    //@synthesize composeHeaderFields=_composeHeaderFields - In the implementation block
@property (nonatomic,retain) GKTextView * messageField;                                        //@synthesize messageField=_messageField - In the implementation block
@property (assign,nonatomic) UIView * intendedFirstResponder;                                  //@synthesize intendedFirstResponder=_intendedFirstResponder - In the implementation block
@property (assign,nonatomic) CGRect lastKnownKeyboardFrame;                                    //@synthesize lastKnownKeyboardFrame=_lastKnownKeyboardFrame - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)didRotateFromInterfaceOrientation:(long long)arg1 ;
-(id)init;
-(void)setBackgroundView:(UIScrollView *)arg1 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)setShowHeaderFieldContainer:(BOOL)arg1 ;
-(UIScrollView *)backgroundView;
-(UIView *)intendedFirstResponder;
-(unsigned long long)supportedInterfaceOrientations;
-(void)setMessageField:(GKTextView *)arg1 ;
-(UIEdgeInsets)margins;
-(void)setComposeHeaderFields:(NSArray *)arg1 ;
-(void)setIntendedFirstResponder:(UIView *)arg1 ;
-(void)keyboardWillHideShow:(id)arg1 ;
-(GKContiguousContainerView *)headerFieldContainer;
-(void)_adjustContentInsetForShowingKeyboard:(BOOL)arg1 ;
-(void)setLastKnownKeyboardFrame:(CGRect)arg1 ;
-(BOOL)showHeaderFieldContainer;
-(void)setContentLeadingConstraint:(NSLayoutConstraint *)arg1 ;
-(void)setMessageFieldTrailingConstraint:(NSLayoutConstraint *)arg1 ;
-(void)messageFieldTextDidChange;
-(void)_scrollSelectedTextToVisible;
-(BOOL)_gkWantsCustomRightBarButtonItemInViewService;
-(id)viewMetricsForContainerView:(id)arg1 ;
-(NSArray *)composeHeaderFields;
-(CGRect)lastKnownKeyboardFrame;
-(void)setHeaderFieldContainer:(GKContiguousContainerView *)arg1 ;
-(double)scrollContentInsetAdjustY;
-(void)setScrollContentInsetAdjustY:(double)arg1 ;
-(NSLayoutConstraint *)contentLeadingConstraint;
-(NSLayoutConstraint *)messageFieldTrailingConstraint;
-(void)setContentView:(UIView *)arg1 ;
-(void)setMessageFieldText:(id)arg1 ;
-(void)textViewDidChange:(id)arg1 ;
-(void)textViewDidChangeSelection:(id)arg1 ;
-(NSLayoutConstraint *)contentHeightConstraint;
-(void)setContentHeightConstraint:(NSLayoutConstraint *)arg1 ;
-(void)loadView;
-(UIView *)contentView;
-(void)viewDidLayoutSubviews;
-(GKTextView *)messageField;
-(void)dealloc;
@end

