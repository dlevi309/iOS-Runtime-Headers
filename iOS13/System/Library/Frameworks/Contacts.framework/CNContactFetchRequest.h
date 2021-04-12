/*
* Generated on Monday, March 1, 2021 at 2:30:44 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/Contacts.framework/Contacts
*/

#import <Contacts/Contacts-Structs.h>
#import <Contacts/CNFetchRequest.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSPredicate, NSArray;

@interface CNContactFetchRequest : CNFetchRequest <NSSecureCoding> {

	BOOL _rankSort;
	BOOL _mutableObjects;
	BOOL _unifyResults;
	BOOL _disallowsEncodedFetch;
	BOOL _onlyMainStore;
	BOOL _allowsBatching;
	BOOL _shouldFailIfAccountNotYetSynced;
	NSPredicate* _predicate;
	NSArray* _keysToFetch;
	long long _sortOrder;
	unsigned long long _batchSize;

}

@property (assign,nonatomic) BOOL disallowsEncodedFetch;                        //@synthesize disallowsEncodedFetch=_disallowsEncodedFetch - In the implementation block
@property (assign,nonatomic) unsigned long long batchSize;                      //@synthesize batchSize=_batchSize - In the implementation block
@property (assign,nonatomic) BOOL rankSort;                                     //@synthesize rankSort=_rankSort - In the implementation block
@property (assign,nonatomic) BOOL onlyMainStore;                                //@synthesize onlyMainStore=_onlyMainStore - In the implementation block
@property (assign,nonatomic) BOOL allowsBatching;                               //@synthesize allowsBatching=_allowsBatching - In the implementation block
@property (assign,nonatomic) BOOL shouldFailIfAccountNotYetSynced;              //@synthesize shouldFailIfAccountNotYetSynced=_shouldFailIfAccountNotYetSynced - In the implementation block
@property (nonatomic,copy) NSPredicate * predicate;                             //@synthesize predicate=_predicate - In the implementation block
@property (nonatomic,copy) NSArray * keysToFetch;                               //@synthesize keysToFetch=_keysToFetch - In the implementation block
@property (assign,nonatomic) BOOL mutableObjects;                               //@synthesize mutableObjects=_mutableObjects - In the implementation block
@property (assign,nonatomic) BOOL unifyResults;                                 //@synthesize unifyResults=_unifyResults - In the implementation block
@property (assign,nonatomic) long long sortOrder;                               //@synthesize sortOrder=_sortOrder - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)init;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setPredicate:(NSPredicate *)arg1 ;
-(NSPredicate *)predicate;
-(unsigned long long)batchSize;
-(void)setBatchSize:(unsigned long long)arg1 ;
-(id)initWithKeysToFetch:(id)arg1 ;
-(long long)sortOrder;
-(void)setSortOrder:(long long)arg1 ;
-(void)setUnifyResults:(BOOL)arg1 ;
-(NSArray *)keysToFetch;
-(BOOL)unifyResults;
-(BOOL)mutableObjects;
-(BOOL)onlyMainStore;
-(void)setMutableObjects:(BOOL)arg1 ;
-(id)effectivePredicate;
-(id)effectiveKeysToFetch;
-(void)setKeysToFetch:(NSArray *)arg1 ;
-(BOOL)shouldFailIfAccountNotYetSynced;
-(void)setDisallowsEncodedFetch:(BOOL)arg1 ;
-(BOOL)disallowsEncodedFetch;
-(void)setOnlyMainStore:(BOOL)arg1 ;
-(BOOL)requiresMeContactAuthorization;
-(BOOL)rankSort;
-(void)setRankSort:(BOOL)arg1 ;
-(BOOL)allowsBatching;
-(void)setAllowsBatching:(BOOL)arg1 ;
-(void)setShouldFailIfAccountNotYetSynced:(BOOL)arg1 ;
@end

