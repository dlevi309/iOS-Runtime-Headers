/*
* Generated on Thursday, January 14, 2021 at 2:24:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
*/

#import <HealthUI/HealthUI-Structs.h>
#import <HealthUI/HKSimpleDataEntryCell.h>
#import <UIKit/UITextFieldDelegate.h>

@protocol HKSimpleDataEntryCellDelegate;
@class UILabel, UIView, UIButton, UITextField, NSString;

@interface HKOrganDonationAddressCell : HKSimpleDataEntryCell <UITextFieldDelegate> {

	UILabel* _titleLabel;
	UIView* _addressContainerView;
	UIView* _verticalSeparator;
	UIView* _horizontalSeparator;
	UIView* _stateZipSeparator;
	UIView* _addressSeparator;
	UIView* _citySeparator;
	UIView* _stateSeparator;
	UIButton* _stateShadowButton;
	BOOL _editDisabled;
	id<HKSimpleDataEntryCellDelegate> _delegate;
	UITextField* _streetOneTextField;
	UITextField* _streetTwoTextField;
	UITextField* _stateTextField;
	UITextField* _cityTextField;
	UITextField* _zipCodeTextField;

}

@property (nonatomic,retain) UITextField * streetOneTextField;                               //@synthesize streetOneTextField=_streetOneTextField - In the implementation block
@property (nonatomic,retain) UITextField * streetTwoTextField;                               //@synthesize streetTwoTextField=_streetTwoTextField - In the implementation block
@property (nonatomic,retain) UITextField * stateTextField;                                   //@synthesize stateTextField=_stateTextField - In the implementation block
@property (nonatomic,retain) UITextField * cityTextField;                                    //@synthesize cityTextField=_cityTextField - In the implementation block
@property (nonatomic,retain) UITextField * zipCodeTextField;                                 //@synthesize zipCodeTextField=_zipCodeTextField - In the implementation block
@property (assign,nonatomic,__weak) id<HKSimpleDataEntryCellDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id<HKSimpleDataEntryCellDelegate>)delegate;
-(void)setDelegate:(id<HKSimpleDataEntryCellDelegate>)arg1 ;
-(BOOL)textFieldShouldBeginEditing:(id)arg1 ;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(void)beginEditing;
-(UITextField *)streetOneTextField;
-(UITextField *)streetTwoTextField;
-(UITextField *)cityTextField;
-(UITextField *)stateTextField;
-(UITextField *)zipCodeTextField;
-(void)textFieldDidChangeValue:(id)arg1 ;
-(void)_stateShadowButtonTapped:(id)arg1 ;
-(void)_setupFonts;
-(void)_setupLayoutConstraints;
-(BOOL)editDisabled;
-(void)setEditDisabled:(BOOL)arg1 ;
-(void)setStreetOneTextField:(UITextField *)arg1 ;
-(void)setStreetTwoTextField:(UITextField *)arg1 ;
-(void)setStateTextField:(UITextField *)arg1 ;
-(void)setCityTextField:(UITextField *)arg1 ;
-(void)setZipCodeTextField:(UITextField *)arg1 ;
@end

