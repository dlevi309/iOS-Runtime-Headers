/*
* Generated on Monday, March 1, 2021 at 2:31:52 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
*/


@protocol NSURLConnectionDataDelegate <NSURLConnectionDelegate>
@optional
-(id)connection:(id)arg1 willSendRequest:(id)arg2 redirectResponse:(id)arg3;
-(void)connection:(id)arg1 didReceiveResponse:(id)arg2;
-(void)connection:(id)arg1 didReceiveData:(id)arg2;
-(id)connection:(id)arg1 needNewBodyStream:(id)arg2;
-(void)connection:(id)arg1 didSendBodyData:(long long)arg2 totalBytesWritten:(long long)arg3 totalBytesExpectedToWrite:(long long)arg4;
-(id)connection:(id)arg1 willCacheResponse:(id)arg2;
-(void)connectionDidFinishLoading:(id)arg1;

@end

