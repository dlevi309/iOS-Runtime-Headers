/*
* Generated on Thursday, January 14, 2021 at 2:24:40 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Rapport.framework/Rapport
*/

#import <Rapport/RPEndpoint.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSUUID, NSDictionary;

@interface RPCompanionLinkDevice : RPEndpoint <NSSecureCoding> {

	BOOL _personal;
	BOOL _changed;
	BOOL _daemon;
	BOOL _uiTriggered;
	unsigned _flags;
	int _mediaSystemRole;
	int _mediaSystemState;
	int _personalDeviceState;
	int _personalRequestsState;
	int _mediaSystemRoleEffective;
	int _serversChangedState;
	NSString* _deviceColor;
	NSUUID* _homeKitIdentifier;
	NSString* _idsPersonalDeviceIdentifier;
	NSUUID* _mediaSystemIdentifier;
	NSString* _mediaSystemName;
	NSString* _publicIdentifier;
	NSString* _roomName;
	NSDictionary* _siriInfo;
	NSString* _role;
	NSUUID* _mediaSystemIdentifierEffective;
	NSUUID* _pairingIdentifier;
	NSString* _password;

}

@property (nonatomic,readonly) BOOL supportsAnnounce; 
@property (nonatomic,readonly) BOOL isOwnerDevice; 
@property (nonatomic,readonly) BOOL isAccessory; 
@property (nonatomic,readonly) BOOL isPairedCompanion; 
@property (assign,nonatomic) BOOL changed;                                       //@synthesize changed=_changed - In the implementation block
@property (assign,nonatomic) BOOL daemon;                                        //@synthesize daemon=_daemon - In the implementation block
@property (nonatomic,copy) NSString * deviceColor;                               //@synthesize deviceColor=_deviceColor - In the implementation block
@property (assign,nonatomic) unsigned flags;                                     //@synthesize flags=_flags - In the implementation block
@property (nonatomic,copy) NSUUID * homeKitIdentifier;                           //@synthesize homeKitIdentifier=_homeKitIdentifier - In the implementation block
@property (nonatomic,copy) NSString * idsPersonalDeviceIdentifier;               //@synthesize idsPersonalDeviceIdentifier=_idsPersonalDeviceIdentifier - In the implementation block
@property (nonatomic,copy) NSUUID * mediaSystemIdentifier;                       //@synthesize mediaSystemIdentifier=_mediaSystemIdentifier - In the implementation block
@property (nonatomic,copy) NSString * mediaSystemName;                           //@synthesize mediaSystemName=_mediaSystemName - In the implementation block
@property (nonatomic,copy) NSUUID * mediaSystemIdentifierEffective;              //@synthesize mediaSystemIdentifierEffective=_mediaSystemIdentifierEffective - In the implementation block
@property (assign,nonatomic) int mediaSystemRole;                                //@synthesize mediaSystemRole=_mediaSystemRole - In the implementation block
@property (assign,nonatomic) int mediaSystemRoleEffective;                       //@synthesize mediaSystemRoleEffective=_mediaSystemRoleEffective - In the implementation block
@property (assign,nonatomic) int mediaSystemState;                               //@synthesize mediaSystemState=_mediaSystemState - In the implementation block
@property (nonatomic,copy) NSUUID * pairingIdentifier;                           //@synthesize pairingIdentifier=_pairingIdentifier - In the implementation block
@property (nonatomic,copy) NSString * password;                                  //@synthesize password=_password - In the implementation block
@property (assign,getter=isPersonal,nonatomic) BOOL personal;                    //@synthesize personal=_personal - In the implementation block
@property (assign,nonatomic) int personalDeviceState;                            //@synthesize personalDeviceState=_personalDeviceState - In the implementation block
@property (assign,nonatomic) int personalRequestsState;                          //@synthesize personalRequestsState=_personalRequestsState - In the implementation block
@property (nonatomic,copy) NSString * publicIdentifier;                          //@synthesize publicIdentifier=_publicIdentifier - In the implementation block
@property (nonatomic,copy) NSString * role;                                      //@synthesize role=_role - In the implementation block
@property (nonatomic,copy) NSString * roomName;                                  //@synthesize roomName=_roomName - In the implementation block
@property (assign,nonatomic) int serversChangedState;                            //@synthesize serversChangedState=_serversChangedState - In the implementation block
@property (nonatomic,copy) NSDictionary * siriInfo;                              //@synthesize siriInfo=_siriInfo - In the implementation block
@property (assign,nonatomic) BOOL uiTriggered;                                   //@synthesize uiTriggered=_uiTriggered - In the implementation block
@property (nonatomic,copy,readonly) NSString * effectiveIdentifier; 
+(BOOL)supportsSecureCoding;
-(BOOL)supportsAnnounce;
-(BOOL)isAccessory;
-(BOOL)isPairedCompanion;
-(BOOL)isOwnerDevice;
-(void)setDaemon:(BOOL)arg1 ;
-(NSUUID *)pairingIdentifier;
-(void)setPairingIdentifier:(NSUUID *)arg1 ;
-(BOOL)daemon;
-(NSUUID *)mediaSystemIdentifierEffective;
-(void)setPersonal:(BOOL)arg1 ;
-(NSUUID *)homeKitIdentifier;
-(BOOL)changed;
-(unsigned)updateWithSFDevice:(id)arg1 ;
-(unsigned)flags;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setRole:(NSString *)arg1 ;
-(void)setMediaSystemRole:(int)arg1 ;
-(void)setPersonalRequestsState:(int)arg1 ;
-(unsigned)updateWithBonjourDevice:(id)arg1 ;
-(void)setRoomName:(NSString *)arg1 ;
-(NSString *)password;
-(NSString *)idsPersonalDeviceIdentifier;
-(NSString *)mediaSystemName;
-(int)serversChangedState;
-(NSString *)effectiveIdentifier;
-(id)descriptionWithLevel:(int)arg1 ;
-(void)setChanged:(BOOL)arg1 ;
-(void)setDeviceColor:(NSString *)arg1 ;
-(void)setMediaSystemRoleEffective:(int)arg1 ;
-(id)description;
-(int)mediaSystemRole;
-(void)setPublicIdentifier:(NSString *)arg1 ;
-(NSString *)deviceColor;
-(NSUUID *)mediaSystemIdentifier;
-(void)setPassword:(NSString *)arg1 ;
-(NSString *)publicIdentifier;
-(BOOL)uiTriggered;
-(int)personalDeviceState;
-(void)setServersChangedState:(int)arg1 ;
-(void)setFlags:(unsigned)arg1 ;
-(void)setMediaSystemIdentifierEffective:(NSUUID *)arg1 ;
-(int)personalRequestsState;
-(id)initWithCoder:(id)arg1 ;
-(void)setUiTriggered:(BOOL)arg1 ;
-(void)setIdsPersonalDeviceIdentifier:(NSString *)arg1 ;
-(void)setPersonalDeviceState:(int)arg1 ;
-(int)mediaSystemRoleEffective;
-(NSString *)roomName;
-(void)setMediaSystemIdentifier:(NSUUID *)arg1 ;
-(void)setSiriInfo:(NSDictionary *)arg1 ;
-(NSString *)role;
-(void)setMediaSystemName:(NSString *)arg1 ;
-(void)setHomeKitIdentifier:(NSUUID *)arg1 ;
-(void)setMediaSystemState:(int)arg1 ;
-(NSDictionary *)siriInfo;
-(BOOL)isPersonal;
-(int)mediaSystemState;
@end

