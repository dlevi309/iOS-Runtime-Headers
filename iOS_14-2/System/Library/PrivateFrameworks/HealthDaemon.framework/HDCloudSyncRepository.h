/*
* Generated on Thursday, January 14, 2021 at 2:25:12 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
*/


@protocol OS_dispatch_queue;
#import <HealthDaemon/HealthDaemon-Structs.h>
@class NSObject, NSMutableArray, HDProfile, CKContainer, NSArray, NSSet, NSString;

@interface HDCloudSyncRepository : NSObject {

	os_unfair_lock_s _lock;
	NSObject*<OS_dispatch_queue> _queue;
	long long _pullOperationFailureCount;
	NSMutableArray* _ownerIdentifierFetchCompletionBlocks;
	BOOL _shouldPushToUnifiedZone;
	HDProfile* _profile;
	CKContainer* _primaryCKContainer;
	NSArray* _secondaryCKContainers;
	NSSet* _allCKContainers;
	unsigned long long _repositorySettings;
	NSString* _syncCircleIdentifier;

}

@property (assign,nonatomic) unsigned long long repositorySettings;               //@synthesize repositorySettings=_repositorySettings - In the implementation block
@property (nonatomic,readonly) int deviceMode; 
@property (nonatomic,readonly) BOOL shouldPushToUnifiedZone;                      //@synthesize shouldPushToUnifiedZone=_shouldPushToUnifiedZone - In the implementation block
@property (nonatomic,readonly) HDProfile * profile;                               //@synthesize profile=_profile - In the implementation block
@property (nonatomic,readonly) CKContainer * primaryCKContainer;                  //@synthesize primaryCKContainer=_primaryCKContainer - In the implementation block
@property (nonatomic,readonly) NSArray * secondaryCKContainers;                   //@synthesize secondaryCKContainers=_secondaryCKContainers - In the implementation block
@property (nonatomic,readonly) NSSet * allCKContainers;                           //@synthesize allCKContainers=_allCKContainers - In the implementation block
@property (nonatomic,copy,readonly) NSString * syncCircleIdentifier;              //@synthesize syncCircleIdentifier=_syncCircleIdentifier - In the implementation block
-(int)deviceMode;
-(id)ownerIdentifierForContainer:(id)arg1 error:(id*)arg2 ;
-(id)init;
-(NSArray *)secondaryCKContainers;
-(BOOL)shouldPushToUnifiedZone;
-(NSString *)syncCircleIdentifier;
-(void)_disableCloudSyncWithCompletion:(/*^block*/id)arg1 ;
-(unsigned long long)repositorySettings;
-(id)containerForContainerIdentifier:(id)arg1 ;
-(id)description;
-(CKContainer *)primaryCKContainer;
-(HDProfile *)profile;
-(void)unitTest_setShouldPushToUnifiedZone:(BOOL)arg1 ;
-(NSSet *)allCKContainers;
-(id)initWithProfile:(id)arg1 syncCircleIdentifier:(id)arg2 primaryCKContainer:(id)arg3 secondaryCKContainers:(id)arg4 ;
-(void)setRepositorySettings:(unsigned long long)arg1 ;
-(void)_queue_generateRestoreEventSyncCompleteWithPullCompleteDate:(id)arg1 ;
-(void)dealloc;
@end

