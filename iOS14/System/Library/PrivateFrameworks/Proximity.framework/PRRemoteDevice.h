/*
* Generated on Thursday, January 14, 2021 at 2:24:49 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Proximity.framework/Proximity
*/

#import <Proximity/Proximity-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSData, NSUUID;

@interface PRRemoteDevice : NSObject <NSSecureCoding, NSCopying> {

	long long _deviceType;
	NSData* _btAdvAddress;
	NSData* _roseMACAddress;
	NSUUID* _UUID;

}

@property (assign,nonatomic) long long deviceType;               //@synthesize deviceType=_deviceType - In the implementation block
@property (nonatomic,copy) NSData * btAdvAddress;                //@synthesize btAdvAddress=_btAdvAddress - In the implementation block
@property (nonatomic,copy) NSData * roseMACAddress;              //@synthesize roseMACAddress=_roseMACAddress - In the implementation block
@property (nonatomic,copy) NSUUID * UUID;                        //@synthesize UUID=_UUID - In the implementation block
+(BOOL)supportsSecureCoding;
-(long long)deviceType;
-(NSUUID *)UUID;
-(void)setDeviceType:(long long)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(id)initWithCoder:(id)arg1 ;
-(void)setUUID:(NSUUID *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithCompanionUUID:(id)arg1 ;
-(void)setBtAdvAddress:(NSData *)arg1 ;
-(void)setRoseMACAddress:(NSData *)arg1 ;
-(NSData *)btAdvAddress;
-(BOOL)compareField:(id)arg1 to:(id)arg2 ;
-(NSData *)roseMACAddress;
-(id)initWithBTAdvAddress:(id)arg1 ;
-(id)initWithTestCompanionBtAdvAddress:(id)arg1 ;
-(id)initWithBeaconUUID:(id)arg1 ;
-(id)initWithRoseMACAddress:(id)arg1 ;
@end

