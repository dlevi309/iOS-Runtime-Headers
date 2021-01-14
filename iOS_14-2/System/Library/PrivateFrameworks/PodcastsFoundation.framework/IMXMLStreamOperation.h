/*
* Generated on Thursday, January 14, 2021 at 2:26:26 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PodcastsFoundation.framework/PodcastsFoundation
*/

#import <Foundation/NSOperation.h>
#import <libobjc.A.dylib/NSStreamDelegate.h>
#import <libobjc.A.dylib/NSURLConnectionDelegate.h>

@protocol NSXMLParserDelegate;
@class NSThread, NSInputStream, NSOutputStream, NSMutableData, NSURL, NSURLConnection, NSString;

@interface IMXMLStreamOperation : NSOperation <NSStreamDelegate, NSURLConnectionDelegate> {

	BOOL _isExecuting;
	BOOL _isFinished;
	BOOL _isCancelled;
	NSThread* _runloopThread;
	NSInputStream* _readStream;
	NSOutputStream* _writeStream;
	NSMutableData* _dataBuffer;
	BOOL _finishedDownloadingData;
	NSURL* _url;
	NSURLConnection* _urlConnection;
	id<NSXMLParserDelegate> _delegate;

}

@property (assign,nonatomic) id<NSXMLParserDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)operationWithURL:(id)arg1 parseDelegate:(id)arg2 ;
-(void)connection:(id)arg1 didReceiveData:(id)arg2 ;
-(id<NSXMLParserDelegate>)delegate;
-(void)start;
-(void)connection:(id)arg1 didFailWithError:(id)arg2 ;
-(id)connection:(id)arg1 willCacheResponse:(id)arg2 ;
-(void)connectionDidFinishLoading:(id)arg1 ;
-(BOOL)isFinished;
-(void)setDelegate:(id<NSXMLParserDelegate>)arg1 ;
-(BOOL)isExecuting;
-(BOOL)isConcurrent;
-(void)stream:(id)arg1 handleEvent:(unsigned long long)arg2 ;
-(BOOL)isCancelled;
-(void)dealloc;
-(id)initWithURL:(id)arg1 parseDelegate:(id)arg2 ;
-(void)_startRunLoop;
-(void)writeToStream;
@end

