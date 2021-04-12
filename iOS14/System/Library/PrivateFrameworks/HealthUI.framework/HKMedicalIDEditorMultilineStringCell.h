/*
* Generated on Thursday, January 14, 2021 at 2:24:16 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
*/

#import <HealthUI/HealthUI-Structs.h>
#import <HealthUI/HKMedicalIDEditorCell.h>
#import <UIKit/UITextViewDelegate.h>
#import <libobjc.A.dylib/HKMultilineCellHeightEstimatable.h>

@protocol HKMedicalIDEditorCellHeightChangeDelegate;
@class UILabel, UITextView, NSString;

@interface HKMedicalIDEditorMultilineStringCell : HKMedicalIDEditorCell <UITextViewDelegate, HKMultilineCellHeightEstimatable> {

	UILabel* _labelLabel;
	double _lastSeenTextViewContentHeight;
	UILabel* _placeholderLabel;
	UITextView* _textView;
	id<HKMedicalIDEditorCellHeightChangeDelegate> _heightChangeDelegate;
	UIEdgeInsets _textViewExtraMargins;

}

@property (assign,nonatomic) UIEdgeInsets textViewExtraMargins;                                                      //@synthesize textViewExtraMargins=_textViewExtraMargins - In the implementation block
@property (nonatomic,readonly) UITextView * textView;                                                                //@synthesize textView=_textView - In the implementation block
@property (nonatomic,readonly) UILabel * placeholderLabel; 
@property (nonatomic,retain) NSString * stringValue; 
@property (nonatomic,retain) NSString * placeholder; 
@property (assign,nonatomic,__weak) id<HKMedicalIDEditorCellHeightChangeDelegate> heightChangeDelegate;              //@synthesize heightChangeDelegate=_heightChangeDelegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)showsLabelAndValue;
-(UITextView *)textView;
-(void)_contentSizeCategoryDidChange:(id)arg1 ;
-(NSString *)stringValue;
-(void)setStringValue:(NSString *)arg1 ;
-(void)layoutSubviews;
-(void)setPlaceholder:(NSString *)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)textViewDidBeginEditing:(id)arg1 ;
-(NSString *)placeholder;
-(void)textViewDidEndEditing:(id)arg1 ;
-(void)textViewDidChange:(id)arg1 ;
-(void)textViewDidChangeSelection:(id)arg1 ;
-(void)setLabel:(id)arg1 ;
-(UILabel *)placeholderLabel;
-(void)commitEditing;
-(id)label;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(void)dealloc;
-(void)_labelTapped:(id)arg1 ;
-(UIEdgeInsets)textViewExtraMargins;
-(CGRect)_cursorRectForTextView:(id)arg1 ;
-(double)estimatedHeightWithWidth:(double)arg1 ;
-(id<HKMedicalIDEditorCellHeightChangeDelegate>)heightChangeDelegate;
-(void)setHeightChangeDelegate:(id<HKMedicalIDEditorCellHeightChangeDelegate>)arg1 ;
-(void)setTextViewExtraMargins:(UIEdgeInsets)arg1 ;
@end

