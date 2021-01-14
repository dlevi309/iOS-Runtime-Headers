/*
* Generated on Thursday, January 14, 2021 at 2:24:54 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)service:(id)arg1 receivedNetworkInfo:(id)arg2 ;
-(void)dealloc;
-(BOOL)service:(id)arg1 shouldPromptForNetwork:(id)arg2 ;
-(void)runWithSSID:(id)arg1 reply:(/*^block*/id)arg2 ;
@end

