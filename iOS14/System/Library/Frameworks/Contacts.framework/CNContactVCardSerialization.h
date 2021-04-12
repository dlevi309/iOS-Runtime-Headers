/*
* Generated on Thursday, January 14, 2021 at 2:20:52 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Contacts.framework/Contacts
*/


@interface CNContactVCardSerialization : NSObject
+(id)descriptorForRequiredKeys;
+(id)descriptorForRequiredKeysWithOptions:(id)arg1 description:(id)arg2 ;
+(void)contactsWithData:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
+(void)dataWithContacts:(id)arg1 options:(id)arg2 scheduler:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
+(id)dataWithContacts:(id)arg1 options:(id)arg2 error:(id*)arg3 ;
+(id)contactsWithMECARDString:(id)arg1 error:(id*)arg2 ;
+(id)contactsWithData:(id)arg1 options:(id)arg2 error:(id*)arg3 ;
+(id)dataWithContacts:(id)arg1 options:(id)arg2 error:(id*)arg3 environment:(id)arg4 ;
+(id)summaryOfVCard:(id)arg1 error:(id*)arg2 ;
+(id)descriptorForRequiredKeysWithOptions:(id)arg1 ;
+(id)summaryOfLocationVCard:(id)arg1 error:(id*)arg2 ;
+(id)dataWithContacts:(id)arg1 error:(id*)arg2 ;
+(void)dataWithContacts:(id)arg1 options:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
+(id)contactsWithData:(id)arg1 error:(id*)arg2 ;
+(void)contactsWithData:(id)arg1 scheduler:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
@end

