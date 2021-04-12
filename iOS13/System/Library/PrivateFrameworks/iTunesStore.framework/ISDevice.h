/*
* Generated on Monday, March 1, 2021 at 2:32:38 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/iTunesStore.framework/iTunesStore
*/

#import <libobjc.A.dylib/ISSingleton.h>

@protocol OS_dispatch_queue;
@class NSObject, NSString;

@interface ISDevice : NSObject <ISSingleton> {

	long long _biometricStyle;
	unsigned long long _daemonLaunchCount;
	NSObject*<OS_dispatch_queue> _dispatchQueue;
	NSString* _guid;
	double _lastFreeSpaceRequest;

}

@property (readonly) NSString * deviceName; 
@property (readonly) NSString * guid; 
@property (readonly) NSString * hardwareName; 
@property (readonly) NSString * serialNumber; 
@property (readonly) NSString * systemName; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedInstance;
+(void)setSharedInstance:(id)arg1 ;
-(id)init;
-(void)dealloc;
-(NSString *)deviceName;
-(NSString *)serialNumber;
-(NSString *)systemName;
-(NSString *)guid;
-(int)_deviceClass;
-(BOOL)checkCapabilities:(id)arg1 withMismatches:(id*)arg2 ;
-(id)copyProtocolConditionalContext;
-(BOOL)releasePowerAssertion:(id)arg1 ;
-(long long)deviceBiometricStyle;
-(NSString *)hardwareName;
-(BOOL)takePowerAssertion:(id)arg1 ;
-(void)requestFreeSpace:(unsigned long long)arg1 atPath:(id)arg2 withOptions:(id)arg3 completionBlock:(/*^block*/id)arg4 ;
-(void)resetLocationAndPrivacy;
-(id)supportedOfferDeviceForDevices:(id)arg1 ;
@end

