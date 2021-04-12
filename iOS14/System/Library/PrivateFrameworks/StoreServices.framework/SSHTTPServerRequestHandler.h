/*
* Generated on Thursday, January 14, 2021 at 2:22:09 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
*/

#import <StoreServices/StoreServices-Structs.h>
#import <libobjc.A.dylib/NSStreamDelegate.h>

@protocol OS_dispatch_queue, SSHTTPServerRequestHandlerDelegate;
@class NSMutableData, NSInputStream, NSOutputStream, NSMutableURLRequest, NSObject, NSString;

@interface SSHTTPServerRequestHandler : NSObject <NSStreamDelegate> {

	BOOL _incommingHeadersComplete;
	CFHTTPMessageRef _incommingMessage;
	NSMutableData* _incommingMessageBody;
	NSInputStream* _input;
	NSOutputStream* _output;
	NSMutableURLRequest* _request;
	NSObject*<OS_dispatch_queue> _requestQueue;
	int _downloadSpeed;
	id<SSHTTPServerRequestHandlerDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<SSHTTPServerRequestHandlerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) int downloadSpeed;                                                   //@synthesize downloadSpeed=_downloadSpeed - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)_close;
-(void)setDownloadSpeed:(int)arg1 ;
-(id)initWithReadStream:(id)arg1 writeStream:(id)arg2 runLoop:(id)arg3 ;
-(int)downloadSpeed;
-(id<SSHTTPServerRequestHandlerDelegate>)delegate;
-(void)close;
-(void)setDelegate:(id<SSHTTPServerRequestHandlerDelegate>)arg1 ;
-(BOOL)_handleReceivedDataWithError:(id*)arg1 ;
-(void)_respondWithRequest:(id)arg1 error:(id)arg2 ;
-(id)_errorResponseDataWithStatus:(short)arg1 message:(id)arg2 ;
-(long long)_writeResponseData:(id)arg1 error:(id*)arg2 ;
-(long long)_throttledWriteSpeed;
-(BOOL)_shouldKeepRunning;
-(void)stream:(id)arg1 handleEvent:(unsigned long long)arg2 ;
-(void)dealloc;
@end

