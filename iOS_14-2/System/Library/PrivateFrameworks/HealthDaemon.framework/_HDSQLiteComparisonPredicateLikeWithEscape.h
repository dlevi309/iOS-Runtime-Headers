/*
* Generated on Thursday, January 14, 2021 at 2:25:16 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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

