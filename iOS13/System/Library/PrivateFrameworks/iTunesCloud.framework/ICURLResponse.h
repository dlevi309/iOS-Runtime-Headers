/*
* Generated on Monday, March 1, 2021 at 2:32:29 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
*/


@class NSURLRequest, NSURLResponse, NSData, NSURL, NSDate;

@interface ICURLResponse : NSObject {

	long long _parsedBodyResponseType;
	id _parsedBodyResponse;
	NSURLRequest* _urlRequest;
	NSURLResponse* _urlResponse;
	NSData* _bodyData;
	NSURL* _bodyDataURL;

}

@property (nonatomic,readonly) NSURLRequest * urlRequest;                //@synthesize urlRequest=_urlRequest - In the implementation block
@property (nonatomic,readonly) NSURLResponse * urlResponse;              //@synthesize urlResponse=_urlResponse - In the implementation block
@property (nonatomic,readonly) NSData * bodyData;                        //@synthesize bodyData=_bodyData - In the implementation block
@property (nonatomic,readonly) NSURL * bodyDataURL;                      //@synthesize bodyDataURL=_bodyDataURL - In the implementation block
@property (nonatomic,readonly) NSDate * expirationDate; 
-(NSDate *)expirationDate;
-(NSData *)bodyData;
-(NSURLRequest *)urlRequest;
-(id)parsedBody;
-(NSURLResponse *)urlResponse;
-(id)parsedBodyDictionary;
-(NSURL *)bodyDataURL;
-(id)initWithURLResponse:(id)arg1 urlRequest:(id)arg2 bodyData:(id)arg3 ;
-(id)initWithURLResponse:(id)arg1 urlRequest:(id)arg2 bodyDataURL:(id)arg3 ;
-(id)parsedBodyArray;
-(void)_prepareParsedBodyResponse;
@end

