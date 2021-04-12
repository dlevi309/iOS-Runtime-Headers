/*
* Generated on Thursday, January 14, 2021 at 2:26:44 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ProactiveInputPredictions.framework/ProactiveInputPredictions
*/


@protocol OS_dispatch_queue;
@class PSGInputSuggesterClient, NSObject, PSGInputSuggestionsRequest, _PASTuple2;

@interface PSGInputSuggester : NSObject {

	PSGInputSuggesterClient* _client;
	NSObject*<OS_dispatch_queue> _lastPredictionQueue;
	PSGInputSuggestionsRequest* _lastRequest;
	_PASTuple2* _lastPrediction;
	_PASTuple2* _lastImpression;

}
+(id)sharedInstance;
-(void)hibernate;
-(void)inputSuggestionsWithRequest:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)warmUp;
-(void)logMetricForEventType:(unsigned char)arg1 externalMetadata:(id)arg2 predictedValues:(id)arg3 ;
-(void)_reportSpeedMetricWithData:(id)arg1 ;
-(void)logMetricForEventType:(unsigned char)arg1 externalMetadata:(id)arg2 request:(id)arg3 responseItems:(id)arg4 ;
-(void)warmUpForLocaleIdentifier:(id)arg1 ;
-(void)logTimeoutForRequest:(id)arg1 ;
-(id)initWithClient:(id)arg1 ;
@end

