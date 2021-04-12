/*
* Generated on Thursday, January 14, 2021 at 2:21:52 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
*/


@interface FCTagSubscriptionOrderAssigner : NSObject {

	long long _initialOrder;
	long long _orderSpacing;

}

@property (nonatomic,readonly) long long initialOrder;              //@synthesize initialOrder=_initialOrder - In the implementation block
@property (nonatomic,readonly) long long orderSpacing;              //@synthesize orderSpacing=_orderSpacing - In the implementation block
-(id)_assignOrderToSubscriptions:(id)arg1 inOpenEndRangeWithPreviousValue:(long long)arg2 ;
-(id)init;
-(id)_assignOrderToSubscriptionsInOpenRange:(id)arg1 ;
-(id)_assignOrderToSubscriptions:(id)arg1 withInitialOrder:(long long)arg2 orderSpacing:(long long)arg3 ;
-(id)initWithInitialOrder:(long long)arg1 orderSpacing:(long long)arg2 ;
-(long long)initialOrder;
-(id)assignOrderToTagSubscriptions:(id)arg1 ;
-(long long)orderSpacing;
-(id)_assignOrderToSubscriptions:(id)arg1 inOpenStartRangeWithNextValue:(long long)arg2 ;
-(id)_assignOrderToSubscriptions:(id)arg1 inClosedRangeWithPreviousValue:(long long)arg2 nextValue:(long long)arg3 ;
@end

