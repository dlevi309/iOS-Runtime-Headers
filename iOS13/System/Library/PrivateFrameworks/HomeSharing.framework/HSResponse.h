/*
* Generated on Monday, March 1, 2021 at 2:34:18 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HomeSharing.framework/HomeSharing
*/


@class NSString, NSDictionary, NSData, NSURL, NSError;

@interface HSResponse : NSObject {

	NSString* _MIMEType;
	unsigned long long _responseCode;
	NSDictionary* _responseHeaderFields;
	NSData* _responseData;
	NSURL* _responseDataFileURL;
	NSError* _error;

}

@property (nonatomic,readonly) NSString * MIMEType;                              //@synthesize MIMEType=_MIMEType - In the implementation block
@property (nonatomic,readonly) unsigned long long responseCode;                  //@synthesize responseCode=_responseCode - In the implementation block
@property (nonatomic,readonly) NSDictionary * responseHeaderFields;              //@synthesize responseHeaderFields=_responseHeaderFields - In the implementation block
@property (nonatomic,readonly) NSData * responseData;                            //@synthesize responseData=_responseData - In the implementation block
@property (nonatomic,copy) NSURL * responseDataFileURL;                          //@synthesize responseDataFileURL=_responseDataFileURL - In the implementation block
@property (nonatomic,readonly) NSError * error;                                  //@synthesize error=_error - In the implementation block
+(id)responseWithResponse:(id)arg1 ;
+(id)responseWithCode:(unsigned long long)arg1 headerFields:(id)arg2 data:(id)arg3 MIMEType:(id)arg4 error:(id)arg5 ;
-(id)description;
-(NSError *)error;
-(NSString *)MIMEType;
-(NSData *)responseData;
-(unsigned long long)responseCode;
-(NSDictionary *)responseHeaderFields;
-(id)initWithCode:(unsigned long long)arg1 headerFields:(id)arg2 data:(id)arg3 MIMEType:(id)arg4 error:(id)arg5 ;
-(NSURL *)responseDataFileURL;
-(void)setResponseDataFileURL:(NSURL *)arg1 ;
@end

