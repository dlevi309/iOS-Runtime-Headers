/*
* Generated on Thursday, January 14, 2021 at 2:27:50 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/JITAppKit.framework/JITAppKit
*/


@class NSMutableData, NSString, NSURLRequest, NSHTTPURLResponse, NSError, NSURL, NSData;

@interface MCLURLDataLoaderTask : NSObject {

	/*^block*/id _completion;
	/*^block*/id _receiveDataHandler;
	NSMutableData* _responseData;
	BOOL _cancelled;
	BOOL _cachedResponse;
	BOOL _background;
	float _progress;
	NSString* _category;
	NSURLRequest* _originalRequest;
	NSURLRequest* _request;
	NSHTTPURLResponse* _response;
	NSString* _targetPath;
	id _userInfo;
	NSError* _error;
	/*^block*/id _redirectHandler;

}

@property (nonatomic,readonly) NSString * category;                         //@synthesize category=_category - In the implementation block
@property (nonatomic,readonly) NSURL * URL; 
@property (nonatomic,readonly) NSURLRequest * originalRequest;              //@synthesize originalRequest=_originalRequest - In the implementation block
@property (nonatomic,readonly) NSURLRequest * request;                      //@synthesize request=_request - In the implementation block
@property (nonatomic,readonly) NSHTTPURLResponse * response;                //@synthesize response=_response - In the implementation block
@property (nonatomic,readonly) NSString * targetPath;                       //@synthesize targetPath=_targetPath - In the implementation block
@property (nonatomic,readonly) NSData * responseData;                       //@synthesize responseData=_responseData - In the implementation block
@property (nonatomic,readonly) BOOL download; 
@property (nonatomic,readonly) BOOL cancelled;                              //@synthesize cancelled=_cancelled - In the implementation block
@property (nonatomic,readonly) BOOL responseOk; 
@property (nonatomic,readonly) BOOL responseClientError; 
@property (nonatomic,readonly) BOOL responseTimeout; 
@property (nonatomic,readonly) BOOL cachedResponse;                         //@synthesize cachedResponse=_cachedResponse - In the implementation block
@property (nonatomic,readonly) BOOL background;                             //@synthesize background=_background - In the implementation block
@property (nonatomic,retain) id userInfo;                                   //@synthesize userInfo=_userInfo - In the implementation block
@property (nonatomic,readonly) float progress;                              //@synthesize progress=_progress - In the implementation block
@property (nonatomic,readonly) NSError * error;                             //@synthesize error=_error - In the implementation block
@property (nonatomic,copy) id redirectHandler;                              //@synthesize redirectHandler=_redirectHandler - In the implementation block
-(BOOL)background;
-(void)setUserInfo:(id)arg1 ;
-(BOOL)download;
-(void)setCancelled:(BOOL)arg1 ;
-(BOOL)cancelled;
-(void)setCategory:(NSString *)arg1 ;
-(id)userInfo;
-(float)progress;
-(NSURLRequest *)originalRequest;
-(void)setRequest:(NSURLRequest *)arg1 ;
-(void)setCachedResponse:(BOOL)arg1 ;
-(id)contentType;
-(void)encodeWithCoder:(id)arg1 ;
-(NSString *)category;
-(/*^block*/id)completion;
-(void)setResponseData:(NSData *)arg1 ;
-(NSURLRequest *)request;
-(NSError *)error;
-(id)description;
-(NSData *)responseData;
-(NSHTTPURLResponse *)response;
-(void)setResponse:(NSHTTPURLResponse *)arg1 ;
-(void)setProgress:(float)arg1 ;
-(NSURL *)URL;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)cachedResponse;
-(BOOL)responseTimeout;
-(/*^block*/id)receiveDataHandler;
-(BOOL)responseOk;
-(NSString *)targetPath;
-(void)applyFileExtension:(id)arg1 ;
-(id)initWithURLRequest:(id)arg1 targetPath:(id)arg2 category:(id)arg3 completionHandler:(/*^block*/id)arg4 receiveData:(/*^block*/id)arg5 ;
-(BOOL)responseClientError;
-(void)dispatchCompletion:(id)arg1 ;
-(void)applyMimeType;
-(id)redirectHandler;
-(void)setRedirectHandler:(id)arg1 ;
@end
