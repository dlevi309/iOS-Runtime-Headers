/*
* Generated on Thursday, January 14, 2021 at 2:26:15 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
*/

#import <CloudKitDaemon/CloudKitDaemon-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableArray, NSString, CKDPRequestOperationHeaderAssetAuthorizeGetRequestOptions, NSData, CKDPIdentifier, CKDPLocale;

@interface CKDPRequestOperationHeader : PBCodable <NSCopying> {

	unsigned long long _applicationConfigVersion;
	unsigned long long _deviceFlowControlBudget;
	unsigned long long _deviceFlowControlBudgetCap;
	unsigned long long _deviceProtocolVersion;
	unsigned long long _globalConfigVersion;
	unsigned long long _operationGroupQuantity;
	NSMutableArray* _activeThrottlingLabels;
	NSString* _applicationBundle;
	NSString* _applicationContainer;
	int _applicationContainerEnvironment;
	NSString* _applicationVersion;
	CKDPRequestOperationHeaderAssetAuthorizeGetRequestOptions* _assetAuthorizeGetRequestOptions;
	NSData* _clientChangeToken;
	NSString* _deviceAssignedName;
	NSString* _deviceFlowControlKey;
	float _deviceFlowControlRegeneration;
	NSString* _deviceHardwareID;
	NSString* _deviceHardwareVersion;
	CKDPIdentifier* _deviceIdentifier;
	NSString* _deviceLibraryName;
	NSString* _deviceLibraryVersion;
	NSString* _deviceSerialNumber;
	NSString* _deviceSoftwareVersion;
	NSString* _deviceUDID;
	int _isolationLevel;
	CKDPLocale* _locale;
	NSString* _mmcsProtocolVersion;
	NSString* _operationGroupName;
	NSMutableArray* _serviceIdentityKeyIDs;
	int _targetDatabase;
	NSString* _userIDContainerID;
	NSString* _userToken;
	BOOL _deviceSoftwareIsAppleInternal;
	BOOL _entitlementsValidated;
	SCD_Struct_CK15 _has;

}

