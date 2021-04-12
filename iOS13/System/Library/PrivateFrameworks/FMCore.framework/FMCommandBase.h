/*
* Generated on Monday, March 1, 2021 at 2:32:51 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)init;
-(NSString *)scheme;
-(NSString *)host;
-(NSNumber *)port;
-(NSString *)password;
-(NSError *)error;
-(void)cancel;
-(id)path;
-(void)setPort:(NSNumber *)arg1 ;
-(void)start;
-(id)method;
-(void)setError:(NSError *)arg1 ;
-(BOOL)isFinished;
-(BOOL)isExecuting;
-(BOOL)isConcurrent;
-(void)setScheme:(NSString *)arg1 ;
-(void)setPassword:(NSString *)arg1 ;
-(void)setHost:(NSString *)arg1 ;
-(NSURLConnection *)connection;
-(void)setConnection:(NSURLConnection *)arg1 ;
-(double)timeout;
-(void)setTimeout:(double)arg1 ;
-(void)finishWithError:(id)arg1 ;
-(void)setRequest:(NSURLRequest *)arg1 ;
-(NSURLRequest *)request;
-(NSHTTPURLResponse *)response;
-(NSData *)responseData;
-(void)setResponseData:(NSData *)arg1 ;
-(void)setResponse:(NSHTTPURLResponse *)arg1 ;
-(NSString *)username;
-(void)setUsername:(NSString *)arg1 ;
-(NSURLSessionDataTask *)task;
-(void)setTask:(NSURLSessionDataTask *)arg1 ;
-(void)setRedirectCount:(unsigned long long)arg1 ;
-(unsigned long long)redirectCount;
-(id)body;
-(BOOL)wasSuccessful;
-(id)headers;
-(void)setCommandTaskComplete:(BOOL)arg1 ;
-(void)sendRequest;
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

