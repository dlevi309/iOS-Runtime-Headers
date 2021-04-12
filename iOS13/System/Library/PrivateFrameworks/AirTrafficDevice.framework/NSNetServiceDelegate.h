/*
* Generated on Monday, March 1, 2021 at 2:33:12 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AirTrafficDevice.framework/AirTrafficDevice
*/


@protocol NSNetServiceDelegate <NSObject>
@optional
-(void)netServiceWillResolve:(id)arg1;
-(void)netService:(id)arg1 didNotResolve:(id)arg2;
-(void)netService:(id)arg1 didNotPublish:(id)arg2;
-(void)netServiceDidStop:(id)arg1;
-(void)netServiceDidResolveAddress:(id)arg1;
-(void)netService:(id)arg1 didAcceptConnectionWithInputStream:(id)arg2 outputStream:(id)arg3;
-(void)netServiceWillPublish:(id)arg1;
-(void)netServiceDidPublish:(id)arg1;
-(void)netService:(id)arg1 didUpdateTXTRecordData:(id)arg2;

@end