@property (nonatomic,readonly) BOOL hasUserToken; 
@property (nonatomic,retain) NSString * userToken;                                                                                     //@synthesize userToken=_userToken - In the implementation block
@property (nonatomic,readonly) BOOL hasApplicationContainer; 
@property (nonatomic,retain) NSString * applicationContainer;                                                                          //@synthesize applicationContainer=_applicationContainer - In the implementation block
@property (nonatomic,readonly) BOOL hasApplicationBundle; 
@property (nonatomic,retain) NSString * applicationBundle;                                                                             //@synthesize applicationBundle=_applicationBundle - In the implementation block
@property (nonatomic,readonly) BOOL hasApplicationVersion; 
@property (nonatomic,retain) NSString * applicationVersion;                                                                            //@synthesize applicationVersion=_applicationVersion - In the implementation block
@property (assign,nonatomic) BOOL hasApplicationConfigVersion; 
@property (assign,nonatomic) unsigned long long applicationConfigVersion;                                                              //@synthesize applicationConfigVersion=_applicationConfigVersion - In the implementation block
@property (assign,nonatomic) BOOL hasGlobalConfigVersion; 
@property (assign,nonatomic) unsigned long long globalConfigVersion;                                                                   //@synthesize globalConfigVersion=_globalConfigVersion - In the implementation block
@property (nonatomic,readonly) BOOL hasDeviceIdentifier; 
@property (nonatomic,retain) CKDPIdentifier * deviceIdentifier;                                                                        //@synthesize deviceIdentifier=_deviceIdentifier - In the implementation block
@property (nonatomic,readonly) BOOL hasDeviceSoftwareVersion; 
@property (nonatomic,retain) NSString * deviceSoftwareVersion;                                                                         //@synthesize deviceSoftwareVersion=_deviceSoftwareVersion - In the implementation block
@property (nonatomic,readonly) BOOL hasDeviceHardwareVersion; 
@property (nonatomic,retain) NSString * deviceHardwareVersion;                                                                         //@synthesize deviceHardwareVersion=_deviceHardwareVersion - In the implementation block
@property (nonatomic,readonly) BOOL hasDeviceLibraryName; 
@property (nonatomic,retain) NSString * deviceLibraryName;                                                                             //@synthesize deviceLibraryName=_deviceLibraryName - In the implementation block
@property (nonatomic,readonly) BOOL hasDeviceLibraryVersion; 
@property (nonatomic,retain) NSString * deviceLibraryVersion;                                                                          //@synthesize deviceLibraryVersion=_deviceLibraryVersion - In the implementation block
@property (nonatomic,readonly) BOOL hasDeviceFlowControlKey; 
@property (nonatomic,retain) NSString * deviceFlowControlKey;                                                                          //@synthesize deviceFlowControlKey=_deviceFlowControlKey - In the implementation block
@property (assign,nonatomic) BOOL hasDeviceFlowControlBudget; 
@property (assign,nonatomic) unsigned long long deviceFlowControlBudget;                                                               //@synthesize deviceFlowControlBudget=_deviceFlowControlBudget - In the implementation block
@property (assign,nonatomic) BOOL hasDeviceFlowControlBudgetCap; 
@property (assign,nonatomic) unsigned long long deviceFlowControlBudgetCap;                                                            //@synthesize deviceFlowControlBudgetCap=_deviceFlowControlBudgetCap - In the implementation block
@property (assign,nonatomic) BOOL hasDeviceFlowControlRegeneration; 
@property (assign,nonatomic) float deviceFlowControlRegeneration;                                                                      //@synthesize deviceFlowControlRegeneration=_deviceFlowControlRegeneration - In the implementation block
@property (assign,nonatomic) BOOL hasDeviceProtocolVersion; 
@property (assign,nonatomic) unsigned long long deviceProtocolVersion;                                                                 //@synthesize deviceProtocolVersion=_deviceProtocolVersion - In the implementation block
@property (nonatomic,readonly) BOOL hasLocale; 
@property (nonatomic,retain) CKDPLocale * locale;                                                                                      //@synthesize locale=_locale - In the implementation block
@property (nonatomic,readonly) BOOL hasMmcsProtocolVersion; 
@property (nonatomic,retain) NSString * mmcsProtocolVersion;                                                                           //@synthesize mmcsProtocolVersion=_mmcsProtocolVersion - In the implementation block
@property (assign,nonatomic) BOOL hasApplicationContainerEnvironment; 
@property (assign,nonatomic) int applicationContainerEnvironment;                                                                      //@synthesize applicationContainerEnvironment=_applicationContainerEnvironment - In the implementation block
@property (nonatomic,readonly) BOOL hasClientChangeToken; 
@property (nonatomic,retain) NSData * clientChangeToken;                                                                               //@synthesize clientChangeToken=_clientChangeToken - In the implementation block
@property (nonatomic,readonly) BOOL hasDeviceAssignedName; 
@property (nonatomic,retain) NSString * deviceAssignedName;                                                                            //@synthesize deviceAssignedName=_deviceAssignedName - In the implementation block
@property (nonatomic,readonly) BOOL hasDeviceHardwareID; 
@property (nonatomic,retain) NSString * deviceHardwareID;                                                                              //@synthesize deviceHardwareID=_deviceHardwareID - In the implementation block
@property (assign,nonatomic) BOOL hasTargetDatabase; 
@property (assign,nonatomic) int targetDatabase;                                                                                       //@synthesize targetDatabase=_targetDatabase - In the implementation block
@property (nonatomic,readonly) BOOL hasUserIDContainerID; 
@property (nonatomic,retain) NSString * userIDContainerID;                                                                             //@synthesize userIDContainerID=_userIDContainerID - In the implementation block
@property (assign,nonatomic) BOOL hasIsolationLevel; 
@property (assign,nonatomic) int isolationLevel;                                                                                       //@synthesize isolationLevel=_isolationLevel - In the implementation block
@property (nonatomic,readonly) BOOL hasOperationGroupName; 
@property (nonatomic,retain) NSString * operationGroupName;                                                                            //@synthesize operationGroupName=_operationGroupName - In the implementation block
@property (assign,nonatomic) BOOL hasOperationGroupQuantity; 
@property (assign,nonatomic) unsigned long long operationGroupQuantity;                                                                //@synthesize operationGroupQuantity=_operationGroupQuantity - In the implementation block
@property (nonatomic,retain) NSMutableArray * serviceIdentityKeyIDs;                                                                   //@synthesize serviceIdentityKeyIDs=_serviceIdentityKeyIDs - In the implementation block
@property (assign,nonatomic) BOOL hasDeviceSoftwareIsAppleInternal; 
@property (assign,nonatomic) BOOL deviceSoftwareIsAppleInternal;                                                                       //@synthesize deviceSoftwareIsAppleInternal=_deviceSoftwareIsAppleInternal - In the implementation block
@property (nonatomic,readonly) BOOL hasAssetAuthorizeGetRequestOptions; 
@property (nonatomic,retain) CKDPRequestOperationHeaderAssetAuthorizeGetRequestOptions * assetAuthorizeGetRequestOptions;              //@synthesize assetAuthorizeGetRequestOptions=_assetAuthorizeGetRequestOptions - In the implementation block
@property (nonatomic,retain) NSMutableArray * activeThrottlingLabels;                                                                  //@synthesize activeThrottlingLabels=_activeThrottlingLabels - In the implementation block
@property (nonatomic,readonly) BOOL hasDeviceUDID; 
@property (nonatomic,retain) NSString * deviceUDID;                                                                                    //@synthesize deviceUDID=_deviceUDID - In the implementation block
@property (nonatomic,readonly) BOOL hasDeviceSerialNumber; 
@property (nonatomic,retain) NSString * deviceSerialNumber;                                                                            //@synthesize deviceSerialNumber=_deviceSerialNumber - In the implementation block
@property (assign,nonatomic) BOOL hasEntitlementsValidated; 
@property (assign,nonatomic) BOOL entitlementsValidated;                                                                               //@synthesize entitlementsValidated=_entitlementsValidated - In the implementation block
+(Class)serviceIdentityKeyIDsType;
+(Class)activeThrottlingLabelType;
-(CKDPIdentifier *)deviceIdentifier;
-(void)setDeviceIdentifier:(CKDPIdentifier *)arg1 ;
-(id)dictionaryRepresentation;
-(BOOL)hasApplicationContainer;
-(unsigned long long)globalConfigVersion;
-(BOOL)hasDeviceAssignedName;
-(BOOL)hasMmcsProtocolVersion;
-(CKDPLocale *)locale;
-(BOOL)hasLocale;
-(void)setLocale:(CKDPLocale *)arg1 ;
-(BOOL)hasDeviceFlowControlBudget;
-(void)setDeviceHardwareVersion:(NSString *)arg1 ;
-(BOOL)hasTargetDatabase;
-(NSString *)deviceSoftwareVersion;
-(void)setApplicationContainerEnvironment:(int)arg1 ;
-(void)setDeviceLibraryName:(NSString *)arg1 ;
-(BOOL)hasDeviceHardwareID;
-(void)setApplicationConfigVersion:(unsigned long long)arg1 ;
-(void)setApplicationVersion:(NSString *)arg1 ;
-(NSString *)mmcsProtocolVersion;
-(void)setDeviceFlowControlKey:(NSString *)arg1 ;
-(NSString *)deviceAssignedName;
-(void)setHasGlobalConfigVersion:(BOOL)arg1 ;
-(NSString *)userIDContainerID;
-(void)mergeFrom:(id)arg1 ;
-(NSString *)deviceLibraryName;
-(BOOL)hasDeviceFlowControlBudgetCap;
-(void)setDeviceFlowControlBudget:(unsigned long long)arg1 ;
-(BOOL)hasDeviceSoftwareVersion;
-(BOOL)hasDeviceFlowControlKey;
-(BOOL)hasGlobalConfigVersion;
-(BOOL)hasDeviceFlowControlRegeneration;
-(BOOL)hasApplicationBundle;
-(void)setHasIsolationLevel:(BOOL)arg1 ;
-(void)setDeviceHardwareID:(NSString *)arg1 ;
-(BOOL)hasDeviceIdentifier;
-(NSData *)clientChangeToken;
-(void)setMmcsProtocolVersion:(NSString *)arg1 ;
-(void)setDeviceProtocolVersion:(unsigned long long)arg1 ;
-(NSString *)applicationContainer;
-(id)description;
-(NSString *)userToken;
-(void)setUserToken:(NSString *)arg1 ;
-(int)applicationContainerEnvironment;
-(NSString *)deviceUDID;
-(unsigned long long)applicationConfigVersion;
-(NSString *)deviceLibraryVersion;
-(void)setApplicationContainer:(NSString *)arg1 ;
-(void)setDeviceFlowControlBudgetCap:(unsigned long long)arg1 ;
-(void)setClientChangeToken:(NSData *)arg1 ;
-(BOOL)hasUserIDContainerID;
-(NSString *)deviceFlowControlKey;
-(int)isolationLevel;
-(void)setDeviceSerialNumber:(NSString *)arg1 ;
-(void)setHasDeviceProtocolVersion:(BOOL)arg1 ;
-(void)setIsolationLevel:(int)arg1 ;
-(BOOL)hasApplicationConfigVersion;
-(NSString *)operationGroupName;
-(NSString *)deviceHardwareVersion;
-(BOOL)hasClientChangeToken;
-(unsigned long long)deviceFlowControlBudget;
-(unsigned long long)hash;
-(void)setDeviceAssignedName:(NSString *)arg1 ;
-(NSString *)applicationVersion;
-(void)setHasDeviceFlowControlRegeneration:(BOOL)arg1 ;
-(BOOL)hasApplicationVersion;
-(NSString *)applicationBundle;
-(BOOL)readFrom:(id)arg1 ;
-(BOOL)hasApplicationContainerEnvironment;
-(unsigned long long)deviceProtocolVersion;
-(void)setUserIDContainerID:(NSString *)arg1 ;
-(float)deviceFlowControlRegeneration;
-(void)setDeviceUDID:(NSString *)arg1 ;
-(BOOL)hasIsolationLevel;
-(NSString *)deviceSerialNumber;
-(void)copyTo:(id)arg1 ;
-(void)setDeviceFlowControlRegeneration:(float)arg1 ;
-(void)writeTo:(id)arg1 ;
-(unsigned long long)deviceFlowControlBudgetCap;
-(void)setHasDeviceFlowControlBudgetCap:(BOOL)arg1 ;
-(BOOL)hasDeviceLibraryVersion;
-(int)targetDatabase;
-(void)setHasTargetDatabase:(BOOL)arg1 ;
-(BOOL)hasDeviceLibraryName;
-(void)setGlobalConfigVersion:(unsigned long long)arg1 ;
-(void)setHasApplicationContainerEnvironment:(BOOL)arg1 ;
-(void)setDeviceLibraryVersion:(NSString *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setDeviceSoftwareVersion:(NSString *)arg1 ;
-(void)setApplicationBundle:(NSString *)arg1 ;
-(NSString *)deviceHardwareID;
-(BOOL)hasDeviceProtocolVersion;
-(BOOL)isEqual:(id)arg1 ;
-(void)setHasDeviceFlowControlBudget:(BOOL)arg1 ;
-(BOOL)hasDeviceHardwareVersion;
-(void)setHasApplicationConfigVersion:(BOOL)arg1 ;
-(void)setTargetDatabase:(int)arg1 ;
-(void)setOperationGroupName:(NSString *)arg1 ;
-(BOOL)hasOperationGroupName;
-(BOOL)hasUserToken;
-(id)applicationContainerEnvironmentAsString:(int)arg1 ;
-(int)StringAsApplicationContainerEnvironment:(id)arg1 ;
-(void)addActiveThrottlingLabel:(id)arg1 ;
-(unsigned long long)operationGroupQuantity;
-(void)setOperationGroupQuantity:(unsigned long long)arg1 ;
-(void)setDeviceSoftwareIsAppleInternal:(BOOL)arg1 ;
-(void)setEntitlementsValidated:(BOOL)arg1 ;
-(void)setAssetAuthorizeGetRequestOptions:(CKDPRequestOperationHeaderAssetAuthorizeGetRequestOptions *)arg1 ;
-(CKDPRequestOperationHeaderAssetAuthorizeGetRequestOptions *)assetAuthorizeGetRequestOptions;
-(void)addServiceIdentityKeyIDs:(id)arg1 ;
-(unsigned long long)serviceIdentityKeyIDsCount;
-(void)clearServiceIdentityKeyIDs;
-(id)serviceIdentityKeyIDsAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)activeThrottlingLabelsCount;
-(void)clearActiveThrottlingLabels;
-(id)activeThrottlingLabelAtIndex:(unsigned long long)arg1 ;
-(id)targetDatabaseAsString:(int)arg1 ;
-(int)StringAsTargetDatabase:(id)arg1 ;
-(id)isolationLevelAsString:(int)arg1 ;
-(int)StringAsIsolationLevel:(id)arg1 ;
-(void)setHasOperationGroupQuantity:(BOOL)arg1 ;
-(BOOL)hasOperationGroupQuantity;
-(void)setHasDeviceSoftwareIsAppleInternal:(BOOL)arg1 ;
-(BOOL)hasDeviceSoftwareIsAppleInternal;
-(BOOL)hasAssetAuthorizeGetRequestOptions;
-(BOOL)hasDeviceUDID;
-(BOOL)hasDeviceSerialNumber;
-(void)setHasEntitlementsValidated:(BOOL)arg1 ;
-(BOOL)hasEntitlementsValidated;
-(NSMutableArray *)serviceIdentityKeyIDs;
-(void)setServiceIdentityKeyIDs:(NSMutableArray *)arg1 ;
-(BOOL)deviceSoftwareIsAppleInternal;
-(NSMutableArray *)activeThrottlingLabels;
-(void)setActiveThrottlingLabels:(NSMutableArray *)arg1 ;
-(BOOL)entitlementsValidated;
-(id)_applicationContainerEnvironmentCKLogValue;
-(id)_isolationLevelCKLogValue;
-(id)_targetDatabaseCKLogValue;
@end

