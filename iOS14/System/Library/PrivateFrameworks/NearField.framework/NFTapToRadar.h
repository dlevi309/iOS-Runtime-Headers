/*
* Generated on Thursday, January 14, 2021 at 2:24:55 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
+(void)handleCallback:(unsigned long long)arg1 ;
+(id)_getInstance;
-(id)init;
-(void)_handleCallbackSync:(unsigned long long)arg1 ;
-(void)_requestTapToRadarSync:(id)arg1 prefs:(id)arg2 ;
@end

