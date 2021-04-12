/*
* Generated on Monday, March 1, 2021 at 2:30:58 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
+(BOOL)wantsChevron;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(BOOL)shouldPerformDefaultAction;
-(void)setCardGroupItem:(id)arg1 ;
-(void)performDefaultAction;
-(void)picker:(id)arg1 didPickItem:(id)arg2 ;
-(void)pickerDidCancel:(id)arg1 ;
-(CNPropertyGroupAlertItem *)alertItem;
-(id)alertGroup;
-(BOOL)allowsCellSelection;
@end

