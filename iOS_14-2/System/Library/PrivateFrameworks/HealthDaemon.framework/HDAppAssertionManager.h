/*
* Generated on Thursday, January 14, 2021 at 2:25:16 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
*/

#import <libobjc.A.dylib/HDAppExtensionAssertionDelegate.h>

@protocol OS_dispatch_queue;
@class NSMutableDictionary, NSMutableSet, NSMutableArray, HDProfile, NSObject, NSString;

@interface HDAppAssertionManager : NSObject <HDAppExtensionAssertionDelegate> {

	NSMutableDictionary* _appExtensionAssertions;
	NSMutableDictionary* _appExtensionRetryTimers;
	NSMutableSet* _activeExtensionAssertions;
	NSMutableArray* _pendingExtensionAssertions;
	NSMutableSet* _activeAssertions;
	NSMutableArray* _pendingAssertions;
	HDProfile* _profile;
	NSObject*<OS_dispatch_queue> _queue;
	NSMutableDictionary* _appAssertions;

}

@property (nonatomic,retain) NSMutableDictionary * appExtensionAssertions;               //@synthesize appExtensionAssertions=_appExtensionAssertions - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * appExtensionRetryTimers;              //@synthesize appExtensionRetryTimers=_appExtensionRetryTimers - In the implementation block
@property (nonatomic,retain) NSMutableSet * activeExtensionAssertions;                   //@synthesize activeExtensionAssertions=_activeExtensionAssertions - In the implementation block
@property (nonatomic,retain) NSMutableArray * pendingExtensionAssertions;                //@synthesize pendingExtensionAssertions=_pendingExtensionAssertions - In the implementation block
@property (nonatomic,retain) NSMutableSet * activeAssertions;                            //@synthesize activeAssertions=_activeAssertions - In the implementation block
@property (nonatomic,retain) NSMutableArray * pendingAssertions;                         //@synthesize pendingAssertions=_pendingAssertions - In the implementation block
@property (assign,nonatomic,__weak) HDProfile * profile;                                 //@synthesize profile=_profile - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> queue;                         //@synthesize queue=_queue - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * appAssertions;                        //@synthesize appAssertions=_appAssertions - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setProfile:(HDProfile *)arg1 ;
-(void)setActiveAssertions:(NSMutableSet *)arg1 ;
-(id)init;
-(NSMutableDictionary *)appExtensionRetryTimers;
-(id)_queue_pendingAssertionsReadyForLaunch;
-(id)initWithProfile:(id)arg1 ;
-(NSMutableSet *)activeAssertions;
-(void)_queue_assertionDidFinish:(id)arg1 ;
-(void)extendAssertionWithBundleID:(id)arg1 dataCode:(long long)arg2 anchor:(id)arg3 completion:(/*^block*/id)arg4 ;
-(NSMutableArray *)pendingExtensionAssertions;
-(void)setActiveExtensionAssertions:(NSMutableSet *)arg1 ;
-(void)setAppExtensionRetryTimers:(NSMutableDictionary *)arg1 ;
-(NSMutableDictionary *)appExtensionAssertions;
-(NSMutableSet *)activeExtensionAssertions;
-(void)invalidateAssertionWithBundleID:(id)arg1 dataCode:(long long)arg2 anchor:(id)arg3 ;
-(void)_queue_retryAppLaunchForAssertion:(id)arg1 ;
-(id)newTimerWithDuration:(long long)arg1 handler:(/*^block*/id)arg2 ;
-(void)_queue_assertAppExtensionAssertion:(id)arg1 currentTime:(double)arg2 ;
-(NSMutableDictionary *)appAssertions;
-(HDProfile *)profile;
-(void)setAppAssertions:(NSMutableDictionary *)arg1 ;
-(void)_queue_considerLaunchingApp;
-(void)_queue_extendAssertionWithBundleID:(id)arg1 dataCode:(long long)arg2 anchor:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)_queue_considerAssertingAppExtensions;
-(NSObject*<OS_dispatch_queue>)queue;
-(NSMutableArray *)pendingAssertions;
-(void)_queue_retryAssertingAppExtensionAssertion:(id)arg1 currentTime:(double)arg2 ;
-(void)setAppExtensionAssertions:(NSMutableDictionary *)arg1 ;
-(void)setPendingExtensionAssertions:(NSMutableArray *)arg1 ;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)appExtensionAssertionDidInvalidate:(id)arg1 ;
-(void)setPendingAssertions:(NSMutableArray *)arg1 ;
-(void)_queue_invalidateAssertionWithBundleID:(id)arg1 dataCode:(long long)arg2 anchor:(id)arg3 ;
@end

