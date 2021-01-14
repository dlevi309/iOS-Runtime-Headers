/*
* Generated on Thursday, January 14, 2021 at 2:20:47 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
*/

#import <ContactsUI/CNPropertySimpleCell.h>
#import <libobjc.A.dylib/CNPickerControllerDelegate.h>
#import <libobjc.A.dylib/CNUIGeminiDataSourceDelegate.h>

@class CNGeminiPickerController, NSString;

@interface CNPropertyGeminiEditingCell : CNPropertySimpleCell <CNPickerControllerDelegate, CNUIGeminiDataSourceDelegate> {

	CNGeminiPickerController* _geminiPicker;

}

@property (nonatomic,retain) CNGeminiPickerController * geminiPicker;              //@synthesize geminiPicker=_geminiPicker - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)shouldIndentWhileEditing;
+(BOOL)wantsChevron;
+(BOOL)wantsHorizontalLayout;
-(void)geminiDataSourceDidUpdate:(id)arg1 ;
-(id)geminiItem;
-(double)minCellHeight;
-(BOOL)shouldPerformDefaultAction;
-(void)performDefaultAction;
-(id)variableConstraints;
-(void)picker:(id)arg1 didPickItem:(id)arg2 ;
-(void)pickerDidCancel:(id)arg1 ;
-(CNGeminiPickerController *)geminiPicker;
-(void)setGeminiPicker:(CNGeminiPickerController *)arg1 ;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
@end

