/*
* Generated on Thursday, January 14, 2021 at 2:22:49 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/EmailFoundation.framework/EmailFoundation
*/

#import <libobjc.A.dylib/EFSQLValueExpressable.h>

@protocol EFSQLValueExpressable;
@class NSMapTable, NSString;

@interface EFSQLCaseExpression : NSObject <EFSQLValueExpressable> {

	id<EFSQLValueExpressable> _elseExpression;
	id<EFSQLValueExpressable> _baseExpression;
	NSMapTable* _whenExpressions;

}

@property (nonatomic,readonly) id<EFSQLValueExpressable> baseExpression;              //@synthesize baseExpression=_baseExpression - In the implementation block
@property (nonatomic,readonly) NSMapTable * whenExpressions;                          //@synthesize whenExpressions=_whenExpressions - In the implementation block
@property (nonatomic,retain) id<EFSQLValueExpressable> elseExpression;                //@synthesize elseExpression=_elseExpression - In the implementation block
@property (nonatomic,copy,readonly) NSString * ef_SQLExpression; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)ef_SQLIsolatedExpression;
-(id)objectForKeyedSubscript:(id)arg1 ;
-(id)init;
-(void)setObject:(id)arg1 forKeyedSubscript:(id)arg2 ;
-(NSString *)ef_SQLExpression;
-(id)initWithBaseExpression:(id)arg1 ;
-(id<EFSQLValueExpressable>)baseExpression;
-(NSMapTable *)whenExpressions;
-(id<EFSQLValueExpressable>)elseExpression;
-(void)setElseExpression:(id<EFSQLValueExpressable>)arg1 ;
-(void)ef_renderSQLExpressionInto:(id)arg1 ;
@end

