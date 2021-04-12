/*
* Generated on Monday, March 1, 2021 at 2:33:32 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/

#import <HomeKitDaemon/HMDLogEvent.h>
#import <libobjc.A.dylib/HMDAWDLogEvent.h>

@class HMDAccessory, NSString, HMDHome, NSUUID;

@interface HMDAccessoryPairingEvent : HMDLogEvent <HMDAWDLogEvent> {

	BOOL _addOperation;
	BOOL _addViaWAC;
	BOOL _wacLegacy;
	BOOL _usedWiFiPPSK;
	BOOL _usedOwnershipProof;
	BOOL _networkRouterAdd;
	BOOL _networkRouterReplace;
	HMDAccessory* _pairedAccessory;
	long long _linkType;
	long long _certificationStatus;
	unsigned long long _authMethod;
	NSString* _identifier;
	HMDHome* _home;
	NSUUID* _accessoryUUID;
	NSString* _appIdentifier;
	NSString* _accessoryModel;
	NSString* _accessoryCategory;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain) HMDAccessory * pairedAccessory;                                       //@synthesize pairedAccessory=_pairedAccessory - In the implementation block
@property (assign,nonatomic) long long linkType;                                                   //@synthesize linkType=_linkType - In the implementation block
@property (getter=isAddOperation,nonatomic,readonly) BOOL addOperation;                            //@synthesize addOperation=_addOperation - In the implementation block
@property (assign,getter=isAddViaWAC,nonatomic) BOOL addViaWAC;                                    //@synthesize addViaWAC=_addViaWAC - In the implementation block
@property (assign,getter=isWacLegacy,nonatomic) BOOL wacLegacy;                                    //@synthesize wacLegacy=_wacLegacy - In the implementation block
@property (assign,nonatomic) long long certificationStatus;                                        //@synthesize certificationStatus=_certificationStatus - In the implementation block
@property (assign,nonatomic) unsigned long long authMethod;                                        //@synthesize authMethod=_authMethod - In the implementation block
@property (assign,getter=isUsedWiFiPPSK,nonatomic) BOOL usedWiFiPPSK;                              //@synthesize usedWiFiPPSK=_usedWiFiPPSK - In the implementation block
@property (assign,getter=isUsedOwnershipProof,nonatomic) BOOL usedOwnershipProof;                  //@synthesize usedOwnershipProof=_usedOwnershipProof - In the implementation block
@property (assign,getter=isNetworkRouterAdd,nonatomic) BOOL networkRouterAdd;                      //@synthesize networkRouterAdd=_networkRouterAdd - In the implementation block
@property (assign,getter=isNetworkRouterReplace,nonatomic) BOOL networkRouterReplace;              //@synthesize networkRouterReplace=_networkRouterReplace - In the implementation block
@property (nonatomic,retain) NSString * identifier;                                                //@synthesize identifier=_identifier - In the implementation block
@property (assign,nonatomic,__weak) HMDHome * home;                                                //@synthesize home=_home - In the implementation block
@property (nonatomic,copy) NSUUID * accessoryUUID;                                                 //@synthesize accessoryUUID=_accessoryUUID - In the implementation block
@property (nonatomic,copy) NSString * appIdentifier;                                               //@synthesize appIdentifier=_appIdentifier - In the implementation block
@property (nonatomic,copy) NSString * accessoryModel;                                              //@synthesize accessoryModel=_accessoryModel - In the implementation block
@property (nonatomic,copy) NSString * accessoryCategory;                                           //@synthesize accessoryCategory=_accessoryCategory - In the implementation block
+(void)initialize;
+(id)uuid;
+(id)pairingAccessory:(id)arg1 home:(id)arg2 ;
+(id)pairingAccessoryWithDescription:(id)arg1 home:(id)arg2 ;
+(id)removingAccessory:(id)arg1 hapAccessory:(id)arg2 ;
-(NSString *)identifier;
-(void)setIdentifier:(NSString *)arg1 ;
-(NSUUID *)accessoryUUID;
-(HMDHome *)home;
-(void)setAppIdentifier:(NSString *)arg1 ;
-(NSString *)appIdentifier;
-(void)setHome:(HMDHome *)arg1 ;
-(NSString *)accessoryCategory;
-(void)setAccessoryCategory:(NSString *)arg1 ;
-(long long)linkType;
-(void)setLinkType:(long long)arg1 ;
-(void)setAuthenticationMethod:(unsigned long long)arg1 ;
-(void)setAccessoryUUID:(NSUUID *)arg1 ;
-(long long)certificationStatus;
-(void)setCertificationStatus:(long long)arg1 ;
-(BOOL)isWacLegacy;
-(void)setWacLegacy:(BOOL)arg1 ;
-(unsigned long long)authMethod;
-(void)setAuthMethod:(unsigned long long)arg1 ;
-(void)setUsedWiFiPPSK:(BOOL)arg1 ;
-(void)pairedAccessory:(id)arg1 ;
-(void)pairedToServer:(id)arg1 certificationStatus:(long long)arg2 addedViaWAC:(BOOL)arg3 legacyWAC:(BOOL)arg4 ;
-(id)vendorDetails;
-(unsigned)AWDMessageType;
-(id)metricForAWD;
-(id)initWithAccessoryDescription:(id)arg1 home:(id)arg2 ;
-(id)initWithUnpairedAccessory:(id)arg1 pairedAccessory:(id)arg2 hapAccessory:(id)arg3 home:(id)arg4 isAddOperation:(BOOL)arg5 ;
-(void)setAddViaWAC:(BOOL)arg1 ;
-(NSString *)accessoryModel;
-(void)setAccessoryModel:(NSString *)arg1 ;
-(BOOL)isAddOperation;
-(BOOL)isAddViaWAC;
-(void)setPairedAccessory:(HMDAccessory *)arg1 ;
-(void)setAddedViaWAC:(BOOL)arg1 ;
-(HMDAccessory *)pairedAccessory;
-(BOOL)isUsedWiFiPPSK;
-(BOOL)isUsedOwnershipProof;
-(void)setUsedOwnershipProof:(BOOL)arg1 ;
-(BOOL)isNetworkRouterAdd;
-(void)setNetworkRouterAdd:(BOOL)arg1 ;
-(BOOL)isNetworkRouterReplace;
-(void)setNetworkRouterReplace:(BOOL)arg1 ;
@end

