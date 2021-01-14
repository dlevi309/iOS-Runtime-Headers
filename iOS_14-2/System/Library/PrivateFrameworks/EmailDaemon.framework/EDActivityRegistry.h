/*
* Generated on Thursday, January 14, 2021 at 2:25:59 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)registerActivityObserver:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)startedActivity:(id)arg1 ;
-(void)activityWithID:(id)arg1 setUserInfoObject:(id)arg2 forKey:(id)arg3 ;
-(void)activityWithID:(id)arg1 setCompletedCount:(long long)arg2 totalCount:(long long)arg3 ;
-(void)activityWithID:(id)arg1 finishedWithError:(id)arg2 ;
-(void)removedActivityWithID:(id)arg1 ;
-(EDPersistenceHookRegistry *)hookRegistry;
-(id)initWithHookRegistry:(id)arg1 activityPersistence:(id)arg2 ;
-(EDActivityPersistence *)activityPersistence;
@end

