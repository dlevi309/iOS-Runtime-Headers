/*
* Generated on Thursday, January 14, 2021 at 2:25:55 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/

#import <HMFoundation/HMFObject.h>
#import <libobjc.A.dylib/HMFLogging.h>
#import <libobjc.A.dylib/HMFNetMonitorDelegate.h>

@protocol HMFLocking, OS_dispatch_queue;
@class NSObject, HMFNetMonitor, NSMutableOrderedSet, NSMutableSet, NSArray, NSString;

@interface HMDSoftwareUpdateDocumentationManager : HMFObject <HMFLogging, HMFNetMonitorDelegate> {

	id<HMFLocking> _lock;
	NSObject*<OS_dispatch_queue> _queue;
	HMFNetMonitor* _netMonitor;
	NSMutableOrderedSet* _assets;
	NSMutableSet* _registeredMetadata;

}

@property (readonly) NSMutableSet * registeredMetadata;              //@synthesize registeredMetadata=_registeredMetadata - In the implementation block
@property (readonly) NSArray * assets; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)logCategory;
+(id)sharedManager;
-(NSArray *)assets;
-(id)init;
-(void)removeAsset:(id)arg1 ;
-(void)addAsset:(id)arg1 ;
-(void)networkMonitorIsReachable:(id)arg1 ;
-(void)unregisterDocumentationMetadata:(id)arg1 ;
-(id)assetForDocumentationMetadata:(id)arg1 ;
-(void)registerDocumentationMetadata:(id)arg1 ;
-(void)parseCachedAssets;
-(void)auditAsset:(id)arg1 ;
-(NSMutableSet *)registeredMetadata;
@end
