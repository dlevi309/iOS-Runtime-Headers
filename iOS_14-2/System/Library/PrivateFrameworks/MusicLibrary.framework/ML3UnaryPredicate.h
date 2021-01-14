/*
* Generated on Thursday, January 14, 2021 at 2:24:32 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)initWithPredicate:(id)arg1 ;
-(ML3Predicate *)predicate;
-(void)setPredicate:(ML3Predicate *)arg1 ;
-(id)databaseStatementParameters;
-(void)encodeWithCoder:(id)arg1 ;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)SQLJoinClausesForClass:(Class)arg1 ;
@end

