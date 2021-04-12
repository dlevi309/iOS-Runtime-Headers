/*
* Generated on Thursday, January 14, 2021 at 2:20:53 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <libobjc.A.dylib/NRDevicePropertyObserver.h>

@protocol OS_dispatch_queue;
@class NSConditionLock, NSObject, NSNumber, NRDevice, NSString;

@interface GEONanoInfo : NSObject <NRDevicePropertyObserver> {

	NSConditionLock* _pairedDeviceLock;
	NSObject*<OS_dispatch_queue> _nanoregQueue;
	NSNumber* _hasPairedDevice;
	NRDevice* _currentDevice;
	NSString* _deviceSystemVersion;
	NSString* _deviceSystemBuildVersion;
	NSString* _deviceProductType;
	NSNumber* _deviceIsAltAccount;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedInfo;
-(void)setupClient;
-(id)deviceIsAltAcctIfAvailable;
-(id)init;
-(id)deviceSystemVersionIfAvailable;
-(id)deviceIsAltAcct;
-(id)deviceProductType;
-(id)deviceSystemVersion;
-(void)_stopObservingDevice:(id)arg1 ;
-(void)device:(id)arg1 propertyDidChange:(id)arg2 fromValue:(id)arg3 ;
-(id)deviceSystemBuildVersion;
-(void)_startObservingDevice:(id)arg1 ;
-(id)deviceSystemBuildVersionIfAvailable;
-(id)_observingProperties;
-(id)_deviceSystemVersionBlocking:(BOOL)arg1 ;
-(id)_deviceProductTypeBlocking:(BOOL)arg1 ;
-(id)hasPairedDeviceIfAvailable;
-(id)_deviceIsAltAcctBlocking:(BOOL)arg1 ;
-(id)deviceOsVersionIfAvailable;
-(id)deviceProductTypeIfAvailable;
-(void)_readDeviceInfo:(id)arg1 ;
-(id)_deviceSystemBuildVersionBlocking:(BOOL)arg1 ;
-(id)hasPairedDevice;
-(id)_hasPairedDeviceBlocking:(BOOL)arg1 ;
@end

