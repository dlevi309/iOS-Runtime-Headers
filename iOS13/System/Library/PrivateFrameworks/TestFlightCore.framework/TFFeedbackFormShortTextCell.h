/*
* Generated on Monday, March 1, 2021 at 2:35:21 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TestFlightCore.framework/TestFlightCore
*/

#import <TestFlightCore/TestFlightCore-Structs.h>
#import <TestFlightCore/TFFeedbackFormBaseCell.h>
#import <UIKit/UITextFieldDelegate.h>

@class UITextField, TFFeedbackEntryShortText, NSString;

@interface TFFeedbackFormShortTextCell : TFFeedbackFormBaseCell <UITextFieldDelegate> {

	UITextField* _textField;
	TFFeedbackEntryShortText* _shortTextEntry;

}

@property (nonatomic,readonly) UITextField * textField;                              //@synthesize textField=_textField - In the implementation block
@property (nonatomic,retain) TFFeedbackEntryShortText * shortTextEntry;              //@synthesize shortTextEntry=_shortTextEntry - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(CGSize)sizeForEntry:(id)arg1 dataSource:(id)arg2 fittingSize:(CGSize)arg3 inTraitEnvironment:(id)arg4 ;
+(UIEdgeInsets)_textFieldInsetsInTraitEnvironment:(id)arg1 ;
+(CGSize)_sizeToFitText:(id)arg1 fittingSize:(CGSize)arg2 inTraitEnvironment:(id)arg3 ;
+(id)_createTextFieldFontWithTraitCollection:(id)arg1 ;
-(void)prepareForReuse;
-(void)traitCollectionDidChange:(id)arg1 ;
-(void)layoutSubviews;
-(UITextField *)textField;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(void)textFieldDidEndEditing:(id)arg1 reason:(long long)arg2 ;
-(unsigned long long)displayableDataType;
-(void)setDisplayedDataString:(id)arg1 ;
-(void)applyContentsOfEntry:(id)arg1 ;
-(void)_prepareForDisplayWithTraitCollection:(id)arg1 ;
-(TFFeedbackEntryShortText *)shortTextEntry;
-(void)setShortTextEntry:(TFFeedbackEntryShortText *)arg1 ;
-(void)_configureTextFieldForContentType:(unsigned long long)arg1 ;
@end

