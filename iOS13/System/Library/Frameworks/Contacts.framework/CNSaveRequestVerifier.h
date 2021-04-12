/*
* Generated on Monday, March 1, 2021 at 2:30:44 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/Contacts.framework/Contacts
*/


@interface CNSaveRequestVerifier : NSObject
+(id)insertedAndUpdatedContactsForSaveRequest:(id)arg1 ;
+(BOOL)_areDirectPropertiesOfSaveRequest:(id)arg1 authorizedForSavingWithContext:(id)arg2 error:(id*)arg3 ;
+(BOOL)_arePropertiesOfContacts:(id)arg1 inSaveRequest:(id)arg2 authorizedForSavingWithContext:(id)arg3 error:(id*)arg4 ;
+(BOOL)_isEditingOfContacts:(id)arg1 inSaveRequest:(id)arg2 authorizedForSavingWithContext:(id)arg3 error:(id*)arg4 ;
+(BOOL)isValidSaveRequest:(id)arg1 error:(id*)arg2 ;
+(BOOL)isSaveRequest:(id)arg1 authorizedForSavingWithContext:(id)arg2 error:(id*)arg3 ;
@end

