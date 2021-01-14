/*
* Generated on Thursday, January 14, 2021 at 2:22:49 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/EmailFoundation.framework/EmailFoundation
*/

#import <libobjc.A.dylib/EFSQLCompoundExpression.h>

@class NSArray, NSString;

@interface EFSQLAndExpression : NSObject <EFSQLCompoundExpression> {

	NSArray* _expressions;

}

@property (nonatomic,copy,readonly) NSArray * expressions;                    //@synthesize expressions=_expressions - In the implementation block
@property (nonatomic,copy,readonly) NSString * ef_SQLExpression; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)combined:(id)arg1 ;
-(id)ef_SQLIsolatedExpression;
-(id)initWithExpressions:(id)arg1 ;
-(NSString *)ef_SQLExpression;
-(NSArray *)expressions;
-(void)ef_renderSQLExpressionInto:(id)arg1 ;
@end

