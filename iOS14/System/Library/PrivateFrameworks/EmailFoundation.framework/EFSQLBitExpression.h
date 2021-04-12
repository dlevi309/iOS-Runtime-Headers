/*
* Generated on Thursday, January 14, 2021 at 2:22:49 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/EmailFoundation.framework/EmailFoundation
*/

#import <libobjc.A.dylib/EFSQLBitExpressable.h>
#import <libobjc.A.dylib/EFSQLValueExpressable.h>

@protocol EFSQLExpressable;
@class NSString;

@interface EFSQLBitExpression : NSObject <EFSQLBitExpressable, EFSQLValueExpressable> {

	id<EFSQLExpressable> _left;
	id<EFSQLExpressable> _right;
	unsigned long long _bitwiseOperator;

}

@property (nonatomic,readonly) id<EFSQLExpressable> right;                      //@synthesize right=_right - In the implementation block
@property (nonatomic,readonly) unsigned long long bitwiseOperator;              //@synthesize bitwiseOperator=_bitwiseOperator - In the implementation block
@property (nonatomic,retain) id<EFSQLExpressable> left;                         //@synthesize left=_left - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy,readonly) NSString * ef_SQLExpression; 
+(id)or:(id)arg1 with:(id)arg2 ;
+(id)and:(id)arg1 with:(id)arg2 ;
+(id)leftShift:(id)arg1 by:(id)arg2 ;
+(id)rightShift:(id)arg1 by:(id)arg2 ;
-(id<EFSQLExpressable>)left;
-(id)ef_SQLIsolatedExpression;
-(id<EFSQLExpressable>)right;
-(void)setColumnExpression:(id)arg1 ;
-(void)setLeft:(id<EFSQLExpressable>)arg1 ;
-(NSString *)ef_SQLExpression;
-(id)initWithLeft:(id)arg1 bitwiseOperator:(unsigned long long)arg2 right:(id)arg3 ;
-(unsigned long long)bitwiseOperator;
-(void)ef_renderSQLExpressionInto:(id)arg1 ;
@end

