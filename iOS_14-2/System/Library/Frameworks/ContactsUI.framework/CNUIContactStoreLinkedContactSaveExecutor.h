/*
* Generated on Thursday, January 14, 2021 at 2:20:47 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
*/

#import <libobjc.A.dylib/CNUIContactSaveExecutor.h>

@class NSString;

@interface CNUIContactStoreLinkedContactSaveExecutor : NSObject <CNUIContactSaveExecutor>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)saveLinkedContactChanges:(id)arg1 mutableContact:(id)arg2 contactStore:(id)arg3 editingLinkedContacts:(id)arg4 ignoresParentalRestrictions:(BOOL)arg5 saveWasAuthorized:(BOOL)arg6 issuedSaveRequestIdentifiers:(id)arg7 ;
-(id)executeSaveWithConfiguration:(id)arg1 ;
@end

