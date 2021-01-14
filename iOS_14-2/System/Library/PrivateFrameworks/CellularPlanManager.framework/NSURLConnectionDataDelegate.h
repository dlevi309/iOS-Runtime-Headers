/*
* Generated on Thursday, January 14, 2021 at 2:27:26 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CellularPlanManager.framework/CellularPlanManager
*/


@protocol NSURLConnectionDataDelegate <NSURLConnectionDelegate>
@optional
-(void)connection:(id)arg1 didSendBodyData:(long long)arg2 totalBytesWritten:(long long)arg3 totalBytesExpectedToWrite:(long long)arg4;
-(void)connection:(id)arg1 didReceiveData:(id)arg2;
-(id)connection:(id)arg1 willSendRequest:(id)arg2 redirectResponse:(id)arg3;
-(void)connection:(id)arg1 didReceiveResponse:(id)arg2;
-(id)connection:(id)arg1 needNewBodyStream:(id)arg2;
-(id)connection:(id)arg1 willCacheResponse:(id)arg2;
-(void)connectionDidFinishLoading:(id)arg1;

@end

