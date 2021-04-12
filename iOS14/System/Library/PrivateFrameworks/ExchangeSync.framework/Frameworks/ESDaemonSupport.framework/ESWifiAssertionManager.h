/*
* Generated on Thursday, January 14, 2021 at 2:27:41 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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

