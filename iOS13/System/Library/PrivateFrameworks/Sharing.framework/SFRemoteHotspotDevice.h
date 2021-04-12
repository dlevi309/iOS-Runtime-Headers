/*
* Generated on Monday, March 1, 2021 at 2:30:45 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Sharing.framework/Sharing
*/

#import <Sharing/Sharing-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSNumber, NSData;

@interface SFRemoteHotspotDevice : NSObject <NSSecureCoding> {

	unsigned char _networkType;
	BOOL _osSupportsAutoHotspot;
	BOOL _supportsCompanionLink;
	BOOL _hasDuplicates;
	NSString* _deviceName;
	NSString* _deviceIdentifier;
	NSNumber* _batteryLife;
	NSNumber* _signalStrength;
	NSString* _model;
	long long _group;
	NSData* _advertisementData;

}

@property (assign,nonatomic) BOOL supportsCompanionLink;                     //@synthesize supportsCompanionLink=_supportsCompanionLink - In the implementation block
@property (assign) BOOL hasDuplicates;                                       //@synthesize hasDuplicates=_hasDuplicates - In the implementation block
@property (nonatomic,copy,readonly) NSData * advertisementData;              //@synthesize advertisementData=_advertisementData - In the implementation block
@property (copy) NSString * deviceName;                                      //@synthesize deviceName=_deviceName - In the implementation block
@property (copy) NSString * deviceIdentifier;                                //@synthesize deviceIdentifier=_deviceIdentifier - In the implementation block
@property (retain) NSNumber * batteryLife;                                   //@synthesize batteryLife=_batteryLife - In the implementation block
@property (assign) unsigned char networkType;                                //@synthesize networkType=_networkType - In the implementation block
@property (retain) NSNumber * signalStrength;                                //@synthesize signalStrength=_signalStrength - In the implementation block
@property (retain) NSString * model;                                         //@synthesize model=_model - In the implementation block
@property (assign) BOOL osSupportsAutoHotspot;                               //@synthesize osSupportsAutoHotspot=_osSupportsAutoHotspot - In the implementation block
@property (assign) long long group;                                          //@synthesize group=_group - In the implementation block
+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setGroup:(long long)arg1 ;
-(NSString *)model;
-(void)setModel:(NSString *)arg1 ;
-(NSString *)deviceIdentifier;
-(void)setDeviceIdentifier:(NSString *)arg1 ;
-(long long)group;
-(unsigned char)networkType;
-(void)setNetworkType:(unsigned char)arg1 ;
-(void)setDeviceName:(NSString *)arg1 ;
-(NSString *)deviceName;
-(NSNumber *)signalStrength;
-(unsigned char)networkTypeForIncomingType:(unsigned char)arg1 ;
-(NSNumber *)batteryLife;
-(id)batteryLifeFromInfo:(unsigned)arg1 ;
-(unsigned char)networkTypeFromInfo:(unsigned)arg1 ;
-(id)signalStrengthFromInfo:(unsigned)arg1 ;
-(id)initWithName:(id)arg1 identifier:(id)arg2 advertisement:(SCD_Struct_SF7)arg3 ;
-(BOOL)componentsAreEqualTo:(id)arg1 ;
-(void)updateWithHotspotInfo:(unsigned)arg1 ;
-(void)setBatteryLife:(NSNumber *)arg1 ;
-(void)setSignalStrength:(NSNumber *)arg1 ;
-(BOOL)osSupportsAutoHotspot;
-(void)setOsSupportsAutoHotspot:(BOOL)arg1 ;
-(BOOL)supportsCompanionLink;
-(void)setSupportsCompanionLink:(BOOL)arg1 ;
-(BOOL)hasDuplicates;
-(void)setHasDuplicates:(BOOL)arg1 ;
-(NSData *)advertisementData;
@end

