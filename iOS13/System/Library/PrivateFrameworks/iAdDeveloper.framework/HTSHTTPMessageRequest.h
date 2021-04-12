/*
* Generated on Monday, March 1, 2021 at 2:35:30 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)dealloc;
-(id)responseWithStatus:(int)arg1 ;
-(id)initWithRequest:(CFHTTPMessageRef)arg1 ;
-(void)setRequestURL:(NSURL *)arg1 ;
-(NSURL *)requestURL;
-(NSString *)requestMethod;
-(void)setRequestMethod:(NSString *)arg1 ;
-(CFHTTPMessageRef)copyMessage;
-(BOOL)responseCanUseGZip;
@end

