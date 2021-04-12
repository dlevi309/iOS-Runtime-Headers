/*
* Generated on Thursday, January 14, 2021 at 2:26:16 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
*/

#import <libobjc.A.dylib/CKDSystemAvailabilityWatcher.h>

@protocol OS_dispatch_queue;
@class NSOperationQueue, CKDServerConfiguration, NSMutableSet, NSMutableDictionary, NSObject, NSString;

@interface CKDServerConfigurationManager : NSObject <CKDSystemAvailabilityWatcher> {

	BOOL _shouldDropAllConfigurations;
	int _iCloudEnvNotifToken;
	NSOperationQueue* _configurationQueue;
	CKDServerConfiguration* _globalConfiguration;
	NSMutableSet* _globalConfigurationOps;
	NSOperationQueue* _containerSpecificInfoQueue;
	NSMutableDictionary* _containerSpecificInfos;
	NSMutableDictionary* _containerSpecificInfoOperations;
	NSObject*<OS_dispatch_queue> _propertyQueue;

}

@property (nonatomic,retain) NSOperationQueue * configurationQueue;                              //@synthesize configurationQueue=_configurationQueue - In the implementation block
@property (nonatomic,retain) CKDServerConfiguration * globalConfiguration;                       //@synthesize globalConfiguration=_globalConfiguration - In the implementation block
@property (nonatomic,retain) NSMutableSet * globalConfigurationOps;                              //@synthesize globalConfigurationOps=_globalConfigurationOps - In the implementation block
@property (nonatomic,retain) NSOperationQueue * containerSpecificInfoQueue;                      //@synthesize containerSpecificInfoQueue=_containerSpecificInfoQueue - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * containerSpecificInfos;                       //@synthesize containerSpecificInfos=_containerSpecificInfos - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * containerSpecificInfoOperations;              //@synthesize containerSpecificInfoOperations=_containerSpecificInfoOperations - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> propertyQueue;                         //@synthesize propertyQueue=_propertyQueue - In the implementation block
@property (assign,nonatomic) int iCloudEnvNotifToken;                                            //@synthesize iCloudEnvNotifToken=_iCloudEnvNotifToken - In the implementation block
@property (assign,nonatomic) BOOL shouldDropAllConfigurations;                                   //@synthesize shouldDropAllConfigurations=_shouldDropAllConfigurations - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedManager;
-(NSMutableDictionary *)containerSpecificInfos;
-(void)containerInfoForOperation:(id)arg1 requireUserIDs:(BOOL)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)configurationForOperation:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)_fetchGlobalConfigForOperation:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)init;
-(void)expireConfigurationForContextInfoProvider:(id)arg1 accountInfoProvider:(id)arg2 ;
-(void)setConfigurationQueue:(NSOperationQueue *)arg1 ;
-(id)_uniqueStringForContext:(id)arg1 account:(id)arg2 ;
-(void)setGlobalConfiguration:(CKDServerConfiguration *)arg1 ;
-(NSMutableSet *)globalConfigurationOps;
-(NSObject*<OS_dispatch_queue>)propertyQueue;
-(void)setICloudEnvNotifToken:(int)arg1 ;
-(void)_reallyDropAllConfigurations;
-(void)_fetchContainerSpecificInfoForOperation:(id)arg1 requireUserIDs:(BOOL)arg2 completionHandler:(/*^block*/id)arg3 ;
-(NSOperationQueue *)configurationQueue;
-(CKDServerConfiguration *)globalConfiguration;
-(void)setPropertyQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)expireGlobalConfiguration;
-(BOOL)systemAvailabilityChanged:(unsigned long long)arg1 ;
-(BOOL)shouldDropAllConfigurations;
-(NSMutableDictionary *)containerSpecificInfoOperations;
-(void)setContainerSpecificInfoQueue:(NSOperationQueue *)arg1 ;
-(void)setContainerSpecificInfos:(NSMutableDictionary *)arg1 ;
-(void)setGlobalConfigurationOps:(NSMutableSet *)arg1 ;
-(id)CKStatusReportArray;
-(int)iCloudEnvNotifToken;
-(void)_behaviorOptionsChanged:(id)arg1 ;
-(void)_writeOutiCloudHostnames:(id)arg1 ;
-(void)setContainerSpecificInfoOperations:(NSMutableDictionary *)arg1 ;
-(void)dealloc;
-(void)setShouldDropAllConfigurations:(BOOL)arg1 ;
-(NSOperationQueue *)containerSpecificInfoQueue;
-(void)_dropAllConfigurations;
@end

