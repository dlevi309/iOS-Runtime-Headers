/*
* Generated on Monday, March 1, 2021 at 2:33:33 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/

#import <HMFoundation/HMFObject.h>
#import <libobjc.A.dylib/HMFLogging.h>
#import <libobjc.A.dylib/HMFNetMonitorDelegate.h>

@protocol OS_dispatch_queue;
@class NSMutableSet, NSObject, HMFNetMonitor, NSArray, NSString;

@interface HMDSoftwareUpdateDocumentationManager : HMFObject <HMFLogging, HMFNetMonitorDelegate> {

	NSMutableSet* _assets;
	NSObject*<OS_dispatch_queue> _clientQueue;
	NSObject*<OS_dispatch_queue> _propertyQueue;
	HMFNetMonitor* _netMonitor;
	NSMutableSet* _registeredMetadata;

}

@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> clientQueue;                //@synthesize clientQueue=_clientQueue - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> propertyQueue;              //@synthesize propertyQueue=_propertyQueue - In the implementation block
@property (nonatomic,readonly) HMFNetMonitor * netMonitor;                              //@synthesize netMonitor=_netMonitor - In the implementation block
@property (readonly) NSMutableSet * registeredMetadata;                                 //@synthesize registeredMetadata=_registeredMetadata - In the implementation block
@property (readonly) NSArray * assets; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedManager;
+(id)logCategory;
-(id)init;
-(NSObject*<OS_dispatch_queue>)propertyQueue;
-(NSObject*<OS_dispatch_queue>)clientQueue;
-(NSArray *)assets;
-(void)networkMonitorIsReachable:(id)arg1 ;
-(void)addAsset:(id)arg1 ;
-(void)removeAsset:(id)arg1 ;
-(HMFNetMonitor *)netMonitor;
-(void)unregisterDocumentationMetadata:(id)arg1 ;
-(id)assetForDocumentationMetadata:(id)arg1 ;
-(void)registerDocumentationMetadata:(id)arg1 ;
-(void)parseCachedAssets;
-(void)auditAsset:(id)arg1 ;
-(NSMutableSet *)registeredMetadata;
@end

