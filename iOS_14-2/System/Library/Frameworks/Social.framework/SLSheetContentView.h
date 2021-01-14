/*
* Generated on Thursday, January 14, 2021 at 2:26:42 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Social.framework/Social
*/

#import <Social/Social-Structs.h>
#import <UIKitCore/UIView.h>

@class SLSheetTextComposeView, NSMutableArray, NSMutableDictionary, UIView, UITextView, UILabel;

@interface SLSheetContentView : UIView {

	SLSheetTextComposeView* _textComposeView;
	NSMutableArray* _constraints;
	NSMutableDictionary* _intrinsicSizes;
	double _previewTopMargin;
	double _textViewTopMargin;
	UIView* _bottomSeparator;
	UIView* _autoCompletionModeSeparator;
	BOOL _autoCompletionMode;
	double _autoCompletionTextViewHeight;
	UIView* _previewView;
	UIView* _accessoryView;

}

@property (nonatomic,retain) UIView * previewView;                      //@synthesize previewView=_previewView - In the implementation block
@property (nonatomic,readonly) UITextView * textView; 
@property (nonatomic,readonly) UILabel * placeholderLabel; 
@property (nonatomic,retain) UIView * accessoryView;                    //@synthesize accessoryView=_accessoryView - In the implementation block
-(void)_setupConstraints;
-(UITextView *)textView;
-(CGSize)intrinsicContentSize;
-(id)initWithFrame:(CGRect)arg1 ;
-(UIView *)accessoryView;
-(void)_setConstraints;
-(UIView *)previewView;
-(void)setAccessoryView:(UIView *)arg1 ;
-(void)layoutSubviews;
-(void)updateConstraints;
-(void)_setupView;
-(UILabel *)placeholderLabel;
-(void)traitCollectionDidChange:(id)arg1 ;
-(void)setPreviewView:(UIView *)arg1 ;
-(void)setIntrinsicSize:(CGSize)arg1 forVerticalSizeClass:(long long)arg2 ;
-(void)endAutoCompletionMode;
-(void)preflightAutoCompletionModeWithApparentHeight:(double)arg1 ;
-(void)beginAutoCompletionMode;
-(void)_resetAccessoryView;
-(void)resetPreview;
-(double)_previewMarginForContentSize:(CGSize)arg1 ;
-(double)_textTopMarginForContentSize:(CGSize)arg1 ;
-(void)updatePreviewMargin;
-(void)updateTextViewMargin;
-(void)adjustComposeViewForPreview;
@end

