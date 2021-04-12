/*
* Generated on Thursday, January 14, 2021 at 2:27:50 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/JITAppKit.framework/JITAppKit
*/


@class MCLURLDataLoaderTask, NSURL, NSString, NSDictionary, NSError, NSData;

@interface MCLHTTPURLRequest : NSObject {

	MCLURLDataLoaderTask* _task;
	NSURL* _url;
	NSString* _httpMethod;
	NSDictionary* _httpHeaders;
	double _timeout;
	unsigned long long _statusCode;
	NSError* _error;
	NSData* _data;

}

@property (assign,nonatomic) unsigned long long statusCode;              //@synthesize statusCode=_statusCode - In the implementation block
@property (nonatomic,retain) NSError * error;                            //@synthesize error=_error - In the implementation block
@property (nonatomic,retain) NSData * data;                              //@synthesize data=_data - In the implementation block
@property (nonatomic,copy) NSURL * url;                                  //@synthesize url=_url - In the implementation block
@property (nonatomic,copy) NSString * httpMethod;                        //@synthesize httpMethod=_httpMethod - In the implementation block
@property (nonatomic,copy) NSDictionary * httpHeaders;                   //@synthesize httpHeaders=_httpHeaders - In the implementation block
@property (assign,nonatomic) double timeout;                             //@synthesize timeout=_timeout - In the implementation block
-(id)init;
-(void)handleCompletion:(id)arg1 ;
-(void)sendData:(id)arg1 ;
-(void)setTimeout:(double)arg1 ;
-(double)timeout;
-(void)setError:(NSError *)arg1 ;
-(void)setStatusCode:(unsigned long long)arg1 ;
-(NSURL *)url;
-(NSError *)error;
-(void)setData:(NSData *)arg1 ;
-(NSString *)httpMethod;
-(unsigned long long)statusCode;
-(void)setHttpHeaders:(NSDictionary *)arg1 ;
-(NSDictionary *)httpHeaders;
-(NSData *)data;
-(void)loadRequest:(id)arg1 ;
-(void)setUrl:(NSURL *)arg1 ;
-(void)setHttpMethod:(NSString *)arg1 ;
-(void)send;
-(void)cancel;
-(void)sendText:(id)arg1 ;
@end

