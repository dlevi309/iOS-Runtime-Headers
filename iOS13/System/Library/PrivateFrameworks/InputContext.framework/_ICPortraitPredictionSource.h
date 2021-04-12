/*
* Generated on Monday, March 1, 2021 at 2:34:16 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/InputContext.framework/InputContext
*/

#import <libobjc.A.dylib/_ICPredictionSourcing.h>
#import <libobjc.A.dylib/_ICFeedbackAccepting.h>

@class NSMutableArray, NSCondition, PPQuickTypeBroker;

@interface _ICPortraitPredictionSource : NSObject <_ICPredictionSourcing, _ICFeedbackAccepting> {

	NSMutableArray* _contacts;
	NSCondition* _ppBrokerLoadedCondition;
	PPQuickTypeBroker* _ppBroker;

}

@property (retain) PPQuickTypeBroker * ppBroker;              //@synthesize ppBroker=_ppBroker - In the implementation block
-(id)init;
-(void)warmUp;
-(void)hibernate;
-(void)provideFeedbackForString:(id)arg1 type:(unsigned char)arg2 style:(unsigned char)arg3 ;
-(void)predictedItemsWithProactiveTrigger:(id)arg1 searchContext:(id)arg2 limit:(unsigned long long)arg3 timeoutInMilliseconds:(unsigned long long)arg4 handler:(/*^block*/id)arg5 ;
-(void)searchForMeCardRegionsWithTimeout:(unsigned long long)arg1 handler:(/*^block*/id)arg2 ;
-(void)searchForMeCardEmailAddressesWithTimeout:(unsigned long long)arg1 handler:(/*^block*/id)arg2 ;
-(id)_makePPQuickTypeBroker;
-(void)setPpBroker:(PPQuickTypeBroker *)arg1 ;
-(PPQuickTypeBroker *)ppBroker;
-(id)getPPBroker;
-(BOOL)_populateError:(id*)arg1 withExplanations:(id)arg2 ;
-(id)_quickTypeQueryWithTrigger:(id)arg1 searchContext:(id)arg2 limit:(unsigned long long)arg3 timeoutInMilliseconds:(unsigned long long)arg4 errorWithExplanations:(id*)arg5 ;
-(id)_quickTypeQueryWithQuery:(id)arg1 limit:(unsigned long long)arg2 timeoutInMilliseconds:(unsigned long long)arg3 ;
@end

