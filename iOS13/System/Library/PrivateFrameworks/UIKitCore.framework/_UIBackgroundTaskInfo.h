/*
* Generated on Monday, March 1, 2021 at 2:30:18 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/


@class BKSProcessAssertion, NSString;

@interface _UIBackgroundTaskInfo : NSObject {

	unsigned long long _taskId;
	/*^block*/id _expireHandler;
	BKSProcessAssertion* _processAssertion;
	NSString* _taskName;
	long long _creationTime;
	BOOL _alreadyWarnedAboutExpiration;

}
+(id)backgroundTaskAssertionQueue;
-(void)dealloc;
-(id)description;
-(void)invalidate;
-(id)initWithProcessAssertion:(id)arg1 taskName:(id)arg2 expirationHandler:(/*^block*/id)arg3 ;
-(void)fireExpirationHandler;
@end

