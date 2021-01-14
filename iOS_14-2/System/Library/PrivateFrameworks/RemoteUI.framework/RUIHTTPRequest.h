/*
* Generated on Thursday, January 14, 2021 at 2:28:20 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)parseData:(id)arg1 ;
-(id)init;
-(BOOL)isLoading;
-(id)delegate;
-(id)request;
-(void)setDelegate:(id)arg1 ;
-(id)sessionConfiguration;
-(void)loadRequest:(id)arg1 ;
-(void)cancel;
-(void)dealloc;
-(void)_finishedLoading;
-(id)urlSessionDelegate;
-(void)loadStatusChanged;
-(void)_preLoadCancel;
-(BOOL)receivedValidResponse:(id)arg1 forRequest:(id)arg2 ;
-(void)willParseData;
-(void)didParseData;
-(void)failWithError:(id)arg1 forRequest:(id)arg2 ;
-(void)_startedLoading;
-(void)shouldLoadRequest:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)_loadRequestMain:(id)arg1 ;
-(id)handleWillLoadRequest:(id)arg1 ;
@end

