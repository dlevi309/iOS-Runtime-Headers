/*
* Generated on Monday, March 1, 2021 at 2:35:27 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
*/

#import <TVMLKit/TVFocusableTextView.h>
#import <libobjc.A.dylib/VUILabelTopMarginCalculationProtocol.h>

@class VUILabel, VUITextLayout;

@interface VUIFocusableTextView : TVFocusableTextView <VUILabelTopMarginCalculationProtocol> {

	VUILabel* _computationLabel;
	VUITextLayout* _textLayout;
	VUITextLayout* _titleTextLayout;

}

@property (nonatomic,retain) VUITextLayout * textLayout;                   //@synthesize textLayout=_textLayout - In the implementation block
@property (nonatomic,retain) VUITextLayout * titleTextLayout;              //@synthesize titleTextLayout=_titleTextLayout - In the implementation block
@property (nonatomic,retain) VUILabel * computationLabel;                  //@synthesize computationLabel=_computationLabel - In the implementation block
+(id)textViewWithElement:(id)arg1 textLayout:(id)arg2 existingTextView:(id)arg3 ;
+(id)textViewWithString:(id)arg1 textLayout:(id)arg2 existingTextView:(id)arg3 ;
+(id)textViewWithString:(id)arg1 textLayout:(id)arg2 titleString:(id)arg3 titleLayout:(id)arg4 existingTextView:(id)arg5 ;
+(id)textViewWithElement:(id)arg1 textLayout:(id)arg2 titleElement:(id)arg3 titleLayout:(id)arg4 existingTextView:(id)arg5 ;
-(void)traitCollectionDidChange:(id)arg1 ;
-(void)setTextLayout:(VUITextLayout *)arg1 ;
-(VUITextLayout *)textLayout;
-(void)_updateTextColor;
-(VUITextLayout *)titleTextLayout;
-(double)topMarginWithBaselineMargin:(double)arg1 ;
-(double)bottomMarginWithBaselineMargin:(double)arg1 ;
-(double)topMarginToLabel:(id)arg1 withBaselineMargin:(double)arg2 ;
-(VUILabel *)computationLabel;
-(void)setTitleTextLayout:(VUITextLayout *)arg1 ;
-(void)setComputationLabel:(VUILabel *)arg1 ;
@end

