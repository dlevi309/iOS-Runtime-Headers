/*
* Generated on Monday, March 1, 2021 at 2:33:26 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Home.framework/Home
*/

#import <libobjc.A.dylib/HFSymptomResultContextProviding.h>

@class NSString, NSUUID, HMAccessory, HMMediaSystem;

@interface HFSymptomResultContextProvider : NSObject <HFSymptomResultContextProviding> {

	HMAccessory* _accessory;
	HMMediaSystem* _mediaSystem;

}

@property (nonatomic,readonly) HMAccessory * accessory;                                   //@synthesize accessory=_accessory - In the implementation block
@property (nonatomic,readonly) HMMediaSystem * mediaSystem;                               //@synthesize mediaSystem=_mediaSystem - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy,readonly) NSString * homeKitObjectName; 
@property (nonatomic,copy,readonly) NSString * accessoryName; 
@property (nonatomic,copy,readonly) NSUUID * accessoryUUID; 
@property (nonatomic,copy,readonly) NSString * currentDeviceNetworkSSID; 
@property (nonatomic,copy,readonly) NSString * accessoryNetworkSSID; 
@property (nonatomic,copy,readonly) NSString * currentUserID; 
@property (nonatomic,copy,readonly) NSString * currentAppleMusicAccountName; 
-(id)init;
-(NSUUID *)accessoryUUID;
-(NSString *)accessoryName;
-(HMAccessory *)accessory;
-(HMMediaSystem *)mediaSystem;
-(id)initWithAccessory:(id)arg1 mediaSystem:(id)arg2 ;
-(BOOL)shouldDisplayManualFixOptionForSymptom:(id)arg1 ;
-(NSString *)homeKitObjectName;
-(NSString *)accessoryNetworkSSID;
-(NSString *)currentDeviceNetworkSSID;
-(NSString *)currentUserID;
-(NSString *)currentAppleMusicAccountName;
-(long long)fixStateForSymptom:(id)arg1 ;
@end

