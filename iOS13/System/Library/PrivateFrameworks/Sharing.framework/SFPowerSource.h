/*
* Generated on Monday, March 1, 2021 at 2:30:45 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Sharing.framework/Sharing
*/

#import <Sharing/Sharing-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSData, NSArray, NSDictionary;

@interface SFPowerSource : NSObject <NSSecureCoding> {

	OpaqueIOPSPowerSourceIDRef _psID;
	int _lowPowerMonitoringToken;
	double _lowWarnLevel;
	BOOL _charging;
	BOOL _lowPowerModeEnabled;
	BOOL _showChargingUI;
	BOOL _adapterSharedSource;
	BOOL _added;
	BOOL _present;
	int _powerState;
	int _role;
	unsigned _changes;
	NSString* _accessoryCategory;
	NSString* _accessoryID;
	NSData* _batteryCaseAddress;
	double _chargeLevel;
	long long _color;
	long long _familyCode;
	NSString* _groupID;
	NSArray* _LEDs;
	double _maxCapacity;
	NSString* _name;
	NSString* _partID;
	NSString* _partName;
	long long _productID;
	long long _sourceID;
	NSString* _state;
	long long _temperature;
	NSString* _transportType;
	NSString* _type;
	long long _vendorID;
	long long _adapterErrorFlags;
	long long _adapterFamilyCode;
	NSString* _adapterName;
	long long _adapterSourceID;
	NSDictionary* _ioKitAdapterDescription;
	NSDictionary* _ioKitDescription;

}

