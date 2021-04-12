/*
* Generated on Thursday, January 14, 2021 at 2:27:33 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreHAP.framework/CoreHAP
*/

#import <CoreHAP/HAP2AccessoryServerDiscoveryAccessoryInfo.h>

@class NSString, HMFVersion, NSData;

@interface HAP2AccessoryServerDiscoveryHAPAccessoryInfo : HAP2AccessoryServerDiscoveryAccessoryInfo {

	unsigned char _status;
	NSString* _name;
	NSString* _model;
	unsigned long long _category;
	unsigned long long _configurationNumber;
	unsigned long long _stateNumber;
	HMFVersion* _protocolVersion;
	unsigned long long _featureFlags;
	NSData* _setupHash;

}

@property (nonatomic,readonly) NSString * name;                                     //@synthesize name=_name - In the implementation block
@property (nonatomic,readonly) NSString * model;                                    //@synthesize model=_model - In the implementation block
@property (nonatomic,readonly) unsigned char status;                                //@synthesize status=_status - In the implementation block
@property (nonatomic,readonly) unsigned long long category;                         //@synthesize category=_category - In the implementation block
@property (nonatomic,readonly) unsigned long long configurationNumber;              //@synthesize configurationNumber=_configurationNumber - In the implementation block
@property (nonatomic,readonly) unsigned long long stateNumber;                      //@synthesize stateNumber=_stateNumber - In the implementation block
@property (nonatomic,readonly) HMFVersion * protocolVersion;                        //@synthesize protocolVersion=_protocolVersion - In the implementation block
@property (nonatomic,readonly) unsigned long long featureFlags;                     //@synthesize featureFlags=_featureFlags - In the implementation block
@property (nonatomic,readonly) NSData * setupHash;                                  //@synthesize setupHash=_setupHash - In the implementation block
-(NSString *)model;
-(unsigned long long)category;
-(HMFVersion *)protocolVersion;
-(NSString *)name;
-(unsigned long long)featureFlags;
-(unsigned char)status;
-(NSData *)setupHash;
-(unsigned long long)stateNumber;
-(unsigned long long)configurationNumber;
-(id)initWithDeviceID:(id)arg1 rawDiscoveryInfo:(id)arg2 ;
-(id)initWithDeviceID:(id)arg1 rawDiscoveryInfo:(id)arg2 name:(id)arg3 model:(id)arg4 status:(unsigned char)arg5 category:(unsigned long long)arg6 configurationNumber:(unsigned long long)arg7 stateNumber:(unsigned long long)arg8 protocolVersion:(id)arg9 featureFlags:(unsigned long long)arg10 setupHash:(id)arg11 ;
@end

