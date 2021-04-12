/*
* Generated on Thursday, January 14, 2021 at 2:24:32 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
*/

#import <MusicLibrary/ML3Predicate.h>

@interface ML3TruthPredicate : ML3Predicate {

	BOOL _truthValue;

}
+(BOOL)supportsSecureCoding;
+(id)truePredicate;
+(id)falsePredicate;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(void)appendSQLToMutableString:(id)arg1 entityClass:(Class)arg2 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)_predicateString;
-(BOOL)isTrueAlways;
-(BOOL)isFalseAlways;
@end

