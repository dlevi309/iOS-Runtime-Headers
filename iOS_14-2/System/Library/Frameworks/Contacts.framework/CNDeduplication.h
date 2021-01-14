/*
* Generated on Thursday, January 14, 2021 at 2:20:51 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Contacts.framework/Contacts
*/


@interface CNDeduplication : NSObject
+(id)os_log;
-(void)deduplicateContainer:(id)arg1 store:(id)arg2 ;
-(void)deduplicateKeeping:(id)arg1 deleting:(id)arg2 store:(id)arg3 ;
-(id)contactsForGroup:(id)arg1 store:(id)arg2 ;
-(id)identifierSetFromContacts:(id)arg1 ;
-(void)addContactsForIds:(id)arg1 toGroup:(id)arg2 usingRequest:(id)arg3 store:(id)arg4 ;
-(void)deduplicateAllContainers:(id)arg1 ;
@end

