/*
* Generated on Thursday, January 14, 2021 at 2:25:54 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/

#import <libobjc.A.dylib/HMDWACDevice.h>
#import <libobjc.A.dylib/HMFLogging.h>

@protocol OS_dispatch_queue;
@class NSUUID, NSString, CUWiFiDevice, CUWACSession, NSObject;

@interface HMDCUWiFiDeviceWrapper : NSObject <HMDWACDevice, HMFLogging> {

	CUWiFiDevice* _cuWiFiDevice;
	CUWACSession* _wacSession;
	NSObject*<OS_dispatch_queue> _dispatchQueue;
	NSString* deviceID;

}

@property (nonatomic,readonly) NSUUID * identifier; 
@property (nonatomic,readonly) NSString * deviceID; 
@property (nonatomic,readonly) NSString * ssid; 
@property (nonatomic,readonly) NSString * name; 
@property (nonatomic,readonly) BOOL isConfigured; 
@property (nonatomic,readonly) BOOL supportsAirPlay2; 
@property (nonatomic,readonly) id underlyingDevice; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)logCategory;
-(NSString *)deviceID;
-(BOOL)isConfigured;
-(NSString *)ssid;
-(id)logIdentifier;
-(NSString *)name;
-(NSString *)description;
-(void)startConfigurationWithCompletionHandler:(/*^block*/id)arg1 ;
-(BOOL)supportsAirPlay2;
-(NSUUID *)identifier;
-(void)cancelConfigurationWithCompletionHandler:(/*^block*/id)arg1 ;
-(id)underlyingDevice;
-(id)initWithCUWiFiDevice:(id)arg1 dispatchQueue:(id)arg2 ;
@end

