/*
* Generated on Monday, March 1, 2021 at 2:31:45 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
*/

#import <libobjc.A.dylib/SSXPCCoding.h>

@class NSData, SSMetricsPageEvent, NSHTTPURLResponse, NSString, NSURL;

@interface SSURLConnectionResponse : NSObject <SSXPCCoding> {

	NSData* _bodyData;
	SSMetricsPageEvent* _metricsPageEvent;
	NSHTTPURLResponse* _urlResponse;

}

@property (nonatomic,readonly) BOOL ssv_isExpiredResponse; 
@property (nonatomic,readonly) NSData * databaseEncoding; 
@property (nonatomic,retain) SSMetricsPageEvent * metricsPageEvent;              //@synthesize metricsPageEvent=_metricsPageEvent - In the implementation block
@property (nonatomic,readonly) NSString * storeCorrelationID; 
@property (nonatomic,readonly) NSHTTPURLResponse * URLResponse;                  //@synthesize urlResponse=_urlResponse - In the implementation block
@property (nonatomic,readonly) NSData * bodyData;                                //@synthesize bodyData=_bodyData - In the implementation block
@property (nonatomic,readonly) long long expectedContentLength; 
@property (nonatomic,readonly) NSString * MIMEType; 
@property (nonatomic,readonly) NSString * suggestedFilename; 
@property (nonatomic,readonly) NSString * textEncodingName; 
@property (nonatomic,readonly) NSURL * URL; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(long long)statusCode;
-(NSURL *)URL;
-(NSString *)MIMEType;
-(id)allHeaderFields;
-(NSData *)bodyData;
-(NSString *)textEncodingName;
-(long long)expectedContentLength;
-(NSString *)suggestedFilename;
-(id)initWithXPCEncoding:(id)arg1 ;
-(id)copyXPCEncoding;
-(NSHTTPURLResponse *)URLResponse;
-(id)initWithURLResponse:(id)arg1 bodyData:(id)arg2 ;
-(void)setMetricsPageEvent:(SSMetricsPageEvent *)arg1 ;
-(SSMetricsPageEvent *)metricsPageEvent;
-(BOOL)ssv_isExpiredResponse;
-(id)initWithDatabaseEncoding:(id)arg1 ;
-(NSData *)databaseEncoding;
-(NSString *)storeCorrelationID;
@end

