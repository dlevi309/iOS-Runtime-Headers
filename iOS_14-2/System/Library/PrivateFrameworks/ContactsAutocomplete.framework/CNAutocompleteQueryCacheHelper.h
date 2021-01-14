/*
* Generated on Thursday, January 14, 2021 at 2:27:30 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ContactsAutocomplete.framework/ContactsAutocomplete
*/


@protocol CNSchedulerProvider;
@class CNCache, NSString, CNObservable, CNAutocompleteQueryCacheMissAuditor;

@interface CNAutocompleteQueryCacheHelper : NSObject {

	CNCache* _cache;
	NSString* _searchString;
	CNObservable* _serverSearchObservable;
	CNAutocompleteQueryCacheMissAuditor* _cacheMissAuditor;
	id<CNSchedulerProvider> _schedulerProvider;

}

@property (nonatomic,readonly) CNCache * cache;                                                     //@synthesize cache=_cache - In the implementation block
@property (nonatomic,copy,readonly) NSString * searchString;                                        //@synthesize searchString=_searchString - In the implementation block
@property (nonatomic,readonly) CNObservable * serverSearchObservable;                               //@synthesize serverSearchObservable=_serverSearchObservable - In the implementation block
@property (nonatomic,readonly) CNAutocompleteQueryCacheMissAuditor * cacheMissAuditor;              //@synthesize cacheMissAuditor=_cacheMissAuditor - In the implementation block
@property (nonatomic,readonly) id<CNSchedulerProvider> schedulerProvider;                           //@synthesize schedulerProvider=_schedulerProvider - In the implementation block
+(id)cache_os_log;
+(id)stringByRemovingLastCharacterFromString:(id)arg1 ;
+(BOOL)shouldCacheResults:(id)arg1 ;
-(id<CNSchedulerProvider>)schedulerProvider;
-(CNCache *)cache;
-(NSString *)searchString;
-(id)initWithCache:(id)arg1 searchString:(id)arg2 serverSearchObservable:(id)arg3 cacheMissAuditor:(id)arg4 schedulerProvider:(id)arg5 ;
-(id)cachedFutureForSearchString:(id)arg1 ;
-(CNAutocompleteQueryCacheMissAuditor *)cacheMissAuditor;
-(id)remoteResultsForSearchString:(id)arg1 andCompletePromise:(id)arg2 ;
-(id)remoteResultsForSearchString:(id)arg1 ;
-(CNObservable *)serverSearchObservable;
-(id)initWithCache:(id)arg1 searchString:(id)arg2 serverSearchObservable:(id)arg3 ;
-(id)cachedResultsObservable;
-(id)uncachedResultsObservable;
-(id)observablesForSearchString:(id)arg1 withCachedResults:(id)arg2 ;
@end

