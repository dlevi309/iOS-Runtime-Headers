/*
* Generated on Monday, March 1, 2021 at 2:30:58 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
+(BOOL)wantsChevron;
+(BOOL)wantsHorizontalLayout;
-(BOOL)shouldIndentWhileEditing;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(id)variableConstraints;
-(double)minCellHeight;
-(BOOL)shouldPerformDefaultAction;
-(void)performDefaultAction;
-(void)picker:(id)arg1 didPickItem:(id)arg2 ;
-(void)pickerDidCancel:(id)arg1 ;
-(CNGeminiPickerController *)geminiPicker;
-(void)setGeminiPicker:(CNGeminiPickerController *)arg1 ;
-(void)geminiDataSourceDidUpdate:(id)arg1 ;
-(id)geminiItem;
@end

