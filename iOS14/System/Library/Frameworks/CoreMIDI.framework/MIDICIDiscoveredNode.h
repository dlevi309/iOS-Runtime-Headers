/*
* Generated on Thursday, January 14, 2021 at 2:26:53 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CoreMIDI.framework/CoreMIDI
*/

#import <CoreMIDI/CoreMIDI-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class MIDICIDeviceInfo, NSNumber;

@interface MIDICIDiscoveredNode : NSObject <NSSecureCoding> {

	unsigned _destination;
	MIDICIDeviceInfo* _deviceInfo;
	BOOL _supportsProfiles;
	BOOL _supportsProperties;
	unsigned _maxSysExSize;

}

@property (nonatomic,readonly) unsigned destination;                       //@synthesize destination=_destination - In the implementation block
@property (nonatomic,readonly) MIDICIDeviceInfo * deviceInfo;              //@synthesize deviceInfo=_deviceInfo - In the implementation block
@property (nonatomic,readonly) BOOL supportsProfiles;                      //@synthesize supportsProfiles=_supportsProfiles - In the implementation block
@property (nonatomic,readonly) BOOL supportsProperties;                    //@synthesize supportsProperties=_supportsProperties - In the implementation block
@property (nonatomic,readonly) NSNumber * maximumSysExSize; 
+(BOOL)supportsSecureCoding;
+(id)description;
-(MIDICIDeviceInfo *)deviceInfo;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(id)initWithCoder:(id)arg1 ;
-(unsigned)destination;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithDestination:(unsigned)arg1 deviceID:(MIDICIDeviceIdentification)arg2 profilesSupported:(BOOL)arg3 propertiesSupported:(BOOL)arg4 maxSysExSize:(unsigned)arg5 ;
-(NSNumber *)maximumSysExSize;
-(BOOL)supportsProfiles;
-(BOOL)supportsProperties;
@end

