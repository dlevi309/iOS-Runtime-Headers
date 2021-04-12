/*
* Generated on Monday, March 1, 2021 at 2:33:32 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(NSString *)description;
-(NSString *)name;
-(NSUUID *)identifier;
-(NSString *)deviceID;
-(NSString *)ssid;
-(void)startConfigurationWithCompletionHandler:(/*^block*/id)arg1 ;
-(BOOL)isConfigured;
-(id)logIdentifier;
-(void)cancelConfigurationWithCompletionHandler:(/*^block*/id)arg1 ;
-(BOOL)supportsAirPlay2;
-(id)underlyingDevice;
-(id)initWithCUWiFiDevice:(id)arg1 dispatchQueue:(id)arg2 ;
@end

