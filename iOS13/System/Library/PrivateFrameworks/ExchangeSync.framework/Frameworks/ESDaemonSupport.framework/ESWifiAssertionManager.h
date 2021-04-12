/*
* Generated on Monday, March 1, 2021 at 2:34:13 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ExchangeSync.framework/Frameworks/ESDaemonSupport.framework/ESDaemonSupport
*/


#import <ESDaemonSupport/ESDaemonSupport-Structs.h>
@interface ESWifiAssertionManager : NSObject {

	int _refCount;

}
+(WiFiManagerClientRef)_getWiFiClientRef;
+(id)sharedWifiAssertionManager;
-(void)retainWifiAssertion;
-(void)releaseWifiAssertion;
@end

