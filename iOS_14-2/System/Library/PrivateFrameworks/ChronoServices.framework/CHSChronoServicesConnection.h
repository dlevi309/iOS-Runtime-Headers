/*
* Generated on Thursday, January 14, 2021 at 2:20:48 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ChronoServices.framework/ChronoServices
*/

#import <libobjc.A.dylib/CHSChronoWidgetServiceClientInterface.h>
#import <libobjc.A.dylib/CHSChronoWidgetServiceServer.h>

@protocol OS_dispatch_queue;
@class NSMutableSet, NSDictionary, BSServiceConnection, NSObject, CHSWidgetMetricsSpecification, NSArray, NSString;

@interface CHSChronoServicesConnection : NSObject <CHSChronoWidgetServiceClientInterface, CHSChronoWidgetServiceServer> {

	NSMutableSet* _queue_clients;
	NSDictionary* _queue_lastDescriptorsByExtensionIdentifier;
	BSServiceConnection* _queue_connection;
	NSObject*<OS_dispatch_queue> _queue;
	NSObject*<OS_dispatch_queue> _callOutQueue;
	CHSWidgetMetricsSpecification* _lastMetricsSpecification;
	NSArray* _lastConfiguredWidgetContainerDescriptors;

}

@property (nonatomic,retain) NSMutableSet * queue_clients;                                                                                                  //@synthesize queue_clients=_queue_clients - In the implementation block
@property (setter=_queue_setLastDescriptorsByExtensionIdentifier:,nonatomic,retain) NSDictionary * queue_lastDescriptorsByExtensionIdentifier;              //@synthesize queue_lastDescriptorsByExtensionIdentifier=_queue_lastDescriptorsByExtensionIdentifier - In the implementation block
@property (nonatomic,retain) BSServiceConnection * queue_connection;                                                                                        //@synthesize queue_connection=_queue_connection - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> queue;                                                                                            //@synthesize queue=_queue - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> callOutQueue;                                                                                     //@synthesize callOutQueue=_callOutQueue - In the implementation block
@property (nonatomic,retain) CHSWidgetMetricsSpecification * lastMetricsSpecification;                                                                      //@synthesize lastMetricsSpecification=_lastMetricsSpecification - In the implementation block
@property (nonatomic,copy) NSArray * lastConfiguredWidgetContainerDescriptors;                                                                              //@synthesize lastConfiguredWidgetContainerDescriptors=_lastConfiguredWidgetContainerDescriptors - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedInstance;
-(void)addClient:(id)arg1 ;
-(CHSWidgetMetricsSpecification *)lastMetricsSpecification;
-(NSMutableSet *)queue_clients;
-(NSObject*<OS_dispatch_queue>)callOutQueue;
-(id)init;
-(oneway void)expireLocationGracePeriods;
-(void)removeClient:(id)arg1 ;
-(void)setQueue_connection:(BSServiceConnection *)arg1 ;
-(void)setCallOutQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)_queue_invalidateConnection;
-(id)_queue_remoteTarget;
-(void)setLastConfiguredWidgetContainerDescriptors:(NSArray *)arg1 ;
-(id)_URLSessionDidCompleteForExtensionWithBundleIdentifier:(id)arg1 info:(id)arg2 ;
-(BSServiceConnection *)queue_connection;
-(void)_queue_createConnection;
-(void)_queue_addClient:(id)arg1 ;
-(void)setLastMetricsSpecification:(CHSWidgetMetricsSpecification *)arg1 ;
-(oneway void)setConfiguredWidgetContainerDescriptors:(id)arg1 ;
-(void)_queue_removeClient:(id)arg1 ;
-(NSObject*<OS_dispatch_queue>)queue;
-(oneway void)applicationWithBundleIdentifierEnteredForeground:(id)arg1 ;
-(NSArray *)lastConfiguredWidgetContainerDescriptors;
-(NSDictionary *)queue_lastDescriptorsByExtensionIdentifier;
-(id)_init;
-(id)widgetEnvironmentDataForBundleIdentifier:(id)arg1 ;
-(void)reloadTimelineForAvocadoWithIdentifier:(id)arg1 inBundleWithIdentifier:(id)arg2 error:(id*)arg3 ;
-(void)setQueue_clients:(NSMutableSet *)arg1 ;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(oneway void)flushPowerlog;
-(void)_queue_setLastDescriptorsByExtensionIdentifier:(id)arg1 ;
-(oneway void)avocadoDescriptorsDidChange:(id)arg1 ;
-(oneway void)setMetricsSpecification:(id)arg1 ;
@end

