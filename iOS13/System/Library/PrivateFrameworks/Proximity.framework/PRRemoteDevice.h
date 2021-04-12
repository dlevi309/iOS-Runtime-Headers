/*
* Generated on Monday, March 1, 2021 at 2:32:51 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(BOOL)isEqual:(id)arg1 ;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSUUID *)UUID;
-(void)setUUID:(NSUUID *)arg1 ;
-(long long)deviceType;
-(void)setDeviceType:(long long)arg1 ;
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

