/*
* Generated on Monday, March 1, 2021 at 2:30:44 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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

