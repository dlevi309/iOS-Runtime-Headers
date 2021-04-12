/*
* Generated on Monday, March 1, 2021 at 2:34:10 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
*/

#import <HealthDaemon/HealthDaemon-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface HDSQLiteOrderingTerm : NSObject <NSCopying> {

	BOOL _ascending;
	NSString* _expression;

}

@property (nonatomic,copy,readonly) NSString * expression;              //@synthesize expression=_expression - In the implementation block
@property (nonatomic,readonly) BOOL ascending;                          //@synthesize ascending=_ascending - In the implementation block
+(id)orderingTermWithProperty:(id)arg1 entityClass:(Class)arg2 ascending:(BOOL)arg3 ;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)ascending;
-(id)SQL;
-(NSString *)expression;
-(id)initWithExpression:(id)arg1 ascending:(BOOL)arg2 ;
@end

