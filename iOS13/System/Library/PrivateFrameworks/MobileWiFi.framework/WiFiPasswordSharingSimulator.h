/*
* Generated on Monday, March 1, 2021 at 2:30:51 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/MobileWiFi.framework/MobileWiFi
*/

#import <libobjc.A.dylib/SFPasswordSharingServiceDelegate.h>

@protocol OS_dispatch_queue;
@class NSObject, SFPasswordSharingService;

@interface WiFiPasswordSharingSimulator : NSObject <SFPasswordSharingServiceDelegate> {

	NSObject*<OS_dispatch_queue> _queue;
	SFPasswordSharingService* _service;
	/*^block*/id _replyHandler;

}
-(id)init;
-(void)dealloc;
-(void)service:(id)arg1 receivedNetworkInfo:(id)arg2 ;
-(BOOL)service:(id)arg1 shouldPromptForNetwork:(id)arg2 ;
-(void)runWithSSID:(id)arg1 reply:(/*^block*/id)arg2 ;
@end

