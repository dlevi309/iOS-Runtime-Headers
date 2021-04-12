/*
* Generated on Monday, March 1, 2021 at 2:33:22 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/EmailDaemon.framework/EmailDaemon
*/

#import <EmailDaemon/EmailDaemon-Structs.h>
#import <libobjc.A.dylib/EFLoggable.h>
#import <libobjc.A.dylib/EDActivityHookResponder.h>
#import <libobjc.A.dylib/EMActivityRegistryInterface.h>

@class NSMutableSet, EDActivityPersistence, EDPersistenceHookRegistry, NSString;

@interface EDActivityRegistry : NSObject <EFLoggable, EDActivityHookResponder, EMActivityRegistryInterface> {

	NSMutableSet* _observers;
	os_unfair_lock_s _lock;
	EDActivityPersistence* _activityPersistence;
	EDPersistenceHookRegistry* _hookRegistry;

}

@property (nonatomic,readonly) EDActivityPersistence * activityPersistence;              //@synthesize activityPersistence=_activityPersistence - In the implementation block
@property (nonatomic,readonly) EDPersistenceHookRegistry * hookRegistry;                 //@synthesize hookRegistry=_hookRegistry - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)log;
-(EDPersistenceHookRegistry *)hookRegistry;
-(void)registerActivityObserver:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)startedActivity:(id)arg1 ;
-(void)activityWithID:(id)arg1 setUserInfoObject:(id)arg2 forKey:(id)arg3 ;
-(void)activityWithID:(id)arg1 setCompletedCount:(long long)arg2 totalCount:(long long)arg3 ;
-(void)activityWithID:(id)arg1 finishedWithError:(id)arg2 ;
-(void)removedActivityWithID:(id)arg1 ;
-(id)initWithHookRegistry:(id)arg1 activityPersistence:(id)arg2 ;
-(EDActivityPersistence *)activityPersistence;
@end

