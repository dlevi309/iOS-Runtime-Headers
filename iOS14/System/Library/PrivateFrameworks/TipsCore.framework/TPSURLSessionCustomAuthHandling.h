/*
* Generated on Thursday, January 14, 2021 at 2:23:06 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/TipsCore.framework/TipsCore
*/


@protocol TPSURLSessionCustomAuthHandling <NSObject>
@optional
-(id)customHeaderFields;

@required
+(BOOL)canAuthenticateWithURLResponse:(id)arg1;
-(void)authenticateForURLResponse:(id)arg1 completion:(/*^block*/id)arg2;

@end

