/*
* Generated on Monday, March 1, 2021 at 2:32:29 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
*/

#import <MusicLibrary/ML3Predicate.h>

@class ML3Predicate;

@interface ML3UnaryPredicate : ML3Predicate {

	ML3Predicate* _predicate;

}

@property (nonatomic,retain) ML3Predicate * predicate;              //@synthesize predicate=_predicate - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)predicateWithPredicate:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setPredicate:(ML3Predicate *)arg1 ;
-(ML3Predicate *)predicate;
-(id)initWithPredicate:(id)arg1 ;
-(id)SQLJoinClausesForClass:(Class)arg1 ;
-(id)databaseStatementParameters;
@end

