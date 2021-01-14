/*
* Generated on Thursday, January 14, 2021 at 2:28:33 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Stocks.framework/Stocks
*/


@protocol NSURLSessionDataDelegate;
@class NSString, NSData, NSURLSession, NSURLSessionDataTask;

@interface YahooDoppelganger : NSObject {

	NSString* _expectedRequestPattern;
	NSData* _response;
	unsigned long long _responseChunkSize;
	unsigned long long _responseChunkDelay;
	unsigned long long _responseChunkInitialDelay;
	unsigned long long _responseOffset;
	BOOL _cancelled;
	NSURLSession* _session;
	NSURLSessionDataTask* _dataTask;
	id<NSURLSessionDataDelegate> _delegate;

}

@property (nonatomic,retain) NSString * expectedRequestPattern;                         //@synthesize expectedRequestPattern=_expectedRequestPattern - In the implementation block
@property (nonatomic,retain) NSData * response;                                         //@synthesize response=_response - In the implementation block
@property (assign,nonatomic) unsigned long long responseChunkSize;                      //@synthesize responseChunkSize=_responseChunkSize - In the implementation block
@property (assign,nonatomic) unsigned long long responseChunkDelay;                     //@synthesize responseChunkDelay=_responseChunkDelay - In the implementation block
@property (assign,nonatomic) unsigned long long responseChunkInitialDelay;              //@synthesize responseChunkInitialDelay=_responseChunkInitialDelay - In the implementation block
@property (assign,nonatomic,__weak) id<NSURLSessionDataDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
+(BOOL)canHandleRequest:(id)arg1 ;
+(void)hookIntoYQLRequestIfNeeded;
+(id)newDoppelgangerMatchingRequestPattern:(id)arg1 ;
+(void)_spewDoppelgangerArray:(id)arg1 named:(id)arg2 ;
+(void)_doppelgangerFinished:(id)arg1 ;
+(void)setTestHarness:(id)arg1 ;
+(id)prepDoppelgangerWithRequestPattern:(id)arg1 response:(id)arg2 ;
+(id)prepDoppelgangerForQuotesResponseWithSymbols:(id)arg1 includeMetdata:(BOOL)arg2 ;
+(id)prepDoppelgangerForNewsResponseWithSymbol:(id)arg1 numberOfNewsItems:(long long)arg2 ;
+(id)prepDoppelgangerForChartResponseWithSymbol:(id)arg1 numberOfDataPoints:(long long)arg2 ;
+(void)spewDoppelgangerData;
+(void)clearDoppelgangerData;
+(BOOL)waitForAllDoppelgangersUpToTimeout:(double)arg1 ;
-(void)scheduleInRunLoop:(id)arg1 forMode:(id)arg2 ;
-(void)unscheduleFromRunLoop:(id)arg1 forMode:(id)arg2 ;
-(id)init;
-(id<NSURLSessionDataDelegate>)delegate;
-(void)start;
-(void)setDelegate:(id<NSURLSessionDataDelegate>)arg1 ;
-(id)description;
-(NSData *)response;
-(void)setResponse:(NSData *)arg1 ;
-(BOOL)matchesRequest:(id)arg1 ;
-(void)cancel;
-(void)resume;
-(void)setExpectedRequestPattern:(NSString *)arg1 ;
-(void)_relayDataChunk;
-(void)setResponseChunkSize:(unsigned long long)arg1 ;
-(NSString *)expectedRequestPattern;
-(unsigned long long)responseChunkSize;
-(unsigned long long)responseChunkDelay;
-(void)setResponseChunkDelay:(unsigned long long)arg1 ;
-(unsigned long long)responseChunkInitialDelay;
-(void)setResponseChunkInitialDelay:(unsigned long long)arg1 ;
@end
