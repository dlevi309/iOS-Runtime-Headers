/*
* Generated on Monday, March 1, 2021 at 2:32:59 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AvatarUI.framework/AvatarUI
*/

#import <libobjc.A.dylib/AVTAvatarRecordChangeTracker.h>

@protocol AVTCoreDataPersistentStoreConfiguration, AVTUILogger, AVTAvatarManagedRecordTransformer;
@class AVTCoreEnvironment;

@interface AVTCoreDataChangeTracker : NSObject <AVTAvatarRecordChangeTracker> {

	id<AVTCoreDataPersistentStoreConfiguration> _configuration;
	AVTCoreEnvironment* _environment;
	id<AVTUILogger> _logger;
	id<AVTAvatarManagedRecordTransformer> _recordTransformer;

}

@property (nonatomic,readonly) id<AVTCoreDataPersistentStoreConfiguration> configuration;              //@synthesize configuration=_configuration - In the implementation block
@property (nonatomic,readonly) AVTCoreEnvironment * environment;                                       //@synthesize environment=_environment - In the implementation block
@property (nonatomic,readonly) id<AVTUILogger> logger;                                                 //@synthesize logger=_logger - In the implementation block
@property (nonatomic,readonly) id<AVTAvatarManagedRecordTransformer> recordTransformer;                //@synthesize recordTransformer=_recordTransformer - In the implementation block
+(id)tokenFileURLForLocation:(id)arg1 ;
-(AVTCoreEnvironment *)environment;
-(id<AVTUILogger>)logger;
-(id<AVTCoreDataPersistentStoreConfiguration>)configuration;
-(BOOL)processChangeTransactionsWithChangeTokenLocation:(id)arg1 handler:(/*^block*/id)arg2 error:(id*)arg3 ;
-(id)initWithConfiguration:(id)arg1 recordTransformer:(id)arg2 environment:(id)arg3 ;
-(id<AVTAvatarManagedRecordTransformer>)recordTransformer;
-(id)initWithConfiguration:(id)arg1 environment:(id)arg2 ;
-(id)currentHistoryTokenForLocation:(id)arg1 ;
-(id)trackerChangesFromPersistentChanges:(id)arg1 managedObjectContext:(id)arg2 ;
-(id)enumerateChangesAfterToken:(id)arg1 managedObjectContext:(id)arg2 changesHandler:(/*^block*/id)arg3 error:(id*)arg4 ;
-(BOOL)saveToken:(id)arg1 location:(id)arg2 error:(id*)arg3 ;
-(id)recordIdentifierForChange:(id)arg1 managedObjectContext:(id)arg2 ;
@end

