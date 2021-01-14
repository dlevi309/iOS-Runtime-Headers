/*
* Generated on Thursday, January 14, 2021 at 2:25:53 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/

#import <HMFoundation/HMFObject.h>
#import <libobjc.A.dylib/HMDSharingDeviceDiscovery.h>

@protocol HMDSharingDeviceDiscovery <NSObject>
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> dispatchQueue; 
@property (assign,nonatomic) unsigned long long discoveryFlags; 
@property (nonatomic,copy) id deviceFoundHandler; 
@property (nonatomic,copy) id deviceLostHandler; 
@property (nonatomic,copy) id deviceChangedHandler; 
@required
-(void)setDeviceChangedHandler:(/*^block*/id)arg1;
-(void)setDeviceFoundHandler:(/*^block*/id)arg1;
-(id)deviceChangedHandler;
-(id)deviceFoundHandler;
-(void)setDeviceLostHandler:(/*^block*/id)arg1;
-(id)deviceLostHandler;
-(unsigned long long)discoveryFlags;
-(void)setDiscoveryFlags:(unsigned long long)arg1;
-(void)start;
-(void)setDispatchQueue:(id)arg1;
-(NSObject*<OS_dispatch_queue>)dispatchQueue;
-(void)repairDevice:(id)arg1 flags:(unsigned)arg2 completion:(/*^block*/id)arg3;
-(void)stop;

@end


@class SFDeviceDiscovery, NSString;

@interface HMDSharingDeviceDiscovery : HMFObject <HMDSharingDeviceDiscovery> {

	SFDeviceDiscovery* _deviceDiscovery;

}

@property (nonatomic,retain) SFDeviceDiscovery * deviceDiscovery;                     //@synthesize deviceDiscovery=_deviceDiscovery - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> dispatchQueue; 
@property (assign,nonatomic) unsigned long long discoveryFlags; 
@property (nonatomic,copy) id deviceFoundHandler; 
@property (nonatomic,copy) id deviceLostHandler; 
@property (nonatomic,copy) id deviceChangedHandler; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setDeviceChangedHandler:(id)arg1 ;
-(void)setDeviceFoundHandler:(id)arg1 ;
-(id)deviceChangedHandler;
-(id)deviceFoundHandler;
-(void)setDeviceLostHandler:(id)arg1 ;
-(id)deviceLostHandler;
-(unsigned long long)discoveryFlags;
-(void)setDiscoveryFlags:(unsigned long long)arg1 ;
-(void)start;
-(void)setDispatchQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSObject*<OS_dispatch_queue>)dispatchQueue;
-(void)setDeviceDiscovery:(SFDeviceDiscovery *)arg1 ;
-(void)repairDevice:(id)arg1 flags:(unsigned)arg2 completion:(/*^block*/id)arg3 ;
-(void)stop;
-(SFDeviceDiscovery *)deviceDiscovery;
-(void)dealloc;
@end

