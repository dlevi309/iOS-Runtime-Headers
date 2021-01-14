/*
* Generated on Thursday, January 14, 2021 at 2:27:49 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/InputContext.framework/InputContext
*/

#import <libobjc.A.dylib/_ICPredictionSourcing.h>
#import <libobjc.A.dylib/_ICFeedbackAccepting.h>

@class NSCondition, NSString, PPQuickTypeBroker;

@interface _ICPortraitPredictionSource : NSObject <_ICPredictionSourcing, _ICFeedbackAccepting> {

	NSCondition* _ppBrokerLoadedCondition;
	NSString* _name;
	PPQuickTypeBroker* _ppBroker;

}

@property (retain) PPQuickTypeBroker * ppBroker;              //@synthesize ppBroker=_ppBroker - In the implementation block
-(void)provideFeedbackForString:(id)arg1 type:(unsigned char)arg2 style:(unsigned char)arg3 ;
-(BOOL)doesSupportTriggerSourceType:(unsigned char)arg1 ;
-(void)hibernate;
-(void)predictedItemsWithProactiveTrigger:(id)arg1 searchContext:(id)arg2 limit:(unsigned long long)arg3 timeoutInMilliseconds:(unsigned long long)arg4 handler:(/*^block*/id)arg5 ;
-(void)warmUp;
-(id)init;
-(id)_quickTypeQueryWithQuery:(id)arg1 limit:(unsigned long long)arg2 timeoutInMilliseconds:(unsigned long long)arg3 ;
-(void)searchForMeCardEmailAddressesWithTimeout:(unsigned long long)arg1 handler:(/*^block*/id)arg2 ;
-(id)_quickTypeQueryWithTrigger:(id)arg1 searchContext:(id)arg2 limit:(unsigned long long)arg3 timeoutInMilliseconds:(unsigned long long)arg4 errorWithExplanations:(id*)arg5 ;
-(void)propogateMetrics:(id)arg1 data:(id)arg2 ;
-(id)name;
-(BOOL)_populateError:(id*)arg1 withExplanations:(id)arg2 ;
-(void)searchForMeCardRegionsWithTimeout:(unsigned long long)arg1 handler:(/*^block*/id)arg2 ;
-(PPQuickTypeBroker *)ppBroker;
-(id)getPPBroker;
-(void)setPpBroker:(PPQuickTypeBroker *)arg1 ;
-(id)_makePPQuickTypeBroker;
@end

