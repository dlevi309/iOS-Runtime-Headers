/*
* Generated on Monday, March 1, 2021 at 2:34:20 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AdID.framework/AdID
*/


@class NSNumber, NSData, NSDictionary, NSError, NSString, NSMutableDictionary;

@interface ADJingleRequest : NSObject {

	NSNumber* _token;
	NSData* _responseBody;
	NSDictionary* _responseHeaders;
	NSError* _error;
	long long _statusCode;
	NSString* _DSID;
	/*^block*/id _completionHandler;
	NSString* _bagKey;
	NSData* _requestBody;
	NSMutableDictionary* _requestHeaders;

}

@property (nonatomic,retain) NSNumber * token;                                  //@synthesize token=_token - In the implementation block
@property (nonatomic,copy) id completionHandler;                                //@synthesize completionHandler=_completionHandler - In the implementation block
@property (nonatomic,retain) NSString * bagKey;                                 //@synthesize bagKey=_bagKey - In the implementation block
@property (nonatomic,retain) NSData * requestBody;                              //@synthesize requestBody=_requestBody - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * requestHeaders;              //@synthesize requestHeaders=_requestHeaders - In the implementation block
@property (retain) NSData * responseBody;                                       //@synthesize responseBody=_responseBody - In the implementation block
@property (retain) NSDictionary * responseHeaders;                              //@synthesize responseHeaders=_responseHeaders - In the implementation block
@property (copy) NSError * error;                                               //@synthesize error=_error - In the implementation block
@property (assign) long long statusCode;                                        //@synthesize statusCode=_statusCode - In the implementation block
@property (nonatomic,copy) NSString * DSID;                                     //@synthesize DSID=_DSID - In the implementation block
+(id)incrementToken;
-(NSNumber *)token;
-(NSError *)error;
-(long long)statusCode;
-(void)setError:(NSError *)arg1 ;
-(id)completionHandler;
-(void)setCompletionHandler:(id)arg1 ;
-(void)send;
-(void)setToken:(NSNumber *)arg1 ;
-(NSDictionary *)responseHeaders;
-(NSData *)responseBody;
-(void)setStatusCode:(long long)arg1 ;
-(void)setDSID:(NSString *)arg1 ;
-(NSString *)DSID;
-(NSString *)bagKey;
-(void)setResponseBody:(NSData *)arg1 ;
-(NSData *)requestBody;
-(void)setRequestHeaders:(NSMutableDictionary *)arg1 ;
-(void)setBagKey:(NSString *)arg1 ;
-(void)setResponseHeaders:(NSDictionary *)arg1 ;
-(NSMutableDictionary *)requestHeaders;
-(void)setRequestBody:(NSData *)arg1 ;
-(void)handleJingleResponse;
-(void)sendJingleRequest:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(id)init:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
@end

