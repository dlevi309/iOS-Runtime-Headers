/*
* Generated on Thursday, January 14, 2021 at 2:22:25 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AccessibilityUtilities.framework/AccessibilityUtilities
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSUUID, AXMIDIEvent;

@interface AXSwitch : NSObject <NSSecureCoding> {

	unsigned short _keyCode;
	long long _action;
	long long _longPressAction;
	NSString* _name;
	NSString* _source;
	NSString* _type;
	NSString* _productName;
	NSString* _manufacturerName;
	NSUUID* _uuid;
	long long _buttonNumber;
	long long _headSwitch;
	AXMIDIEvent* _midiEvent;
	unsigned long long _cameraSwitch;
	unsigned long long _backTapType;
	NSString* _remoteSwitchIdentifier;
	NSString* _remoteDeviceName;
	NSString* _remoteDeviceIdentifier;

}

@property (nonatomic,retain) NSUUID * uuid;                                        //@synthesize uuid=_uuid - In the implementation block
@property (assign,nonatomic) long long action;                                     //@synthesize action=_action - In the implementation block
@property (assign,nonatomic) long long longPressAction;                            //@synthesize longPressAction=_longPressAction - In the implementation block
@property (nonatomic,copy) NSString * name;                                        //@synthesize name=_name - In the implementation block
@property (nonatomic,retain) NSString * source;                                    //@synthesize source=_source - In the implementation block
@property (nonatomic,readonly) NSString * localizedSourceDescription; 
@property (nonatomic,retain) NSString * type;                                      //@synthesize type=_type - In the implementation block
@property (nonatomic,copy) NSString * productName;                                 //@synthesize productName=_productName - In the implementation block
@property (nonatomic,copy) NSString * manufacturerName;                            //@synthesize manufacturerName=_manufacturerName - In the implementation block
@property (nonatomic,readonly) BOOL hasLongPressAction; 
@property (nonatomic,readonly) BOOL supportsLongPress; 
@property (assign,nonatomic) unsigned short keyCode;                               //@synthesize keyCode=_keyCode - In the implementation block
@property (assign,nonatomic) long long buttonNumber;                               //@synthesize buttonNumber=_buttonNumber - In the implementation block
@property (assign,nonatomic) long long headSwitch;                                 //@synthesize headSwitch=_headSwitch - In the implementation block
@property (nonatomic,retain) AXMIDIEvent * midiEvent;                              //@synthesize midiEvent=_midiEvent - In the implementation block
@property (assign,nonatomic) unsigned long long cameraSwitch;                      //@synthesize cameraSwitch=_cameraSwitch - In the implementation block
@property (assign,nonatomic) unsigned long long backTapType;                       //@synthesize backTapType=_backTapType - In the implementation block
@property (nonatomic,copy) NSString * remoteSwitchIdentifier;                      //@synthesize remoteSwitchIdentifier=_remoteSwitchIdentifier - In the implementation block
@property (nonatomic,copy) NSString * remoteDeviceName;                            //@synthesize remoteDeviceName=_remoteDeviceName - In the implementation block
@property (nonatomic,copy) NSString * remoteDeviceIdentifier;                      //@synthesize remoteDeviceIdentifier=_remoteDeviceIdentifier - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)switchWithAction:(long long)arg1 name:(id)arg2 source:(id)arg3 type:(id)arg4 ;
-(NSString *)productName;
-(NSUUID *)uuid;
-(void)setLongPressAction:(long long)arg1 ;
-(void)setProductName:(NSString *)arg1 ;
-(long long)longPressAction;
-(NSString *)manufacturerName;
-(void)encodeWithCoder:(id)arg1 ;
-(long long)action;
-(void)setType:(NSString *)arg1 ;
-(void)setAction:(long long)arg1 ;
-(BOOL)supportsLongPress;
-(unsigned short)keyCode;
-(long long)headSwitch;
-(NSString *)remoteSwitchIdentifier;
-(NSString *)remoteDeviceName;
-(NSString *)remoteDeviceIdentifier;
-(unsigned long long)cameraSwitch;
-(unsigned long long)backTapType;
-(id)initWithAction:(long long)arg1 name:(id)arg2 source:(id)arg3 type:(id)arg4 ;
-(BOOL)hasLongPressAction;
-(NSString *)localizedSourceDescription;
-(void)setHeadSwitch:(long long)arg1 ;
-(void)setCameraSwitch:(unsigned long long)arg1 ;
-(void)setBackTapType:(unsigned long long)arg1 ;
-(void)setRemoteSwitchIdentifier:(NSString *)arg1 ;
-(void)setRemoteDeviceName:(NSString *)arg1 ;
-(void)setRemoteDeviceIdentifier:(NSString *)arg1 ;
-(void)setSource:(NSString *)arg1 ;
-(NSString *)name;
-(id)description;
-(NSString *)type;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(void)setName:(NSString *)arg1 ;
-(void)setManufacturerName:(NSString *)arg1 ;
-(void)setUuid:(NSUUID *)arg1 ;
-(void)setKeyCode:(unsigned short)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(AXMIDIEvent *)midiEvent;
-(NSString *)source;
-(long long)buttonNumber;
-(void)setMidiEvent:(AXMIDIEvent *)arg1 ;
-(void)setButtonNumber:(long long)arg1 ;
@end

