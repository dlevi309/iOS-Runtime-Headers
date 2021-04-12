/*
* Generated on Monday, March 1, 2021 at 2:31:43 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/RemoteUI.framework/RemoteUI
*/


@class NSURLRequest, NSURLSessionDataTask, NSURLSession;

@interface RUIHTTPRequest : NSObject {

	NSURLRequest* _request;
	NSURLSessionDataTask* _dataTask;
	NSURLSession* _urlSession;
	id _delegate;

}

@property (assign,nonatomic,__weak) id delegate;              //@synthesize delegate=_delegate - In the implementation block
+(id)errorWithCode:(unsigned long long)arg1 ;
+(id)invalidResponseErrorWithResponse:(id)arg1 ;
+(id)serviceUnavailableError;
+(id)nonSecureConnectionNotAllowedError;
+(BOOL)anyRequestLoading;
+(id)safeBaseURL;
-(id)init;
-(void)dealloc;
-(id)delegate;
-(void)setDelegate:(id)arg1 ;
-(void)failWithError:(id)arg1 ;
-(void)cancel;
-(void)parseData:(id)arg1 ;
-(id)request;
-(void)loadRequest:(id)arg1 ;
-(BOOL)isLoading;
-(void)_finishedLoading;
-(BOOL)receivedValidResponse:(id)arg1 ;
-(void)loadStatusChanged;
-(void)_preLoadCancel;
-(id)sessionConfiguration;
-(id)urlSessionDelegate;
-(void)willParseData;
-(void)didParseData;
-(void)_startedLoading;
-(void)shouldLoadRequest:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)_loadRequestMain:(id)arg1 ;
-(id)handleWillLoadRequest:(id)arg1 ;
@end

