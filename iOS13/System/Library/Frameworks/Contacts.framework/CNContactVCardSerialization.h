/*
* Generated on Monday, March 1, 2021 at 2:30:44 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/Contacts.framework/Contacts
*/


@interface CNContactVCardSerialization : NSObject
+(id)descriptorForRequiredKeys;
+(id)contactsWithData:(id)arg1 error:(id*)arg2 ;
+(id)dataWithContacts:(id)arg1 options:(id)arg2 error:(id*)arg3 ;
+(id)contactsWithData:(id)arg1 options:(id)arg2 error:(id*)arg3 ;
+(id)dataWithContacts:(id)arg1 error:(id*)arg2 ;
+(id)descriptorForRequiredKeysWithOptions:(id)arg1 description:(id)arg2 ;
+(id)dataWithContacts:(id)arg1 options:(id)arg2 error:(id*)arg3 environment:(id)arg4 ;
+(void)contactsWithData:(id)arg1 scheduler:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
+(void)dataWithContacts:(id)arg1 options:(id)arg2 scheduler:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
+(id)summaryOfVCard:(id)arg1 error:(id*)arg2 ;
+(id)summaryOfLocationVCard:(id)arg1 error:(id*)arg2 ;
+(id)descriptorForRequiredKeysWithOptions:(id)arg1 ;
+(void)contactsWithData:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
+(void)dataWithContacts:(id)arg1 options:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
+(id)contactsWithMECARDString:(id)arg1 error:(id*)arg2 ;
@end

