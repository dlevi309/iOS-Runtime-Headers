/*
* Generated on Thursday, January 14, 2021 at 2:22:49 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/EmailFoundation.framework/EmailFoundation
*/

#import <libobjc.A.dylib/EFSQLValueExpressable.h>

@class NSString, NSArray;

@interface EFSQLAggregateFunction : NSObject <EFSQLValueExpressable> {

	NSString* _name;
	NSArray* _arguments;

}

@property (nonatomic,copy,readonly) NSString * name;                          //@synthesize name=_name - In the implementation block
@property (nonatomic,copy,readonly) NSArray * arguments;                      //@synthesize arguments=_arguments - In the implementation block
@property (nonatomic,copy,readonly) NSString * ef_SQLExpression; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)avg:(id)arg1 ;
+(id)total:(id)arg1 ;
+(id)count:(id)arg1 ;
+(id)avgDistinct:(id)arg1 ;
+(id)countDistinct:(id)arg1 ;
+(id)groupConcat:(id)arg1 separator:(id)arg2 ;
+(id)maxDistinct:(id)arg1 ;
+(id)minDistinct:(id)arg1 ;
+(id)sumDistinct:(id)arg1 ;
+(id)totalDistinct:(id)arg1 ;
+(id)min:(id)arg1 ;
+(id)sum:(id)arg1 ;
+(id)max:(id)arg1 ;
-(id)ef_SQLIsolatedExpression;
-(id)initWithName:(id)arg1 arguments:(id)arg2 ;
-(NSString *)name;
-(NSArray *)arguments;
-(NSString *)ef_SQLExpression;
-(void)ef_renderSQLExpressionInto:(id)arg1 ;
@end

