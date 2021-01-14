/*
* Generated on Thursday, January 14, 2021 at 2:26:04 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AirTrafficDevice.framework/AirTrafficDevice
*/


@protocol ATSocketDelegate <NSObject>
@required
-(void)socket:(id)arg1 hasDataAvailable:(const char*)arg2 length:(long long)arg3;
-(void)socketDidClose:(id)arg1;

@end

