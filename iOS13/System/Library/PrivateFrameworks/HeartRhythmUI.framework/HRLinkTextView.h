/*
* Generated on Monday, March 1, 2021 at 2:34:56 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HeartRhythmUI.framework/HeartRhythmUI
*/

#import <HeartRhythmUI/HeartRhythmUI-Structs.h>
#import <UIKitCore/UIView.h>

@protocol HRLinkTextViewDelegate;
@class UITextView, UITapGestureRecognizer;

@interface HRLinkTextView : UIView {

	UITextView* _textView;
	long long _URLIdentifier;
	id<HRLinkTextViewDelegate> _delegate;
	UITapGestureRecognizer* _tapGestureRecognizer;
	long long _currentUserInterfaceStyle;
	/*^block*/id _userInterfaceStyleChanged;
	NSRange _linkRange;

}

@property (assign,nonatomic) NSRange linkRange;                                          //@synthesize linkRange=_linkRange - In the implementation block
@property (assign,nonatomic) long long URLIdentifier;                                    //@synthesize URLIdentifier=_URLIdentifier - In the implementation block
@property (assign,nonatomic,__weak) id<HRLinkTextViewDelegate> delegate;                 //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) UITapGestureRecognizer * tapGestureRecognizer;              //@synthesize tapGestureRecognizer=_tapGestureRecognizer - In the implementation block
@property (assign,nonatomic) long long currentUserInterfaceStyle;                        //@synthesize currentUserInterfaceStyle=_currentUserInterfaceStyle - In the implementation block
@property (nonatomic,copy) id userInterfaceStyleChanged;                                 //@synthesize userInterfaceStyleChanged=_userInterfaceStyleChanged - In the implementation block
@property (nonatomic,retain) UITextView * textView;                                      //@synthesize textView=_textView - In the implementation block
-(id<HRLinkTextViewDelegate>)delegate;
-(void)setDelegate:(id<HRLinkTextViewDelegate>)arg1 ;
-(UITextView *)textView;
-(void)setTextView:(UITextView *)arg1 ;
-(void)layoutSubviews;
-(id)lastBaselineAnchor;
-(id)firstBaselineAnchor;
-(void)setLinkRange:(NSRange)arg1 ;
-(NSRange)linkRange;
-(UITapGestureRecognizer *)tapGestureRecognizer;
-(void)setTapGestureRecognizer:(UITapGestureRecognizer *)arg1 ;
-(void)_setUpConstraints;
-(void)_setUpUI;
-(void)_updateCurrentUserInterfaceStyleIfNeeded;
-(long long)currentUserInterfaceStyle;
-(void)setCurrentUserInterfaceStyle:(long long)arg1 ;
-(id)userInterfaceStyleChanged;
-(void)setUserInterfaceStyleChanged:(id)arg1 ;
-(id)initWithLinkRange:(NSRange)arg1 URLIdentifier:(long long)arg2 delegate:(id)arg3 userInterfaceStyleChanged:(/*^block*/id)arg4 ;
-(void)linkTextViewTapped:(id)arg1 ;
-(id)initWithLinkRange:(NSRange)arg1 URLIdentifier:(long long)arg2 delegate:(id)arg3 ;
-(long long)URLIdentifier;
-(void)setURLIdentifier:(long long)arg1 ;
@end

