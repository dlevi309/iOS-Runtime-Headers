/*
* Generated on Monday, March 1, 2021 at 2:31:43 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/RemoteUI.framework/RemoteUI
*/

#import <RemoteUI/RUIHTTPRequest.h>
#import <libobjc.A.dylib/NSURLSessionTaskDelegate.h>

@protocol RUIParserDelegate;
@class RUIParser, NSURL, _RUILoaderSessionDelegateAdapter, RUIStyle, NSString;

@interface RUILoader : RUIHTTPRequest <NSURLSessionTaskDelegate> {

	RUIParser* _parser;
	NSURL* _url;
	_RUILoaderSessionDelegateAdapter* _sessionDelegateAdapter;
	BOOL _allowNonSecureHTTP;
	id<RUIParserDelegate> _parserDelegate;
	RUIStyle* _style;
	long long _userInterfaceStyle;

}

@property (assign,nonatomic) BOOL allowNonSecureHTTP;                                  //@synthesize allowNonSecureHTTP=_allowNonSecureHTTP - In the implementation block
@property (assign,nonatomic,__weak) id<RUIParserDelegate> parserDelegate;              //@synthesize parserDelegate=_parserDelegate - In the implementation block
@property (nonatomic,retain) RUIStyle * style;                                         //@synthesize style=_style - In the implementation block
@property (assign,nonatomic) long long userInterfaceStyle;                             //@synthesize userInterfaceStyle=_userInterfaceStyle - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(void)failWithError:(id)arg1 ;
-(void)cancel;
-(void)parseData:(id)arg1 ;
-(id)URL;
-(RUIStyle *)style;
-(void)setStyle:(RUIStyle *)arg1 ;
-(void)URLSession:(id)arg1 didReceiveChallenge:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)URLSession:(id)arg1 task:(id)arg2 willPerformHTTPRedirection:(id)arg3 newRequest:(id)arg4 completionHandler:(/*^block*/id)arg5 ;
-(long long)userInterfaceStyle;
-(void)setUserInterfaceStyle:(long long)arg1 ;
-(void)loadRequest:(id)arg1 ;
-(BOOL)receivedValidResponse:(id)arg1 ;
-(id)sessionConfiguration;
-(id)urlSessionDelegate;
-(void)didParseData;
-(void)shouldLoadRequest:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(BOOL)allowNonSecureHTTP;
-(void)_handleShouldLoadRequestResult:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)_finishLoad;
-(BOOL)anyWebViewLoading;
-(void)webViewFinishedLoading;
-(void)allWebViewsFinishedLoading;
-(void)loadXMLUIWithURL:(id)arg1 ;
-(void)loadXMLUIWithRequest:(id)arg1 ;
-(void)loadXMLUIWithData:(id)arg1 baseURL:(id)arg2 ;
-(void)setAllowNonSecureHTTP:(BOOL)arg1 ;
-(id<RUIParserDelegate>)parserDelegate;
-(void)setParserDelegate:(id<RUIParserDelegate>)arg1 ;
@end

