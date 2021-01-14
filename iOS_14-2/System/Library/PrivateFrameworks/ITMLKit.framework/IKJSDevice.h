/*
* Generated on Thursday, January 14, 2021 at 2:25:48 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
*/

#import <ITMLKit/ITMLKit-Structs.h>
#import <ITMLKit/IKJSObject.h>
#import <libobjc.A.dylib/NSObject.h>
#import <libobjc.A.dylib/IKJSDevice.h>
@class NSString;


@protocol IKJSDevice <JSExport>
@property (nonatomic,readonly) NSString * vendorIdentifier; 
@property (nonatomic,readonly) NSString * advertisingIdentifier; 
@property (nonatomic,readonly) BOOL isAdvertisingTrackingEnabled; 
@property (nonatomic,readonly) NSString * appVersion; 
@property (nonatomic,readonly) NSString * appIdentifier; 
@property (nonatomic,readonly) NSString * systemVersion; 
@property (nonatomic,readonly) NSString * model; 
@property (nonatomic,readonly) NSString * productType; 
@property (nonatomic,readonly) BOOL isNetworkReachable; 
@required
-(BOOL)isNetworkReachable;
-(NSString *)systemVersion;
-(NSString *)model;
-(NSString *)appIdentifier;
-(NSString *)appVersion;
-(NSString *)advertisingIdentifier;
-(NSString *)productType;
-(NSString *)vendorIdentifier;
-(BOOL)isAdvertisingTrackingEnabled;

@end

#import <libobjc.A.dylib/_IKJSDeviceProxy.h>
#import <libobjc.A.dylib/_IKJSDevice.h>

@protocol IKAppDeviceConfig;
@class NSString, NSNumber;

@interface IKJSDevice : IKJSObject <NSObject, IKJSDevice, _IKJSDeviceProxy, _IKJSDevice> {

	id _networkPropertiesChangedToken;
	id<IKAppDeviceConfig> _deviceConfig;

}

@property (assign,nonatomic,__weak) id<IKAppDeviceConfig> deviceConfig;              //@synthesize deviceConfig=_deviceConfig - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSString * vendorIdentifier; 
@property (nonatomic,readonly) NSString * advertisingIdentifier; 
@property (nonatomic,readonly) BOOL isAdvertisingTrackingEnabled; 
@property (nonatomic,readonly) NSString * appVersion; 
@property (nonatomic,readonly) NSString * appIdentifier; 
@property (nonatomic,readonly) NSString * systemVersion; 
@property (nonatomic,readonly) NSString * model; 
@property (nonatomic,readonly) NSString * productType; 
@property (nonatomic,readonly) BOOL isNetworkReachable; 
@property (nonatomic,readonly) BOOL isInAirplaneMode; 
@property (nonatomic,readonly) NSString * networkType; 
@property (nonatomic,readonly) double lastNetworkChangedTime; 
@property (nonatomic,readonly) BOOL isInRetailDemoMode; 
@property (nonatomic,readonly) BOOL isSeedBuild; 
@property (nonatomic,readonly) NSString * vendorID; 
@property (nonatomic,readonly) NSNumber * pixelRatio; 
@property (nonatomic,readonly) BOOL runningAnInternalBuild; 
@property (nonatomic,readonly) NSString * osBuildNumber; 
+(id)getMobileGestaltString:(CFStringRef)arg1 ;
-(NSString *)networkType;
-(BOOL)isNetworkReachable;
-(NSString *)systemVersion;
-(NSString *)model;
-(NSString *)appIdentifier;
-(NSString *)appVersion;
-(BOOL)isInAirplaneMode;
-(NSString *)advertisingIdentifier;
-(NSString *)productType;
-(NSNumber *)pixelRatio;
-(BOOL)isSeedBuild;
-(NSString *)vendorIdentifier;
-(NSString *)vendorID;
-(void)dealloc;
-(id)initWithAppContext:(id)arg1 deviceConfig:(id)arg2 ;
-(BOOL)runningAnInternalBuild;
-(id<IKAppDeviceConfig>)deviceConfig;
-(void)setDeviceConfig:(id<IKAppDeviceConfig>)arg1 ;
-(BOOL)isAdvertisingTrackingEnabled;
-(id)capacity:(id)arg1 ;
-(double)lastNetworkChangedTime;
-(BOOL)isInRetailDemoMode;
-(NSString *)osBuildNumber;
-(id)asPrivateIKJSDevice;
@end

