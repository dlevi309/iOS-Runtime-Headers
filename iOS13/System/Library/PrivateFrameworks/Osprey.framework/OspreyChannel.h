/*
* Generated on Monday, March 1, 2021 at 2:35:08 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Osprey.framework/Osprey
*/


@protocol OS_dispatch_queue, OS_dispatch_group;
@class NSURL, NSURLSessionConfiguration, NSObject, OspreyGRPCChannel, OspreyAbsintheAuthenticator, NSError, OspreyConnectionPreferences, NSString;

@interface OspreyChannel : NSObject {

	NSURL* _url;
	NSURLSessionConfiguration* _configuration;
	NSObject*<OS_dispatch_queue> _queue;
	OspreyGRPCChannel* _channel;
	OspreyAbsintheAuthenticator* _authenticator;
	NSObject*<OS_dispatch_group> _validationGroup;
	BOOL _waitingForSignature;
	NSError* _signatureError;
	OspreyConnectionPreferences* _connectionPreferences;
	BOOL _useAbsinthe;
	BOOL _forceHTTPv2;
	NSString* _clientTraceId;
	/*^block*/id _connectionMetricsHandler;

}

@property (assign,nonatomic) BOOL useAbsinthe;                       //@synthesize useAbsinthe=_useAbsinthe - In the implementation block
@property (nonatomic,copy) NSURL * absintheServer; 
@property (assign,nonatomic) BOOL forceHTTPv2;                       //@synthesize forceHTTPv2=_forceHTTPv2 - In the implementation block
@property (nonatomic,copy) NSString * clientTraceId;                 //@synthesize clientTraceId=_clientTraceId - In the implementation block
@property (nonatomic,copy) id connectionMetricsHandler;              //@synthesize connectionMetricsHandler=_connectionMetricsHandler - In the implementation block
+(void)initialize;
-(id)initWithURL:(id)arg1 configuration:(id)arg2 ;
-(void)setClientTraceId:(NSString *)arg1 ;
-(void)performRequest:(id)arg1 handler:(/*^block*/id)arg2 ;
-(void)setUseCompression:(BOOL)arg1 ;
-(BOOL)forceHTTPv2;
-(void)setForceHTTPv2:(BOOL)arg1 ;
-(NSString *)clientTraceId;
-(id)initWithURL:(id)arg1 configuration:(id)arg2 useCache:(BOOL)arg3 ;
-(void)setConnectionMetricsHandler:(id)arg1 ;
-(id)connectionMetricsHandler;
-(void)_on_queue_getChannelWithHandler:(/*^block*/id)arg1 ;
-(void)performStreamingRequest:(id)arg1 handler:(/*^block*/id)arg2 completion:(/*^block*/id)arg3 ;
-(id)performBidirectionalStreamingRequest:(id)arg1 handler:(/*^block*/id)arg2 completion:(/*^block*/id)arg3 ;
-(void)preconnect;
-(/*^block*/id)getConnectionMetricsHandler;
-(NSURL *)absintheServer;
-(void)setAbsintheServer:(NSURL *)arg1 ;
-(void)performCallForMethodName:(id)arg1 data:(id)arg2 handler:(/*^block*/id)arg3 ;
-(void)performStreamingCallForMethodName:(id)arg1 data:(id)arg2 handler:(/*^block*/id)arg3 completion:(/*^block*/id)arg4 ;
-(id)performBidirectionalStreamingCallContextWithMethodName:(id)arg1 data:(id)arg2 handler:(/*^block*/id)arg3 completion:(/*^block*/id)arg4 ;
-(void)setUseAbsinthe:(BOOL)arg1 ;
-(void)initializeAbsintheSessionWithCompletion:(/*^block*/id)arg1 ;
-(BOOL)useAbsinthe;
@end

