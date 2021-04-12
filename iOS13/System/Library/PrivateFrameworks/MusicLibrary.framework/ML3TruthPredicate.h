/*
* Generated on Monday, March 1, 2021 at 2:32:29 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
*/

#import <MusicLibrary/ML3Predicate.h>

@interface ML3TruthPredicate : ML3Predicate {

	BOOL _truthValue;

}
+(BOOL)supportsSecureCoding;
+(id)truePredicate;
+(id)falsePredicate;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)_predicateString;
-(void)appendSQLToMutableString:(id)arg1 entityClass:(Class)arg2 ;
-(BOOL)isTrueAlways;
-(BOOL)isFalseAlways;
@end

