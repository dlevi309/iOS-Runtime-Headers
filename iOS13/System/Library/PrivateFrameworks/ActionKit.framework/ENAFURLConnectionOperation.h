/*
* Generated on Monday, March 1, 2021 at 2:34:35 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)dealloc;
-(NSString *)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSRecursiveLock *)lock;
-(NSError *)error;
-(void)cancel;
-(void)pause;
-(void)resume;
-(void)start;
-(BOOL)isCancelled;
-(void)setError:(NSError *)arg1 ;
-(BOOL)isFinished;
-(BOOL)isExecuting;
-(BOOL)isReady;
-(BOOL)isConcurrent;
-(void)setCompletionBlock:(/*^block*/id)arg1 ;
-(short)state;
-(NSSet *)runLoopModes;
-(void)setRunLoopModes:(NSSet *)arg1 ;
-(NSOutputStream *)outputStream;
-(void)finish;
-(NSURLConnection *)connection;
-(BOOL)isPaused;
-(void)setConnection:(NSURLConnection *)arg1 ;
-(void)setState:(short)arg1 ;
-(void)setRequest:(NSURLRequest *)arg1 ;
-(NSURLRequest *)request;
-(NSURLResponse *)response;
-(NSData *)responseData;
-(void)setResponseData:(NSData *)arg1 ;
-(void)setResponse:(NSURLResponse *)arg1 ;
-(void)connection:(id)arg1 didFailWithError:(id)arg2 ;
-(BOOL)connection:(id)arg1 canAuthenticateAgainstProtectionSpace:(id)arg2 ;
-(void)connection:(id)arg1 didReceiveAuthenticationChallenge:(id)arg2 ;
-(id)connection:(id)arg1 willSendRequest:(id)arg2 redirectResponse:(id)arg3 ;
-(void)connection:(id)arg1 didReceiveResponse:(id)arg2 ;
-(void)connection:(id)arg1 didReceiveData:(id)arg2 ;
-(void)connection:(id)arg1 didSendBodyData:(long long)arg2 totalBytesWritten:(long long)arg3 totalBytesExpectedToWrite:(long long)arg4 ;
-(id)connection:(id)arg1 willCacheResponse:(id)arg2 ;
-(void)connectionDidFinishLoading:(id)arg1 ;
-(void)setLock:(NSRecursiveLock *)arg1 ;
-(void)setTotalBytesRead:(long long)arg1 ;
-(NSInputStream *)inputStream;
-(void)setInputStream:(NSInputStream *)arg1 ;
-(void)setOutputStream:(NSOutputStream *)arg1 ;
-(id)redirectResponse;
-(void)setRedirectResponse:(id)arg1 ;
-(id)authenticationChallenge;
-(void)setCancelled:(BOOL)arg1 ;
-(id)initWithRequest:(id)arg1 ;
-(id)downloadProgress;
-(void)setDownloadProgress:(id)arg1 ;
-(id)uploadProgress;
-(void)setDownloadProgressBlock:(/*^block*/id)arg1 ;
-(void)setUploadProgressBlock:(/*^block*/id)arg1 ;
-(void)cancelConnection;
-(void)setAuthenticationAgainstProtectionSpaceBlock:(/*^block*/id)arg1 ;
-(void)setAuthenticationChallengeBlock:(/*^block*/id)arg1 ;
-(void)setCacheResponseBlock:(/*^block*/id)arg1 ;
-(void)setRedirectResponseBlock:(/*^block*/id)arg1 ;
-(NSString *)responseString;
-(void)operationDidStart;
-(void)setResponseString:(NSString *)arg1 ;
-(long long)totalBytesRead;
-(void)setUploadProgress:(id)arg1 ;
-(id)authenticationAgainstProtectionSpace;
-(void)setAuthenticationAgainstProtectionSpace:(id)arg1 ;
-(void)setAuthenticationChallenge:(id)arg1 ;
-(id)cacheResponse;
-(void)setCacheResponse:(id)arg1 ;
@end

