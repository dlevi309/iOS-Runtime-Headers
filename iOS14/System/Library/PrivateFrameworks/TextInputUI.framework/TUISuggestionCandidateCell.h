/*
* Generated on Thursday, January 14, 2021 at 2:21:24 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setCandidate:(TIKeyboardCandidateSuggestion *)arg1 ;
-(void)setTextLabel:(UILabel *)arg1 ;
-(void)commonInit;
-(void)updateLabel;
-(void)layoutSubviews;
-(void)didMoveToWindow;
-(id)initWithCoder:(id)arg1 ;
-(void)setStyle:(id)arg1 ;
-(UILabel *)textLabel;
-(TIKeyboardCandidateSuggestion *)candidate;
@end

