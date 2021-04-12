/*
* Generated on Monday, March 1, 2021 at 2:33:00 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(NSPersistentContainer *)container;
-(id<AVTUILogger>)logger;
-(id)persistentStoreCoordinator;
-(BOOL)setupIfNeeded:(id*)arg1 ;
-(id)createManagedObjectContext;
-(id)storeDescription;
-(id<AVTAvatarsDaemon>)daemonClient;
-(id)initWithDaemonClient:(id)arg1 environment:(id)arg2 ;
@end

