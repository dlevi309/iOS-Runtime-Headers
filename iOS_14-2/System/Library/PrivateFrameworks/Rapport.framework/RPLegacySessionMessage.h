/*
* Generated on Thursday, January 14, 2021 at 2:24:40 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Rapport.framework/Rapport
*/


@class NSDictionary, NSString;

@interface RPLegacySessionMessage : NSObject {

	NSDictionary* _message;
	NSDictionary* _options;
	NSString* _requestID;
	/*^block*/id _responseHandler;

}

@property (nonatomic,copy) NSDictionary * message;              //@synthesize message=_message - In the implementation block
@property (nonatomic,copy) NSDictionary * options;              //@synthesize options=_options - In the implementation block
@property (nonatomic,copy) NSString * requestID;                //@synthesize requestID=_requestID - In the implementation block
@property (nonatomic,copy) id responseHandler;                  //@synthesize responseHandler=_responseHandler - In the implementation block
-(void)setMessage:(NSDictionary *)arg1 ;
-(NSDictionary *)message;
-(NSDictionary *)options;
-(id)responseHandler;
-(void)setOptions:(NSDictionary *)arg1 ;
-(NSString *)requestID;
-(void)setResponseHandler:(id)arg1 ;
-(void)setRequestID:(NSString *)arg1 ;
@end

