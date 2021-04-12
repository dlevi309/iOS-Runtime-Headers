/*
* Generated on Monday, March 1, 2021 at 2:34:02 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/BatteryCenter.framework/BatteryCenter
*/

#import <BatteryCenter/BatteryCenter-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, UIImage;

@interface BCBatteryDevice : NSObject <NSCopying, NSSecureCoding> {

	NSString* _identifier;
	NSString* _matchIdentifier;
	long long _percentCharge;
	BOOL _charging;
	UIImage* _glyph;
	BOOL _connected;
	BOOL _batterySaverModeActive;
	BOOL _lowBattery;
	BOOL _internal;
	BOOL _powerSource;
	BOOL _approximatesPercentCharge;
	BOOL _wirelesslyCharging;
	BOOL _fake;
	long long _vendor;
	long long _powerSourceState;
	long long _productIdentifier;
	NSString* _accessoryIdentifier;
	NSString* _name;
	NSString* _modelNumber;
	unsigned long long _parts;
	unsigned long long _accessoryCategory;
	NSString* _groupName;
	long long _transportType;

}

@property (nonatomic,copy) NSString * identifier;                                                      //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,copy) NSString * name;                                                            //@synthesize name=_name - In the implementation block
@property (assign,nonatomic) long long percentCharge;                                                  //@synthesize percentCharge=_percentCharge - In the implementation block
@property (assign,getter=isConnected,nonatomic) BOOL connected;                                        //@synthesize connected=_connected - In the implementation block
@property (assign,getter=isCharging,nonatomic) BOOL charging;                                          //@synthesize charging=_charging - In the implementation block
@property (assign,getter=isInternal,nonatomic) BOOL internal;                                          //@synthesize internal=_internal - In the implementation block
@property (assign,getter=isPowerSource,nonatomic) BOOL powerSource;                                    //@synthesize powerSource=_powerSource - In the implementation block
@property (assign,nonatomic) BOOL approximatesPercentCharge;                                           //@synthesize approximatesPercentCharge=_approximatesPercentCharge - In the implementation block
@property (assign,nonatomic) unsigned long long parts;                                                 //@synthesize parts=_parts - In the implementation block
@property (assign,getter=isWirelesslyCharging,nonatomic) BOOL wirelesslyCharging;                      //@synthesize wirelesslyCharging=_wirelesslyCharging - In the implementation block
@property (nonatomic,copy) NSString * groupName;                                                       //@synthesize groupName=_groupName - In the implementation block
@property (nonatomic,copy,readonly) NSString * matchIdentifier;                                        //@synthesize matchIdentifier=_matchIdentifier - In the implementation block
@property (assign,nonatomic) long long transportType;                                                  //@synthesize transportType=_transportType - In the implementation block
@property (assign,nonatomic) long long powerSourceState;                                               //@synthesize powerSourceState=_powerSourceState - In the implementation block
@property (assign,getter=isFake,nonatomic) BOOL fake;                                                  //@synthesize fake=_fake - In the implementation block
@property (assign,getter=isBatterySaverModeActive,nonatomic) BOOL batterySaverModeActive;              //@synthesize batterySaverModeActive=_batterySaverModeActive - In the implementation block
@property (assign,getter=isLowBattery,nonatomic) BOOL lowBattery;                                      //@synthesize lowBattery=_lowBattery - In the implementation block
@property (nonatomic,copy) NSString * accessoryIdentifier;                                             //@synthesize accessoryIdentifier=_accessoryIdentifier - In the implementation block
@property (assign,nonatomic) unsigned long long accessoryCategory;                                     //@synthesize accessoryCategory=_accessoryCategory - In the implementation block
@property (nonatomic,copy) NSString * modelNumber;                                                     //@synthesize modelNumber=_modelNumber - In the implementation block
@property (nonatomic,readonly) long long vendor;                                                       //@synthesize vendor=_vendor - In the implementation block
@property (nonatomic,readonly) long long productIdentifier;                                            //@synthesize productIdentifier=_productIdentifier - In the implementation block
@property (nonatomic,readonly) UIImage * glyph; 
+(BOOL)supportsSecureCoding;
+(id)batteryDeviceWithIdentifier:(id)arg1 vendor:(long long)arg2 productIdentifier:(long long)arg3 parts:(unsigned long long)arg4 matchIdentifier:(id)arg5 ;
-(id)description;
-(NSString *)name;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setName:(NSString *)arg1 ;
-(NSString *)identifier;
-(void)setIdentifier:(NSString *)arg1 ;
-(long long)transportType;
-(NSString *)groupName;
-(void)setGroupName:(NSString *)arg1 ;
-(void)setInternal:(BOOL)arg1 ;
-(BOOL)isBatterySaverModeActive;
-(UIImage *)glyph;
-(BOOL)isInternal;
-(BOOL)isLowBattery;
-(void)setTransportType:(long long)arg1 ;
-(BOOL)isConnected;
-(void)setConnected:(BOOL)arg1 ;
-(long long)vendor;
-(void)setModelNumber:(NSString *)arg1 ;
-(NSString *)modelNumber;
-(long long)productIdentifier;
-(unsigned long long)accessoryCategory;
-(void)setAccessoryCategory:(unsigned long long)arg1 ;
-(void)setCharging:(BOOL)arg1 ;
-(BOOL)isCharging;
-(NSString *)accessoryIdentifier;
-(void)setAccessoryIdentifier:(NSString *)arg1 ;
-(unsigned long long)parts;
-(void)setLowBattery:(BOOL)arg1 ;
-(long long)percentCharge;
-(void)setPercentCharge:(long long)arg1 ;
-(void)setBatterySaverModeActive:(BOOL)arg1 ;
-(BOOL)isPowerSource;
-(NSString *)matchIdentifier;
-(void)setParts:(unsigned long long)arg1 ;
-(void)setPowerSource:(BOOL)arg1 ;
-(void)setPowerSourceState:(long long)arg1 ;
-(void)setWirelesslyCharging:(BOOL)arg1 ;
-(void)setApproximatesPercentCharge:(BOOL)arg1 ;
-(id)initWithIdentifier:(id)arg1 vendor:(long long)arg2 productIdentifier:(long long)arg3 parts:(unsigned long long)arg4 matchIdentifier:(id)arg5 ;
-(id)_lazyGlyph;
-(void)setFake:(BOOL)arg1 ;
-(long long)powerSourceState;
-(BOOL)approximatesPercentCharge;
-(BOOL)isWirelesslyCharging;
-(BOOL)isFake;
@end

