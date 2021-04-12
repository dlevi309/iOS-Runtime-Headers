/*
* Generated on Monday, March 1, 2021 at 2:34:09 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
*/

#import <HealthDaemon/HDSQLiteComparisonPredicate.h>

@class NSString;

@interface _HDSQLiteComparisonPredicateLikeWithEscape : HDSQLiteComparisonPredicate {

	NSString* _escapeCharacter;

}

@property (nonatomic,readonly) NSString * escapeCharacter;              //@synthesize escapeCharacter=_escapeCharacter - In the implementation block
-(id)SQLForEntityClass:(Class)arg1 ;
-(NSString *)escapeCharacter;
-(id)initWithProperty:(id)arg1 value:(id)arg2 escapeCharacter:(id)arg3 ;
@end

