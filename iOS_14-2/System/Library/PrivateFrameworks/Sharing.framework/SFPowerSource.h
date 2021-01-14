/*
* Generated on Thursday, January 14, 2021 at 2:22:10 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(unsigned)changes;
-(double)maxCapacity;
-(NSArray *)LEDs;
-(void)setMaxCapacity:(double)arg1 ;
-(BOOL)isInternal;
-(BOOL)added;
-(void)setSourceID:(long long)arg1 ;
-(int)powerState;
-(id)detailedDescription;
-(long long)temperature;
-(void)setAccessoryCategory:(NSString *)arg1 ;
-(double)lowWarnLevel;
-(id)init;
-(void)setPresent:(BOOL)arg1 ;
-(double)chargeLevel;
-(long long)adapterSourceID;
-(BOOL)present;
-(long long)color;
-(void)setShowChargingUI:(BOOL)arg1 ;
-(void)startLowPowerMonitoringIfAppropriate;
-(NSString *)groupID;
-(BOOL)isLowPowerModeEnabled;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setTransportType:(NSString *)arg1 ;
-(void)setRole:(int)arg1 ;
-(void)setAdapterSourceID:(long long)arg1 ;
-(void)setChanges:(unsigned)arg1 ;
-(void)setGroupID:(NSString *)arg1 ;
-(void)_updateWithCoder:(id)arg1 ;
-(NSDictionary *)ioKitAdapterDescription;
-(void)setType:(NSString *)arg1 ;
-(NSString *)accessoryID;
-(NSString *)transportType;
-(void)setPowerState:(int)arg1 ;
-(void)setAdapterFamilyCode:(long long)arg1 ;
-(void)setChargeLevel:(double)arg1 ;
-(void)setIoKitDescription:(NSDictionary *)arg1 ;
-(void)setLowWarnLevel:(double)arg1 ;
-(NSString *)accessoryCategory;
-(NSString *)name;
-(void)setAdapterErrorFlags:(long long)arg1 ;
-(id)description;
-(int)publish;
-(void)setAdapterSharedSource:(BOOL)arg1 ;
-(long long)productID;
-(void)setColor:(long long)arg1 ;
-(BOOL)adapterSharedSource;
-(void)setIoKitAdapterDescription:(NSDictionary *)arg1 ;
-(NSDictionary *)ioKitDescription;
-(void)setAdapterName:(NSString *)arg1 ;
-(NSString *)partName;
-(long long)adapterErrorFlags;
-(void)setTemperature:(long long)arg1 ;
-(BOOL)showChargingUI;
-(void)setAdded:(BOOL)arg1 ;
-(NSData *)batteryCaseAddress;
-(NSString *)type;
-(long long)familyCode;
-(long long)adapterFamilyCode;
-(void)setState:(NSString *)arg1 ;
-(long long)matID;
-(unsigned long long)hash;
-(NSString *)adapterName;
-(id)initWithCoder:(id)arg1 ;
-(void)setPartName:(NSString *)arg1 ;
-(NSString *)state;
-(void)setProductID:(long long)arg1 ;
-(void)invalidate;
-(NSString *)partID;
-(void)setBatteryCaseAddress:(NSData *)arg1 ;
-(void)setName:(NSString *)arg1 ;
-(long long)sourceID;
-(BOOL)charging;
-(void)setFamilyCode:(long long)arg1 ;
-(unsigned)updateWithPowerSourceDescription:(id)arg1 ;
-(int)role;
-(void)setPartID:(NSString *)arg1 ;
-(void)updateWithPowerSource:(id)arg1 ;
-(void)setVendorID:(long long)arg1 ;
-(void)setCharging:(BOOL)arg1 ;
-(unsigned)updateWithPowerAdapterDetails:(id)arg1 ;
-(BOOL)wirelessCharging;
-(long long)vendorID;
-(void)setAccessoryID:(NSString *)arg1 ;
-(void)lowPowerModeChanged:(int)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)setLEDs:(NSArray *)arg1 ;
-(void)dealloc;
@end

