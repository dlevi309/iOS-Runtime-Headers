/*
* Generated on Thursday, January 14, 2021 at 2:22:46 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/LinkPresentation.framework/LinkPresentation
*/


@class LPFetcherConfiguration, NSMutableArray;

@interface LPFetcherGroup : NSObject {

	LPFetcherConfiguration* _configuration;
	long long _responsePolicy;
	/*^block*/id _completionHandler;
	NSMutableArray* _tasks;
	BOOL _doneAddingFetchers;
	BOOL _done;
	BOOL _cancelled;
	unsigned _loggingID;

}
-(void)_completed;
-(void)startFetchesIfNeeded;
-(void)_addFetcher:(id)arg1 atIndex:(unsigned long long)arg2 ;
-(unsigned long long)numberOfActiveFetches;
-(void)evaluateCompleteness;
-(id)_responsesRespectingPolicy;
-(id)initWithPolicy:(long long)arg1 configuration:(id)arg2 description:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)appendFetcher:(id)arg1 ;
-(void)prependFetcher:(id)arg1 ;
-(void)doneAddingFetchers;
-(void)cancel;
@end

