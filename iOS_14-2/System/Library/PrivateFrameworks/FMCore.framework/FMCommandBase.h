/*
* Generated on Thursday, January 14, 2021 at 2:26:26 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/FMCore.framework/FMCore
*/

#import <Foundation/NSOperation.h>

@class NSError, NSString, NSNumber, NSURLRequest, NSHTTPURLResponse, NSData, FMServerInteractionController, NSURLSessionDataTask, NSURLConnection;

@interface FMCommandBase : NSOperation {

	BOOL _commandTaskComplete;
	NSError* _error;
	NSString* _scheme;
	NSString* _username;
	NSString* _password;
	NSString* _host;
	NSNumber* _port;
	double _timeout;
	NSURLRequest* _request;
	NSHTTPURLResponse* _response;
	NSData* _responseData;
	FMServerInteractionController* _serverInteractionController;
	NSURLSessionDataTask* _task;
	unsigned long long _redirectCount;
	NSString* _originalHostname;
	NSString* _redirectedHostname;
	NSURLConnection* _connection;

}

@property (assign,nonatomic,__weak) FMServerInteractionController * serverInteractionController;              //@synthesize serverInteractionController=_serverInteractionController - In the implementation block
@property (nonatomic,retain) NSURLSessionDataTask * task;                                                     //@synthesize task=_task - In the implementation block
@property (assign,nonatomic) unsigned long long redirectCount;                                                //@synthesize redirectCount=_redirectCount - In the implementation block
@property (nonatomic,copy) NSString * originalHostname;                                                       //@synthesize originalHostname=_originalHostname - In the implementation block
@property (nonatomic,copy) NSString * redirectedHostname;                                                     //@synthesize redirectedHostname=_redirectedHostname - In the implementation block
@property (nonatomic,retain) NSURLRequest * request;                                                          //@synthesize request=_request - In the implementation block
@property (nonatomic,retain) NSHTTPURLResponse * response;                                                    //@synthesize response=_response - In the implementation block
@property (nonatomic,retain) NSData * responseData;                                                           //@synthesize responseData=_responseData - In the implementation block
@property (nonatomic,retain) NSURLConnection * connection;                                                    //@synthesize connection=_connection - In the implementation block
@property (assign,nonatomic) BOOL commandTaskComplete;                                                        //@synthesize commandTaskComplete=_commandTaskComplete - In the implementation block
@property (copy) NSError * error;                                                                             //@synthesize error=_error - In the implementation block
@property (nonatomic,copy) NSString * scheme;                                                                 //@synthesize scheme=_scheme - In the implementation block
@property (nonatomic,copy) NSString * username;                                                               //@synthesize username=_username - In the implementation block
@property (nonatomic,copy) NSString * password;                                                               //@synthesize password=_password - In the implementation block
@property (nonatomic,copy) NSString * host;                                                                   //@synthesize host=_host - In the implementation block
@property (nonatomic,copy) NSNumber * port;                                                                   //@synthesize port=_port - In the implementation block
@property (assign,nonatomic) double timeout;                                                                  //@synthesize timeout=_timeout - In the implementation block
-(void)setPort:(NSNumber *)arg1 ;
-(void)setScheme:(NSString *)arg1 ;
-(void)setHost:(NSString *)arg1 ;
-(NSNumber *)port;
-(NSString *)scheme;
-(NSString *)host;
-(id)body;
-(NSURLSessionDataTask *)task;
-(void)setUsername:(NSString *)arg1 ;
-(id)init;
-(void)setRequest:(NSURLRequest *)arg1 ;
-(id)method;
-(void)start;
-(void)setTimeout:(double)arg1 ;
-(id)path;
-(double)timeout;
-(void)setTask:(NSURLSessionDataTask *)arg1 ;
-(void)setError:(NSError *)arg1 ;
-(void)setResponseData:(NSData *)arg1 ;
-(NSString *)password;
-(BOOL)isFinished;
-(NSURLRequest *)request;
-(NSError *)error;
-(void)setRedirectCount:(unsigned long long)arg1 ;
-(NSString *)username;
-(NSData *)responseData;
-(unsigned long long)redirectCount;
-(NSURLConnection *)connection;
-(void)setPassword:(NSString *)arg1 ;
-(NSHTTPURLResponse *)response;
-(void)setResponse:(NSHTTPURLResponse *)arg1 ;
-(void)sendRequest;
-(BOOL)isExecuting;
-(void)finishWithError:(id)arg1 ;
-(BOOL)wasSuccessful;
-(id)headers;
-(void)setConnection:(NSURLConnection *)arg1 ;
-(void)cancel;
-(BOOL)isConcurrent;
-(void)setCommandTaskComplete:(BOOL)arg1 ;
-(BOOL)commandTaskComplete;
-(FMServerInteractionController *)serverInteractionController;
-(void)_dataTaskCompletionHandlerWithData:(id)arg1 response:(id)arg2 error:(id)arg3 ;
-(BOOL)isTransactionCompleteWithError:(id)arg1 ;
-(id)authHeaders;
-(id)valueForResponseHTTPHeader:(id)arg1 ;
-(void)generateFakeResponse:(id)arg1 data:(id)arg2 error:(id)arg3 ;
-(BOOL)wasRedirected;
-(NSString *)originalHostname;
-(NSString *)redirectedHostname;
-(void)setServerInteractionController:(FMServerInteractionController *)arg1 ;
-(void)setOriginalHostname:(NSString *)arg1 ;
-(void)setRedirectedHostname:(NSString *)arg1 ;
@end

