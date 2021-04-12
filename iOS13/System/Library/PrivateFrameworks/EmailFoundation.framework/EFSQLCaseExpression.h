/*
* Generated on Monday, March 1, 2021 at 2:32:23 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/EmailFoundation.framework/EmailFoundation
*/

#import <libobjc.A.dylib/EFSQLExpressable.h>

@protocol EFSQLExpressable;
@class NSMapTable, NSString;

@interface EFSQLCaseExpression : NSObject <EFSQLExpressable> {

	id<EFSQLExpressable> _elseExpression;
	id<EFSQLExpressable> _baseExpression;
	NSMapTable* _whenExpressions;

}

@property (nonatomic,readonly) id<EFSQLExpressable> baseExpression;              //@synthesize baseExpression=_baseExpression - In the implementation block
@property (nonatomic,readonly) NSMapTable * whenExpressions;                     //@synthesize whenExpressions=_whenExpressions - In the implementation block
@property (nonatomic,retain) id<EFSQLExpressable> elseExpression;                //@synthesize elseExpression=_elseExpression - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy,readonly) NSString * ef_SQLExpression; 
-(id)init;
-(id)objectForKeyedSubscript:(id)arg1 ;
-(void)setObject:(id)arg1 forKeyedSubscript:(id)arg2 ;
-(NSString *)ef_SQLExpression;
-(id)initWithBaseExpression:(id)arg1 ;
-(NSMapTable *)whenExpressions;
-(id<EFSQLExpressable>)baseExpression;
-(id<EFSQLExpressable>)elseExpression;
-(void)setElseExpression:(id<EFSQLExpressable>)arg1 ;
@end

