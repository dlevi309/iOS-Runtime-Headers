/*
* Generated on Monday, March 1, 2021 at 2:32:29 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setPredicates:(NSArray *)arg1 ;
-(NSArray *)predicates;
-(id)initWithPredicates:(id)arg1 ;
-(id)SQLJoinClausesForClass:(Class)arg1 ;
-(void)appendSQLToMutableString:(id)arg1 entityClass:(Class)arg2 ;
-(id)databaseStatementParameters;
-(BOOL)isDynamicForEntityClass:(Class)arg1 ;
-(id)spotlightPredicate;
-(BOOL)containsPropertyPredicate:(id)arg1 matchingValue:(id)arg2 usingComparison:(int)arg3 ;
@end

