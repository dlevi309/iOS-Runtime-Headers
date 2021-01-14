/*
* Generated on Thursday, January 14, 2021 at 2:28:52 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/iAdDeveloper.framework/iAdDeveloper
*/

#import <iAdDeveloper/iAdDeveloper-Structs.h>
#import <iAdDeveloper/HTSHTTPMessage.h>

@class NSString, NSURL;

@interface HTSHTTPMessageRequest : HTSHTTPMessage {

	NSString* _requestMethod;
	NSURL* _requestURL;

}

@property (nonatomic,copy) NSString * requestMethod;              //@synthesize requestMethod=_requestMethod - In the implementation block
@property (nonatomic,copy) NSURL * requestURL;                    //@synthesize requestURL=_requestURL - In the implementation block
-(void)setRequestURL:(NSURL *)arg1 ;
-(id)responseWithStatus:(int)arg1 ;
-(NSURL *)requestURL;
-(id)initWithRequest:(CFHTTPMessageRef)arg1 ;
-(void)setRequestMethod:(NSString *)arg1 ;
-(NSString *)requestMethod;
-(void)dealloc;
-(CFHTTPMessageRef)copyMessage;
-(BOOL)responseCanUseGZip;
@end

