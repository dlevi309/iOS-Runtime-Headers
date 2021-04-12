/*
* Generated on Thursday, January 14, 2021 at 2:21:24 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/TextInputUI.framework/TextInputUI
*/

#import <TextInputUI/TextInputUI-Structs.h>
#import <UIKitCore/UIView.h>

@protocol TUICandidateViewStyle;
@class NSString, UILabel;

@interface TUICandidateInlineTextView : UIView {

	NSString* _text;
	id<TUICandidateViewStyle> _style;
	UILabel* _label;

}

@property (nonatomic,retain) UILabel * label;                              //@synthesize label=_label - In the implementation block
@property (nonatomic,copy) NSString * text;                                //@synthesize text=_text - In the implementation block
@property (nonatomic,retain) id<TUICandidateViewStyle> style;              //@synthesize style=_style - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setText:(NSString *)arg1 ;
-(void)commonInit;
-(void)updateLabels;
-(NSString *)text;
-(id)initWithCoder:(id)arg1 ;
-(void)setStyle:(id<TUICandidateViewStyle>)arg1 ;
-(void)setLabel:(UILabel *)arg1 ;
-(UILabel *)label;
-(id<TUICandidateViewStyle>)style;
@end

