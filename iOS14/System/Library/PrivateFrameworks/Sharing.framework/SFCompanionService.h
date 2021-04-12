/*
* Generated on Thursday, January 14, 2021 at 2:22:10 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Sharing.framework/Sharing
*/

#import <Sharing/Sharing-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSNumber;

@interface SFCompanionService : NSObject <NSSecureCoding, NSCopying> {

	NSString* _deviceName;
	NSString* _deviceID;
	NSString* _serviceType;
	NSString* _managerID;
	NSString* _ipAddress;
	NSString* _identifier;
	NSNumber* _nsxpcVersion;

}

@property (copy) NSString * deviceID;                  //@synthesize deviceID=_deviceID - In the implementation block
@property (copy) NSString * deviceName;                //@synthesize deviceName=_deviceName - In the implementation block
@property (copy) NSString * serviceType;               //@synthesize serviceType=_serviceType - In the implementation block
@property (copy) NSString * managerID;                 //@synthesize managerID=_managerID - In the implementation block
@property (copy) NSString * ipAddress;                 //@synthesize ipAddress=_ipAddress - In the implementation block
@property (copy) NSString * identifier;                //@synthesize identifier=_identifier - In the implementation block
@property (copy) NSNumber * nsxpcVersion;              //@synthesize nsxpcVersion=_nsxpcVersion - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)serviceFromAuthorData:(id)arg1 ;
+(id)serviceFromDictionary:(id)arg1 ;
-(void)setDeviceID:(NSString *)arg1 ;
-(NSString *)deviceName;
-(NSString *)deviceID;
-(void)setManagerID:(NSString *)arg1 ;
-(NSNumber *)nsxpcVersion;
-(BOOL)isEqualToService:(id)arg1 ;
-(void)setNsxpcVersion:(NSNumber *)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithServiceName:(id)arg1 ;
-(void)setServiceType:(NSString *)arg1 ;
-(id)description;
-(unsigned long long)hash;
-(void)setIpAddress:(NSString *)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)ipAddress;
-(void)setDeviceName:(NSString *)arg1 ;
-(void)setIdentifier:(NSString *)arg1 ;
-(NSString *)identifier;
-(NSString *)serviceType;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(NSString *)managerID;
-(id)messageData;
@end

