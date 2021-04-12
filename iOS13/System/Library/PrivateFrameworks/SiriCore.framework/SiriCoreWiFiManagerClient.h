/*
* Generated on Monday, March 1, 2021 at 2:34:10 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)dealloc;
-(BOOL)isWifiEnabled;
-(void)releaseWiFiAssertion;
-(void)acquireWiFiAssertion:(long long)arg1 ;
-(WiFiManagerClientRef)_primitiveWiFiManagerClient;
-(void)_setWiFiManagerClientType:(int)arg1 ;
-(BOOL)hasAssociatedNetworkWithRSSI:(long long*)arg1 andSNR:(long long*)arg2 andPhyMode:(id*)arg3 andChannelInfo:(id*)arg4 isCaptive:(BOOL*)arg5 ;
-(void)registerOneShotEnabledHandler:(/*^block*/id)arg1 ;
@end

