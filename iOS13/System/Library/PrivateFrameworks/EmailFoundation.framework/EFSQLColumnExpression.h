/*
* Generated on Monday, March 1, 2021 at 2:32:23 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/EmailFoundation.framework/EmailFoundation
*/

#import <libobjc.A.dylib/EFCacheable.h>
#import <libobjc.A.dylib/EFSQLExpressable.h>

@class NSString, EFSQLDisqualifiedColumnExpression;

@interface EFSQLColumnExpression : NSObject <EFCacheable, EFSQLExpressable> {

	NSString* _name;
	NSString* _tableName;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy,readonly) NSString * name;                                          //@synthesize name=_name - In the implementation block
@property (nonatomic,copy,readonly) NSString * tableName;                                     //@synthesize tableName=_tableName - In the implementation block
@property (nonatomic,readonly) EFSQLDisqualifiedColumnExpression * disqualified; 
@property (nonatomic,copy,readonly) NSString * ef_SQLExpression; 
+(id)column:(id)arg1 ;
+(id)table:(id)arg1 column:(id)arg2 ;
+(id)allColumns;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)name;
-(id)initWithName:(id)arg1 ;
-(id)like:(id)arg1 ;
-(id)plus:(id)arg1 ;
-(NSString *)tableName;
-(id)isNull;
-(id)concatenate:(id)arg1 ;
-(NSString *)ef_SQLExpression;
-(id)equalTo:(id)arg1 ;
-(id)beginsWith:(id)arg1 caseSensitive:(BOOL)arg2 ;
-(id)endsWith:(id)arg1 caseSensitive:(BOOL)arg2 ;
-(id)contains:(id)arg1 caseSensitive:(BOOL)arg2 ;
-(id)doesNotContain:(id)arg1 caseSensitive:(BOOL)arg2 ;
-(id)in:(id)arg1 ;
-(EFSQLDisqualifiedColumnExpression *)disqualified;
-(id)inSelect:(id)arg1 ;
-(id)notIn:(id)arg1 ;
-(id)cachedSelf;
-(id)initWithName:(id)arg1 table:(id)arg2 ;
-(id)glob:(id)arg1 ;
-(id)like:(id)arg1 patternType:(unsigned long long)arg2 ;
-(id)notGlob:(id)arg1 ;
-(id)notLike:(id)arg1 patternType:(unsigned long long)arg2 ;
-(id)is:(id)arg1 ;
-(id)isNot:(id)arg1 ;
-(id)notEqualTo:(id)arg1 ;
-(id)greaterThan:(id)arg1 ;
-(id)greaterThanEqualTo:(id)arg1 ;
-(id)lessThan:(id)arg1 ;
-(id)lessThanEqualTo:(id)arg1 ;
-(id)notLike:(id)arg1 ;
-(id)notInSelect:(id)arg1 ;
-(id)between:(id)arg1 ;
-(id)notBetween:(id)arg1 ;
-(id)isNotNull;
-(id)minus:(id)arg1 ;
-(id)matchesMask:(id)arg1 ;
-(id)doesNotMatchMask:(id)arg1 ;
-(id)expressionForPredicateOperatorType:(unsigned long long)arg1 constValue:(id)arg2 ;
@end

