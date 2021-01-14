/*
* Generated on Thursday, January 14, 2021 at 2:21:24 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/TextInputUI.framework/TextInputUI
*/

#import <TextInputUI/TextInputUI-Structs.h>
#import <TextInputUI/TUICandidateBaseCell.h>

@class TIKeyboardCandidate, UILabel;

@interface TUIAutofillExtraCandidateCell : TUICandidateBaseCell {

	TIKeyboardCandidate* _candidate;
	UILabel* _textLabel;

}

@property (nonatomic,retain) UILabel * textLabel;                          //@synthesize textLabel=_textLabel - In the implementation block
@property (nonatomic,retain) TIKeyboardCandidate * candidate;              //@synthesize candidate=_candidate - In the implementation block
+(id)attributedStringForIcon:(id)arg1 text:(id)arg2 font:(id)arg3 color:(id)arg4 ;
+(id)reuseIdentifier;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setCandidate:(TIKeyboardCandidate *)arg1 ;
-(void)setTextLabel:(UILabel *)arg1 ;
-(void)commonInit;
-(void)updateLabel;
-(void)layoutSubviews;
-(id)initWithCoder:(id)arg1 ;
-(void)setStyle:(id)arg1 ;
-(UILabel *)textLabel;
-(TIKeyboardCandidate *)candidate;
@end

