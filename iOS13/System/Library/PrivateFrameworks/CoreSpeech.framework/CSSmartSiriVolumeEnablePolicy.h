/*
* Generated on Monday, March 1, 2021 at 2:34:03 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CoreSpeech.framework/CoreSpeech
*/

#import <CoreSpeech/CSPolicy.h>

@protocol OS_dispatch_queue;
@class NSObject;

@interface CSSmartSiriVolumeEnablePolicy : CSPolicy {

	NSObject*<OS_dispatch_queue> _queue;

}
-(id)init;
-(void)_subscribeEventMonitors;
-(void)_addSmartSiriVolumeEnabledConditions;
@end

