/*
* Generated on Monday, March 1, 2021 at 2:34:05 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(HDProfile *)profile;
-(void)setProfile:(HDProfile *)arg1 ;
-(id)initWithProfile:(id)arg1 ;
-(BOOL)earnedInstanceEntityDidReceiveSyncedEarnedInstances:(id)arg1 provenance:(long long)arg2 ;
-(void)setSyncedEarnedInstancesObserver:(id<ACHEarnedInstanceEntitySyncedEarnedInstancesObserver>)arg1 ;
-(id<ACHEarnedInstanceEntitySyncedEarnedInstancesObserver>)syncedEarnedInstancesObserver;
-(id)insertEarnedInstances:(id)arg1 provenance:(long long)arg2 databaseContext:(id)arg3 error:(id*)arg4 ;
-(BOOL)removeEarnedInstances:(id)arg1 error:(id*)arg2 ;
-(id)allEarnedInstancesWithError:(id*)arg1 ;
-(BOOL)removeAllEarnedInstancesWithError:(id*)arg1 ;
@end

