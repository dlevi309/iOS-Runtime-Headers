/*
* Generated on Thursday, January 14, 2021 at 2:25:55 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/

#import <libobjc.A.dylib/HMFLogging.h>

@protocol OS_dispatch_queue;
@class NSObject, HMDHAPAccessory, HMDService, NSString;

@interface HMDNetworkRouterController : NSObject <HMFLogging> {

	NSObject*<OS_dispatch_queue> _workQueue;
	HMDHAPAccessory* _accessory;
	HMDService* _routerService;

}

@property (nonatomic,retain) NSObject*<OS_dispatch_queue> workQueue;              //@synthesize workQueue=_workQueue - In the implementation block
@property (assign,nonatomic,__weak) HMDHAPAccessory * accessory;                  //@synthesize accessory=_accessory - In the implementation block
@property (assign,nonatomic,__weak) HMDService * routerService;                   //@synthesize routerService=_routerService - In the implementation block
@property (readonly) NSString * wiFiSSID; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)logCategory;
-(void)setWorkQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSObject*<OS_dispatch_queue>)workQueue;
-(HMDHAPAccessory *)accessory;
-(void)setAccessory:(HMDHAPAccessory *)arg1 ;
-(unsigned long long)hash;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithAccessory:(id)arg1 service:(id)arg2 workQueue:(id)arg3 ;
-(NSString *)wiFiSSID;
-(void)removeClientConfigurationWithClientIdentifier:(id)arg1 completion:(/*^block*/id)arg2 ;
-(HMDService *)routerService;
-(void)_writeValueIfDifferent:(id)arg1 characteristicType:(id)arg2 operationName:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)_writeTLVWithValueInResponse:(id)arg1 characteristicType:(id)arg2 operationName:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)getClientStatusWithIdentifiers:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_writeClientConfigurationControlRequest:(id)arg1 operationName:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)_writeValue:(id)arg1 forCharacteristic:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)writeManagedNetworkEnable:(BOOL)arg1 completion:(/*^block*/id)arg2 ;
-(void)getClientStatusWithIdentifier:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)addClientConfiguration:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)readClientConfigurationWithClientIdentifier:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)updateClientConfiguration:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)getAccessViolationList:(/*^block*/id)arg1 ;
-(void)resetAccessViolationForClientIdentifier:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)setRouterService:(HMDService *)arg1 ;
@end

