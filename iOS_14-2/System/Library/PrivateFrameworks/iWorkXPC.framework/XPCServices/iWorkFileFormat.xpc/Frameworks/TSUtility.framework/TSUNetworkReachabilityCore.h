/*
* Generated on Thursday, January 14, 2021 at 2:28:55 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/iWorkXPC.framework/XPCServices/iWorkFileFormat.xpc/Frameworks/TSUtility.framework/TSUtility
*/


@protocol TSUNetworkReachabilityCore <NSObject>
@required
-(BOOL)getReachabilityFlags:(out unsigned*)arg1;
-(BOOL)startNotifyingWithQueue:(id)arg1 block:(/*^block*/id)arg2;
-(void)stopNotifying;

@end

