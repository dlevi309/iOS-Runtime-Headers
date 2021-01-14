/*
* Generated on Thursday, January 14, 2021 at 2:24:04 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
*/

#import <PassKitUI/PassKitUI-Structs.h>
#import <UIKitCore/UITableViewController.h>
#import <UIKit/UITableViewDelegate.h>
#import <UIKit/UITableViewDataSource.h>
#import <UIKit/UITextFieldDelegate.h>
#import <libobjc.A.dylib/MKLocalSearchCompleterDelegate.h>
#import <libobjc.A.dylib/PKCountryPickerViewControllerDelegate.h>
#import <libobjc.A.dylib/PKAddressTextFieldDelegate.h>
#import <UIKit/UIPickerViewDataSource.h>
#import <UIKit/UIPickerViewDelegate.h>

@protocol PKAddressEditorViewControllerDelegate;
@class PKContactFormatValidator, NSString, CNMutablePostalAddress, CNPostalAddressFormattingSpecification, NSArray, MKLocalSearchCompleter, PKAddressTextField;

@interface PKAddressEditorViewController : UITableViewController <UITableViewDelegate, UITableViewDataSource, UITextFieldDelegate, MKLocalSearchCompleterDelegate, PKCountryPickerViewControllerDelegate, PKAddressTextFieldDelegate, UIPickerViewDataSource, UIPickerViewDelegate> {

	BOOL _preselectedNameField;
	BOOL _displayGivenNameFirst;
	BOOL _displayPhoneticName;
	BOOL _isEditingBlankField;
	BOOL _readOnly;
	BOOL _countryIsEditable;
	BOOL _requirementsMet;
	id<PKAddressEditorViewControllerDelegate> _delegate;
	PKContactFormatValidator* _contactFormatValidator;
	NSString* _givenName;
	NSString* _familyName;
	NSString* _phoneticGivenName;
	NSString* _phoneticFamilyName;
	CNMutablePostalAddress* _inputAddress;
	NSString* _inputLabel;
	NSString* _originalGivenName;
	NSString* _originalFamilyName;
	NSString* _originalPhoneticGivenName;
	NSString* _originalPhoneticFamilyName;
	NSString* _originalCountry;
	CNMutablePostalAddress* _originalAddress;
	CNPostalAddressFormattingSpecification* _addressFormatter;
	NSArray* _suggestions;
	MKLocalSearchCompleter* _searchCompleter;
	PKAddressTextField* _currentlySelectedField;
	PKAddressTextField* _firstTextFieldForName;
	NSArray* _editingFields;
	NSArray* _highlightedFieldKeys;
	NSArray* _requiredFieldKeys;
	NSArray* _errors;
	long long _style;
	PKAddressTextField* _givenNameTextField;
	PKAddressTextField* _familyNameTextField;
	PKAddressTextField* _phoneticGivenNameTextField;
	PKAddressTextField* _phoneticFamilyNameTextField;
	PKAddressTextField* _street1TextField;
	PKAddressTextField* _street2TextField;

}

