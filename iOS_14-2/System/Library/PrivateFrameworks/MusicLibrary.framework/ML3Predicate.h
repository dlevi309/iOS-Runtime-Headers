/*
* Generated on Thursday, January 14, 2021 at 2:24:32 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
*/

#import <MusicLibrary/MusicLibrary-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface ML3Predicate : NSObject <NSSecureCoding, NSCopying>
+(BOOL)supportsSecureCoding;
-(id)SQLForEntityClass:(Class)arg1 ;
-(id)databaseStatementParameters;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)containsPropertyPredicate:(id)arg1 matchingValue:(id)arg2 usingComparison:(int)arg3 ;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(void)appendSQLToMutableString:(id)arg1 entityClass:(Class)arg2 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)SQLJoinClausesForClass:(Class)arg1 ;
-(BOOL)isDynamicForEntityClass:(Class)arg1 ;
-(id)spotlightPredicate;
-(BOOL)isTrueAlways;
-(BOOL)isFalseAlways;
@end

