/*
* Generated on Monday, March 1, 2021 at 2:32:29 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSArray *)properties;
-(void)setProperties:(NSArray *)arg1 ;
-(NSString *)searchString;
-(void)setSearchString:(NSString *)arg1 ;
-(id)SQLJoinClausesForClass:(Class)arg1 ;
-(void)appendSQLToMutableString:(id)arg1 entityClass:(Class)arg2 ;
-(id)databaseStatementParameters;
-(BOOL)isDynamicForEntityClass:(Class)arg1 ;
-(id)initWithConcatenatedProperties:(id)arg1 searchString:(id)arg2 ;
@end

