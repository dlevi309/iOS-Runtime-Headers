/*
* Generated on Thursday, January 14, 2021 at 2:22:49 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/EmailFoundation.framework/EmailFoundation
*/


@interface EFParenthesizedSQLExpression : NSObject {

	id _expressable;

}
+(id)parenthesizedValueExpressable:(id)arg1 ;
+(id)parenthesizedValueCollectionExpressable:(id)arg1 ;
-(id)ef_SQLIsolatedExpression;
-(BOOL)respondsToSelector:(SEL)arg1 ;
-(id)ef_SQLExpression;
-(id)initWithExpressable:(id)arg1 ;
-(void)ef_renderSQLExpressionInto:(id)arg1 ;
-(void)ef_renderSQLExpressionInto:(id)arg1 conjoiner:(id)arg2 ;
@end

