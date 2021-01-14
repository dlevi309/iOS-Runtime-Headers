/*
* Generated on Thursday, January 14, 2021 at 2:28:03 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NetworkRelay.framework/NetworkRelay
*/


@protocol OS_dispatch_queue;
@class NSObject;

@interface NRDeviceManager : NSObject {

	NSObject*<OS_dispatch_queue> _queue;

}

@property (nonatomic,retain) NSObject*<OS_dispatch_queue> queue;              //@synthesize queue=_queue - In the implementation block
+(id)copySharedDeviceManager;
-(id)initInternal;
-(void)disableDevice:(id)arg1 queue:(id)arg2 completionBlock:(/*^block*/id)arg3 ;
-(void)enableDevice:(id)arg1 ;
-(void)enableDevice:(id)arg1 queue:(id)arg2 completionBlock:(/*^block*/id)arg3 ;
-(id)copyDeviceListString;
-(void)unregisterDevice:(id)arg1 ;
-(void)unregisterDevice:(id)arg1 queue:(id)arg2 completionBlock:(/*^block*/id)arg3 ;
-(NSObject*<OS_dispatch_queue>)queue;
-(void)registerDevice:(id)arg1 properties:(id)arg2 queue:(id)arg3 completionBlock:(/*^block*/id)arg4 ;
-(void)disableDevice:(id)arg1 ;
-(void)unregisterAllDevicesWithQueue:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
@end

