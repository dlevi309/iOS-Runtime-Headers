/*
* Generated on Thursday, January 14, 2021 at 2:25:55 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/

#import <HMFoundation/HMFObject.h>
#import <libobjc.A.dylib/HMFLogging.h>
#import <libobjc.A.dylib/HMDThreadNetworkMetadataStore.h>

@protocol HMDThreadNetworkMetadataStore <NSObject>
@required
-(void)retrieveMetadataForNetworkID:(id)arg1 completion:(/*^block*/id)arg2;

@end


@protocol OS_dispatch_queue;
@class NSObject, NSString;

@interface HMDThreadNetworkMetadataStore : HMFObject <HMFLogging, HMDThreadNetworkMetadataStore> {

	NSObject*<OS_dispatch_queue> _workQueue;

}

@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> workQueue;              //@synthesize workQueue=_workQueue - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)new;
+(id)logCategory;
+(id)defaultStore;
-(id)initInternal;
-(NSObject*<OS_dispatch_queue>)workQueue;
-(id)init;
-(void)retrieveMetadataForNetworkID:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_retrieveMetadataForNetworkID:(id)arg1 completion:(/*^block*/id)arg2 ;
@end

