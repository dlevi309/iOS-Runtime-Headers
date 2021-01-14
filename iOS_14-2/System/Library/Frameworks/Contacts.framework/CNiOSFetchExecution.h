/*
* Generated on Thursday, January 14, 2021 at 2:20:52 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Contacts.framework/Contacts
*/


@interface CNiOSFetchExecution : NSObject
+(id)contactsMatchingPredicates:(id)arg1 sortOrdering:(unsigned)arg2 options:(unsigned long long)arg3 addressBook:(void*)arg4 progressiveResults:(/*^block*/id)arg5 completion:(/*^block*/id)arg6 environment:(id)arg7 ;
+(id)contactsMatchingPredicates:(id)arg1 sortOrdering:(unsigned)arg2 matchInfos:(id*)arg3 options:(unsigned long long)arg4 addressBook:(void*)arg5 environment:(id)arg6 error:(id*)arg7 ;
+(void)_extractContacts:(id*)arg1 matchInfo:(id*)arg2 fromBlockResults:(id)arg3 containsNestedResults:(BOOL)arg4 ;
@end

