/*
* Generated on Monday, March 1, 2021 at 2:31:45 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
*/


@class NSData, NSURLRequest, SSURLRequestProperties, NSHTTPURLResponse, NSString;

@interface SSVSAPSignatureDataSource : NSObject {

	NSData* _bodyData;
	NSURLRequest* _request;
	SSURLRequestProperties* _requestProperties;
	NSHTTPURLResponse* _response;

}

@property (nonatomic,readonly) NSData * HTTPBody; 
@property (nonatomic,readonly) NSString * HTTPMethod; 
-(NSData *)HTTPBody;
-(NSString *)HTTPMethod;
-(id)initWithURLRequest:(id)arg1 ;
-(id)initWithURLRequestProperties:(id)arg1 ;
-(id)initWithURLResponse:(id)arg1 bodyData:(id)arg2 ;
-(id)valueForHTTPHeader:(id)arg1 ;
-(id)valueForQueryParameter:(id)arg1 ;
@end

