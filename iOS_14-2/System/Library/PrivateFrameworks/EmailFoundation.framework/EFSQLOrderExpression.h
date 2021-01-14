/*
* Generated on Thursday, January 14, 2021 at 2:22:49 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/EmailFoundation.framework/EmailFoundation
*/

#import <libobjc.A.dylib/EFSQLValueExpressable.h>

@protocol EFSQLExpressable;
@class NSString;

@interface EFSQLOrderExpression : NSObject <EFSQLValueExpressable> {

	BOOL _isAscending;
	id<EFSQLExpressable> _expression;

}

@property (nonatomic,readonly) id<EFSQLExpressable> expression;               //@synthesize expression=_expression - In the implementation block
@property (nonatomic,readonly) BOOL isAscending;                              //@synthesize isAscending=_isAscending - In the implementation block
@property (nonatomic,copy,readonly) NSString * ef_SQLExpression; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)ef_SQLIsolatedExpression;
-(id)initWithExpression:(id)arg1 ascending:(BOOL)arg2 ;
-(NSString *)ef_SQLExpression;
-(BOOL)isAscending;
-(id<EFSQLExpressable>)expression;
-(void)ef_renderSQLExpressionInto:(id)arg1 ;
@end

