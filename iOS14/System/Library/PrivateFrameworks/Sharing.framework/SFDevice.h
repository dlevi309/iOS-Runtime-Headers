/*
* Generated on Thursday, January 14, 2021 at 2:22:10 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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

@property (nonatomic,copy) NSString * accountID;                                //@synthesize accountID=_accountID - In the implementation block
@property (assign,nonatomic) int audioRoutingScore;                             //@synthesize audioRoutingScore=_audioRoutingScore - In the implementation block
@property (nonatomic,copy) NSArray * batteryInfo;                               //@synthesize batteryInfo=_batteryInfo - In the implementation block
@property (nonatomic,retain) SFBLEDevice * bleDevice;                           //@synthesize bleDevice=_bleDevice - In the implementation block
@property (nonatomic,copy) NSString * contactIdentifier;                        //@synthesize contactIdentifier=_contactIdentifier - In the implementation block
@property (assign,nonatomic) unsigned char deviceActionType;                    //@synthesize deviceActionType=_deviceActionType - In the implementation block
@property (assign,nonatomic) unsigned char deviceClassCode;                     //@synthesize deviceClassCode=_deviceClassCode - In the implementation block
@property (assign,nonatomic) unsigned deviceFlags;                              //@synthesize deviceFlags=_deviceFlags - In the implementation block
@property (assign,nonatomic) unsigned char deviceModelCode;                     //@synthesize deviceModelCode=_deviceModelCode - In the implementation block
@property (assign,nonatomic) long long distance;                                //@synthesize distance=_distance - In the implementation block
@property (assign,nonatomic) BOOL hasProblem;                                   //@synthesize hasProblem=_hasProblem - In the implementation block
@property (assign,nonatomic) unsigned hotspotInfo;                              //@synthesize hotspotInfo=_hotspotInfo - In the implementation block
@property (nonatomic,copy) NSString * idsIdentifier;                            //@synthesize idsIdentifier=_idsIdentifier - In the implementation block
@property (nonatomic,readonly) BOOL idsIdentifierConflictDetected; 
@property (nonatomic,copy) NSString * model;                                    //@synthesize model=_model - In the implementation block
@property (nonatomic,copy) NSString * name;                                     //@synthesize name=_name - In the implementation block
@property (assign,nonatomic) BOOL needsSetup;                                   //@synthesize needsSetup=_needsSetup - In the implementation block
@property (assign,nonatomic) unsigned char osVersion;                           //@synthesize osVersion=_osVersion - In the implementation block
@property (assign,nonatomic) BOOL paired;                                       //@synthesize paired=_paired - In the implementation block
@property (nonatomic,copy) NSString * requestSSID;                              //@synthesize requestSSID=_requestSSID - In the implementation block
@property (assign,nonatomic) BOOL testMode;                                     //@synthesize testMode=_testMode - In the implementation block
@property (assign,nonatomic) BOOL wakeDevice;                                   //@synthesize wakeDevice=_wakeDevice - In the implementation block
@property (assign,nonatomic) BOOL autoUnlockEnabled;                            //@synthesize autoUnlockEnabled=_autoUnlockEnabled - In the implementation block
@property (assign,nonatomic) BOOL autoUnlockWatch;                              //@synthesize autoUnlockWatch=_autoUnlockWatch - In the implementation block
@property (nonatomic,readonly) long long deviceType;                            //@synthesize deviceType=_deviceType - In the implementation block
@property (nonatomic,readonly) BOOL duetSync;                                   //@synthesize duetSync=_duetSync - In the implementation block
@property (nonatomic,copy) NSUUID * identifier;                                 //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,copy,readonly) NSString * mediaRemoteID;                   //@synthesize mediaRemoteID=_mediaRemoteID - In the implementation block
@property (nonatomic,copy,readonly) NSString * mediaRouteID;                    //@synthesize mediaRouteID=_mediaRouteID - In the implementation block
@property (nonatomic,readonly) BOOL needsAWDL;                                  //@synthesize needsAWDL=_needsAWDL - In the implementation block
@property (nonatomic,readonly) BOOL needsKeyboard;                              //@synthesize needsKeyboard=_needsKeyboard - In the implementation block
@property (nonatomic,readonly) BOOL needsKeyboardOnly; 
@property (nonatomic,readonly) unsigned long long problemFlags;                 //@synthesize problemFlags=_problemFlags - In the implementation block
@property (nonatomic,readonly) NSString * rapportIdentifier;                    //@synthesize rapportIdentifier=_rapportIdentifier - In the implementation block
@property (assign,nonatomic) unsigned systemPairState;                          //@synthesize systemPairState=_systemPairState - In the implementation block
@property (assign,nonatomic) BOOL watchLocked;                                  //@synthesize watchLocked=_watchLocked - In the implementation block
@property (nonatomic,readonly) BOOL wifiP2P;                                    //@synthesize wifiP2P=_wifiP2P - In the implementation block
+(BOOL)supportsSecureCoding;
-(BOOL)autoUnlockWatch;
-(BOOL)duetSync;
-(NSString *)accountID;
-(void)setWatchLocked:(BOOL)arg1 ;
-(void)setRequestSSID:(NSString *)arg1 ;
-(void)setAutoUnlockEnabled:(BOOL)arg1 ;
-(unsigned long long)problemFlags;
-(BOOL)needsSetup;
-(BOOL)wakeDevice;
-(void)setOsVersion:(unsigned char)arg1 ;
-(void)setAccountID:(NSString *)arg1 ;
-(unsigned char)deviceClassCode;
-(BOOL)watchLocked;
-(BOOL)wifiP2P;
-(NSString *)requestSSID;
-(BOOL)needsAWDL;
-(long long)deviceType;
-(void)setTestMode:(BOOL)arg1 ;
-(NSString *)contactIdentifier;
-(unsigned char)deviceActionType;
-(void)setPaired:(BOOL)arg1 ;
-(void)setDeviceClassCode:(unsigned char)arg1 ;
-(void)setDistance:(long long)arg1 ;
-(void)setWakeDevice:(BOOL)arg1 ;
-(void)setAutoUnlockWatch:(BOOL)arg1 ;
-(BOOL)hasProblem;
-(void)setHasProblem:(BOOL)arg1 ;
-(NSString *)model;
-(NSString *)mediaRemoteID;
-(BOOL)paired;
-(id)init;
-(unsigned)systemPairState;
-(NSString *)idsIdentifier;
-(void)setBatteryInfo:(NSArray *)arg1 ;
-(long long)distance;
-(void)setDeviceFlags:(unsigned)arg1 ;
-(NSString *)mediaRouteID;
-(void)encodeWithCoder:(id)arg1 ;
-(unsigned char)osVersion;
-(void)setDeviceActionType:(unsigned char)arg1 ;
-(void)setBleDevice:(SFBLEDevice *)arg1 ;
-(int)audioRoutingScore;
-(unsigned)deviceFlags;
-(NSString *)rapportIdentifier;
-(NSString *)name;
-(BOOL)testMode;
-(BOOL)autoUnlockEnabled;
-(id)description;
-(SFBLEDevice *)bleDevice;
-(void)setModel:(NSString *)arg1 ;
-(BOOL)needsKeyboard;
-(NSArray *)batteryInfo;
-(void)setIdsIdentifier:(NSString *)arg1 ;
-(unsigned)hotspotInfo;
-(BOOL)needsKeyboardOnly;
-(void)setSystemPairState:(unsigned)arg1 ;
-(BOOL)idsIdentifierConflictDetected;
-(unsigned char)deviceModelCode;
-(void)setContactIdentifier:(NSString *)arg1 ;
-(void)updateWithRPIdentity:(id)arg1 ;
-(void)setNeedsSetup:(BOOL)arg1 ;
-(void)updateWithPairedPeer:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setAudioRoutingScore:(int)arg1 ;
-(void)setName:(NSString *)arg1 ;
-(void)setIdentifier:(NSUUID *)arg1 ;
-(NSUUID *)identifier;
-(void)updateWithBLEDevice:(id)arg1 ;
-(void)setHotspotInfo:(unsigned)arg1 ;
-(void)setDeviceModelCode:(unsigned char)arg1 ;
@end

