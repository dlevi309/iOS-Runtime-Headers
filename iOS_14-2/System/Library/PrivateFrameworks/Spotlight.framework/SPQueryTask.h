/*
* Generated on Thursday, January 14, 2021 at 2:26:22 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
	NSArray* _showMoreInAppInfo;
	BOOL _sentSuggestions;
	Ai _updatesDisabled;
	A{WaitingResults_s}* _deferredUpdate;
	BOOL _forceStableResults;
	BOOL _finished;
	BOOL _live;
	int _state;
	NSObject*<SPQueryTaskDelegate> _delegate;
	unsigned long long _whyQuery;
	unsigned long long _queryKind;
	unsigned long long _maxTopHitAppResults;
	NSString* _rankingDebugLog;
	NSString* _sessionEntityString;
	NSArray* _sections;
	long long _maxUISuggestions;

}

@property (nonatomic,retain) NSString * rankingDebugLog;                                  //@synthesize rankingDebugLog=_rankingDebugLog - In the implementation block
@property (nonatomic,retain) NSString * sessionEntityString;                              //@synthesize sessionEntityString=_sessionEntityString - In the implementation block
@property (readonly) NSObject*<OS_dispatch_queue> queryProcessor;                         //@synthesize queryProcessor=_queryProcessor - In the implementation block
@property (nonatomic,retain) NSArray * sections;                                          //@synthesize sections=_sections - In the implementation block
@property (assign,nonatomic) int state;                                                   //@synthesize state=_state - In the implementation block
@property (assign,nonatomic) BOOL finished;                                               //@synthesize finished=_finished - In the implementation block
@property (assign,nonatomic) BOOL live;                                                   //@synthesize live=_live - In the implementation block
@property (assign,nonatomic) int unsafeState;                                             //@synthesize unsafeState=_unsafeState - In the implementation block
@property (retain) NSArray * showMoreInAppInfo;                                           //@synthesize showMoreInAppInfo=_showMoreInAppInfo - In the implementation block
@property (assign) long long maxUISuggestions;                                            //@synthesize maxUISuggestions=_maxUISuggestions - In the implementation block
@property (assign,nonatomic,__weak) NSObject*<SPQueryTaskDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) BOOL forceStableResults;                                     //@synthesize forceStableResults=_forceStableResults - In the implementation block
@property (readonly) NSString * searchString; 
@property (assign,nonatomic) unsigned long long whyQuery;                                 //@synthesize whyQuery=_whyQuery - In the implementation block
@property (assign,nonatomic) unsigned long long queryKind;                                //@synthesize queryKind=_queryKind - In the implementation block
@property (assign,nonatomic) unsigned long long maxTopHitAppResults;                      //@synthesize maxTopHitAppResults=_maxTopHitAppResults - In the implementation block
+(void)initialize;
-(void)setSections:(NSArray *)arg1 ;
-(void)clear;
-(BOOL)live;
-(BOOL)finished;
-(void)setForceStableResults:(BOOL)arg1 ;
-(id)init;
-(NSObject*<SPQueryTaskDelegate>)delegate;
-(void)start;
-(void)setWhyQuery:(unsigned long long)arg1 ;
-(NSArray *)sections;
-(void)enableUpdates;
-(BOOL)forceStableResults;
-(void)setDelegate:(NSObject*<SPQueryTaskDelegate>)arg1 ;
-(void)disableUpdates;
-(void)setQueryKind:(unsigned long long)arg1 ;
-(void)setLive:(BOOL)arg1 ;
-(void)setFinished:(BOOL)arg1 ;
-(unsigned long long)whyQuery;
-(void)setState:(int)arg1 ;
-(NSString *)rankingDebugLog;
-(int)state;
-(NSString *)sessionEntityString;
-(unsigned long long)queryKind;
-(long long)maxUISuggestions;
-(void)cancel;
-(void)setSessionEntityString:(NSString *)arg1 ;
-(void)setMaxUISuggestions:(long long)arg1 ;
-(NSString *)searchString;
-(void)setMaxTopHitAppResults:(unsigned long long)arg1 ;
-(NSObject*<OS_dispatch_queue>)queryProcessor;
-(void)updateResultsThroughDelegate:(BOOL)arg1 state:(int)arg2 sections:(id)arg3 ;
-(void)pushAndPostUpdates;
-(void)postSearchAgentUpdatedResultsToDelegate:(id)arg1 ;
-(BOOL)readyToUpdate;
-(void)updateResultsThroughDelegate:(BOOL)arg1 state:(int)arg2 unchanged:(BOOL)arg3 sections:(id)arg4 ;
-(int)unsafeState;
-(void)setUnsafeState:(int)arg1 ;
-(NSArray *)showMoreInAppInfo;
-(void)setShowMoreInAppInfo:(NSArray *)arg1 ;
-(unsigned long long)maxTopHitAppResults;
-(void)setRankingDebugLog:(NSString *)arg1 ;
@end

