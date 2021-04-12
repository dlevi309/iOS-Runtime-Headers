/*
* Generated on Thursday, January 14, 2021 at 2:26:35 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ExposureNotificationDaemon.framework/ExposureNotificationDaemon
*/


@class NSURL, NSUUID, NSData, NSDictionary;

@interface ENCloudNetworkRequest : NSObject {

	NSURL* _url;
	NSUUID* _requestID;
	NSData* _body;
	NSDictionary* _parameters;
	NSDictionary* _headers;
	unsigned long long _httpMethod;

}

@property (nonatomic,copy) NSUUID * requestID;                           //@synthesize requestID=_requestID - In the implementation block
@property (nonatomic,copy) NSURL * url;                                  //@synthesize url=_url - In the implementation block
@property (nonatomic,copy) NSDictionary * headers;                       //@synthesize headers=_headers - In the implementation block
@property (nonatomic,copy) NSDictionary * parameters;                    //@synthesize parameters=_parameters - In the implementation block
@property (nonatomic,copy) NSData * body;                                //@synthesize body=_body - In the implementation block
@property (assign,nonatomic) unsigned long long httpMethod;              //@synthesize httpMethod=_httpMethod - In the implementation block
+(id)requestWithURL:(id)arg1 httpMethod:(unsigned long long)arg2 headers:(id)arg3 parameters:(id)arg4 andBody:(id)arg5 ;
-(NSDictionary *)parameters;
-(void)setParameters:(NSDictionary *)arg1 ;
-(void)setBody:(NSData *)arg1 ;
-(NSData *)body;
-(NSURL *)url;
-(NSUUID *)requestID;
-(unsigned long long)httpMethod;
-(id)description;
-(void)setUrl:(NSURL *)arg1 ;
-(void)setRequestID:(NSUUID *)arg1 ;
-(NSDictionary *)headers;
-(void)setHeaders:(NSDictionary *)arg1 ;
-(void)setHttpMethod:(unsigned long long)arg1 ;
-(id)httpMethodString;
@end

