/*
* Generated on Monday, March 1, 2021 at 2:31:42 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
	unsigned _loggingID;

}
-(void)cancel;
-(void)_completed;
-(void)startFetchesIfNeeded;
-(void)_addFetcher:(id)arg1 atIndex:(unsigned long long)arg2 ;
-(unsigned long long)numberOfActiveFetches;
-(void)evaluateCompleteness;
-(id)_responsesRespectingPolicy;
-(id)initWithPolicy:(long long)arg1 configuration:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)appendFetcher:(id)arg1 ;
-(void)prependFetcher:(id)arg1 ;
-(void)doneAddingFetchers;
@end

