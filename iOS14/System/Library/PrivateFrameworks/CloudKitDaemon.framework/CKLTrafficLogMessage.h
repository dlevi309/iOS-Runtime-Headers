/*
* Generated on Thursday, January 14, 2021 at 2:26:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
*/


@class NSString, NSDate, NSURL, NSDictionary, NSArray;

@interface CKLTrafficLogMessage : NSObject {

	NSString* _uuid;
	NSDate* _requestTime;
	NSString* _requestMethod;
	NSURL* _requestURL;
	NSDictionary* _requestHeaders;
	long long _bodyStreamResetCount;
	NSArray* _requestObjects;
	long long _responseStatus;
	NSDate* _responseTime;
	NSDictionary* _responseHeaders;
	NSArray* _responseObjects;

}

@property (nonatomic,retain) NSString * uuid;                               //@synthesize uuid=_uuid - In the implementation block
@property (nonatomic,retain) NSDate * requestTime;                          //@synthesize requestTime=_requestTime - In the implementation block
@property (nonatomic,retain) NSString * requestMethod;                      //@synthesize requestMethod=_requestMethod - In the implementation block
@property (nonatomic,retain) NSURL * requestURL;                            //@synthesize requestURL=_requestURL - In the implementation block
@property (nonatomic,retain) NSDictionary * requestHeaders;                 //@synthesize requestHeaders=_requestHeaders - In the implementation block
@property (assign,nonatomic) long long bodyStreamResetCount;                //@synthesize bodyStreamResetCount=_bodyStreamResetCount - In the implementation block
@property (nonatomic,retain) NSArray * requestObjects;                      //@synthesize requestObjects=_requestObjects - In the implementation block
@property (assign,nonatomic) long long responseStatus;                      //@synthesize responseStatus=_responseStatus - In the implementation block
@property (nonatomic,retain) NSDictionary * responseHeaders;                //@synthesize responseHeaders=_responseHeaders - In the implementation block
@property (nonatomic,retain) NSArray * responseObjects;                     //@synthesize responseObjects=_responseObjects - In the implementation block
@property (nonatomic,readonly) NSDate * responseTime;                       //@synthesize responseTime=_responseTime - In the implementation block
@property (nonatomic,readonly) NSString * bundleIdentifier; 
@property (nonatomic,readonly) NSString * containerIdentifier; 
-(NSString *)uuid;
-(id)CKPropertiesDescription;
-(NSString *)bundleIdentifier;
-(void)setRequestURL:(NSURL *)arg1 ;
-(NSString *)containerIdentifier;
-(id)description;
-(NSDate *)requestTime;
-(NSURL *)requestURL;
-(NSDate *)responseTime;
-(void)setResponseHeaders:(NSDictionary *)arg1 ;
-(long long)responseStatus;
-(void)setResponseStatus:(long long)arg1 ;
-(NSDictionary *)responseHeaders;
-(void)setUuid:(NSString *)arg1 ;
-(NSDictionary *)requestHeaders;
-(void)setRequestHeaders:(NSDictionary *)arg1 ;
-(void)setRequestMethod:(NSString *)arg1 ;
-(NSString *)requestMethod;
-(void)setRequestTime:(NSDate *)arg1 ;
-(id)_initWithUUID:(id)arg1 requestMetadata:(id)arg2 requestObjects:(id)arg3 bodyStreamResetCount:(long long)arg4 responseMetadata:(id)arg5 responseObjects:(id)arg6 ;
-(long long)bodyStreamResetCount;
-(NSArray *)requestObjects;
-(NSArray *)responseObjects;
-(void)setBodyStreamResetCount:(long long)arg1 ;
-(void)setRequestObjects:(NSArray *)arg1 ;
-(void)setResponseObjects:(NSArray *)arg1 ;
@end

