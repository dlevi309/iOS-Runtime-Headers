/*
* Generated on Thursday, January 14, 2021 at 2:22:49 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(unsigned long long)predicateType;
-(id)sqlExpressableWithTableExpressions:(id)arg1 ;
-(void)traverseTreeWithAliasMap:(id)arg1 ;
-(id)initWithPredicateType:(unsigned long long)arg1 childPredicates:(id)arg2 ;
@end

