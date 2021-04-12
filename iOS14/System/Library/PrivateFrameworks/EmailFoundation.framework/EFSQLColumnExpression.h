/*
* Generated on Thursday, January 14, 2021 at 2:22:49 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/EmailFoundation.framework/EmailFoundation
*/

#import <libobjc.A.dylib/EFCacheable.h>
#import <libobjc.A.dylib/EFSQLValueExpressable.h>

@class NSString, EFSQLDisqualifiedColumnExpression;

@interface EFSQLColumnExpression : NSObject <EFCacheable, EFSQLValueExpressable> {

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
+(id)table:(id)arg1 column:(id)arg2 ;
+(id)column:(id)arg1 ;
+(id)allColumns;
-(id)is:(id)arg1 ;
-(id)ef_SQLIsolatedExpression;
-(NSString *)tableName;
-(id)notLike:(id)arg1 patternType:(unsigned long long)arg2 ;
-(id)isNotNull;
-(id)notBetween:(id)arg1 ;
-(id)beginsWith:(id)arg1 caseSensitive:(BOOL)arg2 ;
-(id)lessThan:(id)arg1 ;
-(id)in:(id)arg1 ;
-(EFSQLDisqualifiedColumnExpression *)disqualified;
-(id)lessThanEqualTo:(id)arg1 ;
-(id)notEqualTo:(id)arg1 ;
-(id)notGlob:(id)arg1 ;
-(id)doesNotMatchMask:(id)arg1 ;
-(id)glob:(id)arg1 ;
-(id)cachedSelf;
-(id)contains:(id)arg1 caseSensitive:(BOOL)arg2 ;
-(id)doesNotContain:(id)arg1 caseSensitive:(BOOL)arg2 ;
-(id)between:(id)arg1 ;
-(id)initWithName:(id)arg1 table:(id)arg2 ;
-(id)matchesMask:(id)arg1 ;
-(NSString *)name;
-(id)concatenate:(id)arg1 ;
-(id)initWithName:(id)arg1 ;
-(id)like:(id)arg1 patternType:(unsigned long long)arg2 ;
-(NSString *)ef_SQLExpression;
-(id)expressionForPredicateOperatorType:(unsigned long long)arg1 constValue:(id)arg2 ;
-(id)isNot:(id)arg1 ;
-(id)endsWith:(id)arg1 caseSensitive:(BOOL)arg2 ;
-(unsigned long long)hash;
-(id)notIn:(id)arg1 ;
-(id)greaterThanEqualTo:(id)arg1 ;
-(void)ef_renderSQLExpressionInto:(id)arg1 ;
-(id)like:(id)arg1 ;
-(id)plus:(id)arg1 ;
-(id)isNull;
-(id)minus:(id)arg1 ;
-(id)equalTo:(id)arg1 ;
-(id)greaterThan:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)notLike:(id)arg1 ;
@end

