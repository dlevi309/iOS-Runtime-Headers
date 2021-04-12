/*
* Generated on Monday, March 1, 2021 at 2:35:48 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)dealloc;
-(id)description;
-(NSObject*<OS_dispatch_queue>)processingQueue;
-(void)setProcessingQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)setIap2ShimAccessory:(ACCiAP2ShimAccessory *)arg1 ;
-(ACCiAP2ShimAccessory *)iap2ShimAccessory;
-(id)create_xpc_representation;
-(ACCNavigationAccessory *)navigationAccessory;
-(void)setNavigationAccessory:(ACCNavigationAccessory *)arg1 ;
@end

