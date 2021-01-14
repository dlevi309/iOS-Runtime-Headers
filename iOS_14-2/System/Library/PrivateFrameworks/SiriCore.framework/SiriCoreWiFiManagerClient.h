/*
* Generated on Thursday, January 14, 2021 at 2:28:27 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SiriCore.framework/SiriCore
*/


#import <SiriCore/SiriCore-Structs.h>
@interface SiriCoreWiFiManagerClient : NSObject {

	int _type;
	WiFiManagerClientRef _primitiveWiFiManagerClient;
	long long _rssi;
	long long _snr;

}
-(id)init;
-(BOOL)isWifiEnabled;
-(void)dealloc;
-(void)releaseWiFiAssertion;
-(void)acquireWiFiAssertion:(long long)arg1 ;
-(WiFiManagerClientRef)_primitiveWiFiManagerClient;
-(void)_setWiFiManagerClientType:(int)arg1 ;
-(BOOL)hasAssociatedNetworkWithRSSI:(long long*)arg1 andSNR:(long long*)arg2 andPhyMode:(id*)arg3 andChannelInfo:(id*)arg4 isCaptive:(BOOL*)arg5 ;
-(void)registerOneShotEnabledHandler:(/*^block*/id)arg1 ;
@end

