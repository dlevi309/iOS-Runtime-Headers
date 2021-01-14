/*
* Generated on Thursday, January 14, 2021 at 2:22:49 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/EmailFoundation.framework/EmailFoundation
*/

#import <libobjc.A.dylib/EFSQLGeneratorPredicateNode.h>

@protocol EFSQLExpressable;
@class NSArray, NSString;

@interface EFSQLGeneratorComparisonPredicateNode : NSObject <EFSQLGeneratorPredicateNode> {

	NSArray* _keypathGenerators;
	unsigned long long _predicateOperator;
	id<EFSQLExpressable> _constValue;

}

@property (nonatomic,readonly) NSArray * keypathGenerators;                       //@synthesize keypathGenerators=_keypathGenerators - In the implementation block
@property (nonatomic,readonly) unsigned long long predicateOperator;              //@synthesize predicateOperator=_predicateOperator - In the implementation block
@property (nonatomic,readonly) id<EFSQLExpressable> constValue;                   //@synthesize constValue=_constValue - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(unsigned long long)predicateOperator;
-(id)sqlExpressableWithTableExpressions:(id)arg1 ;
-(void)traverseTreeWithAliasMap:(id)arg1 ;
-(NSArray *)keypathGenerators;
-(id<EFSQLExpressable>)constValue;
-(id)initWithKeypathGenerators:(id)arg1 predicateOperator:(unsigned long long)arg2 constValue:(id)arg3 ;
@end

