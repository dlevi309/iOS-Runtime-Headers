/*
* Generated on Monday, March 1, 2021 at 2:33:13 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NetworkRelay.framework/NetworkRelay
*/


@protocol OS_dispatch_queue;
@class NSObject;

@interface NRDeviceManager : NSObject {

	NSObject*<OS_dispatch_queue> _queue;

}

@property (nonatomic,retain) NSObject*<OS_dispatch_queue> queue;              //@synthesize queue=_queue - In the implementation block
+(id)copySharedDeviceManager;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSObject*<OS_dispatch_queue>)queue;
-(id)initInternal;
-(void)registerDevice:(id)arg1 properties:(id)arg2 queue:(id)arg3 completionBlock:(/*^block*/id)arg4 ;
-(void)unregisterDevice:(id)arg1 ;
-(void)enableDevice:(id)arg1 ;
-(void)disableDevice:(id)arg1 ;
-(void)disableDevice:(id)arg1 queue:(id)arg2 completionBlock:(/*^block*/id)arg3 ;
-(void)enableDevice:(id)arg1 queue:(id)arg2 completionBlock:(/*^block*/id)arg3 ;
-(void)unregisterDevice:(id)arg1 queue:(id)arg2 completionBlock:(/*^block*/id)arg3 ;
-(void)unregisterAllDevicesWithQueue:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(id)copyDeviceListString;
@end