@property (nonatomic,retain) NSString * givenName;                                                   //@synthesize givenName=_givenName - In the implementation block
@property (nonatomic,retain) NSString * familyName;                                                  //@synthesize familyName=_familyName - In the implementation block
@property (nonatomic,retain) NSString * phoneticGivenName;                                           //@synthesize phoneticGivenName=_phoneticGivenName - In the implementation block
@property (nonatomic,retain) NSString * phoneticFamilyName;                                          //@synthesize phoneticFamilyName=_phoneticFamilyName - In the implementation block
@property (nonatomic,retain) CNMutablePostalAddress * inputAddress;                                  //@synthesize inputAddress=_inputAddress - In the implementation block
@property (nonatomic,retain) NSString * inputLabel;                                                  //@synthesize inputLabel=_inputLabel - In the implementation block
@property (nonatomic,retain) NSString * originalGivenName;                                           //@synthesize originalGivenName=_originalGivenName - In the implementation block
@property (nonatomic,retain) NSString * originalFamilyName;                                          //@synthesize originalFamilyName=_originalFamilyName - In the implementation block
@property (nonatomic,retain) NSString * originalPhoneticGivenName;                                   //@synthesize originalPhoneticGivenName=_originalPhoneticGivenName - In the implementation block
@property (nonatomic,retain) NSString * originalPhoneticFamilyName;                                  //@synthesize originalPhoneticFamilyName=_originalPhoneticFamilyName - In the implementation block
@property (nonatomic,retain) NSString * originalCountry;                                             //@synthesize originalCountry=_originalCountry - In the implementation block
@property (nonatomic,retain) CNMutablePostalAddress * originalAddress;                               //@synthesize originalAddress=_originalAddress - In the implementation block
@property (nonatomic,retain) CNPostalAddressFormattingSpecification * addressFormatter;              //@synthesize addressFormatter=_addressFormatter - In the implementation block
@property (nonatomic,retain) NSArray * suggestions;                                                  //@synthesize suggestions=_suggestions - In the implementation block
@property (nonatomic,retain) MKLocalSearchCompleter * searchCompleter;                               //@synthesize searchCompleter=_searchCompleter - In the implementation block
@property (nonatomic,retain) PKAddressTextField * currentlySelectedField;                            //@synthesize currentlySelectedField=_currentlySelectedField - In the implementation block
@property (nonatomic,retain) PKAddressTextField * firstTextFieldForName;                             //@synthesize firstTextFieldForName=_firstTextFieldForName - In the implementation block
@property (nonatomic,retain) NSArray * editingFields;                                                //@synthesize editingFields=_editingFields - In the implementation block
@property (nonatomic,retain) NSArray * highlightedFieldKeys;                                         //@synthesize highlightedFieldKeys=_highlightedFieldKeys - In the implementation block
@property (nonatomic,retain) NSArray * requiredFieldKeys;                                            //@synthesize requiredFieldKeys=_requiredFieldKeys - In the implementation block
@property (nonatomic,retain) NSArray * errors;                                                       //@synthesize errors=_errors - In the implementation block
@property (assign,nonatomic) long long style;                                                        //@synthesize style=_style - In the implementation block
@property (assign,nonatomic,__weak) PKAddressTextField * givenNameTextField;                         //@synthesize givenNameTextField=_givenNameTextField - In the implementation block
@property (assign,nonatomic,__weak) PKAddressTextField * familyNameTextField;                        //@synthesize familyNameTextField=_familyNameTextField - In the implementation block
@property (assign,nonatomic,__weak) PKAddressTextField * phoneticGivenNameTextField;                 //@synthesize phoneticGivenNameTextField=_phoneticGivenNameTextField - In the implementation block
@property (assign,nonatomic,__weak) PKAddressTextField * phoneticFamilyNameTextField;                //@synthesize phoneticFamilyNameTextField=_phoneticFamilyNameTextField - In the implementation block
@property (assign,nonatomic,__weak) PKAddressTextField * street1TextField;                           //@synthesize street1TextField=_street1TextField - In the implementation block
@property (assign,nonatomic,__weak) PKAddressTextField * street2TextField;                           //@synthesize street2TextField=_street2TextField - In the implementation block
@property (assign,nonatomic) BOOL requirementsMet;                                                   //@synthesize requirementsMet=_requirementsMet - In the implementation block
@property (assign,nonatomic,__weak) id<PKAddressEditorViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) BOOL readOnly;                                                          //@synthesize readOnly=_readOnly - In the implementation block
@property (assign,nonatomic) BOOL countryIsEditable;                                                 //@synthesize countryIsEditable=_countryIsEditable - In the implementation block
@property (nonatomic,retain) PKContactFormatValidator * contactFormatValidator;                      //@synthesize contactFormatValidator=_contactFormatValidator - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)viewDidAppear:(BOOL)arg1 ;
-(NSString *)familyName;
-(NSArray *)suggestions;
-(void)setSuggestions:(NSArray *)arg1 ;
-(void)setReadOnly:(BOOL)arg1 ;
-(void)textFieldDidEndEditing:(id)arg1 ;
-(void)setFamilyName:(NSString *)arg1 ;
-(BOOL)readOnly;
-(id<PKAddressEditorViewControllerDelegate>)delegate;
-(void)setCountryIsEditable:(BOOL)arg1 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(NSString *)givenName;
-(id)initWithContact:(id)arg1 requiredKeys:(id)arg2 highlightedKeys:(id)arg3 errors:(id)arg4 style:(long long)arg5 ;
-(void)addressTextField:(id)arg1 textDidChange:(id)arg2 ;
-(void)recomputeEditingFields;
-(id)initWithContact:(id)arg1 style:(long long)arg2 ;
-(void)_validateAddressRequirements;
-(long long)_fieldIndexForNameComponent:(unsigned long long)arg1 ;
-(void)assignErrorToField:(id)arg1 ;
-(unsigned long long)_nameComponentForFieldIndex:(unsigned long long)arg1 ;
-(BOOL)canChangeCountry;
-(void)_showCountryPicker;
-(void)addressTextField:(id)arg1 didEndEditing:(id)arg2 ;
-(void)_updateUniqueAddressField:(id)arg1 withNewString:(id)arg2 ;
-(void)_checkFormatOfAddressTextField:(id)arg1 ;
-(void)_updateWithPostalAddress:(id)arg1 ;
-(BOOL)countryIsEditable;
-(NSString *)inputLabel;
-(void)setInputLabel:(NSString *)arg1 ;
-(NSString *)originalGivenName;
-(void)setOriginalGivenName:(NSString *)arg1 ;
-(NSString *)originalFamilyName;
-(void)setOriginalFamilyName:(NSString *)arg1 ;
-(NSString *)originalPhoneticGivenName;
-(NSString *)originalCountry;
-(void)setOriginalPhoneticGivenName:(NSString *)arg1 ;
-(NSString *)originalPhoneticFamilyName;
-(void)setOriginalPhoneticFamilyName:(NSString *)arg1 ;
-(void)setOriginalCountry:(NSString *)arg1 ;
-(void)setOriginalAddress:(CNMutablePostalAddress *)arg1 ;
-(CNPostalAddressFormattingSpecification *)addressFormatter;
-(void)setAddressFormatter:(CNPostalAddressFormattingSpecification *)arg1 ;
-(MKLocalSearchCompleter *)searchCompleter;
-(void)setSearchCompleter:(MKLocalSearchCompleter *)arg1 ;
-(PKAddressTextField *)currentlySelectedField;
-(void)setCurrentlySelectedField:(PKAddressTextField *)arg1 ;
-(PKAddressTextField *)firstTextFieldForName;
-(void)setFirstTextFieldForName:(PKAddressTextField *)arg1 ;
-(NSArray *)editingFields;
-(void)setEditingFields:(NSArray *)arg1 ;
-(NSArray *)highlightedFieldKeys;
-(void)setHighlightedFieldKeys:(NSArray *)arg1 ;
-(NSArray *)requiredFieldKeys;
-(void)setRequiredFieldKeys:(NSArray *)arg1 ;
-(PKAddressTextField *)givenNameTextField;
-(void)setGivenNameTextField:(PKAddressTextField *)arg1 ;
-(PKAddressTextField *)familyNameTextField;
-(PKAddressTextField *)street1TextField;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(void)setGivenName:(NSString *)arg1 ;
-(NSString *)phoneticFamilyName;
-(void)willMoveToParentViewController:(id)arg1 ;
-(void)setDelegate:(id<PKAddressEditorViewControllerDelegate>)arg1 ;
-(void)textDidChange:(id)arg1 ;
-(CGSize)preferredContentSize;
-(BOOL)textFieldShouldBeginEditing:(id)arg1 ;
-(CNMutablePostalAddress *)inputAddress;
-(void)textFieldDidBeginEditing:(id)arg1 ;
-(void)viewDidLoad;
-(void)setPhoneticFamilyName:(NSString *)arg1 ;
-(void)completerDidUpdateResults:(id)arg1 ;
-(void)completer:(id)arg1 didFailWithError:(id)arg2 ;
-(long long)numberOfComponentsInPickerView:(id)arg1 ;
-(long long)pickerView:(id)arg1 numberOfRowsInComponent:(long long)arg2 ;
-(id)pickerView:(id)arg1 titleForRow:(long long)arg2 forComponent:(long long)arg3 ;
-(void)pickerView:(id)arg1 didSelectRow:(long long)arg2 inComponent:(long long)arg3 ;
-(void)setFamilyNameTextField:(PKAddressTextField *)arg1 ;
-(PKAddressTextField *)phoneticGivenNameTextField;
-(void)setPhoneticGivenNameTextField:(PKAddressTextField *)arg1 ;
-(PKAddressTextField *)phoneticFamilyNameTextField;
-(void)setPhoneticFamilyNameTextField:(PKAddressTextField *)arg1 ;
-(void)setStreet1TextField:(PKAddressTextField *)arg1 ;
-(PKAddressTextField *)street2TextField;
-(void)setStreet2TextField:(PKAddressTextField *)arg1 ;
-(BOOL)requirementsMet;
-(void)setRequirementsMet:(BOOL)arg1 ;
-(void)donePressed;
-(void)setPhoneticGivenName:(NSString *)arg1 ;
-(void)setInputAddress:(CNMutablePostalAddress *)arg1 ;
-(NSString *)phoneticGivenName;
-(NSArray *)errors;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(void)setStyle:(long long)arg1 ;
-(void)countryPicker:(id)arg1 didPickCountryCode:(id)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(CNMutablePostalAddress *)originalAddress;
-(void)setErrors:(NSArray *)arg1 ;
-(void)cancel;
-(PKContactFormatValidator *)contactFormatValidator;
-(void)setContactFormatValidator:(PKContactFormatValidator *)arg1 ;
-(long long)style;
@end

