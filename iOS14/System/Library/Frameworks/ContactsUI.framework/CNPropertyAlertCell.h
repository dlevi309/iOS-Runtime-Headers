/*
* Generated on Thursday, January 14, 2021 at 2:20:47 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
*/

#import <ContactsUI/CNPropertySimpleCell.h>
#import <libobjc.A.dylib/CNPickerControllerDelegate.h>

@class CNPropertyGroupAlertItem, NSString;

@interface CNPropertyAlertCell : CNPropertySimpleCell <CNPickerControllerDelegate>

@property (nonatomic,readonly) CNPropertyGroupAlertItem * alertItem; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)shouldIndentWhileEditing;
+(BOOL)wantsChevron;
-(CNPropertyGroupAlertItem *)alertItem;
-(id)alertGroup;
-(BOOL)shouldPerformDefaultAction;
-(void)setCardGroupItem:(id)arg1 ;
-(void)performDefaultAction;
-(void)picker:(id)arg1 didPickItem:(id)arg2 ;
-(void)pickerDidCancel:(id)arg1 ;
-(BOOL)allowsCellSelection;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
@end

