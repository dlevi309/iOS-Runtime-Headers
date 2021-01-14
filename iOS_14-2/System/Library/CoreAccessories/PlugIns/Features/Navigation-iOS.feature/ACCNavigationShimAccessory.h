/*
* Generated on Thursday, January 14, 2021 at 2:26:01 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/CoreAccessories/PlugIns/Features/Navigation-iOS.feature/Navigation-iOS
*/


@protocol OS_dispatch_queue;
@class ACCiAP2ShimAccessory, ACCNavigationAccessory, NSObject;

@interface ACCNavigationShimAccessory : NSObject {

	ACCiAP2ShimAccessory* _iap2ShimAccessory;
	ACCNavigationAccessory* _navigationAccessory;
	NSObject*<OS_dispatch_queue> _processingQueue;

}

@property (retain) NSObject*<OS_dispatch_queue> processingQueue;                        //@synthesize processingQueue=_processingQueue - In the implementation block
@property (nonatomic,retain) ACCiAP2ShimAccessory * iap2ShimAccessory;                  //@synthesize iap2ShimAccessory=_iap2ShimAccessory - In the implementation block
@property (nonatomic,retain) ACCNavigationAccessory * navigationAccessory;              //@synthesize navigationAccessory=_navigationAccessory - In the implementation block
-(id)init;
-(id)description;
-(NSObject*<OS_dispatch_queue>)processingQueue;
-(void)setProcessingQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)dealloc;
-(ACCiAP2ShimAccessory *)iap2ShimAccessory;
-(void)setIap2ShimAccessory:(ACCiAP2ShimAccessory *)arg1 ;
-(id)create_xpc_representation;
-(ACCNavigationAccessory *)navigationAccessory;
-(void)setNavigationAccessory:(ACCNavigationAccessory *)arg1 ;
@end

