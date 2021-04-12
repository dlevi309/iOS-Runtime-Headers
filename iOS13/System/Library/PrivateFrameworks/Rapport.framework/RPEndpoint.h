/*
* Generated on Monday, March 1, 2021 at 2:32:19 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Rapport.framework/Rapport
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class SFDevice, CUBonjourDevice, NSString, NSArray, NSDictionary, IDSDevice;

@interface RPEndpoint : NSObject <NSSecureCoding> {

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
	NSString* _homeKitUserIdentifier;
	NSDictionary* _serviceInfo;
	NSString* _serviceType;
	IDSDevice* _idsDevice;

}

@property (nonatomic,retain) SFDevice * bleDevice;                                 //@synthesize bleDevice=_bleDevice - In the implementation block
@property (nonatomic,retain) CUBonjourDevice * bonjourDevice;                      //@synthesize bonjourDevice=_bonjourDevice - In the implementation block
@property (nonatomic,retain) IDSDevice * idsDevice;                                //@synthesize idsDevice=_idsDevice - In the implementation block
@property (nonatomic,copy) NSString * idsDeviceIdentifier;                         //@synthesize idsDeviceIdentifier=_idsDeviceIdentifier - In the implementation block
@property (assign,nonatomic) int linkType;                                         //@synthesize linkType=_linkType - In the implementation block
@property (nonatomic,copy) NSString * mediaRemoteIdentifier;                       //@synthesize mediaRemoteIdentifier=_mediaRemoteIdentifier - In the implementation block
@property (nonatomic,copy) NSString * mediaRouteIdentifier;                        //@synthesize mediaRouteIdentifier=_mediaRouteIdentifier - In the implementation block
@property (nonatomic,copy) NSString * model;                                       //@synthesize model=_model - In the implementation block
@property (nonatomic,copy) NSString * name;                                        //@synthesize name=_name - In the implementation block
@property (assign,nonatomic) BOOL present;                                         //@synthesize present=_present - In the implementation block
@property (nonatomic,copy) NSArray * serviceTypes;                                 //@synthesize serviceTypes=_serviceTypes - In the implementation block
@property (assign,nonatomic) unsigned long long statusFlags;                       //@synthesize statusFlags=_statusFlags - In the implementation block
@property (nonatomic,copy) NSString * sourceVersion;                               //@synthesize sourceVersion=_sourceVersion - In the implementation block
@property (nonatomic,copy,readonly) NSString * homeKitUserIdentifier;              //@synthesize homeKitUserIdentifier=_homeKitUserIdentifier - In the implementation block
@property (nonatomic,readonly) unsigned hotspotInfo;                               //@synthesize hotspotInfo=_hotspotInfo - In the implementation block
@property (nonatomic,copy) NSString * identifier;                                  //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,readonly) int proximity;                                      //@synthesize proximity=_proximity - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * serviceInfo;                    //@synthesize serviceInfo=_serviceInfo - In the implementation block
@property (nonatomic,copy,readonly) NSString * serviceType;                        //@synthesize serviceType=_serviceType - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)nullEndpoint;
-(id)description;
-(NSString *)name;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setName:(NSString *)arg1 ;
-(NSString *)identifier;
-(void)setIdentifier:(NSString *)arg1 ;
-(NSString *)model;
-(void)setModel:(NSString *)arg1 ;
-(NSString *)serviceType;
-(void)setIdsDeviceIdentifier:(NSString *)arg1 ;
-(NSString *)idsDeviceIdentifier;
-(unsigned long long)statusFlags;
-(int)proximity;
-(BOOL)present;
-(NSString *)sourceVersion;
-(void)setSourceVersion:(NSString *)arg1 ;
-(id)descriptionWithLevel:(int)arg1 ;
-(void)setStatusFlags:(unsigned long long)arg1 ;
-(void)setPresent:(BOOL)arg1 ;
-(NSArray *)serviceTypes;
-(NSDictionary *)serviceInfo;
-(unsigned)updateWithBonjourDevice:(id)arg1 ;
-(CUBonjourDevice *)bonjourDevice;
-(void)setBonjourDevice:(CUBonjourDevice *)arg1 ;
-(int)linkType;
-(void)setLinkType:(int)arg1 ;
-(SFDevice *)bleDevice;
-(void)setBleDevice:(SFDevice *)arg1 ;
-(unsigned)hotspotInfo;
-(NSString *)mediaRemoteIdentifier;
-(unsigned)updateWithSFDevice:(id)arg1 ;
-(NSString *)mediaRouteIdentifier;
-(void)setMediaRemoteIdentifier:(NSString *)arg1 ;
-(void)setMediaRouteIdentifier:(NSString *)arg1 ;
-(void)setServiceTypes:(NSArray *)arg1 ;
-(BOOL)removeBonjourDevice:(id)arg1 ;
-(unsigned)updateWithIDSDevice:(id)arg1 ;
-(unsigned)removeIDSDevice;
-(BOOL)removeSFDevice:(id)arg1 ;
-(NSString *)homeKitUserIdentifier;
-(IDSDevice *)idsDevice;
-(void)setIdsDevice:(IDSDevice *)arg1 ;
@end

