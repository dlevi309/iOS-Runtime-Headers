/*
* Generated on Monday, March 1, 2021 at 2:30:58 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
*/

#import <libobjc.A.dylib/CNUIContactSaveExecutor.h>

@class NSString;

@interface CNUIContactStoreLinkedContactSaveExecutor : NSObject <CNUIContactSaveExecutor>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)executeSaveWithConfiguration:(id)arg1 ;
-(id)saveLinkedContactChanges:(id)arg1 mutableContact:(id)arg2 contactStore:(id)arg3 editingLinkedContacts:(id)arg4 ignoresParentalRestrictions:(BOOL)arg5 saveWasAuthorized:(BOOL)arg6 issuedSaveRequestIdentifiers:(id)arg7 ;
@end

