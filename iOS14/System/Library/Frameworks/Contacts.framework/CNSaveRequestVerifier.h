/*
* Generated on Thursday, January 14, 2021 at 2:20:51 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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

