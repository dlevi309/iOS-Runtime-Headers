/*
* Generated on Monday, March 1, 2021 at 2:32:24 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/EmailFoundation.framework/EmailFoundation
*/

#import <libobjc.A.dylib/EFSQLExpressable.h>

@class NSString, NSArray;

@interface EFSQLAggregateFunction : NSObject <EFSQLExpressable> {

	NSString* _name;
	NSArray* _arguments;

}

@property (nonatomic,copy,readonly) NSString * name;                          //@synthesize name=_name - In the implementation block
@property (nonatomic,copy,readonly) NSArray * arguments;                      //@synthesize arguments=_arguments - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy,readonly) NSString * ef_SQLExpression; 
+(id)sum:(id)arg1 ;
+(id)count:(id)arg1 ;
+(id)min:(id)arg1 ;
+(id)max:(id)arg1 ;
+(id)avg:(id)arg1 ;
+(id)total:(id)arg1 ;
+(id)avgDistinct:(id)arg1 ;
+(id)countDistinct:(id)arg1 ;
+(id)groupConcat:(id)arg1 separator:(id)arg2 ;
+(id)maxDistinct:(id)arg1 ;
+(id)minDistinct:(id)arg1 ;
+(id)sumDistinct:(id)arg1 ;
+(id)totalDistinct:(id)arg1 ;
-(NSString *)name;
-(NSArray *)arguments;
-(NSString *)ef_SQLExpression;
-(id)initWithName:(id)arg1 arguments:(id)arg2 ;
-(id)ef_aggregateColumnExpression;
@end

