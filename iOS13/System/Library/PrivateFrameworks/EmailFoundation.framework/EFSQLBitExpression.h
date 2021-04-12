/*
* Generated on Monday, March 1, 2021 at 2:32:23 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/EmailFoundation.framework/EmailFoundation
*/

#import <libobjc.A.dylib/EFSQLBitExpressable.h>
#import <libobjc.A.dylib/EFSQLExpressable.h>

@protocol EFSQLExpressable;
@class NSString;

@interface EFSQLBitExpression : NSObject <EFSQLBitExpressable, EFSQLExpressable> {

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
+(id)leftShift:(id)arg1 by:(id)arg2 ;
+(id)rightShift:(id)arg1 by:(id)arg2 ;
+(id)and:(id)arg1 with:(id)arg2 ;
+(id)or:(id)arg1 with:(id)arg2 ;
-(id<EFSQLExpressable>)left;
-(void)setLeft:(id<EFSQLExpressable>)arg1 ;
-(id<EFSQLExpressable>)right;
-(NSString *)ef_SQLExpression;
-(void)setColumnExpression:(id)arg1 ;
-(id)_stringForOperator:(unsigned long long)arg1 ;
-(id)initWithLeft:(id)arg1 bitwiseOperator:(unsigned long long)arg2 right:(id)arg3 ;
-(unsigned long long)bitwiseOperator;
@end

