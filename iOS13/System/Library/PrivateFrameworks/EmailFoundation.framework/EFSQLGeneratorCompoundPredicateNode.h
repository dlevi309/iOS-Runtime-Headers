/*
* Generated on Monday, March 1, 2021 at 2:32:24 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/EmailFoundation.framework/EmailFoundation
*/

#import <libobjc.A.dylib/EFSQLGeneratorPredicateNode.h>

@class NSArray, NSString;

@interface EFSQLGeneratorCompoundPredicateNode : NSObject <EFSQLGeneratorPredicateNode> {

	unsigned long long _predicateType;
	NSArray* _childPredicates;

}

@property (nonatomic,readonly) unsigned long long predicateType;              //@synthesize predicateType=_predicateType - In the implementation block
@property (nonatomic,readonly) NSArray * childPredicates;                     //@synthesize childPredicates=_childPredicates - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSArray *)childPredicates;
-(id)sqlExpressableWithTableExpressions:(id)arg1 ;
-(unsigned long long)predicateType;
-(void)traverseTreeWithAliasMap:(id)arg1 ;
-(id)initWithPredicateType:(unsigned long long)arg1 childPredicates:(id)arg2 ;
@end

