/*
* Generated on Thursday, January 14, 2021 at 2:28:20 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/RemoteMediaServices.framework/RemoteMediaServices
*/


@protocol NSNetServiceDelegate <NSObject>
@optional
-(void)netService:(id)arg1 didAcceptConnectionWithInputStream:(id)arg2 outputStream:(id)arg3;
-(void)netService:(id)arg1 didUpdateTXTRecordData:(id)arg2;
-(void)netServiceDidResolveAddress:(id)arg1;
-(void)netServiceDidPublish:(id)arg1;
-(void)netService:(id)arg1 didNotResolve:(id)arg2;
-(void)netService:(id)arg1 didNotPublish:(id)arg2;
-(void)netServiceWillResolve:(id)arg1;
-(void)netServiceWillPublish:(id)arg1;
-(void)netServiceDidStop:(id)arg1;

@end

