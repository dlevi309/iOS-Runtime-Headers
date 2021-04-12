/*
* Generated on Monday, March 1, 2021 at 2:31:56 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
*/

#import <StoreKitUI/StoreKitUI-Structs.h>
#import <UIKitCore/UITableViewHeaderFooterView.h>

@class NSAttributedString, UITextView;

@interface SKUIPinnedFooterView : UITableViewHeaderFooterView {

	NSAttributedString* _attributedText;
	double _horizontalPadding;
	UITextView* _textView;

}

@property (nonatomic,retain) UITextView * textView;                            //@synthesize textView=_textView - In the implementation block
@property (nonatomic,retain) NSAttributedString * attributedText;              //@synthesize attributedText=_attributedText - In the implementation block
@property (assign,nonatomic) double horizontalPadding;                         //@synthesize horizontalPadding=_horizontalPadding - In the implementation block
-(UITextView *)textView;
-(void)setTextView:(UITextView *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)setAttributedText:(NSAttributedString *)arg1 ;
-(NSAttributedString *)attributedText;
-(void)setHorizontalPadding:(double)arg1 ;
-(double)horizontalPadding;
-(void)_initializeTextView;
-(void)_configureTextViewTextStyling;
@end

