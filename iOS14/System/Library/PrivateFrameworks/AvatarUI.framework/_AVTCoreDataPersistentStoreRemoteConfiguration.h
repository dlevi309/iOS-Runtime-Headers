/*
* Generated on Thursday, January 14, 2021 at 2:23:01 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AvatarUI.framework/AvatarUI
*/

#import <libobjc.A.dylib/AVTCoreDataPersistentStoreConfiguration.h>

@protocol AVTUILogger, AVTAvatarsDaemon;
@class NSPersistentContainer, NSString;

@interface _AVTCoreDataPersistentStoreRemoteConfiguration : NSObject <AVTCoreDataPersistentStoreConfiguration> {

	NSPersistentContainer* _container;
	id<AVTUILogger> _logger;
	id<AVTAvatarsDaemon> _daemonClient;

}

@property (nonatomic,readonly) NSPersistentContainer * container;              //@synthesize container=_container - In the implementation block
@property (nonatomic,readonly) id<AVTUILogger> logger;                         //@synthesize logger=_logger - In the implementation block
@property (nonatomic,readonly) id<AVTAvatarsDaemon> daemonClient;              //@synthesize daemonClient=_daemonClient - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)createContainerForRemoteConfiguration;
-(id)persistentStoreCoordinator;
-(BOOL)setupIfNeeded:(id*)arg1 ;
-(id)createManagedObjectContext;
-(id)storeDescription;
-(id<AVTUILogger>)logger;
-(id<AVTAvatarsDaemon>)daemonClient;
-(NSPersistentContainer *)container;
-(id)initWithDaemonClient:(id)arg1 environment:(id)arg2 ;
@end

