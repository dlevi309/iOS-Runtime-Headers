/*
* Generated on Monday, March 1, 2021 at 2:32:09 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CoreSuggestions.framework/CoreSuggestions
*/


@protocol OS_dispatch_queue;
@class NSUserDefaults, NSObject;

@interface SGPreferenceManager : NSObject {

	NSUserDefaults* _suggestionsDefaults;
	NSObject*<OS_dispatch_queue> _settingsUpdateQueue;
	BOOL _isQueueSuspended;

}
+(id)defaultManager;
-(id)init;
-(int)registerBlock:(/*^block*/id)arg1 ;
-(void)_suspendNotificationQueue;
-(void)_resumeNotificationQueue;
@end

