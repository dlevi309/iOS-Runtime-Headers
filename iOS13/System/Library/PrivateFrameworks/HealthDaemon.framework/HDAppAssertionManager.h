/*
* Generated on Monday, March 1, 2021 at 2:34:09 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
*/


@protocol OS_dispatch_queue;
@class HDProfile, NSObject, NSMutableDictionary, NSMutableSet, NSMutableArray;

@interface HDAppAssertionManager : NSObject {

	HDProfile* _profile;
	NSObject*<OS_dispatch_queue> _queue;
	NSMutableDictionary* _appAssertions;
	NSMutableSet* _activeAssertions;
	NSMutableArray* _pendingAssertions;

}

@property (assign,nonatomic,__weak) HDProfile * profile;                       //@synthesize profile=_profile - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> queue;               //@synthesize queue=_queue - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * appAssertions;              //@synthesize appAssertions=_appAssertions - In the implementation block
@property (nonatomic,retain) NSMutableSet * activeAssertions;                  //@synthesize activeAssertions=_activeAssertions - In the implementation block
@property (nonatomic,retain) NSMutableArray * pendingAssertions;               //@synthesize pendingAssertions=_pendingAssertions - In the implementation block
-(id)init;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSObject*<OS_dispatch_queue>)queue;
-(HDProfile *)profile;
-(void)setProfile:(HDProfile *)arg1 ;
-(id)initWithProfile:(id)arg1 ;
-(void)extendAssertionWithBundleID:(id)arg1 dataCode:(long long)arg2 anchor:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)invalidateAssertionWithBundleID:(id)arg1 dataCode:(long long)arg2 anchor:(id)arg3 ;
-(void)_queue_extendAssertionWithBundleID:(id)arg1 dataCode:(long long)arg2 anchor:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)_queue_considerLaunchingApp;
-(void)_queue_invalidateAssertionWithBundleID:(id)arg1 dataCode:(long long)arg2 anchor:(id)arg3 ;
-(id)_queue_pendingAssertionsReadyForLaunch;
-(void)_queue_retryAppLaunchForAssertion:(id)arg1 ;
-(void)_queue_assertionDidFinish:(id)arg1 ;
-(NSMutableDictionary *)appAssertions;
-(void)setAppAssertions:(NSMutableDictionary *)arg1 ;
-(NSMutableSet *)activeAssertions;
-(void)setActiveAssertions:(NSMutableSet *)arg1 ;
-(NSMutableArray *)pendingAssertions;
-(void)setPendingAssertions:(NSMutableArray *)arg1 ;
@end

