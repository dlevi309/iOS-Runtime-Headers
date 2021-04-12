/*
* Generated on Thursday, January 14, 2021 at 2:20:52 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Contacts.framework/Contacts
*/


@protocol CNiOSContactPredicate;
@class NSArray, CNManagedConfiguration;

@interface CNiOSPersonFetchRequest : NSObject {

	id<CNiOSContactPredicate> _predicate;
	BOOL _shouldSort;
	unsigned _sortOrder;
	unsigned long long _options;
	BOOL _unifiedFetch;
	NSArray* _keysToFetch;
	unsigned long long _batchSize;
	CNManagedConfiguration* _managedConfiguration;

}

@property (readonly) id<CNiOSContactPredicate> predicate;                        //@synthesize predicate=_predicate - In the implementation block
@property (readonly) BOOL shouldSort;                                            //@synthesize shouldSort=_shouldSort - In the implementation block
@property (readonly) unsigned long long options;                                 //@synthesize options=_options - In the implementation block
@property (readonly) unsigned sortOrder;                                         //@synthesize sortOrder=_sortOrder - In the implementation block
@property (readonly) unsigned sortOrderIncludingNone; 
@property (readonly) NSArray * keysToFetch;                                      //@synthesize keysToFetch=_keysToFetch - In the implementation block
@property (readonly) BOOL unifiedFetch;                                          //@synthesize unifiedFetch=_unifiedFetch - In the implementation block
@property (readonly) unsigned long long batchSize;                               //@synthesize batchSize=_batchSize - In the implementation block
@property (readonly) CNManagedConfiguration * managedConfiguration;              //@synthesize managedConfiguration=_managedConfiguration - In the implementation block
+(long long)resolvedSortOrderFromContactSortOrder:(long long)arg1 ;
+(id)validatePredicate:(id)arg1 error:(id*)arg2 ;
+(id)effectivePredicate:(id)arg1 ;
+(id)fetchRequestFromCNFetchRequest:(id)arg1 managedConfiguration:(id)arg2 error:(id*)arg3 ;
-(unsigned)sortOrder;
-(CNManagedConfiguration *)managedConfiguration;
-(NSArray *)keysToFetch;
-(unsigned long long)batchSize;
-(id<CNiOSContactPredicate>)predicate;
-(unsigned long long)options;
-(id)initWithPredicate:(id)arg1 keysToFetch:(id)arg2 shouldSort:(BOOL)arg3 sortOrder:(unsigned)arg4 unifiedFetch:(BOOL)arg5 batchSize:(unsigned long long)arg6 managedConfiguration:(id)arg7 options:(unsigned long long)arg8 ;
-(unsigned)sortOrderIncludingNone;
-(BOOL)unifiedFetch;
-(BOOL)shouldSort;
@end

