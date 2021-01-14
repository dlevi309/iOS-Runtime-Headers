/*
* Generated on Thursday, January 14, 2021 at 2:20:12 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CFNetwork.framework/CFNetwork
*/


@protocol NSURLSessionDelegate_Internal <NSURLSessionDelegate>
@optional
-(void)_URLSession:(id)arg1 needConnectedSocketToHost:(id)arg2 port:(unsigned long long)arg3 completionHandler:(/*^block*/id)arg4;
-(void)_URLSession:(id)arg1 openFileAtPath:(id)arg2 mode:(int)arg3 completionHandler:(/*^block*/id)arg4;
-(void)_URLSession:(id)arg1 companionAvailabilityChanged:(BOOL)arg2;

@required
-(void)_URLSession:(id)arg1 task:(id)arg2 getAuthHeadersForResponse:(id)arg3 completionHandler:(/*^block*/id)arg4;

@end

