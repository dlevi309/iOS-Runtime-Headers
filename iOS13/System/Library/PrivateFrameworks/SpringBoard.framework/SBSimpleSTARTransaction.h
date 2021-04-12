/*
* Generated on Monday, March 1, 2021 at 2:35:59 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <BaseBoard/BSTransaction.h>

@interface SBSimpleSTARTransaction : BSTransaction {

	/*^block*/id _executeBlock;

}

@property (nonatomic,copy) id executeBlock;              //@synthesize executeBlock=_executeBlock - In the implementation block
+(id)simpleTransactionWithMilestones:(id)arg1 ;
-(void)_begin;
-(id)executeBlock;
-(void)setExecuteBlock:(id)arg1 ;
@end

