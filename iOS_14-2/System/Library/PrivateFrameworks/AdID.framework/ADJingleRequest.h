/*
* Generated on Thursday, January 14, 2021 at 2:26:48 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(NSString *)DSID;
-(void)setCompletionHandler:(id)arg1 ;
-(id)completionHandler;
-(void)setError:(NSError *)arg1 ;
-(void)setStatusCode:(long long)arg1 ;
-(NSError *)error;
-(long long)statusCode;
-(void)setDSID:(NSString *)arg1 ;
-(void)setToken:(NSNumber *)arg1 ;
-(void)setResponseBody:(NSData *)arg1 ;
-(void)setResponseHeaders:(NSDictionary *)arg1 ;
-(NSDictionary *)responseHeaders;
-(NSNumber *)token;
-(NSMutableDictionary *)requestHeaders;
-(void)setRequestHeaders:(NSMutableDictionary *)arg1 ;
-(void)setRequestBody:(NSData *)arg1 ;
-(void)setBagKey:(NSString *)arg1 ;
-(void)send;
-(NSData *)requestBody;
-(NSString *)bagKey;
-(NSData *)responseBody;
-(void)handleJingleResponse;
-(void)sendJingleRequest:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(id)init:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
@end

