/*
* Generated on Thursday, January 14, 2021 at 2:22:10 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Sharing.framework/Sharing
*/


@class NSString, NSDictionary;

@interface SFSessionRequestInfo : NSObject {

	NSString* _requestID;
	NSDictionary* _options;
	NSDictionary* _request;
	/*^block*/id _responseHandler;

}

@property (nonatomic,copy) NSString * requestID;                //@synthesize requestID=_requestID - In the implementation block
@property (nonatomic,copy) NSDictionary * options;              //@synthesize options=_options - In the implementation block
@property (nonatomic,copy) NSDictionary * request;              //@synthesize request=_request - In the implementation block
@property (nonatomic,copy) id responseHandler;                  //@synthesize responseHandler=_responseHandler - In the implementation block
-(void)setRequest:(NSDictionary *)arg1 ;
-(NSDictionary *)options;
-(id)responseHandler;
-(void)setOptions:(NSDictionary *)arg1 ;
-(NSDictionary *)request;
-(NSString *)requestID;
-(void)setResponseHandler:(id)arg1 ;
-(void)setRequestID:(NSString *)arg1 ;
@end

