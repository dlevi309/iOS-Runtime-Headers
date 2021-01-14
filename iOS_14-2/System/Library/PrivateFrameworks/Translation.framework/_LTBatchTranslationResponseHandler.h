/*
* Generated on Thursday, January 14, 2021 at 2:23:24 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Translation.framework/Translation
*/

#import <libobjc.A.dylib/FTBatchTranslationResponseDelegate.h>

@class FTMutableBatchTranslationRequest, NSLocale, LTSchemaBatchTranslationEvent, _LTTranslationParagraph, NSMutableDictionary, NSString, NSDate, NSURL;

@interface _LTBatchTranslationResponseHandler : NSObject <FTBatchTranslationResponseDelegate> {

	BOOL _hasFinalServerResponse;
	BOOL _completionHandlerCalled;
	FTMutableBatchTranslationRequest* _request;
	NSLocale* _toLocale;
	LTSchemaBatchTranslationEvent* _metricEvent;
	_LTTranslationParagraph* _paragraph;
	NSMutableDictionary* _batchedParagraphs;
	long long _taskHint;
	unsigned long long _bufferSize;
	NSLocale* _sourceLocale;
	NSLocale* _targetLocale;
	NSString* _requestID;
	NSString* _sessionID;
	NSString* _clientIdentifier;
	NSDate* _startTime;
	NSURL* _sourceURL;

}

@property (nonatomic,retain) FTMutableBatchTranslationRequest * request;               //@synthesize request=_request - In the implementation block
@property (nonatomic,retain) NSLocale * toLocale;                                      //@synthesize toLocale=_toLocale - In the implementation block
@property (nonatomic,retain) LTSchemaBatchTranslationEvent * metricEvent;              //@synthesize metricEvent=_metricEvent - In the implementation block
@property (nonatomic,retain) _LTTranslationParagraph * paragraph;                      //@synthesize paragraph=_paragraph - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * batchedParagraphs;                  //@synthesize batchedParagraphs=_batchedParagraphs - In the implementation block
@property (assign,nonatomic) long long taskHint;                                       //@synthesize taskHint=_taskHint - In the implementation block
@property (assign,nonatomic) unsigned long long bufferSize;                            //@synthesize bufferSize=_bufferSize - In the implementation block
@property (nonatomic,retain) NSLocale * sourceLocale;                                  //@synthesize sourceLocale=_sourceLocale - In the implementation block
@property (nonatomic,retain) NSLocale * targetLocale;                                  //@synthesize targetLocale=_targetLocale - In the implementation block
@property (nonatomic,retain) NSString * requestID;                                     //@synthesize requestID=_requestID - In the implementation block
@property (nonatomic,retain) NSString * sessionID;                                     //@synthesize sessionID=_sessionID - In the implementation block
@property (nonatomic,retain) NSString * clientIdentifier;                              //@synthesize clientIdentifier=_clientIdentifier - In the implementation block
@property (nonatomic,retain) NSDate * startTime;                                       //@synthesize startTime=_startTime - In the implementation block
@property (nonatomic,retain) NSURL * sourceURL;                                        //@synthesize sourceURL=_sourceURL - In the implementation block
@property (assign,nonatomic) BOOL hasFinalServerResponse;                              //@synthesize hasFinalServerResponse=_hasFinalServerResponse - In the implementation block
@property (assign,nonatomic) BOOL completionHandlerCalled;                             //@synthesize completionHandlerCalled=_completionHandlerCalled - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setSourceURL:(NSURL *)arg1 ;
-(NSString *)sessionID;
-(void)setClientIdentifier:(NSString *)arg1 ;
-(void)setSessionID:(NSString *)arg1 ;
-(NSURL *)sourceURL;
-(void)setRequest:(FTMutableBatchTranslationRequest *)arg1 ;
-(void)setStartTime:(NSDate *)arg1 ;
-(unsigned long long)bufferSize;
-(FTMutableBatchTranslationRequest *)request;
-(NSString *)requestID;
-(NSLocale *)sourceLocale;
-(NSLocale *)targetLocale;
-(long long)taskHint;
-(_LTTranslationParagraph *)paragraph;
-(void)setParagraph:(_LTTranslationParagraph *)arg1 ;
-(void)setRequestID:(NSString *)arg1 ;
-(void)setHasFinalServerResponse:(BOOL)arg1 ;
-(void)callCompletionHandlersWithError:(id)arg1 ;
-(void)streamDidReceiveBatchTranslationStreamingResponse:(id)arg1 ;
-(void)setToLocale:(NSLocale *)arg1 ;
-(void)streamFailVerifyBatchTranslationStreamingResponse:(id)arg1 ;
-(LTSchemaBatchTranslationEvent *)metricEvent;
-(void)setMetricEvent:(LTSchemaBatchTranslationEvent *)arg1 ;
-(NSMutableDictionary *)batchedParagraphs;
-(void)setBatchedParagraphs:(NSMutableDictionary *)arg1 ;
-(void)setBufferSize:(unsigned long long)arg1 ;
-(void)setSourceLocale:(NSLocale *)arg1 ;
-(void)setTargetLocale:(NSLocale *)arg1 ;
-(BOOL)hasFinalServerResponse;
-(BOOL)completionHandlerCalled;
-(void)setCompletionHandlerCalled:(BOOL)arg1 ;
-(NSLocale *)toLocale;
-(NSString *)clientIdentifier;
-(void)setTaskHint:(long long)arg1 ;
-(NSDate *)startTime;
@end

