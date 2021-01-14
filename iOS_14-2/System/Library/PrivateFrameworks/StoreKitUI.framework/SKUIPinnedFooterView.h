/*
* Generated on Thursday, January 14, 2021 at 2:25:03 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(NSAttributedString *)attributedText;
-(void)setAttributedText:(NSAttributedString *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setTextView:(UITextView *)arg1 ;
-(double)horizontalPadding;
-(void)layoutSubviews;
-(void)setHorizontalPadding:(double)arg1 ;
-(void)_initializeTextView;
-(void)_configureTextViewTextStyling;
@end

