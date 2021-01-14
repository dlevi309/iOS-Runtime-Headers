/*
* Generated on Thursday, January 14, 2021 at 2:21:52 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
*/

#import <NewsCore/NewsCore-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSData, FCCKPIdentifier, FCCKPLocale;

@interface FCCKPRequestOperationHeader : PBCodable <NSCopying> {

	unsigned long long _applicationConfigVersion;
	unsigned long long _deviceFlowControlBudget;
	unsigned long long _deviceFlowControlBudgetCap;
	unsigned long long _deviceProtocolVersion;
	unsigned long long _globalConfigVersion;
	NSString* _applicationBundle;
	NSString* _applicationContainer;
	int _applicationContainerEnvironment;
	NSString* _applicationVersion;
	NSData* _clientChangeToken;
	NSString* _deviceAssignedName;
	NSString* _deviceFlowControlKey;
	float _deviceFlowControlRegeneration;
	NSString* _deviceHardwareID;
	NSString* _deviceHardwareVersion;
	FCCKPIdentifier* _deviceIdentifier;
	NSString* _deviceLibraryName;
	NSString* _deviceLibraryVersion;
	NSString* _deviceSoftwareVersion;
	int _isolationLevel;
	FCCKPLocale* _locale;
	NSString* _mmcsProtocolVersion;
	int _targetDatabase;
	NSString* _userIDContainerID;
	SCD_Struct_FC22 _has;

}

