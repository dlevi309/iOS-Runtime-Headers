/*
* Generated on Thursday, January 14, 2021 at 2:27:49 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/InputContext.framework/InputContext
*/

#import <libobjc.A.dylib/_ICPredictionSourcing.h>
#import <libobjc.A.dylib/_ICFeedbackAccepting.h>

@class NSCondition, NSMutableArray, NSArray, NSString, PSGInputSuggester;

@interface _ICInputSuggesterPredictionSource : NSObject <_ICPredictionSourcing, _ICFeedbackAccepting> {

	NSCondition* _peopleSuggestorLoadedCondition;
	NSMutableArray* _offered;
	NSArray* _prevOffered;
	NSString* _name;
	PSGInputSuggester* _inputSuggester;

}

@property (retain) PSGInputSuggester * inputSuggester;              //@synthesize inputSuggester=_inputSuggester - In the implementation block
-(void)provideFeedbackForString:(id)arg1 type:(unsigned char)arg2 style:(unsigned char)arg3 ;
-(BOOL)doesSupportTriggerSourceType:(unsigned char)arg1 ;
-(void)hibernate;
-(void)predictedItemsWithProactiveTrigger:(id)arg1 searchContext:(id)arg2 limit:(unsigned long long)arg3 timeoutInMilliseconds:(unsigned long long)arg4 handler:(/*^block*/id)arg5 ;
-(void)warmUp;
-(PSGInputSuggester *)inputSuggester;
-(id)init;
-(void)logImpressionForPredictedValues:(id)arg1 ;
-(void)searchForMeCardEmailAddressesWithTimeout:(unsigned long long)arg1 handler:(/*^block*/id)arg2 ;
-(id)_quickTypeQueryWithTrigger:(id)arg1 searchContext:(id)arg2 limit:(unsigned long long)arg3 timeoutInMilliseconds:(unsigned long long)arg4 errorWithExplanations:(id*)arg5 ;
-(id)_getPredictedItemFromStructuredInfo:(id)arg1 ;
-(void)logEngagementForPredictedValues:(id)arg1 position:(unsigned long long)arg2 ;
-(void)propogateMetrics:(id)arg1 data:(id)arg2 ;
-(id)name;
-(BOOL)_populateError:(id*)arg1 withExplanations:(id)arg2 ;
-(id)requestFromTrigger:(id)arg1 searchContext:(id)arg2 ;
-(void)searchForMeCardRegionsWithTimeout:(unsigned long long)arg1 handler:(/*^block*/id)arg2 ;
-(id)getPeopleSuggester;
-(void)setInputSuggester:(PSGInputSuggester *)arg1 ;
@end

