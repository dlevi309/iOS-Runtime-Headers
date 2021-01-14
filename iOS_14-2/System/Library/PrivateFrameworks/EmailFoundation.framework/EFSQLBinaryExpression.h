/*
* Generated on Thursday, January 14, 2021 at 2:22:49 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/EmailFoundation.framework/EmailFoundation
*/

#import <libobjc.A.dylib/EFSQLBitExpressable.h>
#import <libobjc.A.dylib/EFSQLValueExpressable.h>

@protocol EFSQLExpressable;
@class NSString;

@interface EFSQLBinaryExpression : NSObject <EFSQLBitExpressable, EFSQLValueExpressable> {

	id<EFSQLExpressable> _left;
	id<EFSQLExpressable> _right;
	unsigned long long _binaryOperator;

}

@property (nonatomic,readonly) id<EFSQLExpressable> left;                      //@synthesize left=_left - In the implementation block
@property (nonatomic,readonly) id<EFSQLExpressable> right;                     //@synthesize right=_right - In the implementation block
@property (nonatomic,readonly) unsigned long long binaryOperator;              //@synthesize binaryOperator=_binaryOperator - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy,readonly) NSString * ef_SQLExpression; 
-(id<EFSQLExpressable>)left;
-(id)ef_SQLIsolatedExpression;
-(unsigned long long)binaryOperator;
-(id<EFSQLExpressable>)right;
-(void)setColumnExpression:(id)arg1 ;
-(NSString *)ef_SQLExpression;
-(id)initWithLeft:(id)arg1 operator:(unsigned long long)arg2 right:(id)arg3 ;
-(void)ef_renderSQLExpressionInto:(id)arg1 ;
@end

