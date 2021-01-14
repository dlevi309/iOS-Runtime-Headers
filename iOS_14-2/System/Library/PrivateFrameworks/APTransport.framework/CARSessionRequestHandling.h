/*
* Generated on Thursday, January 14, 2021 at 2:26:26 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/APTransport.framework/APTransport
*/


@protocol CARSessionRequestHandling <NSObject>
@required
-(void)startSessionWithHost:(id)arg1 completion:(/*^block*/id)arg2;
-(void)cancelRequests;
-(void)prepareForRemovingWiFiUUID:(id)arg1 completion:(/*^block*/id)arg2;
-(void)startAdvertisingCarPlayControlForUSB;
-(void)startAdvertisingCarPlayControlForWiFiUUID:(id)arg1;

@end

