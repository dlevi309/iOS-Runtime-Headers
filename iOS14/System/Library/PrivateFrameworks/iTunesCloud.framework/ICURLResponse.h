/*
* Generated on Thursday, January 14, 2021 at 2:22:45 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
*/


@class NSURLRequest, NSURLResponse, NSData, NSURL, ICURLPerformanceMetrics, NSDate;

@interface ICURLResponse : NSObject {

	long long _parsedBodyResponseType;
	id _parsedBodyResponse;
	NSURLRequest* _urlRequest;
	NSURLResponse* _urlResponse;
	NSData* _bodyData;
	NSURL* _bodyDataURL;
	ICURLPerformanceMetrics* _performanceMetrics;

}

@property (nonatomic,readonly) NSURLRequest * urlRequest;                               //@synthesize urlRequest=_urlRequest - In the implementation block
@property (nonatomic,readonly) NSURLResponse * urlResponse;                             //@synthesize urlResponse=_urlResponse - In the implementation block
@property (nonatomic,readonly) NSData * bodyData;                                       //@synthesize bodyData=_bodyData - In the implementation block
@property (nonatomic,readonly) NSURL * bodyDataURL;                                     //@synthesize bodyDataURL=_bodyDataURL - In the implementation block
@property (nonatomic,readonly) NSDate * expirationDate; 
@property (nonatomic,retain) ICURLPerformanceMetrics * performanceMetrics;              //@synthesize performanceMetrics=_performanceMetrics - In the implementation block
-(void)setPerformanceMetrics:(ICURLPerformanceMetrics *)arg1 ;
-(NSURLRequest *)urlRequest;
-(NSURLResponse *)urlResponse;
-(id)initWithURLResponse:(id)arg1 urlRequest:(id)arg2 bodyData:(id)arg3 performanceMetrics:(id)arg4 ;
-(ICURLPerformanceMetrics *)performanceMetrics;
-(NSDate *)expirationDate;
-(id)parsedBodyArray;
-(NSData *)bodyData;
-(NSURL *)bodyDataURL;
-(id)initWithURLResponse:(id)arg1 urlRequest:(id)arg2 bodyDataURL:(id)arg3 performanceMetrics:(id)arg4 ;
-(id)parsedBodyDictionary;
-(id)parsedBody;
-(void)_prepareParsedBodyResponse;
@end

