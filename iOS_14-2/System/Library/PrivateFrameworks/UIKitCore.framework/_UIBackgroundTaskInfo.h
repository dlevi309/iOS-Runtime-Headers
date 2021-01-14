/*
* Generated on Thursday, January 14, 2021 at 2:20:31 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)description;
-(void)invalidate;
-(id)initWithProcessAssertion:(id)arg1 taskName:(id)arg2 expirationHandler:(/*^block*/id)arg3 ;
-(void)fireExpirationHandler;
-(void)dealloc;
@end

