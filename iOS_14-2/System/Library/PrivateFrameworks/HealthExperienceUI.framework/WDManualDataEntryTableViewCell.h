/*
* Generated on Thursday, January 14, 2021 at 2:24:00 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthExperienceUI.framework/HealthExperienceUI
*/

#import <HealthExperienceUI/HealthExperienceUI-Structs.h>
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
-(void)_setupConstraints;
-(void)textFieldDidEndEditing:(id)arg1 ;
-(id<WDManualDataEntryTableViewCellDelegate>)delegate;
-(void)setInputView:(id)arg1 ;
-(HKDisplayType *)displayType;
-(void)_updateDecimalSeparator;
-(void)_setupUIWithDisplayName:(id)arg1 unitName:(id)arg2 ;
-(void)_setupIntegerNumberFormatterIfNeeded;
-(void)_updateDisplayNameLabelConstraints;
-(void)_valueFieldDidChange:(id)arg1 ;
-(id)_sanitizedTextFieldText:(id)arg1 ;
-(id)_removeDecimalSeparatorsFromText:(id)arg1 ;
-(BOOL)shouldHighlightWhenEditing;
-(void)setBodyFont:(UIFont *)arg1 ;
-(void)setDisplayType:(HKDisplayType *)arg1 ;
-(id)inputView;
-(void)setValue:(NSString *)arg1 ;
-(void)setDelegate:(id<WDManualDataEntryTableViewCellDelegate>)arg1 ;
-(BOOL)textFieldShouldBeginEditing:(id)arg1 ;
-(void)endEditing;
-(void)textFieldDidBeginEditing:(id)arg1 ;
-(void)setDisplayName:(NSString *)arg1 ;
-(void)_updateForCurrentSizeCategory;
-(void)_localeDidChange:(id)arg1 ;
-(UIFont *)bodyFont;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithDisplayName:(id)arg1 unitName:(id)arg2 dataEntryType:(unsigned long long)arg3 ;
-(void)setShouldHighlightWhenEditing:(BOOL)arg1 ;
-(void)traitCollectionDidChange:(id)arg1 ;
-(void)_updateFont;
-(NSString *)displayName;
-(NSString *)value;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(void)dealloc;
-(void)beginEditing;
@end

