/*
* Generated on Thursday, January 14, 2021 at 2:25:48 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)block;
-(void)cancelWithError:(id)arg1 ;
-(NAFuture *)future;
-(void)main;
-(HMBCloudZone *)cloudZone;
-(id)initWithCloudZone:(id)arg1 block:(/*^block*/id)arg2 ;
@end

