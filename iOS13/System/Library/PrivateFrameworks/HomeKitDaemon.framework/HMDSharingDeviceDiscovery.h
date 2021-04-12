/*
* Generated on Monday, March 1, 2021 at 2:33:32 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/

#import <HMFoundation/HMFObject.h>
#import <libobjc.A.dylib/HMDSharingDeviceDiscovery.h>

@protocol HMDSharingDeviceDiscovery <NSObject>
@property (assign,nonatomic) unsigned long long discoveryFlags; 
@property (nonatomic,copy) id deviceFoundHandler; 
@property (nonatomic,copy) id deviceLostHandler; 
@property (nonatomic,copy) id deviceChangedHandler; 
@required
-(void)stop;
-(void)start;
-(void)setDeviceFoundHandler:(/*^block*/id)arg1;
-(void)setDeviceChangedHandler:(/*^block*/id)arg1;
-(void)setDeviceLostHandler:(/*^block*/id)arg1;
-(id)deviceFoundHandler;
-(id)deviceLostHandler;
-(id)deviceChangedHandler;
-(unsigned long long)discoveryFlags;
-(void)setDiscoveryFlags:(unsigned long long)arg1;
-(void)repairDevice:(id)arg1 flags:(unsigned)arg2 completion:(/*^block*/id)arg3;

@end


@class SFDeviceDiscovery, NSString;

@interface HMDSharingDeviceDiscovery : HMFObject <HMDSharingDeviceDiscovery> {

	SFDeviceDiscovery* _deviceDiscovery;

}

@property (nonatomic,retain) SFDeviceDiscovery * deviceDiscovery;              //@synthesize deviceDiscovery=_deviceDiscovery - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) unsigned long long discoveryFlags; 
@property (nonatomic,copy) id deviceFoundHandler; 
@property (nonatomic,copy) id deviceLostHandler; 
@property (nonatomic,copy) id deviceChangedHandler; 
-(void)dealloc;
-(void)stop;
-(void)start;
-(void)setDeviceFoundHandler:(id)arg1 ;
-(void)setDeviceChangedHandler:(id)arg1 ;
-(void)setDeviceLostHandler:(id)arg1 ;
-(id)deviceFoundHandler;
-(id)deviceLostHandler;
-(id)deviceChangedHandler;
-(unsigned long long)discoveryFlags;
-(void)setDiscoveryFlags:(unsigned long long)arg1 ;
-(void)repairDevice:(id)arg1 flags:(unsigned)arg2 completion:(/*^block*/id)arg3 ;
-(SFDeviceDiscovery *)deviceDiscovery;
-(void)setDeviceDiscovery:(SFDeviceDiscovery *)arg1 ;
@end

