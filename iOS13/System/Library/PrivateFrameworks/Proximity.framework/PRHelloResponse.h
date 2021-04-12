/*
* Generated on Monday, March 1, 2021 at 2:32:51 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Proximity.framework/Proximity
*/

#import <Proximity/Proximity-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSNumber;

@interface PRHelloResponse : NSObject <NSCopying, NSSecureCoding> {

	unsigned char _hsiVersionMajor;
	unsigned char _hsiVersionMinor;
	NSString* _roseFirmwareVersion;
	unsigned long long _hardwareVersion;
	NSNumber* _addlInfoSize;
	NSNumber* _apFirmwareVersion;
	NSNumber* _dspFirmwareVersion;
	NSString* _target;
	NSNumber* _calDataVersion;
	NSNumber* _moduleID;
	NSNumber* _modemInitVersion;
	NSString* _extraBytes;

}

@property (nonatomic,readonly) NSString * roseFirmwareVersion;                  //@synthesize roseFirmwareVersion=_roseFirmwareVersion - In the implementation block
@property (nonatomic,readonly) unsigned char hsiVersionMajor;                   //@synthesize hsiVersionMajor=_hsiVersionMajor - In the implementation block
@property (nonatomic,readonly) unsigned char hsiVersionMinor;                   //@synthesize hsiVersionMinor=_hsiVersionMinor - In the implementation block
@property (nonatomic,readonly) unsigned long long hardwareVersion;              //@synthesize hardwareVersion=_hardwareVersion - In the implementation block
@property (copy) NSNumber * addlInfoSize;                                       //@synthesize addlInfoSize=_addlInfoSize - In the implementation block
@property (copy) NSNumber * apFirmwareVersion;                                  //@synthesize apFirmwareVersion=_apFirmwareVersion - In the implementation block
@property (copy) NSNumber * dspFirmwareVersion;                                 //@synthesize dspFirmwareVersion=_dspFirmwareVersion - In the implementation block
@property (copy) NSString * target;                                             //@synthesize target=_target - In the implementation block
@property (copy) NSNumber * calDataVersion;                                     //@synthesize calDataVersion=_calDataVersion - In the implementation block
@property (copy) NSNumber * moduleID;                                           //@synthesize moduleID=_moduleID - In the implementation block
@property (copy) NSNumber * modemInitVersion;                                   //@synthesize modemInitVersion=_modemInitVersion - In the implementation block
@property (copy) NSString * extraBytes;                                         //@synthesize extraBytes=_extraBytes - In the implementation block
+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg1 ;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setTarget:(NSString *)arg1 ;
-(NSString *)target;
-(unsigned long long)hardwareVersion;
-(id)initWithRoseFirmwareVersion:(id)arg1 hsiVersionMajor:(unsigned char)arg2 hsiVersionMinor:(unsigned char)arg3 hardwareVersion:(unsigned long long)arg4 ;
-(void)setAddlInfoSize:(NSNumber *)arg1 ;
-(void)setApFirmwareVersion:(NSNumber *)arg1 ;
-(void)setDspFirmwareVersion:(NSNumber *)arg1 ;
-(void)setCalDataVersion:(NSNumber *)arg1 ;
-(void)setModuleID:(NSNumber *)arg1 ;
-(void)setModemInitVersion:(NSNumber *)arg1 ;
-(void)setExtraBytes:(NSString *)arg1 ;
-(NSString *)roseFirmwareVersion;
-(unsigned char)hsiVersionMajor;
-(unsigned char)hsiVersionMinor;
-(NSNumber *)addlInfoSize;
-(NSNumber *)apFirmwareVersion;
-(NSNumber *)dspFirmwareVersion;
-(NSNumber *)calDataVersion;
-(NSNumber *)moduleID;
-(NSNumber *)modemInitVersion;
-(NSString *)extraBytes;
-(id)initWithHelloResponse:(const HelloResponse*)arg1 ;
@end

