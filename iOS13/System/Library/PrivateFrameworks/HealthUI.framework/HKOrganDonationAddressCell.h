/*
* Generated on Monday, March 1, 2021 at 2:34:56 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
*/

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
-(void)beginEditing;
-(id<HKSimpleDataEntryCellDelegate>)delegate;
-(void)setDelegate:(id<HKSimpleDataEntryCellDelegate>)arg1 ;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(BOOL)textFieldShouldBeginEditing:(id)arg1 ;
-(BOOL)editDisabled;
-(void)setEditDisabled:(BOOL)arg1 ;
-(void)textFieldDidChangeValue:(id)arg1 ;
-(void)_setupLayoutConstraints;
-(UITextField *)streetOneTextField;
-(UITextField *)streetTwoTextField;
-(UITextField *)cityTextField;
-(UITextField *)stateTextField;
-(UITextField *)zipCodeTextField;
-(void)_stateShadowButtonTapped:(id)arg1 ;
-(void)_setupFonts;
-(void)setStreetOneTextField:(UITextField *)arg1 ;
-(void)setStreetTwoTextField:(UITextField *)arg1 ;
-(void)setStateTextField:(UITextField *)arg1 ;
-(void)setCityTextField:(UITextField *)arg1 ;
-(void)setZipCodeTextField:(UITextField *)arg1 ;
@end

