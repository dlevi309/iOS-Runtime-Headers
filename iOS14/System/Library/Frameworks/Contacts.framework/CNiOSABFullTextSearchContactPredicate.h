/*
* Generated on Thursday, January 14, 2021 at 2:20:51 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Contacts.framework/Contacts
*/

#import <Contacts/Contacts-Structs.h>
#import <Contacts/CNFullTextSearchContactPredicate.h>
#import <libobjc.A.dylib/CNiOSContactPredicate.h>
#import <libobjc.A.dylib/CNiOSContactAsyncPredicate.h>

@class NSString;

@interface CNiOSABFullTextSearchContactPredicate : CNFullTextSearchContactPredicate <CNiOSContactPredicate, CNiOSContactAsyncPredicate>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)cn_supportsNativeBatchFetch;
-(BOOL)cn_supportsEncodedFetching;
-(id)cn_cursorForEncodedPeopleFromAddressBook:(void*)arg1 fetchRequest:(id)arg2 environment:(id)arg3 error:(id*)arg4 ;
-(BOOL)cn_supportsNativeSorting;
-(CFArrayRef)cn_copyPeopleInAddressBook:(void*)arg1 fetchRequest:(id)arg2 matchInfos:(id*)arg3 environment:(id)arg4 error:(_CFError*)arg5 ;
-(id)cn_copyPeopleInAddressBook:(void*)arg1 fetchRequest:(id)arg2 matchInfos:(id*)arg3 environment:(id)arg4 nserror:(id*)arg5 ;
-(id)initWithSearchString:(id)arg1 containerIdentifiers:(id)arg2 groupIdentifiers:(id)arg3 ;
-(id)_predicatesWithAddressBook:(void*)arg1 environment:(id)arg2 ;
-(id)cn_fetchPeopleInAddressBook:(void*)arg1 fetchRequest:(id)arg2 progressiveResults:(/*^block*/id)arg3 completion:(/*^block*/id)arg4 environment:(id)arg5 ;
@end

