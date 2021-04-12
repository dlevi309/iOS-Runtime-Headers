/*
* Generated on Thursday, January 14, 2021 at 2:25:16 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)SQL;
-(id)init;
-(id)initWithExpression:(id)arg1 ascending:(BOOL)arg2 ;
-(id)description;
-(BOOL)ascending;
-(NSString *)expression;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

