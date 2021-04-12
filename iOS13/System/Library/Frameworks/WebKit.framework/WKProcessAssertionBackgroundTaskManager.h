/*
* Generated on Monday, March 1, 2021 at 2:30:46 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/WebKit.framework/WebKit
*/


#import <WebKit/WebKit-Structs.h>
@interface WKProcessAssertionBackgroundTaskManager : NSObject {

	unsigned long long _backgroundTask;
	WeakHashSet<WebKit::ProcessAndUIAssertion>* _assertionsNeedingBackgroundTask;
	BOOL _applicationIsBackgrounded;
	/*^block*/id _pendingTaskReleaseTask;

}
+(id)shared;
-(id)init;
-(void)dealloc;
-(void)_cancelPendingReleaseTask;
-(void)_updateBackgroundTask;
-(void)_releaseBackgroundTask;
-(void)_notifyAssertionsOfImminentSuspension;
-(void)_scheduleReleaseTask;
-(void)addAssertionNeedingBackgroundTask:(ProcessAndUIAssertion*)arg1 ;
-(void)removeAssertionNeedingBackgroundTask:(ProcessAndUIAssertion*)arg1 ;
@end

