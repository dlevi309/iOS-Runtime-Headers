/*
* Generated on Thursday, January 14, 2021 at 2:27:45 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(UITextView *)textView;
-(id<HRLinkTextViewDelegate>)delegate;
-(void)_setUpConstraints;
-(void)setCurrentUserInterfaceStyle:(long long)arg1 ;
-(void)setTapGestureRecognizer:(UITapGestureRecognizer *)arg1 ;
-(void)setTextView:(UITextView *)arg1 ;
-(id)firstBaselineAnchor;
-(void)setDelegate:(id<HRLinkTextViewDelegate>)arg1 ;
-(void)layoutSubviews;
-(long long)currentUserInterfaceStyle;
-(UITapGestureRecognizer *)tapGestureRecognizer;
-(NSRange)linkRange;
-(id)lastBaselineAnchor;
-(void)_setUpUI;
-(void)setLinkRange:(NSRange)arg1 ;
-(void)_updateCurrentUserInterfaceStyleIfNeeded;
-(id)userInterfaceStyleChanged;
-(void)setUserInterfaceStyleChanged:(id)arg1 ;
-(id)initWithLinkRange:(NSRange)arg1 URLIdentifier:(long long)arg2 delegate:(id)arg3 userInterfaceStyleChanged:(/*^block*/id)arg4 ;
-(void)linkTextViewTapped:(id)arg1 ;
-(id)initWithLinkRange:(NSRange)arg1 URLIdentifier:(long long)arg2 delegate:(id)arg3 ;
-(long long)URLIdentifier;
-(void)setURLIdentifier:(long long)arg1 ;
@end

