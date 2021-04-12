/*
* Generated on Thursday, January 14, 2021 at 2:24:32 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
*/

#import <MusicLibrary/ML3Predicate.h>

@class NSArray, NSString;

@interface ML3CompoundPredicate : ML3Predicate {

	NSArray* _predicates;

}

@property (nonatomic,retain) NSArray * predicates;                                  //@synthesize predicates=_predicates - In the implementation block
@property (nonatomic,copy,readonly) NSString * compoundOperatorJoiner; 
+(BOOL)supportsSecureCoding;
+(id)predicateMatchingPredicates:(id)arg1 ;
-(void)setPredicates:(NSArray *)arg1 ;
-(id)databaseStatementParameters;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)containsPropertyPredicate:(id)arg1 matchingValue:(id)arg2 usingComparison:(int)arg3 ;
-(NSArray *)predicates;
-(id)description;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithPredicates:(id)arg1 ;
-(void)appendSQLToMutableString:(id)arg1 entityClass:(Class)arg2 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)SQLJoinClausesForClass:(Class)arg1 ;
-(BOOL)isDynamicForEntityClass:(Class)arg1 ;
-(id)spotlightPredicate;
@end

