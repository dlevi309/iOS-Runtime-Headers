/*
* Generated on Monday, March 1, 2021 at 2:30:07 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/BaseBoard.framework/BaseBoard
*/


@class BSTransaction;

@interface _BSTransactionChildRelationship : NSObject {

	BSTransaction* _childTransaction;
	unsigned long long _schedulingPolicy;

}

@property (nonatomic,readonly) BSTransaction * childTransaction;                 //@synthesize childTransaction=_childTransaction - In the implementation block
@property (nonatomic,readonly) unsigned long long schedulingPolicy;              //@synthesize schedulingPolicy=_schedulingPolicy - In the implementation block
-(unsigned long long)schedulingPolicy;
-(id)initWithChildTransaction:(id)arg1 schedulingPolicy:(unsigned long long)arg2 ;
-(BSTransaction *)childTransaction;
@end

