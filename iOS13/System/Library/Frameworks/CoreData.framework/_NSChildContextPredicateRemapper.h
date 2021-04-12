/*
* Generated on Monday, March 1, 2021 at 2:30:26 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
*/


@class NSManagedObjectContext;

@interface _NSChildContextPredicateRemapper : NSObject {

	NSManagedObjectContext* _context;

}
-(id)init;
-(void)dealloc;
-(void)visitPredicate:(id)arg1 ;
-(void)visitPredicateExpression:(id)arg1 ;
-(id)initWithContext:(id)arg1 ;
-(id)createPredicateForFetchFromPredicate:(id)arg1 withContext:(id)arg2 ;
-(id)replacementValueForValue:(id)arg1 ;
@end

