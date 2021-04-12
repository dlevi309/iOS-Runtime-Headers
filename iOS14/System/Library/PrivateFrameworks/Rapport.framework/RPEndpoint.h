/*
* Generated on Thursday, January 14, 2021 at 2:24:40 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Rapport.framework/Rapport
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, SFDevice, CUBonjourDevice, NSArray, NSDictionary, IDSDevice;

@interface RPEndpoint : NSObject <NSSecureCoding> {

	NSString* _accountID;
	SFDevice* _bleDevice;
	CUBonjourDevice* _bonjourDevice;
	unsigned _hotspotInfo;
	NSString* _identifier;
	NSString* _idsDeviceIdentifier;
	int _linkType;
	NSString* _mediaRemoteIdentifier;
	NSString* _mediaRouteIdentifier;
	NSString* _model;
	NSString* _name;
	NSArray* _serviceTypes;
	unsigned long long _statusFlags;
	NSString* _sourceVersion;
	BOOL _present;
	int _proximity;
	NSArray* _homeKitUserIdentifiers;
	NSDictionary* _serviceInfo;
	NSString* _serviceType;
	IDSDevice* _idsDevice;

}

@property (nonatomic,copy) NSString * accountID;                             //@synthesize accountID=_accountID - In the implementation block
@property (nonatomic,retain) SFDevice * bleDevice;                           //@synthesize bleDevice=_bleDevice - In the implementation block
@property (nonatomic,retain) CUBonjourDevice * bonjourDevice;                //@synthesize bonjourDevice=_bonjourDevice - In the implementation block
@property (nonatomic,retain) IDSDevice * idsDevice;                          //@synthesize idsDevice=_idsDevice - In the implementation block
@property (nonatomic,copy) NSString * idsDeviceIdentifier;                   //@synthesize idsDeviceIdentifier=_idsDeviceIdentifier - In the implementation block
@property (assign,nonatomic) int linkType;                                   //@synthesize linkType=_linkType - In the implementation block
@property (nonatomic,copy) NSString * mediaRemoteIdentifier;                 //@synthesize mediaRemoteIdentifier=_mediaRemoteIdentifier - In the implementation block
@property (nonatomic,copy) NSString * mediaRouteIdentifier;                  //@synthesize mediaRouteIdentifier=_mediaRouteIdentifier - In the implementation block
@property (nonatomic,copy) NSString * model;                                 //@synthesize model=_model - In the implementation block
@property (nonatomic,copy) NSString * name;                                  //@synthesize name=_name - In the implementation block
@property (assign,nonatomic) BOOL present;                                   //@synthesize present=_present - In the implementation block
@property (nonatomic,copy) NSArray * serviceTypes;                           //@synthesize serviceTypes=_serviceTypes - In the implementation block
@property (assign,nonatomic) unsigned long long statusFlags;                 //@synthesize statusFlags=_statusFlags - In the implementation block
@property (nonatomic,copy) NSString * sourceVersion;                         //@synthesize sourceVersion=_sourceVersion - In the implementation block
@property (nonatomic,copy) NSArray * homeKitUserIdentifiers;                 //@synthesize homeKitUserIdentifiers=_homeKitUserIdentifiers - In the implementation block
@property (nonatomic,readonly) unsigned hotspotInfo;                         //@synthesize hotspotInfo=_hotspotInfo - In the implementation block
@property (nonatomic,copy) NSString * identifier;                            //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,readonly) int proximity;                                //@synthesize proximity=_proximity - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * serviceInfo;              //@synthesize serviceInfo=_serviceInfo - In the implementation block
@property (nonatomic,copy,readonly) NSString * serviceType;                  //@synthesize serviceType=_serviceType - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)nullEndpoint;
-(NSString *)accountID;
-(void)setServiceTypes:(NSArray *)arg1 ;
-(void)setAccountID:(NSString *)arg1 ;
-(NSDictionary *)serviceInfo;
-(NSString *)model;
-(BOOL)removeBonjourDevice:(id)arg1 ;
-(void)setStatusFlags:(unsigned long long)arg1 ;
-(unsigned)updateWithIDSDevice:(id)arg1 ;
-(void)setMediaRemoteIdentifier:(NSString *)arg1 ;
-(NSArray *)homeKitUserIdentifiers;
-(void)setPresent:(BOOL)arg1 ;
-(void)setIdsDeviceIdentifier:(NSString *)arg1 ;
-(void)setLinkType:(int)arg1 ;
-(BOOL)present;
-(unsigned)updateWithSFDevice:(id)arg1 ;
-(int)linkType;
-(IDSDevice *)idsDevice;
-(NSString *)mediaRemoteIdentifier;
-(CUBonjourDevice *)bonjourDevice;
-(void)encodeWithCoder:(id)arg1 ;
-(NSString *)sourceVersion;
-(unsigned)updateWithBonjourDevice:(id)arg1 ;
-(unsigned)removeIDSDevice;
-(void)setBleDevice:(SFDevice *)arg1 ;
-(void)setSourceVersion:(NSString *)arg1 ;
-(void)setMediaRouteIdentifier:(NSString *)arg1 ;
-(int)proximity;
-(unsigned long long)statusFlags;
-(BOOL)removeSFDevice:(id)arg1 ;
-(NSString *)mediaRouteIdentifier;
-(NSString *)name;
-(void)setHomeKitUserIdentifiers:(NSArray *)arg1 ;
-(NSString *)idsDeviceIdentifier;
-(id)descriptionWithLevel:(int)arg1 ;
-(id)description;
-(SFDevice *)bleDevice;
-(void)setModel:(NSString *)arg1 ;
-(void)setBonjourDevice:(CUBonjourDevice *)arg1 ;
-(NSArray *)serviceTypes;
-(unsigned)hotspotInfo;
-(void)setIdsDevice:(IDSDevice *)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setName:(NSString *)arg1 ;
-(void)setIdentifier:(NSString *)arg1 ;
-(NSString *)identifier;
-(NSString *)serviceType;
@end

