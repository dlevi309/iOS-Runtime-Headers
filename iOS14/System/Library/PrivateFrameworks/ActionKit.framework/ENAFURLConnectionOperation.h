/*
* Generated on Thursday, January 14, 2021 at 2:27:09 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
*/

#import <ActionKit/ActionKit-Structs.h>
#import <Foundation/NSOperation.h>
#import <libobjc.A.dylib/NSURLConnectionDelegate.h>
#import <libobjc.A.dylib/NSURLConnectionDataDelegate.h>
#import <libobjc.A.dylib/NSCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSURLConnection, NSSet, NSURLRequest, NSURLResponse, NSError, NSData, NSString, NSOutputStream, NSRecursiveLock, NSInputStream;

@interface ENAFURLConnectionOperation : NSOperation <NSURLConnectionDelegate, NSURLConnectionDataDelegate, NSCoding, NSCopying> {

	BOOL _cancelled;
	short _state;
	NSURLConnection* _connection;
	NSSet* _runLoopModes;
	NSURLRequest* _request;
	NSURLResponse* _response;
	NSError* _error;
	NSData* _responseData;
	NSString* _responseString;
	long long _totalBytesRead;
	NSOutputStream* _outputStream;
	/*^block*/id _uploadProgress;
	/*^block*/id _downloadProgress;
	/*^block*/id _authenticationAgainstProtectionSpace;
	/*^block*/id _authenticationChallenge;
	/*^block*/id _cacheResponse;
	/*^block*/id _redirectResponse;
	NSRecursiveLock* _lock;

}

@property (assign,nonatomic) short state;                                        //@synthesize state=_state - In the implementation block
@property (assign,getter=isCancelled,nonatomic) BOOL cancelled;                  //@synthesize cancelled=_cancelled - In the implementation block
@property (nonatomic,retain) NSRecursiveLock * lock;                             //@synthesize lock=_lock - In the implementation block
@property (nonatomic,retain) NSURLConnection * connection;                       //@synthesize connection=_connection - In the implementation block
@property (nonatomic,retain) NSURLRequest * request;                             //@synthesize request=_request - In the implementation block
@property (nonatomic,retain) NSURLResponse * response;                           //@synthesize response=_response - In the implementation block
@property (nonatomic,retain) NSError * error;                                    //@synthesize error=_error - In the implementation block
@property (nonatomic,retain) NSData * responseData;                              //@synthesize responseData=_responseData - In the implementation block
@property (nonatomic,copy) NSString * responseString;                            //@synthesize responseString=_responseString - In the implementation block
@property (assign,nonatomic) long long totalBytesRead;                           //@synthesize totalBytesRead=_totalBytesRead - In the implementation block
@property (nonatomic,copy) id uploadProgress;                                    //@synthesize uploadProgress=_uploadProgress - In the implementation block
@property (nonatomic,copy) id downloadProgress;                                  //@synthesize downloadProgress=_downloadProgress - In the implementation block
@property (nonatomic,copy) id authenticationAgainstProtectionSpace;              //@synthesize authenticationAgainstProtectionSpace=_authenticationAgainstProtectionSpace - In the implementation block
@property (nonatomic,copy) id authenticationChallenge;                           //@synthesize authenticationChallenge=_authenticationChallenge - In the implementation block
@property (nonatomic,copy) id cacheResponse;                                     //@synthesize cacheResponse=_cacheResponse - In the implementation block
@property (nonatomic,copy) id redirectResponse;                                  //@synthesize redirectResponse=_redirectResponse - In the implementation block
@property (nonatomic,retain) NSSet * runLoopModes;                               //@synthesize runLoopModes=_runLoopModes - In the implementation block
@property (nonatomic,retain) NSInputStream * inputStream; 
@property (nonatomic,retain) NSOutputStream * outputStream;                      //@synthesize outputStream=_outputStream - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)networkRequestThread;
+(void)networkRequestThreadEntryPoint:(id)arg1 ;
-(void)finish;
-(void)connection:(id)arg1 didSendBodyData:(long long)arg2 totalBytesWritten:(long long)arg3 totalBytesExpectedToWrite:(long long)arg4 ;
-(void)setCompletionBlock:(/*^block*/id)arg1 ;
-(void)setCancelled:(BOOL)arg1 ;
-(BOOL)connection:(id)arg1 canAuthenticateAgainstProtectionSpace:(id)arg2 ;
-(void)connection:(id)arg1 didReceiveData:(id)arg2 ;
-(id)connection:(id)arg1 willSendRequest:(id)arg2 redirectResponse:(id)arg3 ;
-(void)connection:(id)arg1 didReceiveAuthenticationChallenge:(id)arg2 ;
-(void)setRequest:(NSURLRequest *)arg1 ;
-(void)setOutputStream:(NSOutputStream *)arg1 ;
-(void)start;
-(void)connection:(id)arg1 didFailWithError:(id)arg2 ;
-(void)pause;
-(void)connection:(id)arg1 didReceiveResponse:(id)arg2 ;
-(id)connection:(id)arg1 willCacheResponse:(id)arg2 ;
-(void)connectionDidFinishLoading:(id)arg1 ;
-(void)setTotalBytesRead:(long long)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)authenticationChallenge;
-(NSRecursiveLock *)lock;
-(void)setError:(NSError *)arg1 ;
-(id)cacheResponse;
-(void)setCacheResponse:(id)arg1 ;
-(void)setResponseData:(NSData *)arg1 ;
-(BOOL)isFinished;
-(NSURLRequest *)request;
-(NSError *)error;
-(NSOutputStream *)outputStream;
-(id)downloadProgress;
-(NSString *)description;
-(NSData *)responseData;
-(void)setLock:(NSRecursiveLock *)arg1 ;
-(NSURLConnection *)connection;
-(NSURLResponse *)response;
-(BOOL)isReady;
-(void)setResponse:(NSURLResponse *)arg1 ;
-(id)initWithRequest:(id)arg1 ;
-(NSInputStream *)inputStream;
-(void)setState:(short)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)isExecuting;
-(short)state;
-(void)setRunLoopModes:(NSSet *)arg1 ;
-(void)setDownloadProgress:(id)arg1 ;
-(void)setConnection:(NSURLConnection *)arg1 ;
-(NSSet *)runLoopModes;
-(void)cancel;
-(BOOL)isConcurrent;
-(void)resume;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isPaused;
-(BOOL)isCancelled;
-(void)setInputStream:(NSInputStream *)arg1 ;
-(void)dealloc;
-(id)uploadProgress;
-(void)setRedirectResponse:(id)arg1 ;
-(id)redirectResponse;
-(void)setDownloadProgressBlock:(/*^block*/id)arg1 ;
-(void)setUploadProgressBlock:(/*^block*/id)arg1 ;
-(NSString *)responseString;
-(void)setAuthenticationAgainstProtectionSpaceBlock:(/*^block*/id)arg1 ;
-(void)setAuthenticationChallengeBlock:(/*^block*/id)arg1 ;
-(void)setCacheResponseBlock:(/*^block*/id)arg1 ;
-(void)setRedirectResponseBlock:(/*^block*/id)arg1 ;
-(void)operationDidStart;
-(void)cancelConnection;
-(void)setResponseString:(NSString *)arg1 ;
-(long long)totalBytesRead;
-(void)setUploadProgress:(id)arg1 ;
-(id)authenticationAgainstProtectionSpace;
-(void)setAuthenticationAgainstProtectionSpace:(id)arg1 ;
-(void)setAuthenticationChallenge:(id)arg1 ;
@end

