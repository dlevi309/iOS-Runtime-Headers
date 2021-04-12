/*
* Generated on Thursday, January 14, 2021 at 2:26:44 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ActivityAchievementsDaemon.framework/ActivityAchievementsDaemon
*/

#import <libobjc.A.dylib/ACHEarnedInstanceEntitySyncedEarnedInstancesObserver.h>

@protocol ACHEarnedInstanceEntitySyncedEarnedInstancesObserver;
@class HDProfile, NSString;

@interface ACHEarnedInstanceEntityWrapper : NSObject <ACHEarnedInstanceEntitySyncedEarnedInstancesObserver> {

	HDProfile* _profile;
	id<ACHEarnedInstanceEntitySyncedEarnedInstancesObserver> _syncedEarnedInstancesObserver;

}

@property (assign,nonatomic,__weak) HDProfile * profile;                                                                                 //@synthesize profile=_profile - In the implementation block
@property (assign,nonatomic,__weak) id<ACHEarnedInstanceEntitySyncedEarnedInstancesObserver> syncedEarnedInstancesObserver;              //@synthesize syncedEarnedInstancesObserver=_syncedEarnedInstancesObserver - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setProfile:(HDProfile *)arg1 ;
-(id)initWithProfile:(id)arg1 ;
-(void)setSyncedEarnedInstancesObserver:(id<ACHEarnedInstanceEntitySyncedEarnedInstancesObserver>)arg1 ;
-(id<ACHEarnedInstanceEntitySyncedEarnedInstancesObserver>)syncedEarnedInstancesObserver;
-(HDProfile *)profile;
-(BOOL)earnedInstanceEntityDidReceiveSyncedEarnedInstances:(id)arg1 provenance:(long long)arg2 ;
-(id)insertEarnedInstances:(id)arg1 provenance:(long long)arg2 databaseContext:(id)arg3 error:(id*)arg4 ;
-(BOOL)removeEarnedInstances:(id)arg1 error:(id*)arg2 ;
-(id)allEarnedInstancesWithError:(id*)arg1 ;
-(BOOL)removeAllEarnedInstancesWithError:(id*)arg1 ;
@end

