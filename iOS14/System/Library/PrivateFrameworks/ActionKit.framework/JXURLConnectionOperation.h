/*
* Generated on Thursday, January 14, 2021 at 2:27:09 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
*/

#import <ActionKit/JXOperation.h>
#import <libobjc.A.dylib/NSURLConnectionDelegate.h>
#import <libobjc.A.dylib/NSURLConnectionDataDelegate.h>

@class NSMutableURLRequest, NSURLResponse, NSError, NSOutputStream, NSURLConnection, NSString;

@interface JXURLConnectionOperation : JXOperation <NSURLConnectionDelegate, NSURLConnectionDataDelegate> {

	NSMutableURLRequest* _request;
	NSURLResponse* _response;
	NSError* _error;
	NSOutputStream* _outputStream;
	long long _bytesDownloaded;
	long long _bytesUploaded;
	NSURLConnection* _connection;

}

@property (retain) NSURLConnection * connection;                    //@synthesize connection=_connection - In the implementation block
@property (retain) NSMutableURLRequest * request;                   //@synthesize request=_request - In the implementation block
@property (retain) NSURLResponse * response;                        //@synthesize response=_response - In the implementation block
@property (retain) NSError * error;                                 //@synthesize error=_error - In the implementation block
@property (assign) long long bytesDownloaded;                       //@synthesize bytesDownloaded=_bytesDownloaded - In the implementation block
@property (assign) long long bytesUploaded;                         //@synthesize bytesUploaded=_bytesUploaded - In the implementation block
@property (retain) NSOutputStream * outputStream;                   //@synthesize outputStream=_outputStream - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)networkThread;
+(void)runLoopForever;
-(void)connection:(id)arg1 didSendBodyData:(long long)arg2 totalBytesWritten:(long long)arg3 totalBytesExpectedToWrite:(long long)arg4 ;
-(void)connection:(id)arg1 didReceiveData:(id)arg2 ;
-(id)init;
-(id)initWithURL:(id)arg1 ;
-(void)setRequest:(NSMutableURLRequest *)arg1 ;
-(long long)bytesDownloaded;
-(void)setOutputStream:(NSOutputStream *)arg1 ;
-(void)connection:(id)arg1 didFailWithError:(id)arg2 ;
-(void)connection:(id)arg1 didReceiveResponse:(id)arg2 ;
-(void)connectionDidFinishLoading:(id)arg1 ;
-(void)setError:(NSError *)arg1 ;
-(NSMutableURLRequest *)request;
-(NSError *)error;
-(NSOutputStream *)outputStream;
-(void)stopConnection;
-(void)main;
-(NSURLConnection *)connection;
-(NSURLResponse *)response;
-(void)setBytesDownloaded:(long long)arg1 ;
-(void)setResponse:(NSURLResponse *)arg1 ;
-(long long)bytesUploaded;
-(void)startConnection;
-(void)setConnection:(NSURLConnection *)arg1 ;
-(void)setBytesUploaded:(long long)arg1 ;
-(void)dealloc;
-(void)willFinish;
@end

