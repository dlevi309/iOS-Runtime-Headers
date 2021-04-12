/*
* Generated on Monday, March 1, 2021 at 2:32:24 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/EmailFoundation.framework/EmailFoundation
*/

#import <libobjc.A.dylib/EFSQLExpressable.h>

@protocol EFSQLExpressable;
@class NSString;

@interface _EFSQLAliasedExpression : NSObject <EFSQLExpressable> {

	id<EFSQLExpressable> _expression;
	NSString* _alias;

}

@property (nonatomic,readonly) id<EFSQLExpressable> expression;               //@synthesize expression=_expression - In the implementation block
@property (nonatomic,copy,readonly) NSString * alias;                         //@synthesize alias=_alias - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy,readonly) NSString * ef_SQLExpression; 
-(id<EFSQLExpressable>)expression;
-(NSString *)alias;
-(NSString *)ef_SQLExpression;
-(id)initWithExpression:(id)arg1 alias:(id)arg2 ;
@end

