/*
* Generated on Monday, March 1, 2021 at 2:32:23 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/EmailFoundation.framework/EmailFoundation
*/

#import <libobjc.A.dylib/EFSQLCompoundExpression.h>

@class NSArray, NSString;

@interface EFSQLAndExpression : NSObject <EFSQLCompoundExpression> {

	NSArray* _expressions;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy,readonly) NSString * ef_SQLExpression; 
@property (nonatomic,copy,readonly) NSArray * expressions;                    //@synthesize expressions=_expressions - In the implementation block
-(NSString *)ef_SQLExpression;
-(id)initWithExpressions:(id)arg1 ;
-(NSArray *)expressions;
@end

