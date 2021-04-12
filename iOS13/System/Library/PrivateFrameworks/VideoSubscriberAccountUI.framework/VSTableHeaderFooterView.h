/*
* Generated on Monday, March 1, 2021 at 2:35:26 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/VideoSubscriberAccountUI.framework/VideoSubscriberAccountUI
*/

#import <VideoSubscriberAccountUI/VideoSubscriberAccountUI-Structs.h>
#import <UIKitCore/UIView.h>

@protocol VSTableHeaderFooterViewDelegate;
@class UIView, UILabel, UIStackView, VSFontCenter;

@interface VSTableHeaderFooterView : UIView {

	long long _kind;
	id<VSTableHeaderFooterViewDelegate> _delegate;
	UIView* _button;
	UILabel* _textLabel;
	UIStackView* _stackView;
	VSFontCenter* _fontCenter;

}

@property (nonatomic,retain) UILabel * textLabel;                                              //@synthesize textLabel=_textLabel - In the implementation block
@property (nonatomic,retain) UIStackView * stackView;                                          //@synthesize stackView=_stackView - In the implementation block
@property (nonatomic,retain) VSFontCenter * fontCenter;                                        //@synthesize fontCenter=_fontCenter - In the implementation block
@property (assign,nonatomic) long long kind;                                                   //@synthesize kind=_kind - In the implementation block
@property (assign,nonatomic,__weak) id<VSTableHeaderFooterViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) UIView * button;                                                  //@synthesize button=_button - In the implementation block
-(void)dealloc;
-(id)initWithCoder:(id)arg1 ;
-(id<VSTableHeaderFooterViewDelegate>)delegate;
-(void)setDelegate:(id<VSTableHeaderFooterViewDelegate>)arg1 ;
-(long long)kind;
-(void)setKind:(long long)arg1 ;
-(void)setBounds:(CGRect)arg1 ;
-(void)setText:(id)arg1 ;
-(void)setFrame:(CGRect)arg1 ;
-(CGSize)intrinsicContentSize;
-(id)initWithFrame:(CGRect)arg1 ;
-(UIView *)button;
-(void)traitCollectionDidChange:(id)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)layoutSubviews;
-(void)invalidateIntrinsicContentSize;
-(void)layoutMarginsDidChange;
-(UIStackView *)stackView;
-(UILabel *)textLabel;
-(void)setButton:(UIView *)arg1 ;
-(void)setStackView:(UIStackView *)arg1 ;
-(void)setTextLabel:(UILabel *)arg1 ;
-(void)_didInvalidateIntrinsicContentSize;
-(VSFontCenter *)fontCenter;
-(void)setFontCenter:(VSFontCenter *)arg1 ;
@end

