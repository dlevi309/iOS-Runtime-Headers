/*
* Generated on Monday, March 1, 2021 at 2:30:58 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
*/

#import <ContactsUI/CNPropertySimpleEditingCell.h>
#import <libobjc.A.dylib/CNPickerControllerDelegate.h>
#import <UIKit/UINavigationControllerDelegate.h>

@class CNSocialProfile, NSString;

@interface CNPropertySocialProfileEditingCell : CNPropertySimpleEditingCell <CNPickerControllerDelegate, UINavigationControllerDelegate>

@property (nonatomic,readonly) CNSocialProfile * profile; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(CNSocialProfile *)profile;
-(void)picker:(id)arg1 didPickItem:(id)arg2 ;
-(void)pickerDidCancel:(id)arg1 ;
-(void)labelButtonClicked:(id)arg1 ;
@end

