/*
* Generated on Monday, March 1, 2021 at 2:35:21 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TestFlightCore.framework/TestFlightCore
*/

#import <TestFlightCore/TestFlightCore-Structs.h>
#import <TestFlightCore/TFFeedbackFormBaseCell.h>
#import <UIKit/UITextViewDelegate.h>

@class UITextView, TFFeedbackEntryLongText, NSString;

@interface TFFeedbackFormLongTextCell : TFFeedbackFormBaseCell <UITextViewDelegate> {

	UITextView* _textView;
	TFFeedbackEntryLongText* _longTextEntry;

}

@property (nonatomic,readonly) UITextView * textView;                              //@synthesize textView=_textView - In the implementation block
@property (nonatomic,retain) TFFeedbackEntryLongText * longTextEntry;              //@synthesize longTextEntry=_longTextEntry - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(CGSize)sizeForEntry:(id)arg1 dataSource:(id)arg2 fittingSize:(CGSize)arg3 inTraitEnvironment:(id)arg4 ;
+(CGSize)_sizeToFitText:(id)arg1 fittingSize:(CGSize)arg2 inTraitEnvironment:(id)arg3 ;
+(id)_createTextViewFontForTraitCollection:(id)arg1 ;
+(UIEdgeInsets)_textViewInsetsInTraitEnvironment:(id)arg1 ;
+(double)_adjustedTextViewHeightForCandidateHeight:(double)arg1 font:(id)arg2 ;
-(void)prepareForReuse;
-(UITextView *)textView;
-(void)traitCollectionDidChange:(id)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)layoutSubviews;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(BOOL)textField:(id)arg1 shouldChangeCharactersInRange:(NSRange)arg2 replacementString:(id)arg3 ;
-(void)textViewDidEndEditing:(id)arg1 ;
-(void)textViewDidChange:(id)arg1 ;
-(unsigned long long)displayableDataType;
-(void)setDisplayedDataString:(id)arg1 ;
-(void)applyContentsOfEntry:(id)arg1 ;
-(void)_prepareForDisplayWithTraitCollection:(id)arg1 ;
-(void)_updateCellHeightForTextIfNecessary;
-(TFFeedbackEntryLongText *)longTextEntry;
-(void)setLongTextEntry:(TFFeedbackEntryLongText *)arg1 ;
-(void)_updateCellHeightForTextUpdatesInTableView:(id)arg1 ;
@end

