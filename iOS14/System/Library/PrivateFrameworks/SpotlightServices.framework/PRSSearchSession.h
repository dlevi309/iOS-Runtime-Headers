/*
* Generated on Thursday, January 14, 2021 at 2:26:10 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpotlightServices.framework/SpotlightServices
*/

#import <libobjc.A.dylib/PARSessionDelegate.h>

@protocol PRSSessionController, OS_dispatch_queue, OS_dispatch_source;
@class NSMutableArray, NSString, NSDictionary, PRSFeedbackProxy, NSObject, NSArray, PARSession, NSSet, SSPlistDataReader;

@interface PRSSearchSession : NSObject <PARSessionDelegate> {

	NSMutableArray* _feedback;
	id<PRSSessionController> _client;
	double _lastQueryTime;
	NSString* _queryLanguage;
	NSDictionary* _sqfData;
	NSDictionary* _serverFeatures;
	NSString* _userAgent;
	BOOL _parsecFeedbackAllowed;
	PRSFeedbackProxy* _listener;
	BOOL _isClientOnlyExperiment;
	BOOL _isInReservedAllocationForExperiment;
	BOOL _configuredSession;
	NSObject*<OS_dispatch_queue> _clientQueue;
	double _sessionStartTime;
	NSArray* _supportedServices;
	NSString* _modelL2Version;
	NSString* _experimentNamespaceId;
	NSString* _experimentId;
	NSString* _treatmentId;
	PARSession* _session;
	NSObject*<OS_dispatch_source> _quiescenceTimer;
	double _retryAfter;

}

@property (retain) PARSession * session;                                              //@synthesize session=_session - In the implementation block
@property (retain) NSString * userAgent;                                              //@synthesize userAgent=_userAgent - In the implementation block
@property (assign) BOOL configuredSession;                                            //@synthesize configuredSession=_configuredSession - In the implementation block
@property (retain) NSObject*<OS_dispatch_source> quiescenceTimer;                     //@synthesize quiescenceTimer=_quiescenceTimer - In the implementation block
@property (assign) double retryAfter;                                                 //@synthesize retryAfter=_retryAfter - In the implementation block
@property (nonatomic,readonly) id<SFFeedbackListener> listener; 
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> clientQueue;                //@synthesize clientQueue=_clientQueue - In the implementation block
@property (assign,nonatomic) double sessionStartTime;                                 //@synthesize sessionStartTime=_sessionStartTime - In the implementation block
@property (nonatomic,readonly) double searchRenderTimeout; 
@property (nonatomic,readonly) double suggestionsRenderTimeout; 
@property (nonatomic,readonly) NSArray * supportedServices;                           //@synthesize supportedServices=_supportedServices - In the implementation block
@property (nonatomic,readonly) NSSet * appBlocklist; 
@property (nonatomic,readonly) SSPlistDataReader * cepDictionary; 
@property (nonatomic,readonly) SSPlistDataReader * cannedCEPValues; 
@property (nonatomic,readonly) NSString * modelL2Version;                             //@synthesize modelL2Version=_modelL2Version - In the implementation block
@property (nonatomic,readonly) NSString * experimentNamespaceId;                      //@synthesize experimentNamespaceId=_experimentNamespaceId - In the implementation block
@property (nonatomic,readonly) NSString * experimentId;                               //@synthesize experimentId=_experimentId - In the implementation block
@property (nonatomic,readonly) NSString * treatmentId;                                //@synthesize treatmentId=_treatmentId - In the implementation block
@property (nonatomic,readonly) BOOL isClientOnlyExperiment;                           //@synthesize isClientOnlyExperiment=_isClientOnlyExperiment - In the implementation block
@property (nonatomic,readonly) BOOL isInReservedAllocationForExperiment;              //@synthesize isInReservedAllocationForExperiment=_isInReservedAllocationForExperiment - In the implementation block
@property (nonatomic,readonly) BOOL disableAsTypedSuggestion; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSObject*<OS_dispatch_queue>)clientQueue;
-(id)feedbackListener;
-(NSObject*<OS_dispatch_source>)quiescenceTimer;
-(id)initWithClient:(id)arg1 clientQueue:(id)arg2 config:(id)arg3 session:(id)arg4 ;
-(double)retryAfter;
-(void)setUserAgentString:(id)arg1 ;
-(id)initWithClient:(id)arg1 clientQueue:(id)arg2 ;
-(double)suggestionsRenderTimeout;
-(SSPlistDataReader *)cannedCEPValues;
-(void)setQueryLanguage:(id)arg1 ;
-(PARSession *)session;
-(NSString *)treatmentId;
-(void)queryCompleted:(id)arg1 ;
-(id)getQueryTaskForHandler:(id)arg1 scaleFactor:(double)arg2 whyQuery:(unsigned long long)arg3 ;
-(void)setFeedbackStartTime;
-(void)deactivate;
-(BOOL)isClientOnlyExperiment;
-(void)getFTEStringsWithReply:(/*^block*/id)arg1 ;
-(void)activate;
-(void)setQuiescenceTimer:(NSObject*<OS_dispatch_source>)arg1 ;
-(NSString *)experimentId;
-(void)getCachedQueries:(id*)arg1 results:(id*)arg2 webSearch:(BOOL)arg3 ;
-(id<SFFeedbackListener>)listener;
-(void)setSession:(PARSession *)arg1 ;
-(void)setConfiguredSession:(BOOL)arg1 ;
-(void)shrinkCaches;
-(BOOL)disableAsTypedSuggestion;
-(double)sessionStartTime;
-(void)setSessionStartTime:(double)arg1 ;
-(NSSet *)appBlocklist;
-(void)setClientQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)session:(id)arg1 bag:(id)arg2 didLoadWithError:(id)arg3 ;
-(NSString *)userAgent;
-(id)queryTaskWithEngagedSuggestion:(id)arg1 externalId:(unsigned)arg2 handler:(id)arg3 queryContext:(id)arg4 queryIdent:(unsigned long long)arg5 ;
-(NSString *)experimentNamespaceId;
-(NSString *)modelL2Version;
-(id)queryTaskWithString:(id)arg1 externalId:(unsigned)arg2 handler:(id)arg3 queryContext:(id)arg4 queryIdent:(unsigned long long)arg5 ;
-(void)setUserAgent:(NSString *)arg1 ;
-(void)setRetryAfter:(double)arg1 ;
-(void)setParsecFeedbackAllowed:(BOOL)arg1 ;
-(double)searchRenderTimeout;
-(BOOL)isInReservedAllocationForExperiment;
-(BOOL)configuredSession;
-(SSPlistDataReader *)cepDictionary;
-(NSArray *)supportedServices;
-(void)warmup;
@end

