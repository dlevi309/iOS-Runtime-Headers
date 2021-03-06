/*
* Generated on Thursday, January 14, 2021 at 2:25:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DASubCal.framework/DASubCal
*/

#import <libobjc.A.dylib/NSURLSessionDelegate.h>
#import <libobjc.A.dylib/NSURLSessionTaskDelegate.h>
#import <libobjc.A.dylib/NSURLSessionDataDelegate.h>

@protocol SubCalURLRequestDelegate;
@class NSURL, NSString, DAStatusReport, NSURLSession, NSURLSessionDataTask, NSMutableData, NSFileHandle, NSDate, NSTimer;

@interface SubCalURLRequest : NSObject <NSURLSessionDelegate, NSURLSessionTaskDelegate, NSURLSessionDataDelegate> {

	BOOL _useFileCache;
	BOOL _wasUserRequested;
	BOOL _useShortTimeoutInterval;
	BOOL _sendDataUpdateCallback;
	BOOL _finished;
	NSURL* _url;
	id<SubCalURLRequestDelegate> _delegate;
	NSString* _username;
	NSString* _password;
	double _timestamp;
	NSString* _filePath;
	DAStatusReport* _statusReport;
	long long _expectedDataSize;
	long long _receivedDataSize;
	NSURLSession* _session;
	NSURLSessionDataTask* _task;
	NSMutableData* _connectionData;
	NSFileHandle* _fileHandle;
	NSDate* _startTime;
	NSTimer* _idleTimer;
	NSString* _startRunloopDescriptionString;

}

