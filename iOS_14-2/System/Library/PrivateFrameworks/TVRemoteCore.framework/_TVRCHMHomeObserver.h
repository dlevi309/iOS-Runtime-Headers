/*
* Generated on Thursday, January 14, 2021 at 2:28:37 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/TVRemoteCore.framework/TVRemoteCore
*/

#import <libobjc.A.dylib/HMAccessoryDelegate.h>
#import <libobjc.A.dylib/HMHomeDelegate.h>
#import <libobjc.A.dylib/HMAccessoryDelegatePrivate.h>

@class HMHome, NSMutableDictionary, NSString;

@interface _TVRCHMHomeObserver : NSObject <HMAccessoryDelegate, HMHomeDelegate, HMAccessoryDelegatePrivate> {

	HMHome* _currentHome;
	NSMutableDictionary* _serviceToAccessoryIDMapping;

}

@property (nonatomic,retain) NSMutableDictionary * serviceToAccessoryIDMapping;              //@synthesize serviceToAccessoryIDMapping=_serviceToAccessoryIDMapping - In the implementation block
@property (nonatomic,retain) HMHome * currentHome;                                           //@synthesize currentHome=_currentHome - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedInstance;
-(void)home:(id)arg1 didAddAccessory:(id)arg2 ;
-(id)init;
-(void)setCurrentHome:(HMHome *)arg1 ;
-(HMHome *)currentHome;
-(void)home:(id)arg1 didRemoveAccessory:(id)arg2 ;
-(void)accessoryDidUpdateReachableTransports:(id)arg1 ;
-(void)accessory:(id)arg1 didUpdateNameForService:(id)arg2 ;
-(void)accessoryDidUpdateServices:(id)arg1 ;
-(void)accessoryDidUpdateReachability:(id)arg1 ;
-(void)_updateAccessoriesForHome:(id)arg1 ;
-(void)_updateServicesForAccessory:(id)arg1 ;
-(NSMutableDictionary *)serviceToAccessoryIDMapping;
-(void)_checkAccessoryReachabilityAndFetchTVServices:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)_readCharacteristic:(id)arg1 completion:(/*^block*/id)arg2 ;
-(BOOL)_checkErrorForLocallySuspendedAccessory:(id)arg1 ;
-(void)setServiceToAccessoryIDMapping:(NSMutableDictionary *)arg1 ;
@end

