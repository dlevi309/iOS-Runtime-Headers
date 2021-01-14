/*
* Generated on Thursday, January 14, 2021 at 2:20:25 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIPickerView.h>
#import <UIKit/UIWebFormControl.h>
#import <UIKit/UIPickerViewDataSource.h>
#import <UIKit/UIPickerViewDelegate.h>

@protocol UIWebSelectedItemPrivate;
@class DOMHTMLSelectElement, NSArray, NSString;

@interface UIWebSelectSinglePicker : UIPickerView <UIWebFormControl, UIPickerViewDataSource, UIPickerViewDelegate> {

	DOMHTMLSelectElement* _selectNode;
	NSArray* _optionItems;
	id<UIWebSelectedItemPrivate> _selectedOptionItem;
	long long _selectedIndex;
	id<UIWebSelectedItemPrivate> _optionToSelectWhenDone;
	long long _indexToSelectWhenDone;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)controlView;
-(void)controlBeginEditing;
-(void)controlEndEditing;
-(long long)numberOfComponentsInPickerView:(id)arg1 ;
-(long long)pickerView:(id)arg1 numberOfRowsInComponent:(long long)arg2 ;
-(id)pickerView:(id)arg1 attributedTitleForRow:(long long)arg2 forComponent:(long long)arg3 ;
-(void)pickerView:(id)arg1 didSelectRow:(long long)arg2 inComponent:(long long)arg3 ;
-(id)initWithDOMHTMLSelectElement:(id)arg1 allItems:(id)arg2 ;
-(void)dealloc;
@end

