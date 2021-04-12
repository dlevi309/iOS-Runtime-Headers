/*
* Generated on Monday, March 1, 2021 at 2:32:24 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/FTServices.framework/FTServices
*/

#import <FTServices/FTServices-Structs.h>
#import <FTServices/FTIDSMessage.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSURL, NSDictionary, NSData, NSNumber;

@interface FTURLRequestMessage : FTIDSMessage <NSCopying> {

	unsigned long long _requestType;
	NSURL* _requestURL;
	NSDictionary* _requestHeaders;
	NSDictionary* _requestStringParams;
	NSData* _requestBody;
	NSDictionary* _responseHeaders;
	NSData* _responseBody;
	NSNumber* _responseStatusCode;
	NSDictionary* _timingData;

}

@property (assign,nonatomic) unsigned long long requestType;                //@synthesize requestType=_requestType - In the implementation block
@property (nonatomic,copy) NSURL * requestURL;                              //@synthesize requestURL=_requestURL - In the implementation block
@property (nonatomic,copy) NSDictionary * requestHeaders;                   //@synthesize requestHeaders=_requestHeaders - In the implementation block
@property (nonatomic,copy) NSDictionary * requestStringParams;              //@synthesize requestStringParams=_requestStringParams - In the implementation block
@property (nonatomic,copy) NSData * requestBody;                            //@synthesize requestBody=_requestBody - In the implementation block
@property (nonatomic,copy) NSDictionary * responseHeaders;                  //@synthesize responseHeaders=_responseHeaders - In the implementation block
@property (nonatomic,copy) NSData * responseBody;                           //@synthesize responseBody=_responseBody - In the implementation block
@property (nonatomic,copy) NSNumber * responseStatusCode;                   //@synthesize responseStatusCode=_responseStatusCode - In the implementation block
@property (nonatomic,copy) NSDictionary * timingData;                       //@synthesize timingData=_timingData - In the implementation block
-(id)copyWithZone:(NSZone*)arg1 ;
-(unsigned long long)requestType;
-(id)initWithURL:(id)arg1 type:(unsigned long long)arg2 headers:(id)arg3 stringParams:(id)arg4 body:(id)arg5 ;
-(NSNumber *)responseStatusCode;
-(NSDictionary *)responseHeaders;
-(NSData *)responseBody;
-(NSDictionary *)timingData;
-(void)setRequestType:(unsigned long long)arg1 ;
-(BOOL)wantsIDSServer;
-(BOOL)wantsHTTPGet;
-(BOOL)allowDualDelivery;
-(BOOL)wantsManagedRetries;
-(BOOL)wantsBodySignature;
-(BOOL)wantsIDSSignatures;
-(id)messageBodyDataOverride;
-(BOOL)isIDSMessage;
-(id)additionalMessageHeaders;
-(id)additionalQueryStringParameters;
-(void)handleResponseHeaders:(id)arg1 ;
-(void)handleResponseBody:(id)arg1 ;
-(void)handleResponseStatus:(unsigned long long)arg1 ;
-(void)setResponseBody:(NSData *)arg1 ;
-(void)setRequestURL:(NSURL *)arg1 ;
-(NSURL *)requestURL;
-(NSData *)requestBody;
-(void)setRequestHeaders:(NSDictionary *)arg1 ;
-(void)setTimingData:(NSDictionary *)arg1 ;
-(void)setResponseHeaders:(NSDictionary *)arg1 ;
-(NSDictionary *)requestHeaders;
-(NSDictionary *)requestStringParams;
-(void)setRequestStringParams:(NSDictionary *)arg1 ;
-(void)setResponseStatusCode:(NSNumber *)arg1 ;
-(void)setRequestBody:(NSData *)arg1 ;
@end

