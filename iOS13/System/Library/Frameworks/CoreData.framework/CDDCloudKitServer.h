/*
* Generated on Monday, March 1, 2021 at 2:30:26 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
*/

#import <libobjc.A.dylib/NSXPCListenerDelegate.h>
#import <libobjc.A.dylib/CDDCloudKitServerProxy.h>
#import <libobjc.A.dylib/_PFCoreDataCloudKitServer.h>

@protocol OS_dispatch_group;
@class NSXPCListener, CDDCloudKitServerConfiguration, NSPersistentContainer, NSObject, NSError, NSString;

@interface CDDCloudKitServer : NSObject <NSXPCListenerDelegate, CDDCloudKitServerProxy, _PFCoreDataCloudKitServer> {

	BOOL _initialized;
	NSXPCListener* _listener;
	CDDCloudKitServerConfiguration* _configuration;
	NSPersistentContainer* _metadataContainer;
	NSObject*<OS_dispatch_group> _initializationGroup;
	NSError* _lastInitializationError;

}

@property (nonatomic,readonly) NSPersistentContainer * metadataContainer;                        //@synthesize metadataContainer=_metadataContainer - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_group> initializationGroup;                 //@synthesize initializationGroup=_initializationGroup - In the implementation block
@property (nonatomic,readonly) BOOL initialized;                                                 //@synthesize initialized=_initialized - In the implementation block
@property (nonatomic,readonly) NSError * lastInitializationError;                                //@synthesize lastInitializationError=_lastInitializationError - In the implementation block
@property (nonatomic,readonly) NSXPCListener * listener;                                         //@synthesize listener=_listener - In the implementation block
@property (nonatomic,copy,readonly) CDDCloudKitServerConfiguration * configuration;              //@synthesize configuration=_configuration - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)checkAndCreateDirectoryAtURL:(id)arg1 wipeIfExists:(BOOL)arg2 error:(id*)arg3 ;
-(void)dealloc;
-(BOOL)initialized;
-(NSXPCListener *)listener;
-(BOOL)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2 ;
-(CDDCloudKitServerConfiguration *)configuration;
-(void)tearDown;
-(void)_setUpAsync;
-(oneway void)handleMessage:(id)arg1 reply:(/*^block*/id)arg2 ;
-(id)_handleRegistrationMessage:(id)arg1 ;
-(id)_handleScheduleMessage:(id)arg1 ;
-(BOOL)verifyFileHandle:(id)arg1 matchesPath:(id)arg2 error:(id*)arg3 ;
-(id)createRealPathForPath:(id)arg1 error:(id*)arg2 ;
-(void)runActivity:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)finishedActivity:(id)arg1 withResult:(id)arg2 inManagedObjectContext:(id)arg3 ;
-(void)setUp;
-(id)initWithListener:(id)arg1 configuration:(id)arg2 ;
-(NSPersistentContainer *)metadataContainer;
-(NSObject*<OS_dispatch_group>)initializationGroup;
-(NSError *)lastInitializationError;
@end

