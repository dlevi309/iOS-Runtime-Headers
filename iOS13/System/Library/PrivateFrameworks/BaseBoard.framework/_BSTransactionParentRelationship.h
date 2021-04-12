/*
* Generated on Monday, March 1, 2021 at 2:30:07 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/BaseBoard.framework/BaseBoard
*/


@class BSTransaction;

@interface _BSTransactionParentRelationship : NSObject {

	BSTransaction* _parentTransaction;
	unsigned long long _schedulingPolicy;

}

@property (nonatomic,readonly) BSTransaction * parentTransaction;                //@synthesize parentTransaction=_parentTransaction - In the implementation block
@property (nonatomic,readonly) unsigned long long schedulingPolicy;              //@synthesize schedulingPolicy=_schedulingPolicy - In the implementation block
-(id)initWithParentTransaction:(id)arg1 schedulingPolicy:(unsigned long long)arg2 ;
-(BSTransaction *)parentTransaction;
-(unsigned long long)schedulingPolicy;
@end

