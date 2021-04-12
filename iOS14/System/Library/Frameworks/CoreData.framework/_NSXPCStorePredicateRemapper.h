/*
* Generated on Thursday, January 14, 2021 at 2:21:11 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
*/

#import <libobjc.A.dylib/NSPredicateVisitor.h>

@interface _NSXPCStorePredicateRemapper : NSObject <NSPredicateVisitor>
+(void)initialize;
+(id)defaultInstance;
-(id)init;
-(void)visitPredicate:(id)arg1 ;
-(void)visitPredicateExpression:(id)arg1 ;
-(void)visitPredicateOperator:(id)arg1 ;
-(id)createPredicateForFetchFromPredicate:(id)arg1 withContext:(id)arg2 ;
-(id)createPredicateForFetchFromPredicate:(id)arg1 ;
-(void)dealloc;
@end

