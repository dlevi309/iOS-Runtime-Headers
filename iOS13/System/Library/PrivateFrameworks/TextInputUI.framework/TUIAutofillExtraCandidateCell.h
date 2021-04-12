/*
* Generated on Monday, March 1, 2021 at 2:32:19 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
+(id)reuseIdentifier;
+(id)attributedStringForIcon:(id)arg1 text:(id)arg2 font:(id)arg3 color:(id)arg4 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setStyle:(id)arg1 ;
-(void)commonInit;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(UILabel *)textLabel;
-(TIKeyboardCandidate *)candidate;
-(void)setTextLabel:(UILabel *)arg1 ;
-(void)setCandidate:(TIKeyboardCandidate *)arg1 ;
-(void)updateLabel;
@end

