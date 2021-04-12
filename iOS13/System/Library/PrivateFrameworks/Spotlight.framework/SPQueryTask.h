/*
* Generated on Monday, March 1, 2021 at 2:34:11 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Spotlight.framework/Spotlight
*/


@protocol OS_dispatch_queue, SPQueryTaskDelegate;
@class NSObject, SPQueryResponse, NSArray, NSString;

@interface SPQueryTask : NSObject {

	NSObject*<OS_dispatch_queue> _queryProcessor;
	NSObject*<OS_dispatch_queue> _dispatchQueue;
	SPQueryResponse* _delayedResponse;
	int _unsafeState;
	NSArray* _supportedAppScopes;
	BOOL _sentSuggestions;
	Ai _updatesDisabled;
	A{WaitingResults_s}* _deferredUpdate;
	BOOL _forceStableResults;
	BOOL _finished;
	BOOL _live;
	int _state;
	NSObject*<SPQueryTaskDelegate> _delegate;
	unsigned long long _whyQuery;
	unsigned long long _maxTopHitAppResults;
	NSString* _rankingDebugLog;
	NSString* _sessionEntityString;
	NSArray* _sections;

}

@property (nonatomic,retain) NSString * rankingDebugLog;                                  //@synthesize rankingDebugLog=_rankingDebugLog - In the implementation block
@property (nonatomic,readonly) NSString * suggestionsDebugLog; 
@property (nonatomic,retain) NSString * sessionEntityString;                              //@synthesize sessionEntityString=_sessionEntityString - In the implementation block
@property (readonly) NSObject*<OS_dispatch_queue> queryProcessor;                         //@synthesize queryProcessor=_queryProcessor - In the implementation block
@property (nonatomic,retain) NSArray * sections;                                          //@synthesize sections=_sections - In the implementation block
@property (assign,nonatomic) int state;                                                   //@synthesize state=_state - In the implementation block
@property (assign,nonatomic) BOOL finished;                                               //@synthesize finished=_finished - In the implementation block
@property (assign,nonatomic) BOOL live;                                                   //@synthesize live=_live - In the implementation block
@property (nonatomic,readonly) int unsafeState;                                           //@synthesize unsafeState=_unsafeState - In the implementation block
@property (assign,nonatomic,__weak) NSObject*<SPQueryTaskDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) BOOL forceStableResults;                                     //@synthesize forceStableResults=_forceStableResults - In the implementation block
@property (readonly) NSString * searchString; 
@property (assign,nonatomic) unsigned long long whyQuery;                                 //@synthesize whyQuery=_whyQuery - In the implementation block
@property (assign,nonatomic) unsigned long long maxTopHitAppResults;                      //@synthesize maxTopHitAppResults=_maxTopHitAppResults - In the implementation block
+(void)initialize;
-(id)init;
-(void)clear;
-(NSObject*<SPQueryTaskDelegate>)delegate;
-(void)setDelegate:(NSObject*<SPQueryTaskDelegate>)arg1 ;
-(void)cancel;
-(void)disableUpdates;
-(void)enableUpdates;
-(void)start;
-(void)setFinished:(BOOL)arg1 ;
-(BOOL)finished;
-(int)state;
-(void)setState:(int)arg1 ;
-(NSArray *)sections;
-(void)setSections:(NSArray *)arg1 ;
-(NSString *)searchString;
-(NSString *)sessionEntityString;
-(void)setLive:(BOOL)arg1 ;
-(BOOL)live;
-(unsigned long long)whyQuery;
-(void)setWhyQuery:(unsigned long long)arg1 ;
-(NSObject*<OS_dispatch_queue>)queryProcessor;
-(void)updateResultsThroughDelegate:(BOOL)arg1 state:(int)arg2 sections:(id)arg3 ;
-(void)startAtUIPriority;
-(void)setSessionEntityString:(NSString *)arg1 ;
-(NSString *)rankingDebugLog;
-(void)setRankingDebugLog:(NSString *)arg1 ;
-(void)pushAndPostUpdates;
-(void)postSearchAgentUpdatedResultsToDelegate:(id)arg1 ;
-(BOOL)readyToUpdate;
-(void)updateResultsThroughDelegate:(BOOL)arg1 state:(int)arg2 unchanged:(BOOL)arg3 sections:(id)arg4 ;
-(BOOL)_shouldPromptUserToOpenTTR;
-(id)unsafeCombinedSuggestions;
-(NSString *)suggestionsDebugLog;
-(BOOL)forceStableResults;
-(void)setForceStableResults:(BOOL)arg1 ;
-(unsigned long long)maxTopHitAppResults;
-(void)setMaxTopHitAppResults:(unsigned long long)arg1 ;
-(int)unsafeState;
@end