@property (nonatomic,copy) NSURL * url;                                                 //@synthesize url=_url - In the implementation block
@property (nonatomic,retain) NSURLSession * session;                                    //@synthesize session=_session - In the implementation block
@property (nonatomic,retain) NSURLSessionDataTask * task;                               //@synthesize task=_task - In the implementation block
@property (nonatomic,retain) NSMutableData * connectionData;                            //@synthesize connectionData=_connectionData - In the implementation block
@property (nonatomic,retain) NSString * filePath;                                       //@synthesize filePath=_filePath - In the implementation block
@property (nonatomic,retain) NSFileHandle * fileHandle;                                 //@synthesize fileHandle=_fileHandle - In the implementation block
@property (assign,nonatomic) BOOL sendDataUpdateCallback;                               //@synthesize sendDataUpdateCallback=_sendDataUpdateCallback - In the implementation block
@property (nonatomic,retain) NSDate * startTime;                                        //@synthesize startTime=_startTime - In the implementation block
@property (nonatomic,retain) NSTimer * idleTimer;                                       //@synthesize idleTimer=_idleTimer - In the implementation block
@property (nonatomic,retain) NSString * startRunloopDescriptionString;                  //@synthesize startRunloopDescriptionString=_startRunloopDescriptionString - In the implementation block
@property (assign,nonatomic) BOOL finished;                                             //@synthesize finished=_finished - In the implementation block
@property (assign,nonatomic,__weak) id<SubCalURLRequestDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,copy) NSString * username;                                         //@synthesize username=_username - In the implementation block
@property (nonatomic,copy) NSString * password;                                         //@synthesize password=_password - In the implementation block
@property (assign,nonatomic) double timestamp;                                          //@synthesize timestamp=_timestamp - In the implementation block
@property (assign,nonatomic) BOOL useFileCache;                                         //@synthesize useFileCache=_useFileCache - In the implementation block
@property (nonatomic,retain) DAStatusReport * statusReport;                             //@synthesize statusReport=_statusReport - In the implementation block
@property (assign,nonatomic) BOOL wasUserRequested;                                     //@synthesize wasUserRequested=_wasUserRequested - In the implementation block
@property (nonatomic,readonly) long long expectedDataSize;                              //@synthesize expectedDataSize=_expectedDataSize - In the implementation block
@property (nonatomic,readonly) long long receivedDataSize;                              //@synthesize receivedDataSize=_receivedDataSize - In the implementation block
@property (assign,nonatomic) BOOL useShortTimeoutInterval;                              //@synthesize useShortTimeoutInterval=_useShortTimeoutInterval - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)_initializeFileCache;
+(id)_cachedICSFilesDirectory;
-(NSString *)filePath;
-(void)URLSession:(id)arg1 task:(id)arg2 didCompleteWithError:(id)arg3 ;
-(void)URLSession:(id)arg1 task:(id)arg2 didReceiveChallenge:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)URLSession:(id)arg1 dataTask:(id)arg2 didReceiveResponse:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(BOOL)finished;
-(NSURLSessionDataTask *)task;
-(void)setUsername:(NSString *)arg1 ;
-(DAStatusReport *)statusReport;
-(void)URLSession:(id)arg1 didReceiveChallenge:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(id<SubCalURLRequestDelegate>)delegate;
-(void)_finishWithError:(id)arg1 ;
-(double)timestamp;
-(void)URLSession:(id)arg1 didBecomeInvalidWithError:(id)arg2 ;
-(void)URLSession:(id)arg1 task:(id)arg2 willPerformHTTPRedirection:(id)arg3 newRequest:(id)arg4 completionHandler:(/*^block*/id)arg5 ;
-(void)setStartTime:(NSDate *)arg1 ;
-(void)setStatusReport:(DAStatusReport *)arg1 ;
-(void)setTask:(NSURLSessionDataTask *)arg1 ;
-(NSURLSession *)session;
-(NSString *)password;
-(NSURL *)url;
-(NSFileHandle *)fileHandle;
-(NSString *)username;
-(void)setDelegate:(id<SubCalURLRequestDelegate>)arg1 ;
-(void)setSession:(NSURLSession *)arg1 ;
-(void)setFinished:(BOOL)arg1 ;
-(void)URLSession:(id)arg1 dataTask:(id)arg2 didReceiveData:(id)arg3 ;
-(long long)expectedDataSize;
-(void)setPassword:(NSString *)arg1 ;
-(void)_idleTimerFired;
-(NSTimer *)idleTimer;
-(void)startConnection;
-(void)setUrl:(NSURL *)arg1 ;
-(void)setIdleTimer:(NSTimer *)arg1 ;
-(void)_cancelIdleTimer;
-(BOOL)wasUserRequested;
-(void)setWasUserRequested:(BOOL)arg1 ;
-(void)cancel;
-(void)setTimestamp:(double)arg1 ;
-(NSDate *)startTime;
-(void)setFilePath:(NSString *)arg1 ;
-(void)setFileHandle:(NSFileHandle *)arg1 ;
-(NSString *)startRunloopDescriptionString;
-(void)_setHeadersOnRequest:(id)arg1 ;
-(BOOL)useShortTimeoutInterval;
-(void)_markStartTime;
-(void)setConnectionData:(NSMutableData *)arg1 ;
-(void)_markEndTime;
-(NSMutableData *)connectionData;
-(void)setSendDataUpdateCallback:(BOOL)arg1 ;
-(void)_handleAuthenticationChallenge:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(BOOL)useFileCache;
-(void)_receivedDataForFile:(id)arg1 ;
-(BOOL)sendDataUpdateCallback;
-(void)_extendIdleTimer;
-(BOOL)_canAuthenticateAgainstProtectionSpace:(id)arg1 ;
-(void)_respondToChallenge:(id)arg1 withCredential:(id)arg2 noCredentialBehavior:(int)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)_openFileHandle;
-(void)setUseFileCache:(BOOL)arg1 ;
-(id)initWithURL:(id)arg1 wasUserRequested:(BOOL)arg2 ;
-(void)_createIdleTimer;
-(long long)receivedDataSize;
-(void)setUseShortTimeoutInterval:(BOOL)arg1 ;
-(void)setStartRunloopDescriptionString:(NSString *)arg1 ;
@end

