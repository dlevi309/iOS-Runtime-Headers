/*
* Generated on Thursday, January 14, 2021 at 2:24:52 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
*/

#import <TVMLKit/TVFocusableTextView.h>
#import <libobjc.A.dylib/VUILabelBaselineProtocol.h>

@class VUILabel, VUITextLayout, NSString;

@interface VUIFocusableTextView : TVFocusableTextView <VUILabelBaselineProtocol> {

	VUILabel* _computationLabel;
	VUITextLayout* _textLayout;
	VUITextLayout* _titleTextLayout;

}

@property (nonatomic,retain) VUITextLayout * textLayout;                   //@synthesize textLayout=_textLayout - In the implementation block
@property (nonatomic,retain) VUITextLayout * titleTextLayout;              //@synthesize titleTextLayout=_titleTextLayout - In the implementation block
@property (nonatomic,retain) VUILabel * computationLabel;                  //@synthesize computationLabel=_computationLabel - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)textViewWithElement:(id)arg1 textLayout:(id)arg2 existingTextView:(id)arg3 ;
+(id)textViewWithString:(id)arg1 textLayout:(id)arg2 existingTextView:(id)arg3 ;
+(id)textViewWithString:(id)arg1 textLayout:(id)arg2 titleString:(id)arg3 titleLayout:(id)arg4 existingTextView:(id)arg5 ;
+(id)textViewWithElement:(id)arg1 textLayout:(id)arg2 titleElement:(id)arg3 titleLayout:(id)arg4 existingTextView:(id)arg5 ;
-(void)_updateTextColor;
-(double)baselineOffsetFromBottom;
-(VUITextLayout *)textLayout;
-(void)setTextLayout:(VUITextLayout *)arg1 ;
-(void)traitCollectionDidChange:(id)arg1 ;
-(VUITextLayout *)titleTextLayout;
-(double)topMarginWithBaselineMargin:(double)arg1 ;
-(double)bottomMarginWithBaselineMargin:(double)arg1 ;
-(double)topMarginToLabel:(id)arg1 withBaselineMargin:(double)arg2 ;
-(void)setTitleTextLayout:(VUITextLayout *)arg1 ;
-(VUILabel *)computationLabel;
-(void)setComputationLabel:(VUILabel *)arg1 ;
@end

