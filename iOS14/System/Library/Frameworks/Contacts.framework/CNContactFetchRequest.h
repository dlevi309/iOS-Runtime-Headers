/*
* Generated on Thursday, January 14, 2021 at 2:20:52 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
	unsigned long long _serialNumber;

}

@property (assign,nonatomic) BOOL disallowsEncodedFetch;                        //@synthesize disallowsEncodedFetch=_disallowsEncodedFetch - In the implementation block
@property (assign,nonatomic) unsigned long long batchSize;                      //@synthesize batchSize=_batchSize - In the implementation block
@property (readonly) unsigned long long serialNumber;                           //@synthesize serialNumber=_serialNumber - In the implementation block
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
+(unsigned long long)makeSerialNumber;
-(long long)sortOrder;
-(NSArray *)keysToFetch;
-(unsigned long long)serialNumber;
-(void)setBatchSize:(unsigned long long)arg1 ;
-(unsigned long long)batchSize;
-(BOOL)requiresMeContactAuthorization;
-(NSPredicate *)predicate;
-(id)init;
-(id)effectiveKeysToFetch;
-(void)setShouldFailIfAccountNotYetSynced:(BOOL)arg1 ;
-(void)setPredicate:(NSPredicate *)arg1 ;
-(BOOL)rankSort;
-(id)effectivePredicate;
-(void)setMutableObjects:(BOOL)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)shouldFailIfAccountNotYetSynced;
-(void)setAllowsBatching:(BOOL)arg1 ;
-(id)description;
-(id)initWithKeysToFetch:(id)arg1 ;
-(void)setKeysToFetch:(NSArray *)arg1 ;
-(void)setUnifyResults:(BOOL)arg1 ;
-(void)setSortOrder:(long long)arg1 ;
-(void)setDisallowsEncodedFetch:(BOOL)arg1 ;
-(void)acceptVisitor:(id)arg1 ;
-(BOOL)disallowsEncodedFetch;
-(BOOL)allowsBatching;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)mutableObjects;
-(BOOL)onlyMainStore;
-(void)setRankSort:(BOOL)arg1 ;
-(BOOL)unifyResults;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setOnlyMainStore:(BOOL)arg1 ;
@end

