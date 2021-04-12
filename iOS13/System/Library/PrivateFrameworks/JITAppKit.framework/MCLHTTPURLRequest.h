/*
* Generated on Monday, March 1, 2021 at 2:35:00 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(NSData *)data;
-(NSError *)error;
-(void)cancel;
-(unsigned long long)statusCode;
-(void)setData:(NSData *)arg1 ;
-(void)setError:(NSError *)arg1 ;
-(NSURL *)url;
-(double)timeout;
-(void)setTimeout:(double)arg1 ;
-(void)setUrl:(NSURL *)arg1 ;
-(void)send;
-(void)loadRequest:(id)arg1 ;
-(void)setStatusCode:(unsigned long long)arg1 ;
-(void)sendData:(id)arg1 ;
-(NSString *)httpMethod;
-(void)handleCompletion:(id)arg1 ;
-(NSDictionary *)httpHeaders;
-(void)setHttpHeaders:(NSDictionary *)arg1 ;
-(void)setHttpMethod:(NSString *)arg1 ;
-(void)sendText:(id)arg1 ;
@end

