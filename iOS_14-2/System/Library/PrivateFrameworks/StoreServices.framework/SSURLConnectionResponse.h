/*
* Generated on Thursday, January 14, 2021 at 2:22:08 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(NSString *)MIMEType;
-(id)initWithXPCEncoding:(id)arg1 ;
-(id)copyXPCEncoding;
-(NSString *)suggestedFilename;
-(NSData *)databaseEncoding;
-(SSMetricsPageEvent *)metricsPageEvent;
-(long long)statusCode;
-(id)initWithURLResponse:(id)arg1 bodyData:(id)arg2 ;
-(BOOL)ssv_isExpiredResponse;
-(NSURL *)URL;
-(NSData *)bodyData;
-(NSString *)storeCorrelationID;
-(id)initWithDatabaseEncoding:(id)arg1 ;
-(long long)expectedContentLength;
-(void)setMetricsPageEvent:(SSMetricsPageEvent *)arg1 ;
-(NSString *)textEncodingName;
-(id)allHeaderFields;
-(NSHTTPURLResponse *)URLResponse;
-(void)dealloc;
@end

