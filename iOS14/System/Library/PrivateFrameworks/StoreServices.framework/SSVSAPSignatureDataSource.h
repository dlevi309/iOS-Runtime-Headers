/*
* Generated on Thursday, January 14, 2021 at 2:22:09 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(NSString *)HTTPMethod;
-(id)initWithURLRequestProperties:(id)arg1 ;
-(id)valueForHTTPHeader:(id)arg1 ;
-(id)valueForQueryParameter:(id)arg1 ;
-(id)initWithURLRequest:(id)arg1 ;
-(id)initWithURLResponse:(id)arg1 bodyData:(id)arg2 ;
-(NSData *)HTTPBody;
@end

