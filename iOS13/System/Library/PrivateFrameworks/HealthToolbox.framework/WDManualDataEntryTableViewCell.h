/*
* Generated on Monday, March 1, 2021 at 2:34:54 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HealthToolbox.framework/HealthToolbox
*/

#import <UIKitCore/UITableViewCell.h>
#import <UIKit/UITextFieldDelegate.h>

@protocol WDManualDataEntryTableViewCellDelegate;
@class UITextField, UIView, NSString, UILabel, NSArray, NSNumberFormatter, NSLayoutConstraint, HKDisplayType, UIFont;

@interface WDManualDataEntryTableViewCell : UITableViewCell <UITextFieldDelegate> {

	unsigned long long _dataEntryType;
	UITextField* _valueField;
	UIView* _inputView;
	NSString* _decimalSeparator;
	UILabel* _displayNameLabel;
	UILabel* _unitLabel;
	NSArray* _displayNameLabelConstraints;
	NSNumberFormatter* _integerNumberFormatter;
	NSString* _lastValidSanitizedText;
	NSArray* _regularLayoutConstraints;
	NSArray* _largeTextLayoutConstraints;
	NSLayoutConstraint* _largeTextValueFieldToUnitLabelSpacingConstraint;
	BOOL _shouldHighlightWhenEditing;
	HKDisplayType* _displayType;
	id<WDManualDataEntryTableViewCellDelegate> _delegate;
	UIFont* _bodyFont;

}

@property (nonatomic,retain) UIFont * bodyFont;                                                       //@synthesize bodyFont=_bodyFont - In the implementation block
@property (nonatomic,retain) HKDisplayType * displayType;                                             //@synthesize displayType=_displayType - In the implementation block
@property (nonatomic,retain) NSString * value; 
@property (nonatomic,retain) NSString * displayName; 
@property (assign,nonatomic) BOOL shouldHighlightWhenEditing;                                         //@synthesize shouldHighlightWhenEditing=_shouldHighlightWhenEditing - In the implementation block
@property (assign,nonatomic,__weak) id<WDManualDataEntryTableViewCellDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(void)beginEditing;
-(void)endEditing;
-(id)initWithCoder:(id)arg1 ;
-(id<WDManualDataEntryTableViewCellDelegate>)delegate;
-(void)setDelegate:(id<WDManualDataEntryTableViewCellDelegate>)arg1 ;
-(NSString *)value;
-(void)setValue:(NSString *)arg1 ;
-(NSString *)displayName;
-(void)setDisplayName:(NSString *)arg1 ;
-(HKDisplayType *)displayType;
-(void)setDisplayType:(HKDisplayType *)arg1 ;
-(void)traitCollectionDidChange:(id)arg1 ;
-(id)inputView;
-(void)setInputView:(id)arg1 ;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(BOOL)textFieldShouldBeginEditing:(id)arg1 ;
-(void)textFieldDidBeginEditing:(id)arg1 ;
-(void)textFieldDidEndEditing:(id)arg1 ;
-(void)_localeDidChange:(id)arg1 ;
-(void)_updateForCurrentSizeCategory;
-(void)_updateFont;
-(UIFont *)bodyFont;
-(void)_setupConstraints;
-(id)initWithDisplayName:(id)arg1 unitName:(id)arg2 dataEntryType:(unsigned long long)arg3 ;
-(void)setShouldHighlightWhenEditing:(BOOL)arg1 ;
-(void)setBodyFont:(UIFont *)arg1 ;
-(void)_updateDecimalSeparator;
-(void)_setupUIWithDisplayName:(id)arg1 unitName:(id)arg2 ;
-(void)_setupIntegerNumberFormatterIfNeeded;
-(void)_updateDisplayNameLabelConstraints;
-(void)_valueFieldDidChange:(id)arg1 ;
-(id)_sanitizedTextFieldText:(id)arg1 ;
-(id)_removeDecimalSeparatorsFromText:(id)arg1 ;
-(BOOL)shouldHighlightWhenEditing;
@end

