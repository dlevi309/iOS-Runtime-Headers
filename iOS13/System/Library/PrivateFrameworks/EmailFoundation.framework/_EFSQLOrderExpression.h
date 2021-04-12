/*
* Generated on Monday, March 1, 2021 at 2:32:24 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/EmailFoundation.framework/EmailFoundation
*/

#import <libobjc.A.dylib/EFSQLExpressable.h>

@protocol EFSQLExpressable;
@class NSString;

@interface _EFSQLOrderExpression : NSObject <EFSQLExpressable> {

	BOOL _isAscending;
	id<EFSQLExpressable> _expression;

}

@property (nonatomic,readonly) id<EFSQLExpressable> expression;               //@synthesize expression=_expression - In the implementation block
@property (nonatomic,readonly) BOOL isAscending;                              //@synthesize isAscending=_isAscending - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy,readonly) NSString * ef_SQLExpression; 
-(id<EFSQLExpressable>)expression;
-(BOOL)isAscending;
-(NSString *)ef_SQLExpression;
-(id)initWithExpression:(id)arg1 ascending:(BOOL)arg2 ;
@end

