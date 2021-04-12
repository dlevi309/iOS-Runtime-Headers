/*
* Generated on Thursday, January 14, 2021 at 2:22:50 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/HomeKit.framework/HomeKit
*/

#import <HomeKit/HMPersonManager.h>
#import <libobjc.A.dylib/HMFLogging.h>

@class NSUUID, NSString;

@interface HMHomePersonManager : HMPersonManager <HMFLogging> {

	NSUUID* _homeUUID;

}

@property (copy,readonly) NSUUID * homeUUID;                        //@synthesize homeUUID=_homeUUID - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)logCategory;
+(id)personManagerUUIDFromHomeUUID:(id)arg1 ;
-(NSUUID *)homeUUID;
-(void)addObserver:(id)arg1 ;
-(void)configure;
-(id)logIdentifier;
-(id)initWithHome:(id)arg1 ;
-(void)removeObserver:(id)arg1 ;
-(void)handleDidUpdateSettingsMessage:(id)arg1 ;
-(void)fetchSettingsWithCompletion:(/*^block*/id)arg1 ;
-(void)updateSettings:(id)arg1 completion:(/*^block*/id)arg2 ;
@end

