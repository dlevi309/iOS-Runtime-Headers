/*
* Generated on Thursday, January 14, 2021 at 2:26:52 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/AddressBook.framework/AddressBook
*/

#import <AddressBook/AddressBook-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSPredicate, NSArray;

@interface ABSPersonFetchRequest : NSObject <NSCopying, NSSecureCoding> {

	unsigned _sortOrder;
	NSPredicate* _predicate;
	NSArray* _additionalKeysToFetch;

}

@property (copy,readonly) NSPredicate * predicate;                      //@synthesize predicate=_predicate - In the implementation block
@property (copy,readonly) NSArray * additionalKeysToFetch;              //@synthesize additionalKeysToFetch=_additionalKeysToFetch - In the implementation block
@property (readonly) unsigned sortOrder;                                //@synthesize sortOrder=_sortOrder - In the implementation block
+(BOOL)supportsSecureCoding;
-(unsigned)sortOrder;
-(NSPredicate *)predicate;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)descriptionOfSortOrder;
-(id)descriptionOfKeysToFetch;
-(id)initWithPredicate:(id)arg1 additionalKeysToFetch:(id)arg2 sortOrder:(unsigned)arg3 ;
-(NSArray *)additionalKeysToFetch;
@end

