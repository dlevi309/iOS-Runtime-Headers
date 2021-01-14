/*
* Generated on Thursday, January 14, 2021 at 2:27:30 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ContactsAutocomplete.framework/ContactsAutocomplete
*/


@interface CNAutocompleteResultTracing : NSObject {

	unsigned long long _countOfRecentsResults;
	unsigned long long _countOfContactsResults;
	unsigned long long _countOfServerResults;
	double _startTime;
	double _localLatency;
	double _serverLatency;
	BOOL _waitingForRecentsResults;
	BOOL _waitingForContactsResults;
	BOOL _waitingForServerResults;

}

@property (assign) unsigned long long countOfRecentsResults; 
@property (assign) unsigned long long countOfContactsResults; 
@property (assign) unsigned long long countOfServerResults; 
+(id)resultTracer;
-(id)init;
-(void)logLocalLatencyIfReady;
-(void)sendMessageTracersIfReady;
-(void)logServerLatency;
-(void)sendMessageTracers;
-(void)sendLocalResultsTracer;
-(void)sendServerResultsTracer;
-(void)expectRecentsResults:(BOOL)arg1 ;
-(void)expectContactsResults:(BOOL)arg1 ;
-(void)expectServerResults:(BOOL)arg1 ;
-(unsigned long long)countOfRecentsResults;
-(void)setCountOfRecentsResults:(unsigned long long)arg1 ;
-(unsigned long long)countOfContactsResults;
-(void)setCountOfContactsResults:(unsigned long long)arg1 ;
-(unsigned long long)countOfServerResults;
-(void)setCountOfServerResults:(unsigned long long)arg1 ;
@end

