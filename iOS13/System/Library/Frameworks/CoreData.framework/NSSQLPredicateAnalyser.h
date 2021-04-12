/*
* Generated on Monday, March 1, 2021 at 2:30:26 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)dealloc;
-(void)visitPredicate:(id)arg1 ;
-(void)visitPredicateExpression:(id)arg1 ;
-(void)visitPredicateOperator:(id)arg1 ;
-(id)allModifierPredicates;
-(id)keypaths;
-(id)subqueries;
-(id)setExpressions;
@end

