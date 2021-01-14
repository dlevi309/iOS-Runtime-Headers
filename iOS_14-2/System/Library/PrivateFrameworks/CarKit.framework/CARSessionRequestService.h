/*
* Generated on Thursday, January 14, 2021 at 2:22:45 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CarKit.framework/CarKit
*/


@protocol CARSessionRequestService
@required
-(void)service_startSessionWithHost:(id)arg1 reply:(/*^block*/id)arg2;
-(void)service_cancelRequestsWithReply:(/*^block*/id)arg1;
-(void)service_startAdvertisingCarPlayControlForUSBWithReply:(/*^block*/id)arg1;
-(void)service_startAdvertisingCarPlayControlForWiFiUUID:(id)arg1 reply:(/*^block*/id)arg2;
-(void)service_prepareForRemovingWiFiUUID:(id)arg1 reply:(/*^block*/id)arg2;

@end