@property (nonatomic,copy) NSDictionary * ioKitAdapterDescription;                                 //@synthesize ioKitAdapterDescription=_ioKitAdapterDescription - In the implementation block
@property (nonatomic,copy) NSDictionary * ioKitDescription;                                        //@synthesize ioKitDescription=_ioKitDescription - In the implementation block
@property (assign,nonatomic) BOOL added;                                                           //@synthesize added=_added - In the implementation block
@property (assign,nonatomic) BOOL present;                                                         //@synthesize present=_present - In the implementation block
@property (assign,nonatomic) unsigned changes;                                                     //@synthesize changes=_changes - In the implementation block
@property (nonatomic,copy) NSString * accessoryCategory;                                           //@synthesize accessoryCategory=_accessoryCategory - In the implementation block
@property (nonatomic,copy) NSString * accessoryID;                                                 //@synthesize accessoryID=_accessoryID - In the implementation block
@property (nonatomic,copy) NSData * batteryCaseAddress;                                            //@synthesize batteryCaseAddress=_batteryCaseAddress - In the implementation block
@property (assign,nonatomic) BOOL charging;                                                        //@synthesize charging=_charging - In the implementation block
@property (assign,nonatomic) double chargeLevel;                                                   //@synthesize chargeLevel=_chargeLevel - In the implementation block
@property (assign,nonatomic) long long color;                                                      //@synthesize color=_color - In the implementation block
@property (assign,nonatomic) long long familyCode;                                                 //@synthesize familyCode=_familyCode - In the implementation block
@property (nonatomic,copy) NSString * groupID;                                                     //@synthesize groupID=_groupID - In the implementation block
@property (nonatomic,copy) NSArray * LEDs;                                                         //@synthesize LEDs=_LEDs - In the implementation block
@property (getter=isLowPowerModeEnabled,nonatomic,readonly) BOOL lowPowerModeEnabled;              //@synthesize lowPowerModeEnabled=_lowPowerModeEnabled - In the implementation block
@property (assign,nonatomic) double lowWarnLevel;                                                  //@synthesize lowWarnLevel=_lowWarnLevel - In the implementation block
@property (getter=isInternal,nonatomic,readonly) BOOL internal; 
@property (assign,nonatomic) double maxCapacity;                                                   //@synthesize maxCapacity=_maxCapacity - In the implementation block
@property (nonatomic,copy) NSString * name;                                                        //@synthesize name=_name - In the implementation block
@property (nonatomic,copy) NSString * partID;                                                      //@synthesize partID=_partID - In the implementation block
@property (nonatomic,copy) NSString * partName;                                                    //@synthesize partName=_partName - In the implementation block
@property (assign,nonatomic) int powerState;                                                       //@synthesize powerState=_powerState - In the implementation block
@property (assign,nonatomic) long long productID;                                                  //@synthesize productID=_productID - In the implementation block
@property (assign,nonatomic) int role;                                                             //@synthesize role=_role - In the implementation block
@property (assign,nonatomic) BOOL showChargingUI;                                                  //@synthesize showChargingUI=_showChargingUI - In the implementation block
@property (assign,nonatomic) long long sourceID;                                                   //@synthesize sourceID=_sourceID - In the implementation block
@property (nonatomic,copy) NSString * state;                                                       //@synthesize state=_state - In the implementation block
@property (assign,nonatomic) long long temperature;                                                //@synthesize temperature=_temperature - In the implementation block
@property (nonatomic,copy) NSString * transportType;                                               //@synthesize transportType=_transportType - In the implementation block
@property (nonatomic,copy) NSString * type;                                                        //@synthesize type=_type - In the implementation block
@property (assign,nonatomic) long long vendorID;                                                   //@synthesize vendorID=_vendorID - In the implementation block
@property (nonatomic,readonly) BOOL wirelessCharging; 
@property (assign,nonatomic) long long adapterErrorFlags;                                          //@synthesize adapterErrorFlags=_adapterErrorFlags - In the implementation block
@property (assign,nonatomic) long long adapterFamilyCode;                                          //@synthesize adapterFamilyCode=_adapterFamilyCode - In the implementation block
@property (nonatomic,copy) NSString * adapterName;                                                 //@synthesize adapterName=_adapterName - In the implementation block
@property (assign,nonatomic) BOOL adapterSharedSource;                                             //@synthesize adapterSharedSource=_adapterSharedSource - In the implementation block
@property (assign,nonatomic) long long adapterSourceID;                                            //@synthesize adapterSourceID=_adapterSourceID - In the implementation block
@property (nonatomic,readonly) long long matID; 
+(BOOL)supportsSecureCoding;
-(id)init;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(NSString *)name;
-(void)invalidate;
-(NSString *)type;
-(void)setType:(NSString *)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(int)role;
-(void)setName:(NSString *)arg1 ;
-(NSString *)state;
-(BOOL)isLowPowerModeEnabled;
-(unsigned)changes;
-(int)publish;
-(void)setState:(NSString *)arg1 ;
-(long long)color;
-(void)setColor:(long long)arg1 ;
-(NSString *)transportType;
-(long long)sourceID;
-(NSString *)groupID;
-(long long)productID;
-(void)setSourceID:(long long)arg1 ;
-(void)setGroupID:(NSString *)arg1 ;
-(double)maxCapacity;
-(void)setMaxCapacity:(double)arg1 ;
-(BOOL)isInternal;
-(BOOL)present;
-(void)setTransportType:(NSString *)arg1 ;
-(void)setRole:(int)arg1 ;
-(id)detailedDescription;
-(long long)temperature;
-(void)setTemperature:(long long)arg1 ;
-(void)setPresent:(BOOL)arg1 ;
-(NSDictionary *)ioKitDescription;
-(unsigned)updateWithPowerAdapterDetails:(id)arg1 ;
-(unsigned)updateWithPowerSourceDescription:(id)arg1 ;
-(void)_updateWithCoder:(id)arg1 ;
-(NSArray *)LEDs;
-(void)updateWithPowerSource:(id)arg1 ;
-(NSString *)accessoryCategory;
-(void)setAccessoryCategory:(NSString *)arg1 ;
-(NSString *)accessoryID;
-(void)setAccessoryID:(NSString *)arg1 ;
-(BOOL)charging;
-(void)setCharging:(BOOL)arg1 ;
-(double)chargeLevel;
-(void)setChargeLevel:(double)arg1 ;
-(long long)familyCode;
-(void)setFamilyCode:(long long)arg1 ;
-(void)setLEDs:(NSArray *)arg1 ;
-(NSString *)partID;
-(void)setPartID:(NSString *)arg1 ;
-(NSString *)partName;
-(void)setPartName:(NSString *)arg1 ;
-(int)powerState;
-(void)setPowerState:(int)arg1 ;
-(void)setProductID:(long long)arg1 ;
-(BOOL)showChargingUI;
-(void)setShowChargingUI:(BOOL)arg1 ;
-(long long)vendorID;
-(void)setVendorID:(long long)arg1 ;
-(long long)adapterErrorFlags;
-(void)setAdapterErrorFlags:(long long)arg1 ;
-(long long)adapterFamilyCode;
-(void)setAdapterFamilyCode:(long long)arg1 ;
-(NSString *)adapterName;
-(void)setAdapterName:(NSString *)arg1 ;
-(BOOL)adapterSharedSource;
-(void)setAdapterSharedSource:(BOOL)arg1 ;
-(long long)adapterSourceID;
-(void)setAdapterSourceID:(long long)arg1 ;
-(NSDictionary *)ioKitAdapterDescription;
-(void)setIoKitAdapterDescription:(NSDictionary *)arg1 ;
-(void)setIoKitDescription:(NSDictionary *)arg1 ;
-(void)setAdded:(BOOL)arg1 ;
-(void)setChanges:(unsigned)arg1 ;
-(BOOL)added;
-(void)setBatteryCaseAddress:(NSData *)arg1 ;
-(void)setLowWarnLevel:(double)arg1 ;
-(void)startLowPowerMonitoringIfAppropriate;
-(NSData *)batteryCaseAddress;
-(long long)matID;
-(void)lowPowerModeChanged:(int)arg1 ;
-(BOOL)wirelessCharging;
-(double)lowWarnLevel;
@end

