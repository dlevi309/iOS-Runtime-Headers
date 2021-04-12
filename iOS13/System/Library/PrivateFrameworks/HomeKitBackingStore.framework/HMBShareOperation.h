/*
* Generated on Monday, March 1, 2021 at 2:33:28 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HomeKitBackingStore.framework/HomeKitBackingStore
*/

#import <HMFoundation/HMFOperation.h>
#import <libobjc.A.dylib/HMFLogging.h>

@class HMBCloudZone, NAFuture, NSString;

@interface HMBShareOperation : HMFOperation <HMFLogging> {

	HMBCloudZone* _cloudZone;
	/*^block*/id _block;
	NAFuture* _future;

}

@property (readonly) HMBCloudZone * cloudZone;                      //@synthesize cloudZone=_cloudZone - In the implementation block
@property (copy,readonly) id block;                                 //@synthesize block=_block - In the implementation block
@property (readonly) NAFuture * future;                             //@synthesize future=_future - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)logCategory;
-(void)main;
-(id)block;
-(void)cancelWithError:(id)arg1 ;
-(NAFuture *)future;
-(HMBCloudZone *)cloudZone;
-(id)initWithCloudZone:(id)arg1 block:(/*^block*/id)arg2 ;
@end

