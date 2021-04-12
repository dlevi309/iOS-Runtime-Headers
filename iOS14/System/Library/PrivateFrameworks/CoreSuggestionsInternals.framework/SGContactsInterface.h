/*
* Generated on Thursday, January 14, 2021 at 2:25:37 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreSuggestionsInternals.framework/CoreSuggestionsInternals
*/


@interface SGContactsInterface : NSObject
+(void)initialize;
+(void)clearCache;
+(id)unifiedContactsMatchingPredicate:(id)arg1 keysToFetch:(id)arg2 usingContactStore:(id)arg3 error:(id*)arg4 ;
+(id)unifiedContactWithIdentifier:(id)arg1 keysToFetch:(id)arg2 usingContactStore:(id)arg3 error:(id*)arg4 ;
+(id)unifiedMeContactWithKeysToFetch:(id)arg1 usingContactStore:(id)arg2 error:(id*)arg3 ;
+(id)identifiersPredicateFromCacheForPredicate:(id)arg1 isCached:(BOOL*)arg2 ;
+(BOOL)enumerateContactsWithFetchRequest:(id)arg1 usingContactStore:(id)arg2 error:(id*)arg3 usingBlock:(/*^block*/id)arg4 ;
+(BOOL)enumerateContactsMatchingName:(id)arg1 withKeysToFetch:(id)arg2 usingContactStore:(id)arg3 error:(id*)arg4 usingBlock:(/*^block*/id)arg5 ;
+(BOOL)handleExistsInContactStoreForHandle:(id)arg1 withHandleType:(id)arg2 ;
@end

