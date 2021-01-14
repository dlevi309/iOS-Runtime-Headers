/*
* Generated on Thursday, January 14, 2021 at 2:21:11 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
*/

#import <libobjc.A.dylib/NSXPCListenerDelegate.h>
#import <libobjc.A.dylib/CDDCloudKitServerProxy.h>
#import <libobjc.A.dylib/_PFCoreDataCloudKitServer.h>

@protocol OS_dispatch_group;
@class PFCloudKitContainerProvider, CKScheduler, NSXPCListener, CDDCloudKitServerConfiguration, NSPersistentContainer, NSObject, NSError, NSString;

@interface CDDCloudKitServer : NSObject <NSXPCListenerDelegate, CDDCloudKitServerProxy, _PFCoreDataCloudKitServer> {

	BOOL _initialized;
	NSXPCListener* _listener;
	CDDCloudKitServerConfiguration* _configuration;
	NSPersistentContainer* _metadataContainer;
	NSObject*<OS_dispatch_group> _initializationGroup;
	NSError* _lastInitializationError;
	PFCloudKitContainerProvider* _containerProvider;
	CKScheduler* _scheduler;

}

@property (nonatomic,readonly) NSXPCListener * listener;                                         //@synthesize listener=_listener - In the implementation block
@property (nonatomic,copy,readonly) CDDCloudKitServerConfiguration * configuration;              //@synthesize configuration=_configuration - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) PFCloudKitContainerProvider * containerProvider;                  //@synthesize containerProvider=_containerProvider - In the implementation block
@property (nonatomic,readonly) CKScheduler * scheduler;                                          //@synthesize scheduler=_scheduler - In the implementation block
-(void)setUp;
-(void)tearDown;
-(void)finishedActivity:(id)arg1 withResult:(id)arg2 inManagedObjectContext:(id)arg3 ;
-(id)initWithListener:(id)arg1 configuration:(id)arg2 ;
-(NSXPCListener *)listener;
-(CDDCloudKitServerConfiguration *)configuration;
-(BOOL)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2 ;
-(PFCloudKitContainerProvider *)containerProvider;
-(oneway void)handleMessage:(id)arg1 reply:(/*^block*/id)arg2 ;
-(void)dealloc;
-(CKScheduler *)scheduler;
@end

