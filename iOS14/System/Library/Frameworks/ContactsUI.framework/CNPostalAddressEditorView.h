/*
* Generated on Thursday, January 14, 2021 at 2:20:47 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
*/

#import <ContactsUI/ContactsUI-Structs.h>
#import <UIKitCore/UIControl.h>
#import <UIKit/UITableViewDataSource.h>
#import <UIKit/UITableViewDelegate.h>
#import <UIKit/UITextFieldDelegate.h>
#import <libobjc.A.dylib/CNCountryPickerControllerDelegate.h>
#import <libobjc.A.dylib/ABText.h>

@protocol CNPresenterDelegate;
@class NSString, NSDictionary, CNMutablePostalAddress, CNPostalAddressEditorTableView, NSArray, CNPostalAddressFormattingSpecification, NSMutableDictionary, CNPostalAddress, UIColor;

@interface CNPostalAddressEditorView : UIControl <UITableViewDataSource, UITableViewDelegate, UITextFieldDelegate, CNCountryPickerControllerDelegate, ABText> {

	CNMutablePostalAddress* _address;
	NSDictionary* _valueTextAttributes;
	id<CNPresenterDelegate> _delegate;
	CNPostalAddressEditorTableView* _tableView;
	NSArray* _cellsLayout;
	CNPostalAddressFormattingSpecification* _formatSpecification;
	NSMutableDictionary* _textFields;

}

@property (nonatomic,retain) CNPostalAddressEditorTableView * tableView;                                //@synthesize tableView=_tableView - In the implementation block
@property (nonatomic,copy) NSArray * cellsLayout;                                                       //@synthesize cellsLayout=_cellsLayout - In the implementation block
@property (nonatomic,retain) CNPostalAddressFormattingSpecification * formatSpecification;              //@synthesize formatSpecification=_formatSpecification - In the implementation block
@property (nonatomic,readonly) NSMutableDictionary * textFields;                                        //@synthesize textFields=_textFields - In the implementation block
@property (nonatomic,copy) CNPostalAddress * address; 
@property (nonatomic,copy) UIColor * separatorColor; 
@property (nonatomic,readonly) long long lineCount; 
@property (assign,nonatomic,__weak) id<CNPresenterDelegate> delegate;                                   //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy) NSString * ab_text; 
@property (nonatomic,copy) NSDictionary * ab_textAttributes; 
-(void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3 ;
-(BOOL)becomeFirstResponder;
-(id)_countryCode;
-(void)contentSizeCategoryDidChange:(id)arg1 ;
-(BOOL)isFirstResponder;
-(id)initWithFrame:(CGRect)arg1 ;
-(id<CNPresenterDelegate>)delegate;
-(CNPostalAddressEditorTableView *)tableView;
-(NSString *)ab_text;
-(void)setEnabled:(BOOL)arg1 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(void)setSeparatorColor:(UIColor *)arg1 ;
-(void)setBackgroundColor:(id)arg1 ;
-(BOOL)canBecomeFirstResponder;
-(void)setDelegate:(id<CNPresenterDelegate>)arg1 ;
-(CNPostalAddress *)address;
-(void)setAddress:(CNPostalAddress *)arg1 ;
-(long long)lineCount;
-(void)textFieldDidBeginEditing:(id)arg1 ;
-(void)keyboardWillShow:(id)arg1 ;
-(void)setTableView:(CNPostalAddressEditorTableView *)arg1 ;
-(UIColor *)separatorColor;
-(void)setAb_text:(NSString *)arg1 ;
-(NSArray *)cellsLayout;
-(NSDictionary *)ab_textAttributes;
-(void)setAb_textAttributes:(NSDictionary *)arg1 ;
-(void)countryPicker:(id)arg1 didPickCountryCode:(id)arg2 ;
-(void)countryPickerDidCancel:(id)arg1 ;
-(void)_invalidateCellsLayout;
-(void)_setAddressValue:(id)arg1 forKey:(id)arg2 ;
-(id)_addressValueForKey:(id)arg1 ;
-(id)_normalizeCountryCodeToISO:(id)arg1 ;
-(id)_cellsLayoutForCountryCode:(id)arg1 ;
-(id)keyboardSettingsForAddress:(id)arg1 component:(id)arg2 ;
-(void)setCellsLayout:(NSArray *)arg1 ;
-(CNPostalAddressFormattingSpecification *)formatSpecification;
-(void)setFormatSpecification:(CNPostalAddressFormattingSpecification *)arg1 ;
-(void)textFieldChanged:(id)arg1 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(NSMutableDictionary *)textFields;
-(void)dealloc;
@end

