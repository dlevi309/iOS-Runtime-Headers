/*
* Generated on Monday, March 1, 2021 at 2:32:19 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(NSDictionary *)options;
-(void)setOptions:(NSDictionary *)arg1 ;
-(NSDictionary *)message;
-(void)setMessage:(NSDictionary *)arg1 ;
-(void)setResponseHandler:(id)arg1 ;
-(id)responseHandler;
-(NSString *)requestID;
-(void)setRequestID:(NSString *)arg1 ;
@end

