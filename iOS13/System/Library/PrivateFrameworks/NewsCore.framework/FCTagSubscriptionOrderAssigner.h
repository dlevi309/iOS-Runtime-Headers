/*
* Generated on Monday, March 1, 2021 at 2:32:42 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
*/


@interface FCTagSubscriptionOrderAssigner : NSObject {

	long long _initialOrder;
	long long _orderSpacing;

}

@property (nonatomic,readonly) long long initialOrder;              //@synthesize initialOrder=_initialOrder - In the implementation block
@property (nonatomic,readonly) long long orderSpacing;              //@synthesize orderSpacing=_orderSpacing - In the implementation block
-(id)init;
-(id)initWithInitialOrder:(long long)arg1 orderSpacing:(long long)arg2 ;
-(id)assignOrderToTagSubscriptions:(id)arg1 ;
-(id)_assignOrderToSubscriptions:(id)arg1 inClosedRangeWithPreviousValue:(long long)arg2 nextValue:(long long)arg3 ;
-(id)_assignOrderToSubscriptions:(id)arg1 inOpenEndRangeWithPreviousValue:(long long)arg2 ;
-(id)_assignOrderToSubscriptions:(id)arg1 inOpenStartRangeWithNextValue:(long long)arg2 ;
-(id)_assignOrderToSubscriptionsInOpenRange:(id)arg1 ;
-(id)_assignOrderToSubscriptions:(id)arg1 withInitialOrder:(long long)arg2 orderSpacing:(long long)arg3 ;
-(long long)orderSpacing;
-(long long)initialOrder;
@end

