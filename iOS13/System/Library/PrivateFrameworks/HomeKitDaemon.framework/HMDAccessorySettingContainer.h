/*
* Generated on Monday, March 1, 2021 at 2:33:33 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/


@class HMDMediaSystem, HMDAccessory, HMDHome, HMDAccessorySettingTarget, NSUUID, NSString, NSArray;

@interface HMDAccessorySettingContainer : NSObject {

	HMDMediaSystem* _mediaSystem;
	HMDAccessory* _accessory;

}

@property (nonatomic,__weak,readonly) HMDAccessory * accessory;                        //@synthesize accessory=_accessory - In the implementation block
@property (nonatomic,__weak,readonly) HMDHome * home; 
@property (nonatomic,__weak,readonly) HMDAccessorySettingTarget * target; 
@property (nonatomic,__weak,readonly) HMDMediaSystem * mediaSystem;                    //@synthesize mediaSystem=_mediaSystem - In the implementation block
@property (nonatomic,readonly) NSUUID * parentUUID; 
@property (nonatomic,readonly) NSString * name; 
@property (readonly) NSArray * supportedMultiUserLanguageCodes; 
@property (readonly) NSArray * accessories; 
-(id)description;
-(NSString *)name;
-(HMDAccessorySettingTarget *)target;
-(HMDHome *)home;
-(NSUUID *)parentUUID;
-(HMDAccessory *)accessory;
-(NSArray *)accessories;
-(HMDMediaSystem *)mediaSystem;
-(id)initWithAccessory:(id)arg1 mediaSystem:(id)arg2 ;
-(void)auditRootSettingsGroup:(unsigned long long)arg1 ;
-(NSArray *)supportedMultiUserLanguageCodes;
-(BOOL)isMediaSystemContainer;
@end

