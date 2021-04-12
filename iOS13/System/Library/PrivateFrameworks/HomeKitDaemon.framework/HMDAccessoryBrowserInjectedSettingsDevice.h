/*
* Generated on Monday, March 1, 2021 at 2:33:33 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/

#import <libobjc.A.dylib/HMDAccessoryBrowserInjectedSettings.h>

@protocol OS_dispatch_queue;
@class NSObject;

@interface HMDAccessoryBrowserInjectedSettingsDevice : NSObject <HMDAccessoryBrowserInjectedSettings> {

	NSObject*<OS_dispatch_queue> queue;

}
-(id)init;
-(id)workQueue;
-(id)createIpAccessoryBrowser;
-(id)createBtleAccessoryBrowser;
-(id)createRelayAccessoryBrowser;
-(id)createAuthServerWithDelegate:(id)arg1 ;
@end

