/*
* Generated on Thursday, January 14, 2021 at 2:25:53 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/

#import <HomeKitDaemon/HMDLogEvent.h>
#import <libobjc.A.dylib/HMDAWDLogEvent.h>

@class HMDAccessory, NSString, HMDHome, NSUUID, NSError;

@interface HMDAccessoryPairingEvent : HMDLogEvent <HMDAWDLogEvent> {

	BOOL _addOperation;
	BOOL _addViaWAC;
	BOOL _wacLegacy;
	BOOL _usedWiFiPPSK;
	BOOL _usedOwnershipProof;
	BOOL _networkRouterAdd;
	BOOL _networkRouterReplace;
	BOOL _firstHAPAccessoryInHome;
	BOOL _firstHAPAccessoryInAnyHome;
	BOOL _threadAccessory;
	BOOL _btCommissioned;
	BOOL _threadCommissioned;
	unsigned _threadCapabilities;
	unsigned _threadStatus;
	HMDAccessory* _pairedAccessory;
	long long _linkType;
	long long _certificationStatus;
	unsigned long long _authMethod;
	NSString* _identifier;
	HMDHome* _home;
	NSUUID* _accessoryUUID;
	NSString* _appIdentifier;
	NSString* _accessoryModel;
	NSString* _accessoryManufacturer;
	NSString* _accessoryCategory;
	NSString* _primaryServiceType;
	NSError* _threadCommissioningError;
	double _threadCommissioningDuration;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain) HMDAccessory * pairedAccessory;                                                   //@synthesize pairedAccessory=_pairedAccessory - In the implementation block
@property (assign,nonatomic) long long linkType;                                                               //@synthesize linkType=_linkType - In the implementation block
@property (getter=isAddOperation,nonatomic,readonly) BOOL addOperation;                                        //@synthesize addOperation=_addOperation - In the implementation block
@property (assign,getter=isAddViaWAC,nonatomic) BOOL addViaWAC;                                                //@synthesize addViaWAC=_addViaWAC - In the implementation block
@property (assign,getter=isWacLegacy,nonatomic) BOOL wacLegacy;                                                //@synthesize wacLegacy=_wacLegacy - In the implementation block
@property (assign,nonatomic) long long certificationStatus;                                                    //@synthesize certificationStatus=_certificationStatus - In the implementation block
@property (assign,nonatomic) unsigned long long authMethod;                                                    //@synthesize authMethod=_authMethod - In the implementation block
@property (assign,getter=isUsedWiFiPPSK,nonatomic) BOOL usedWiFiPPSK;                                          //@synthesize usedWiFiPPSK=_usedWiFiPPSK - In the implementation block
@property (assign,getter=isUsedOwnershipProof,nonatomic) BOOL usedOwnershipProof;                              //@synthesize usedOwnershipProof=_usedOwnershipProof - In the implementation block
@property (assign,getter=isNetworkRouterAdd,nonatomic) BOOL networkRouterAdd;                                  //@synthesize networkRouterAdd=_networkRouterAdd - In the implementation block
@property (assign,getter=isNetworkRouterReplace,nonatomic) BOOL networkRouterReplace;                          //@synthesize networkRouterReplace=_networkRouterReplace - In the implementation block
@property (nonatomic,retain) NSString * identifier;                                                            //@synthesize identifier=_identifier - In the implementation block
@property (assign,nonatomic,__weak) HMDHome * home;                                                            //@synthesize home=_home - In the implementation block
@property (nonatomic,copy) NSUUID * accessoryUUID;                                                             //@synthesize accessoryUUID=_accessoryUUID - In the implementation block
@property (nonatomic,copy) NSString * appIdentifier;                                                           //@synthesize appIdentifier=_appIdentifier - In the implementation block
@property (nonatomic,copy) NSString * accessoryModel;                                                          //@synthesize accessoryModel=_accessoryModel - In the implementation block
@property (nonatomic,copy) NSString * accessoryManufacturer;                                                   //@synthesize accessoryManufacturer=_accessoryManufacturer - In the implementation block
@property (nonatomic,copy) NSString * accessoryCategory;                                                       //@synthesize accessoryCategory=_accessoryCategory - In the implementation block
@property (nonatomic,copy) NSString * primaryServiceType;                                                      //@synthesize primaryServiceType=_primaryServiceType - In the implementation block
@property (assign,getter=isFirstHAPAccessoryInHome,nonatomic) BOOL firstHAPAccessoryInHome;                    //@synthesize firstHAPAccessoryInHome=_firstHAPAccessoryInHome - In the implementation block
@property (assign,getter=isFirstHAPAccessoryInAnyHome,nonatomic) BOOL firstHAPAccessoryInAnyHome;              //@synthesize firstHAPAccessoryInAnyHome=_firstHAPAccessoryInAnyHome - In the implementation block
@property (assign,getter=isThreadAccessory,nonatomic) BOOL threadAccessory;                                    //@synthesize threadAccessory=_threadAccessory - In the implementation block
@property (assign,getter=isBTCommissioned,nonatomic) BOOL btCommissioned;                                      //@synthesize btCommissioned=_btCommissioned - In the implementation block
@property (assign,getter=isThreadCommissioned,nonatomic) BOOL threadCommissioned;                              //@synthesize threadCommissioned=_threadCommissioned - In the implementation block
@property (nonatomic,retain) NSError * threadCommissioningError;                                               //@synthesize threadCommissioningError=_threadCommissioningError - In the implementation block
@property (assign,nonatomic) double threadCommissioningDuration;                                               //@synthesize threadCommissioningDuration=_threadCommissioningDuration - In the implementation block
@property (assign,nonatomic) unsigned threadCapabilities;                                                      //@synthesize threadCapabilities=_threadCapabilities - In the implementation block
@property (assign,nonatomic) unsigned threadStatus;                                                            //@synthesize threadStatus=_threadStatus - In the implementation block
+(void)initialize;
+(id)uuid;
+(id)pairingAccessory:(id)arg1 home:(id)arg2 ;
+(id)pairingAccessoryWithDescription:(id)arg1 home:(id)arg2 ;
+(id)removingAccessory:(id)arg1 hapAccessory:(id)arg2 ;
-(NSUUID *)accessoryUUID;
-(void)setAppIdentifier:(NSString *)arg1 ;
-(NSString *)appIdentifier;
-(void)setAccessoryCategory:(NSString *)arg1 ;
-(void)setLinkType:(long long)arg1 ;
-(long long)linkType;
-(NSString *)accessoryCategory;
-(void)setAuthenticationMethod:(unsigned long long)arg1 ;
-(NSString *)primaryServiceType;
-(void)setIdentifier:(NSString *)arg1 ;
-(NSString *)identifier;
-(long long)certificationStatus;
-(void)setAccessoryUUID:(NSUUID *)arg1 ;
-(void)setCertificationStatus:(long long)arg1 ;
-(void)setHome:(HMDHome *)arg1 ;
-(HMDHome *)home;
-(BOOL)isThreadAccessory;
-(void)setUsedWiFiPPSK:(BOOL)arg1 ;
-(void)pairedAccessory:(id)arg1 ;
-(void)setFirstHAPAccessoryInHome:(BOOL)arg1 ;
-(void)setFirstHAPAccessoryInAnyHome:(BOOL)arg1 ;
-(void)setThreadCommissioningDuration:(double)arg1 ;
-(void)setThreadCommissioningError:(NSError *)arg1 ;
-(unsigned)threadCapabilities;
-(void)pairedToServer:(id)arg1 certificationStatus:(long long)arg2 addedViaWAC:(BOOL)arg3 legacyWAC:(BOOL)arg4 ;
-(unsigned long long)authMethod;
-(id)vendorDetails;
-(void)setPrimaryServiceType:(NSString *)arg1 ;
-(unsigned)AWDMessageType;
-(id)metricForAWD;
-(BOOL)isAddOperation;
-(void)_updateThreadPropertiesWithPairedAccessory:(id)arg1 ;
-(id)initWithAccessoryDescription:(id)arg1 home:(id)arg2 ;
-(id)initWithUnpairedAccessory:(id)arg1 pairedAccessory:(id)arg2 hapAccessory:(id)arg3 home:(id)arg4 isAddOperation:(BOOL)arg5 ;
-(void)setAddViaWAC:(BOOL)arg1 ;
-(void)setAuthMethod:(unsigned long long)arg1 ;
-(NSString *)accessoryModel;
-(void)setAccessoryModel:(NSString *)arg1 ;
-(void)setAccessoryManufacturer:(NSString *)arg1 ;
-(BOOL)isAddViaWAC;
-(void)setWacLegacy:(BOOL)arg1 ;
-(void)setPairedAccessory:(HMDAccessory *)arg1 ;
-(void)setThreadCapabilities:(unsigned)arg1 ;
-(unsigned)threadStatus;
-(void)setThreadStatus:(unsigned)arg1 ;
-(void)setAddedViaWAC:(BOOL)arg1 ;
-(HMDAccessory *)pairedAccessory;
-(BOOL)isWacLegacy;
-(BOOL)isUsedWiFiPPSK;
-(BOOL)isUsedOwnershipProof;
-(void)setUsedOwnershipProof:(BOOL)arg1 ;
-(BOOL)isNetworkRouterAdd;
-(void)setNetworkRouterAdd:(BOOL)arg1 ;
-(BOOL)isNetworkRouterReplace;
-(void)setNetworkRouterReplace:(BOOL)arg1 ;
-(NSString *)accessoryManufacturer;
-(BOOL)isFirstHAPAccessoryInHome;
-(BOOL)isFirstHAPAccessoryInAnyHome;
-(void)setThreadAccessory:(BOOL)arg1 ;
-(BOOL)isBTCommissioned;
-(void)setBtCommissioned:(BOOL)arg1 ;
-(BOOL)isThreadCommissioned;
-(void)setThreadCommissioned:(BOOL)arg1 ;
-(NSError *)threadCommissioningError;
-(double)threadCommissioningDuration;
@end

