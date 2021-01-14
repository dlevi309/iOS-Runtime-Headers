/*
* Generated on Thursday, January 14, 2021 at 2:21:57 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/WebKit.framework/WebKit
*/

#import <WebKit/WebKit-Structs.h>
#import <libobjc.A.dylib/RBSAssertionObserving.h>

@class NSString;

@interface WKProcessAssertionBackgroundTaskManager : NSObject <RBSAssertionObserving> {

	RetainPtr<RBSAssertion>* _backgroundTask;
	WeakHashSet<WebKit::ProcessAndUIAssertion, WTF::EmptyCounter>* _assertionsNeedingBackgroundTask;
	/*^block*/id _pendingTaskReleaseTask;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)shared;
-(void)_handleBackgroundTaskExpirationOnMainThread;
-(void)assertion:(id)arg1 didInvalidateWithError:(id)arg2 ;
-(BOOL)_hasBackgroundTask;
-(void)assertionWillInvalidate:(id)arg1 ;
-(id)init;
-(void)addAssertionNeedingBackgroundTask:(ProcessAndUIAssertion*)arg1 ;
-(void)_releaseBackgroundTask;
-(void)_scheduleReleaseTask;
-(void)_notifyAssertionsOfImminentSuspension;
-(void)_handleBackgroundTaskExpiration;
-(void)removeAssertionNeedingBackgroundTask:(ProcessAndUIAssertion*)arg1 ;
-(void)_cancelPendingReleaseTask;
-(void)_updateBackgroundTask;
-(void)dealloc;
@end

