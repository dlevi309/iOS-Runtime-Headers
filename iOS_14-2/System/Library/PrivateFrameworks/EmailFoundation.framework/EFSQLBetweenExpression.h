/*
* Generated on Thursday, January 14, 2021 at 2:22:49 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/EmailFoundation.framework/EmailFoundation
*/

#import <EmailFoundation/EFPair.h>
#import <libobjc.A.dylib/EFSQLBitExpressable.h>
#import <libobjc.A.dylib/EFSQLValueExpressable.h>

@protocol EFSQLExpressable;
@class NSString;

@interface EFSQLBetweenExpression : EFPair <EFSQLBitExpressable, EFSQLValueExpressable> {

	BOOL _between;
	id<EFSQLExpressable> _left;

}

@property (nonatomic,readonly) id<EFSQLExpressable> left;                     //@synthesize left=_left - In the implementation block
@property (nonatomic,readonly) BOOL between;                                  //@synthesize between=_between - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy,readonly) NSString * ef_SQLExpression; 
-(id<EFSQLExpressable>)left;
-(id)ef_SQLIsolatedExpression;
-(BOOL)between;
-(void)setColumnExpression:(id)arg1 ;
-(id)initWithLeft:(id)arg1 firstValue:(id)arg2 secondValue:(id)arg3 between:(BOOL)arg4 ;
-(NSString *)ef_SQLExpression;
-(void)ef_renderSQLExpressionInto:(id)arg1 ;
@end

