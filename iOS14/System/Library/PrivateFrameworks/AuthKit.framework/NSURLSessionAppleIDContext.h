/*
* Generated on Thursday, January 14, 2021 at 2:22:06 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AuthKit.framework/AuthKit
*/


@protocol NSURLSessionAppleIDContext <NSObject,NSCopying,NSSecureCoding>
@optional
-(void)URLSession:(id)arg1 task:(id)arg2 getAppleIDRequestOrHeadersForResponse:(id)arg3 completionHandler:(/*^block*/id)arg4;

@required
-(id)relevantHTTPStatusCodes;
-(void)URLSession:(id)arg1 task:(id)arg2 getAppleIDHeadersForResponse:(id)arg3 completionHandler:(/*^block*/id)arg4;

@end

