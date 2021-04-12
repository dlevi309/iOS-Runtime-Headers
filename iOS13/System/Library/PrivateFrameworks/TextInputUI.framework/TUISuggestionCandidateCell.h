/*
* Generated on Monday, March 1, 2021 at 2:32:19 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TextInputUI.framework/TextInputUI
*/

#import <TextInputUI/TextInputUI-Structs.h>
#import <TextInputUI/TUICandidateBaseCell.h>

@class TIKeyboardCandidateSuggestion, UILabel;

@interface TUISuggestionCandidateCell : TUICandidateBaseCell {

	TIKeyboardCandidateSuggestion* _candidate;
	UILabel* _textLabel;

}

@property (nonatomic,retain) UILabel * textLabel;                                    //@synthesize textLabel=_textLabel - In the implementation block
@property (nonatomic,retain) TIKeyboardCandidateSuggestion * candidate;              //@synthesize candidate=_candidate - In the implementation block
+(id)reuseIdentifier;
-(id)initWithCoder:(id)arg1 ;
-(void)setStyle:(id)arg1 ;
-(void)commonInit;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(UILabel *)textLabel;
-(TIKeyboardCandidateSuggestion *)candidate;
-(void)setTextLabel:(UILabel *)arg1 ;
-(void)setCandidate:(TIKeyboardCandidateSuggestion *)arg1 ;
-(void)updateLabel;
@end

