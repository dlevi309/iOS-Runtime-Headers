/*
* Generated on Monday, March 1, 2021 at 2:30:45 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
+(id)serviceFromDictionary:(id)arg1 ;
+(id)serviceFromAuthorData:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)identifier;
-(void)setIdentifier:(NSString *)arg1 ;
-(id)initWithServiceName:(id)arg1 ;
-(NSString *)serviceType;
-(NSString *)deviceID;
-(void)setDeviceID:(NSString *)arg1 ;
-(void)setDeviceName:(NSString *)arg1 ;
-(NSString *)deviceName;
-(id)messageData;
-(NSString *)ipAddress;
-(void)setIpAddress:(NSString *)arg1 ;
-(void)setServiceType:(NSString *)arg1 ;
-(void)setManagerID:(NSString *)arg1 ;
-(NSString *)managerID;
-(BOOL)isEqualToService:(id)arg1 ;
-(NSNumber *)nsxpcVersion;
-(void)setNsxpcVersion:(NSNumber *)arg1 ;
@end

