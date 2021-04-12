/*
* Generated on Monday, March 1, 2021 at 2:34:46 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
	BOOL _sendDataUpdateCallback;
	BOOL _finished;
	NSURL* _url;
	id<SubCalURLRequestDelegate> _delegate;
	NSString* _username;
	NSString* _password;
	double _timestamp;
	NSString* _filePath;
	DAStatusReport* _statusReport;
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
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)_initializeFileCache;
+(id)_cachedICSFilesDirectory;
-(id<SubCalURLRequestDelegate>)delegate;
-(void)setDelegate:(id<SubCalURLRequestDelegate>)arg1 ;
-(NSString *)password;
-(void)cancel;
-(void)setFinished:(BOOL)arg1 ;
-(BOOL)finished;
-(NSURL *)url;
-(void)setPassword:(NSString *)arg1 ;
-(double)timestamp;
-(NSFileHandle *)fileHandle;
-(void)setTimestamp:(double)arg1 ;
-(NSURLSession *)session;
-(void)setSession:(NSURLSession *)arg1 ;
-(void)URLSession:(id)arg1 didBecomeInvalidWithError:(id)arg2 ;
-(void)URLSession:(id)arg1 didReceiveChallenge:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)URLSession:(id)arg1 task:(id)arg2 willPerformHTTPRedirection:(id)arg3 newRequest:(id)arg4 completionHandler:(/*^block*/id)arg5 ;
-(void)URLSession:(id)arg1 task:(id)arg2 didReceiveChallenge:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)URLSession:(id)arg1 task:(id)arg2 didCompleteWithError:(id)arg3 ;
-(void)URLSession:(id)arg1 dataTask:(id)arg2 didReceiveData:(id)arg3 ;
-(void)URLSession:(id)arg1 dataTask:(id)arg2 didReceiveResponse:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)setUrl:(NSURL *)arg1 ;
-(NSString *)username;
-(void)setUsername:(NSString *)arg1 ;
-(NSURLSessionDataTask *)task;
-(void)setTask:(NSURLSessionDataTask *)arg1 ;
-(NSDate *)startTime;
-(void)setStartTime:(NSDate *)arg1 ;
-(void)setFilePath:(NSString *)arg1 ;
-(NSString *)filePath;
-(void)startConnection;
-(void)_idleTimerFired;
-(void)setFileHandle:(NSFileHandle *)arg1 ;
-(void)_finishWithError:(id)arg1 ;
-(DAStatusReport *)statusReport;
-(void)setStatusReport:(DAStatusReport *)arg1 ;
-(void)_cancelIdleTimer;
-(NSTimer *)idleTimer;
-(void)setIdleTimer:(NSTimer *)arg1 ;
-(BOOL)wasUserRequested;
-(void)setWasUserRequested:(BOOL)arg1 ;
-(void)_handleAuthenticationChallenge:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(BOOL)_canAuthenticateAgainstProtectionSpace:(id)arg1 ;
-(NSString *)startRunloopDescriptionString;
-(void)_setHeadersOnRequest:(id)arg1 ;
-(void)_markStartTime;
-(void)setConnectionData:(NSMutableData *)arg1 ;
-(void)_markEndTime;
-(NSMutableData *)connectionData;
-(void)setSendDataUpdateCallback:(BOOL)arg1 ;
-(BOOL)useFileCache;
-(void)_receivedDataForFile:(id)arg1 ;
-(BOOL)sendDataUpdateCallback;
-(void)_extendIdleTimer;
-(void)_respondToChallenge:(id)arg1 withCredential:(id)arg2 noCredentialBehavior:(int)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)_openFileHandle;
-(void)setUseFileCache:(BOOL)arg1 ;
-(id)initWithURL:(id)arg1 wasUserRequested:(BOOL)arg2 ;
-(void)_createIdleTimer;
-(void)setStartRunloopDescriptionString:(NSString *)arg1 ;
@end

