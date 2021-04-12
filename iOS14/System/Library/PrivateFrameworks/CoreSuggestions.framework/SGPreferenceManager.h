/*
* Generated on Thursday, January 14, 2021 at 2:22:02 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(int)registerBlock:(/*^block*/id)arg1 ;
-(id)init;
-(void)_resumeNotificationQueue;
-(void)_suspendNotificationQueue;
@end

