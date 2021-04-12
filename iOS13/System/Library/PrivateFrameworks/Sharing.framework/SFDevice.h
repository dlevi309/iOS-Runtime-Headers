/*
* Generated on Monday, March 1, 2021 at 2:30:45 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Sharing.framework/Sharing
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSArray, SFBLEDevice, NSUUID;

@interface SFDevice : NSObject <NSSecureCoding> {

	BOOL _autoUnlockEnabled;
	BOOL _autoUnlockWatch;
	unsigned char _deviceActionType;
	unsigned char _deviceClassCode;
	unsigned char _deviceModelCode;
	BOOL _duetSync;
	BOOL _hasProblem;
	BOOL _needsAWDL;
	BOOL _needsKeyboard;
	BOOL _needsSetup;
	BOOL _wakeDevice;
	BOOL _watchLocked;
	BOOL _wifiP2P;
	unsigned char _osVersion;
	BOOL _paired;
	BOOL _testMode;
	int _audioRoutingScore;
	unsigned _deviceFlags;
	unsigned _hotspotInfo;
	unsigned _systemPairState;
	NSString* _accountID;
	NSArray* _batteryInfo;
	SFBLEDevice* _bleDevice;
	NSString* _contactIdentifier;
	long long _deviceType;
	long long _distance;
	NSUUID* _identifier;
	NSString* _idsIdentifier;
	NSString* _mediaRemoteID;
	NSString* _mediaRouteID;
	NSString* _model;
	NSString* _name;
	unsigned long long _problemFlags;
	NSString* _rapportIdentifier;
	NSString* _requestSSID;

}

@property (nonatomic,copy) NSString * accountID;                             //@synthesize accountID=_accountID - In the implementation block
@property (assign,nonatomic) int audioRoutingScore;                          //@synthesize audioRoutingScore=_audioRoutingScore - In the implementation block
@property (nonatomic,copy) NSArray * batteryInfo;                            //@synthesize batteryInfo=_batteryInfo - In the implementation block
@property (nonatomic,retain) SFBLEDevice * bleDevice;                        //@synthesize bleDevice=_bleDevice - In the implementation block
@property (nonatomic,copy) NSString * contactIdentifier;                     //@synthesize contactIdentifier=_contactIdentifier - In the implementation block
@property (assign,nonatomic) unsigned char deviceActionType;                 //@synthesize deviceActionType=_deviceActionType - In the implementation block
@property (assign,nonatomic) unsigned char deviceClassCode;                  //@synthesize deviceClassCode=_deviceClassCode - In the implementation block
@property (assign,nonatomic) unsigned deviceFlags;                           //@synthesize deviceFlags=_deviceFlags - In the implementation block
@property (assign,nonatomic) long long distance;                             //@synthesize distance=_distance - In the implementation block
@property (assign,nonatomic) BOOL hasProblem;                                //@synthesize hasProblem=_hasProblem - In the implementation block
@property (assign,nonatomic) unsigned hotspotInfo;                           //@synthesize hotspotInfo=_hotspotInfo - In the implementation block
@property (nonatomic,copy) NSString * idsIdentifier;                         //@synthesize idsIdentifier=_idsIdentifier - In the implementation block
@property (nonatomic,copy) NSString * model;                                 //@synthesize model=_model - In the implementation block
@property (nonatomic,copy) NSString * name;                                  //@synthesize name=_name - In the implementation block
@property (assign,nonatomic) BOOL needsSetup;                                //@synthesize needsSetup=_needsSetup - In the implementation block
@property (assign,nonatomic) unsigned char osVersion;                        //@synthesize osVersion=_osVersion - In the implementation block
@property (assign,nonatomic) BOOL paired;                                    //@synthesize paired=_paired - In the implementation block
@property (nonatomic,copy) NSString * requestSSID;                           //@synthesize requestSSID=_requestSSID - In the implementation block
@property (assign,nonatomic) BOOL testMode;                                  //@synthesize testMode=_testMode - In the implementation block
@property (assign,nonatomic) BOOL wakeDevice;                                //@synthesize wakeDevice=_wakeDevice - In the implementation block
@property (assign,nonatomic) BOOL autoUnlockEnabled;                         //@synthesize autoUnlockEnabled=_autoUnlockEnabled - In the implementation block
@property (assign,nonatomic) BOOL autoUnlockWatch;                           //@synthesize autoUnlockWatch=_autoUnlockWatch - In the implementation block
@property (nonatomic,readonly) unsigned char deviceModelCode;                //@synthesize deviceModelCode=_deviceModelCode - In the implementation block
@property (nonatomic,readonly) long long deviceType;                         //@synthesize deviceType=_deviceType - In the implementation block
@property (nonatomic,readonly) BOOL duetSync;                                //@synthesize duetSync=_duetSync - In the implementation block
@property (nonatomic,copy) NSUUID * identifier;                              //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,copy,readonly) NSString * mediaRemoteID;                //@synthesize mediaRemoteID=_mediaRemoteID - In the implementation block
@property (nonatomic,copy,readonly) NSString * mediaRouteID;                 //@synthesize mediaRouteID=_mediaRouteID - In the implementation block
@property (nonatomic,readonly) BOOL needsAWDL;                               //@synthesize needsAWDL=_needsAWDL - In the implementation block
@property (nonatomic,readonly) BOOL needsKeyboard;                           //@synthesize needsKeyboard=_needsKeyboard - In the implementation block
@property (nonatomic,readonly) BOOL needsKeyboardOnly; 
@property (nonatomic,readonly) unsigned long long problemFlags;              //@synthesize problemFlags=_problemFlags - In the implementation block
@property (nonatomic,readonly) NSString * rapportIdentifier;                 //@synthesize rapportIdentifier=_rapportIdentifier - In the implementation block
@property (assign,nonatomic) unsigned systemPairState;                       //@synthesize systemPairState=_systemPairState - In the implementation block
@property (assign,nonatomic) BOOL watchLocked;                               //@synthesize watchLocked=_watchLocked - In the implementation block
@property (nonatomic,readonly) BOOL wifiP2P;                                 //@synthesize wifiP2P=_wifiP2P - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)init;
-(id)description;
-(NSString *)name;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setName:(NSString *)arg1 ;
-(NSUUID *)identifier;
-(void)setIdentifier:(NSUUID *)arg1 ;
-(NSString *)model;
-(void)setModel:(NSString *)arg1 ;
-(long long)deviceType;
-(NSString *)contactIdentifier;
-(void)setDistance:(long long)arg1 ;
-(long long)distance;
-(BOOL)needsSetup;
-(NSString *)accountID;
-(void)setAccountID:(NSString *)arg1 ;
-(unsigned char)osVersion;
-(void)setOsVersion:(unsigned char)arg1 ;
-(BOOL)hasProblem;
-(unsigned)deviceFlags;
-(void)setDeviceFlags:(unsigned)arg1 ;
-(BOOL)paired;
-(void)setPaired:(BOOL)arg1 ;
-(void)setDeviceActionType:(unsigned char)arg1 ;
-(BOOL)testMode;
-(void)setTestMode:(BOOL)arg1 ;
-(void)setContactIdentifier:(NSString *)arg1 ;
-(void)setNeedsSetup:(BOOL)arg1 ;
-(unsigned char)deviceActionType;
-(NSString *)requestSSID;
-(BOOL)autoUnlockEnabled;
-(NSString *)rapportIdentifier;
-(NSString *)idsIdentifier;
-(SFBLEDevice *)bleDevice;
-(NSString *)mediaRemoteID;
-(NSString *)mediaRouteID;
-(BOOL)needsKeyboardOnly;
-(void)updateWithBLEDevice:(id)arg1 ;
-(void)updateWithPairedPeer:(id)arg1 ;
-(void)updateWithRPIdentity:(id)arg1 ;
-(int)audioRoutingScore;
-(void)setAudioRoutingScore:(int)arg1 ;
-(void)setAutoUnlockEnabled:(BOOL)arg1 ;
-(BOOL)autoUnlockWatch;
-(void)setAutoUnlockWatch:(BOOL)arg1 ;
-(NSArray *)batteryInfo;
-(void)setBatteryInfo:(NSArray *)arg1 ;
-(void)setBleDevice:(SFBLEDevice *)arg1 ;
-(unsigned char)deviceClassCode;
-(void)setDeviceClassCode:(unsigned char)arg1 ;
-(unsigned char)deviceModelCode;
-(BOOL)duetSync;
-(void)setHasProblem:(BOOL)arg1 ;
-(unsigned)hotspotInfo;
-(void)setHotspotInfo:(unsigned)arg1 ;
-(void)setIdsIdentifier:(NSString *)arg1 ;
-(BOOL)needsAWDL;
-(BOOL)needsKeyboard;
-(unsigned long long)problemFlags;
-(void)setRequestSSID:(NSString *)arg1 ;
-(unsigned)systemPairState;
-(void)setSystemPairState:(unsigned)arg1 ;
-(BOOL)wakeDevice;
-(void)setWakeDevice:(BOOL)arg1 ;
-(BOOL)watchLocked;
-(void)setWatchLocked:(BOOL)arg1 ;
-(BOOL)wifiP2P;
@end