@property (nonatomic,readonly) BOOL hasApplicationContainer; 
@property (nonatomic,retain) NSString * applicationContainer;                            //@synthesize applicationContainer=_applicationContainer - In the implementation block
@property (nonatomic,readonly) BOOL hasApplicationBundle; 
@property (nonatomic,retain) NSString * applicationBundle;                               //@synthesize applicationBundle=_applicationBundle - In the implementation block
@property (nonatomic,readonly) BOOL hasApplicationVersion; 
@property (nonatomic,retain) NSString * applicationVersion;                              //@synthesize applicationVersion=_applicationVersion - In the implementation block
@property (assign,nonatomic) BOOL hasApplicationConfigVersion; 
@property (assign,nonatomic) unsigned long long applicationConfigVersion;                //@synthesize applicationConfigVersion=_applicationConfigVersion - In the implementation block
@property (assign,nonatomic) BOOL hasGlobalConfigVersion; 
@property (assign,nonatomic) unsigned long long globalConfigVersion;                     //@synthesize globalConfigVersion=_globalConfigVersion - In the implementation block
@property (nonatomic,readonly) BOOL hasDeviceIdentifier; 
@property (nonatomic,retain) FCCKPIdentifier * deviceIdentifier;                         //@synthesize deviceIdentifier=_deviceIdentifier - In the implementation block
@property (nonatomic,readonly) BOOL hasDeviceSoftwareVersion; 
@property (nonatomic,retain) NSString * deviceSoftwareVersion;                           //@synthesize deviceSoftwareVersion=_deviceSoftwareVersion - In the implementation block
@property (nonatomic,readonly) BOOL hasDeviceHardwareVersion; 
@property (nonatomic,retain) NSString * deviceHardwareVersion;                           //@synthesize deviceHardwareVersion=_deviceHardwareVersion - In the implementation block
@property (nonatomic,readonly) BOOL hasDeviceLibraryName; 
@property (nonatomic,retain) NSString * deviceLibraryName;                               //@synthesize deviceLibraryName=_deviceLibraryName - In the implementation block
@property (nonatomic,readonly) BOOL hasDeviceLibraryVersion; 
@property (nonatomic,retain) NSString * deviceLibraryVersion;                            //@synthesize deviceLibraryVersion=_deviceLibraryVersion - In the implementation block
@property (nonatomic,readonly) BOOL hasDeviceFlowControlKey; 
@property (nonatomic,retain) NSString * deviceFlowControlKey;                            //@synthesize deviceFlowControlKey=_deviceFlowControlKey - In the implementation block
@property (assign,nonatomic) BOOL hasDeviceFlowControlBudget; 
@property (assign,nonatomic) unsigned long long deviceFlowControlBudget;                 //@synthesize deviceFlowControlBudget=_deviceFlowControlBudget - In the implementation block
@property (assign,nonatomic) BOOL hasDeviceFlowControlBudgetCap; 
@property (assign,nonatomic) unsigned long long deviceFlowControlBudgetCap;              //@synthesize deviceFlowControlBudgetCap=_deviceFlowControlBudgetCap - In the implementation block
@property (assign,nonatomic) BOOL hasDeviceFlowControlRegeneration; 
@property (assign,nonatomic) float deviceFlowControlRegeneration;                        //@synthesize deviceFlowControlRegeneration=_deviceFlowControlRegeneration - In the implementation block
@property (assign,nonatomic) BOOL hasDeviceProtocolVersion; 
@property (assign,nonatomic) unsigned long long deviceProtocolVersion;                   //@synthesize deviceProtocolVersion=_deviceProtocolVersion - In the implementation block
@property (nonatomic,readonly) BOOL hasLocale; 
@property (nonatomic,retain) FCCKPLocale * locale;                                       //@synthesize locale=_locale - In the implementation block
@property (nonatomic,readonly) BOOL hasMmcsProtocolVersion; 
@property (nonatomic,retain) NSString * mmcsProtocolVersion;                             //@synthesize mmcsProtocolVersion=_mmcsProtocolVersion - In the implementation block
@property (assign,nonatomic) BOOL hasApplicationContainerEnvironment; 
@property (assign,nonatomic) int applicationContainerEnvironment;                        //@synthesize applicationContainerEnvironment=_applicationContainerEnvironment - In the implementation block
@property (nonatomic,readonly) BOOL hasClientChangeToken; 
@property (nonatomic,retain) NSData * clientChangeToken;                                 //@synthesize clientChangeToken=_clientChangeToken - In the implementation block
@property (nonatomic,readonly) BOOL hasDeviceAssignedName; 
@property (nonatomic,retain) NSString * deviceAssignedName;                              //@synthesize deviceAssignedName=_deviceAssignedName - In the implementation block
@property (nonatomic,readonly) BOOL hasDeviceHardwareID; 
@property (nonatomic,retain) NSString * deviceHardwareID;                                //@synthesize deviceHardwareID=_deviceHardwareID - In the implementation block
@property (assign,nonatomic) BOOL hasTargetDatabase; 
@property (assign,nonatomic) int targetDatabase;                                         //@synthesize targetDatabase=_targetDatabase - In the implementation block
@property (nonatomic,readonly) BOOL hasUserIDContainerID; 
@property (nonatomic,retain) NSString * userIDContainerID;                               //@synthesize userIDContainerID=_userIDContainerID - In the implementation block
@property (assign,nonatomic) BOOL hasIsolationLevel; 
@property (assign,nonatomic) int isolationLevel;                                         //@synthesize isolationLevel=_isolationLevel - In the implementation block
-(FCCKPIdentifier *)deviceIdentifier;
-(void)setDeviceIdentifier:(FCCKPIdentifier *)arg1 ;
-(id)dictionaryRepresentation;
-(BOOL)hasApplicationContainer;
-(unsigned long long)globalConfigVersion;
-(BOOL)hasDeviceAssignedName;
-(BOOL)hasMmcsProtocolVersion;
-(FCCKPLocale *)locale;
-(BOOL)hasLocale;
-(void)setLocale:(FCCKPLocale *)arg1 ;
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
-(int)applicationContainerEnvironment;
-(unsigned long long)applicationConfigVersion;
-(NSString *)deviceLibraryVersion;
-(void)setApplicationContainer:(NSString *)arg1 ;
-(void)setDeviceFlowControlBudgetCap:(unsigned long long)arg1 ;
-(void)setClientChangeToken:(NSData *)arg1 ;
-(BOOL)hasUserIDContainerID;
-(NSString *)deviceFlowControlKey;
-(int)isolationLevel;
-(void)setHasDeviceProtocolVersion:(BOOL)arg1 ;
-(void)setIsolationLevel:(int)arg1 ;
-(BOOL)hasApplicationConfigVersion;
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
-(BOOL)hasIsolationLevel;
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
-(void)dealloc;
-(void)setHasDeviceFlowControlBudget:(BOOL)arg1 ;
-(BOOL)hasDeviceHardwareVersion;
-(void)setHasApplicationConfigVersion:(BOOL)arg1 ;
-(void)setTargetDatabase:(int)arg1 ;
@end

