/*
* Generated on Monday, March 1, 2021 at 2:33:47 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AppPredictionInternal.framework/AppPredictionInternal
*/


@class NSArray, NSNumber;

@interface ATXLazyOperator : NSObject {

	NSArray* _operands;
	NSNumber* _executedResult;

}

@property (nonatomic,retain) NSArray * operands;                     //@synthesize operands=_operands - In the implementation block
@property (nonatomic,retain) NSNumber * executedResult;              //@synthesize executedResult=_executedResult - In the implementation block
-(double)execute;
-(NSArray *)operands;
-(void)setOperands:(NSArray *)arg1 ;
-(double)opExecute;
-(NSNumber *)executedResult;
-(void)setExecutedResult:(NSNumber *)arg1 ;
@end

