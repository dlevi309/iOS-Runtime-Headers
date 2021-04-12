/*
* Generated on Thursday, January 14, 2021 at 2:22:49 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/EmailFoundation.framework/EmailFoundation
*/

#import <libobjc.A.dylib/EFSQLValueExpressable.h>

@protocol EFSQLValueExpressable;
@class NSString;

@interface _EFSQLAliasedExpression : NSObject <EFSQLValueExpressable> {

	id<EFSQLValueExpressable> _expression;
	NSString* _alias;

}

@property (nonatomic,readonly) id<EFSQLValueExpressable> expression;              //@synthesize expression=_expression - In the implementation block
@property (nonatomic,copy,readonly) NSString * alias;                             //@synthesize alias=_alias - In the implementation block
@property (nonatomic,copy,readonly) NSString * ef_SQLExpression; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)ef_SQLIsolatedExpression;
-(NSString *)alias;
-(NSString *)ef_SQLExpression;
-(id)initWithExpression:(id)arg1 alias:(id)arg2 ;
-(id<EFSQLValueExpressable>)expression;
-(void)ef_renderSQLExpressionInto:(id)arg1 ;
@end

