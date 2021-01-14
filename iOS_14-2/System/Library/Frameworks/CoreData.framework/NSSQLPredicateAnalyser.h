/*
* Generated on Thursday, January 14, 2021 at 2:21:11 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
*/

#import <libobjc.A.dylib/NSPredicateVisitor.h>

@class NSMutableArray;

@interface NSSQLPredicateAnalyser : NSObject <NSPredicateVisitor> {

	BOOL _compoundPredicate;
	NSMutableArray* _keys;
	NSMutableArray* _allModifierPredicates;
	NSMutableArray* _setExpressions;
	NSMutableArray* _subqueries;

}
-(id)init;
-(void)visitPredicate:(id)arg1 ;
-(id)allModifierPredicates;
-(void)visitPredicateExpression:(id)arg1 ;
-(id)setExpressions;
-(void)visitPredicateOperator:(id)arg1 ;
-(id)keypaths;
-(id)subqueries;
-(void)dealloc;
@end

