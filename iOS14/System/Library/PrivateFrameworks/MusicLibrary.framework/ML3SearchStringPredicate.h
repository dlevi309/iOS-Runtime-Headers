/*
* Generated on Thursday, January 14, 2021 at 2:24:32 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
*/

#import <MusicLibrary/ML3Predicate.h>

@class NSArray, NSString;

@interface ML3SearchStringPredicate : ML3Predicate {

	NSArray* _properties;
	NSString* _searchString;

}

@property (nonatomic,copy) NSArray * properties;                 //@synthesize properties=_properties - In the implementation block
@property (nonatomic,copy) NSString * searchString;              //@synthesize searchString=_searchString - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)predicateWithConcatenatedProperties:(id)arg1 searchString:(id)arg2 ;
-(NSArray *)properties;
-(id)databaseStatementParameters;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(void)setProperties:(NSArray *)arg1 ;
-(void)setSearchString:(NSString *)arg1 ;
-(void)appendSQLToMutableString:(id)arg1 entityClass:(Class)arg2 ;
-(NSString *)searchString;
-(BOOL)isEqual:(id)arg1 ;
-(id)SQLJoinClausesForClass:(Class)arg1 ;
-(BOOL)isDynamicForEntityClass:(Class)arg1 ;
-(id)initWithConcatenatedProperties:(id)arg1 searchString:(id)arg2 ;
@end

