/*
* Generated on Thursday, January 14, 2021 at 2:20:43 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
*/

#import <AppleMediaServices/AppleMediaServices-Structs.h>
#import <AppleMediaServices/AMSSQLitePropertyPredicate.h>
#import <libobjc.A.dylib/NSCopying.h>

@class AMSSQLiteQuery, NSString, NSArray;

@interface AMSSQLiteContainsPredicate : AMSSQLitePropertyPredicate <NSCopying> {

	BOOL _negative;
	AMSSQLiteQuery* _query;
	NSString* _queryProperty;
	id _values;

}

@property (getter=isNegative,nonatomic,readonly) BOOL negative;              //@synthesize negative=_negative - In the implementation block
@property (nonatomic,readonly) AMSSQLiteQuery * query;                       //@synthesize query=_query - In the implementation block
@property (nonatomic,readonly) NSString * queryProperty;                     //@synthesize queryProperty=_queryProperty - In the implementation block
@property (nonatomic,readonly) NSArray * values;                             //@synthesize values=_values - In the implementation block
+(id)doesNotContainPredicateWithProperty:(id)arg1 values:(id)arg2 ;
+(id)containsPredicateWithProperty:(id)arg1 values:(id)arg2 ;
+(id)containsPredicateWithProperty:(id)arg1 query:(id)arg2 queryProperty:(id)arg3 ;
-(BOOL)isNegative;
-(AMSSQLiteQuery *)query;
-(id)SQLForEntityClass:(Class)arg1 ;
-(NSArray *)values;
-(NSString *)queryProperty;
-(void)applyBinding:(id)arg1 atIndex:(inout int*)arg2 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

