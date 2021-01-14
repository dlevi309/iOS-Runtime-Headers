/*
* Generated on Thursday, January 14, 2021 at 2:27:32 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreHAP.framework/CoreHAP
*/

#import <CoreHAP/HAP2LoggingObject.h>
#import <libobjc.A.dylib/HAP2AccessoryServerMetadata.h>
@class HAPDeviceID, HMFVersion, NSString, NSData;


@protocol HAP2AccessoryServerMetadata <NSObject>
@property (nonatomic,readonly) HAPDeviceID * deviceID; 
@property (nonatomic,readonly) BOOL hasPairings; 
@property (nonatomic,readonly) HMFVersion * protocolVersion; 
@property (nonatomic,readonly) NSString * name; 
@property (nonatomic,readonly) NSString * model; 
@property (nonatomic,readonly) unsigned long long category; 
@property (nonatomic,readonly) unsigned short stateNumber; 
@property (nonatomic,readonly) unsigned short configNumber; 
@property (nonatomic,readonly) NSData * setupHash; 
@required
-(HAPDeviceID *)deviceID;
-(NSString *)model;
-(unsigned long long)category;
-(HMFVersion *)protocolVersion;
-(NSString *)name;
-(NSData *)setupHash;
-(unsigned short)stateNumber;
-(unsigned short)configNumber;
-(BOOL)hasPairings;

@end


@class HAPDeviceID, HMFVersion, NSString, NSData;

@interface HAP2AccessoryServerMetadata : HAP2LoggingObject <HAP2AccessoryServerMetadata> {

	BOOL _hasPairings;
	unsigned short _stateNumber;
	unsigned short _configNumber;
	HAPDeviceID* _deviceID;
	HMFVersion* _protocolVersion;
	NSString* _name;
	NSString* _model;
	unsigned long long _category;
	NSData* _setupHash;

}

@property (nonatomic,readonly) HAPDeviceID * deviceID;                    //@synthesize deviceID=_deviceID - In the implementation block
@property (nonatomic,readonly) BOOL hasPairings;                          //@synthesize hasPairings=_hasPairings - In the implementation block
@property (nonatomic,readonly) HMFVersion * protocolVersion;              //@synthesize protocolVersion=_protocolVersion - In the implementation block
@property (nonatomic,readonly) NSString * name;                           //@synthesize name=_name - In the implementation block
@property (nonatomic,readonly) NSString * model;                          //@synthesize model=_model - In the implementation block
@property (nonatomic,readonly) unsigned long long category;               //@synthesize category=_category - In the implementation block
@property (nonatomic,readonly) unsigned short stateNumber;                //@synthesize stateNumber=_stateNumber - In the implementation block
@property (nonatomic,readonly) unsigned short configNumber;               //@synthesize configNumber=_configNumber - In the implementation block
@property (nonatomic,readonly) NSData * setupHash;                        //@synthesize setupHash=_setupHash - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)new;
-(HAPDeviceID *)deviceID;
-(NSString *)model;
-(id)init;
-(unsigned long long)category;
-(HMFVersion *)protocolVersion;
-(NSString *)name;
-(NSData *)setupHash;
-(unsigned short)stateNumber;
-(unsigned short)configNumber;
-(BOOL)hasPairings;
-(id)initWithDeviceID:(id)arg1 hasPairings:(BOOL)arg2 protocolVersion:(id)arg3 name:(id)arg4 model:(id)arg5 category:(unsigned long long)arg6 stateNumber:(unsigned short)arg7 configNumber:(unsigned short)arg8 setupHash:(id)arg9 ;
@end

