/*
* Generated on Thursday, January 14, 2021 at 2:23:06 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/TipsCore.framework/TipsCore
*/

#import <TipsCore/TPSEventsProvider.h>

@class TPSDuetDataProvider;

@interface TPSDuetEventsProvider : TPSEventsProvider {

	TPSDuetDataProvider* _duetDataProvider;

}
+(unsigned long long)_limitForDeliveryDuetEvent:(id)arg1 ;
+(id)_predicateForDeliveryDuetEvent:(id)arg1 stateResults:(id)arg2 ;
+(id)_duetRegistrationIDForEventID:(id)arg1 ;
+(id)_eventSinceDateForContextualEvent:(id)arg1 ;
-(void)registerEventsForCallback:(id)arg1 ;
-(void)queryEvents:(id)arg1 ;
-(id)init;
-(void)_deregisterToGetNotifiedWithEvents:(id)arg1 ;
-(void)registerEventsForWakingCallback:(id)arg1 clientIdentifier:(id)arg2 ;
-(id)initWithDuetDataProvider:(id)arg1 ;
-(void)_registerToGetNotifiedWithEvents:(id)arg1 clientIdentifier:(id)arg2 ;
-(void)_queryDuetWithEvent:(id)arg1 limit:(unsigned long long)arg2 stateResults:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)deregisterEventsForCallback:(id)arg1 ;
-(void)_queryDuetWithEvents:(id)arg1 ;
@end

