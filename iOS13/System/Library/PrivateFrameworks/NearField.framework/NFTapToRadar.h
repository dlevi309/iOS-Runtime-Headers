/*
* Generated on Monday, March 1, 2021 at 2:32:28 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NearField.framework/NearField
*/


@protocol OS_dispatch_queue;
#import <NearField/NearField-Structs.h>
@class NSObject, NSString, NSUserDefaults;

@interface NFTapToRadar : NSObject {

	NSObject*<OS_dispatch_queue> _queue;
	Class _lsApplicationWorkspace;
	NSString* _pendingRequest;
	NSUserDefaults* _userDefaults;
	CFRunLoopSourceRef _runLoopSource;
	CFUserNotificationRef _userNotification;

}
+(void)requestTapToRadar:(id)arg1 preferences:(id)arg2 ;
+(id)_getInstance;
+(void)handleCallback:(unsigned long long)arg1 ;
-(id)init;
-(void)_handleCallbackSync:(unsigned long long)arg1 ;
-(void)_requestTapToRadarSync:(id)arg1 prefs:(id)arg2 ;
@end

