/*
* Generated on Monday, March 1, 2021 at 2:34:20 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AdCore.framework/AdCore
*/

#import <AdCore/AdCore-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSMutableArray;

@interface ADUserTargetingProperties : PBCodable <NSCopying> {

	SCD_Struct_AD7* _accountStates;
	SCD_Struct_AD7* _accountTypes;
	SCD_Struct_AD7* _deviceModes;
	double _clientClockTime;
	NSString* _administrativeArea;
	int _advertisingIdentifierMonthResetCount;
	NSString* _algoId;
	NSString* _appID;
	NSString* _appVersion;
	int _appsRank;
	NSString* _carrierMCC;
	NSString* _carrierMNC;
	int _connectionType;
	NSString* _currentCarrierMCC;
	NSString* _currentCarrierMNC;
	NSString* _dPIDString;
	NSString* _deviceModel;
	NSString* _deviceRequestID;
	float _horizontalAccuracy;
	NSString* _iAdIDString;
	NSString* _iTunesStore;
	NSString* _isoCountryCode;
	float _latitude;
	NSString* _localeIdentifier;
	NSString* _locality;
	float _longitude;
	NSString* _osVersionAndBuild;
	NSString* _postalCode;
	int _runState;
	NSString* _storeFrontLanguageLocaleIdentifier;
	NSString* _subAdministrativeArea;
	NSMutableArray* _targetings;
	float _timezone;
	NSString* _toroIDString;
	NSMutableArray* _userKeyboards;
	BOOL _isOnInternationalDataRoaming;
	BOOL _limitAdTracking;
	SCD_Struct_AD10 _has;

}

@property (assign,nonatomic) BOOL hasClientClockTime; 
@property (assign,nonatomic) double clientClockTime;                                     //@synthesize clientClockTime=_clientClockTime - In the implementation block
@property (nonatomic,readonly) BOOL hasAppID; 
@property (nonatomic,retain) NSString * appID;                                           //@synthesize appID=_appID - In the implementation block
@property (nonatomic,readonly) BOOL hasDeviceModel; 
@property (nonatomic,retain) NSString * deviceModel;                                     //@synthesize deviceModel=_deviceModel - In the implementation block
@property (assign,nonatomic) BOOL hasTimezone; 
@property (assign,nonatomic) float timezone;                                             //@synthesize timezone=_timezone - In the implementation block
@property (assign,nonatomic) BOOL hasRunState; 
@property (assign,nonatomic) int runState;                                               //@synthesize runState=_runState - In the implementation block
@property (nonatomic,readonly) BOOL hasAppVersion; 
@property (nonatomic,retain) NSString * appVersion;                                      //@synthesize appVersion=_appVersion - In the implementation block
@property (nonatomic,readonly) BOOL hasOsVersionAndBuild; 
@property (nonatomic,retain) NSString * osVersionAndBuild;                               //@synthesize osVersionAndBuild=_osVersionAndBuild - In the implementation block
@property (nonatomic,readonly) BOOL hasITunesStore; 
@property (nonatomic,retain) NSString * iTunesStore;                                     //@synthesize iTunesStore=_iTunesStore - In the implementation block
@property (nonatomic,readonly) BOOL hasLocaleIdentifier; 
@property (nonatomic,retain) NSString * localeIdentifier;                                //@synthesize localeIdentifier=_localeIdentifier - In the implementation block
@property (nonatomic,retain) NSMutableArray * userKeyboards;                             //@synthesize userKeyboards=_userKeyboards - In the implementation block
@property (assign,nonatomic) BOOL hasAppsRank; 
@property (assign,nonatomic) int appsRank;                                               //@synthesize appsRank=_appsRank - In the implementation block
@property (nonatomic,readonly) unsigned long long deviceModesCount; 
@property (nonatomic,readonly) int* deviceModes; 
@property (nonatomic,readonly) unsigned long long accountTypesCount; 
@property (nonatomic,readonly) int* accountTypes; 
@property (assign,nonatomic) BOOL hasLatitude; 
@property (assign,nonatomic) float latitude;                                             //@synthesize latitude=_latitude - In the implementation block
@property (assign,nonatomic) BOOL hasLongitude; 
@property (assign,nonatomic) float longitude;                                            //@synthesize longitude=_longitude - In the implementation block
@property (assign,nonatomic) BOOL hasHorizontalAccuracy; 
@property (assign,nonatomic) float horizontalAccuracy;                                   //@synthesize horizontalAccuracy=_horizontalAccuracy - In the implementation block
@property (nonatomic,readonly) BOOL hasIsoCountryCode; 
@property (nonatomic,retain) NSString * isoCountryCode;                                  //@synthesize isoCountryCode=_isoCountryCode - In the implementation block
@property (nonatomic,retain) NSMutableArray * targetings;                                //@synthesize targetings=_targetings - In the implementation block
@property (assign,nonatomic) BOOL hasLimitAdTracking; 
@property (assign,nonatomic) BOOL limitAdTracking;                                       //@synthesize limitAdTracking=_limitAdTracking - In the implementation block
@property (nonatomic,readonly) BOOL hasToroIDString; 
@property (nonatomic,retain) NSString * toroIDString;                                    //@synthesize toroIDString=_toroIDString - In the implementation block
@property (nonatomic,readonly) BOOL hasIAdIDString; 
@property (nonatomic,retain) NSString * iAdIDString;                                     //@synthesize iAdIDString=_iAdIDString - In the implementation block
@property (nonatomic,readonly) BOOL hasAlgoId; 
@property (nonatomic,retain) NSString * algoId;                                          //@synthesize algoId=_algoId - In the implementation block
@property (nonatomic,readonly) BOOL hasDPIDString; 
@property (nonatomic,retain) NSString * dPIDString;                                      //@synthesize dPIDString=_dPIDString - In the implementation block
@property (nonatomic,readonly) BOOL hasPostalCode; 
@property (nonatomic,retain) NSString * postalCode;                                      //@synthesize postalCode=_postalCode - In the implementation block
@property (nonatomic,readonly) BOOL hasAdministrativeArea; 
@property (nonatomic,retain) NSString * administrativeArea;                              //@synthesize administrativeArea=_administrativeArea - In the implementation block
@property (nonatomic,readonly) BOOL hasLocality; 
@property (nonatomic,retain) NSString * locality;                                        //@synthesize locality=_locality - In the implementation block
@property (nonatomic,readonly) BOOL hasSubAdministrativeArea; 
@property (nonatomic,retain) NSString * subAdministrativeArea;                           //@synthesize subAdministrativeArea=_subAdministrativeArea - In the implementation block
@property (assign,nonatomic) BOOL hasAdvertisingIdentifierMonthResetCount; 
@property (assign,nonatomic) int advertisingIdentifierMonthResetCount;                   //@synthesize advertisingIdentifierMonthResetCount=_advertisingIdentifierMonthResetCount - In the implementation block
@property (nonatomic,readonly) BOOL hasDeviceRequestID; 
@property (nonatomic,retain) NSString * deviceRequestID;                                 //@synthesize deviceRequestID=_deviceRequestID - In the implementation block
@property (nonatomic,readonly) BOOL hasCarrierMNC; 
@property (nonatomic,retain) NSString * carrierMNC;                                      //@synthesize carrierMNC=_carrierMNC - In the implementation block
@property (nonatomic,readonly) BOOL hasCarrierMCC; 
@property (nonatomic,retain) NSString * carrierMCC;                                      //@synthesize carrierMCC=_carrierMCC - In the implementation block
@property (nonatomic,readonly) BOOL hasCurrentCarrierMNC; 
@property (nonatomic,retain) NSString * currentCarrierMNC;                               //@synthesize currentCarrierMNC=_currentCarrierMNC - In the implementation block
@property (nonatomic,readonly) BOOL hasCurrentCarrierMCC; 
@property (nonatomic,retain) NSString * currentCarrierMCC;                               //@synthesize currentCarrierMCC=_currentCarrierMCC - In the implementation block
@property (assign,nonatomic) BOOL hasIsOnInternationalDataRoaming; 
@property (assign,nonatomic) BOOL isOnInternationalDataRoaming;                          //@synthesize isOnInternationalDataRoaming=_isOnInternationalDataRoaming - In the implementation block
@property (assign,nonatomic) BOOL hasConnectionType; 
@property (assign,nonatomic) int connectionType;                                         //@synthesize connectionType=_connectionType - In the implementation block
@property (nonatomic,readonly) BOOL hasStoreFrontLanguageLocaleIdentifier; 
@property (nonatomic,retain) NSString * storeFrontLanguageLocaleIdentifier;              //@synthesize storeFrontLanguageLocaleIdentifier=_storeFrontLanguageLocaleIdentifier - In the implementation block
@property (nonatomic,readonly) unsigned long long accountStatesCount; 
@property (nonatomic,readonly) int* accountStates; 
+(Class)userKeyboardType;
+(Class)targetingType;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)localeIdentifier;
-(id)dictionaryRepresentation;
-(int)connectionType;
-(void)writeTo:(id)arg1 ;
-(float)latitude;
-(float)longitude;
-(NSString *)postalCode;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(NSString *)isoCountryCode;
-(void)setLongitude:(float)arg1 ;
-(void)setLatitude:(float)arg1 ;
-(float)horizontalAccuracy;
-(void)setHorizontalAccuracy:(float)arg1 ;
-(NSString *)subAdministrativeArea;
-(float)timezone;
-(NSString *)locality;
-(NSString *)administrativeArea;
-(void)setIsoCountryCode:(NSString *)arg1 ;
-(void)setHasLatitude:(BOOL)arg1 ;
-(BOOL)hasLatitude;
-(void)setHasLongitude:(BOOL)arg1 ;
-(BOOL)hasLongitude;
-(void)setHasHorizontalAccuracy:(BOOL)arg1 ;
-(BOOL)hasHorizontalAccuracy;
-(void)setTimezone:(float)arg1 ;
-(BOOL)hasTimezone;
-(BOOL)hasIsoCountryCode;
-(void)setAdministrativeArea:(NSString *)arg1 ;
-(void)setLocality:(NSString *)arg1 ;
-(BOOL)hasAdministrativeArea;
-(BOOL)hasLocality;
-(void)setConnectionType:(int)arg1 ;
-(void)setHasConnectionType:(BOOL)arg1 ;
-(BOOL)hasConnectionType;
-(id)connectionTypeAsString:(int)arg1 ;
-(int)StringAsConnectionType:(id)arg1 ;
-(void)setSubAdministrativeArea:(NSString *)arg1 ;
-(BOOL)hasSubAdministrativeArea;
-(void)setPostalCode:(NSString *)arg1 ;
-(NSString *)deviceModel;
-(void)setDeviceModel:(NSString *)arg1 ;
-(NSString *)appVersion;
-(void)setAppVersion:(NSString *)arg1 ;
-(void)setLocaleIdentifier:(NSString *)arg1 ;
-(NSString *)appID;
-(BOOL)hasDeviceModel;
-(void)setHasTimezone:(BOOL)arg1 ;
-(void)setAppID:(NSString *)arg1 ;
-(BOOL)hasAppVersion;
-(BOOL)hasLocaleIdentifier;
-(int)runState;
-(void)setRunState:(int)arg1 ;
-(BOOL)hasPostalCode;
-(void)addAccountType:(int)arg1 ;
-(void)setAdvertisingIdentifierMonthResetCount:(int)arg1 ;
-(NSString *)osVersionAndBuild;
-(void)setOsVersionAndBuild:(NSString *)arg1 ;
-(void)addDeviceMode:(int)arg1 ;
-(void)addAccountState:(int)arg1 ;
-(void)setHasRunState:(BOOL)arg1 ;
-(BOOL)hasRunState;
-(id)runStateAsString:(int)arg1 ;
-(int)StringAsRunState:(id)arg1 ;
-(void)setIAdIDString:(NSString *)arg1 ;
-(BOOL)hasIAdIDString;
-(NSString *)iAdIDString;
-(unsigned long long)deviceModesCount;
-(void)clearDeviceModes;
-(int)deviceModeAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)accountTypesCount;
-(void)clearAccountTypes;
-(int)accountTypeAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)accountStatesCount;
-(void)clearAccountStates;
-(int)accountStateAtIndex:(unsigned long long)arg1 ;
-(void)setHasAdvertisingIdentifierMonthResetCount:(BOOL)arg1 ;
-(BOOL)hasAdvertisingIdentifierMonthResetCount;
-(BOOL)hasOsVersionAndBuild;
-(int*)deviceModes;
-(void)setDeviceModes:(int*)arg1 count:(unsigned long long)arg2 ;
-(id)deviceModesAsString:(int)arg1 ;
-(int)StringAsDeviceModes:(id)arg1 ;
-(int*)accountTypes;
-(void)setAccountTypes:(int*)arg1 count:(unsigned long long)arg2 ;
-(id)accountTypesAsString:(int)arg1 ;
-(int)StringAsAccountTypes:(id)arg1 ;
-(int*)accountStates;
-(void)setAccountStates:(int*)arg1 count:(unsigned long long)arg2 ;
-(id)accountStatesAsString:(int)arg1 ;
-(int)StringAsAccountStates:(id)arg1 ;
-(int)advertisingIdentifierMonthResetCount;
-(void)setCurrentCarrierMNC:(NSString *)arg1 ;
-(void)setCurrentCarrierMCC:(NSString *)arg1 ;
-(NSString *)currentCarrierMNC;
-(NSString *)currentCarrierMCC;
-(void)addUserKeyboard:(id)arg1 ;
-(void)addTargeting:(id)arg1 ;
-(void)setITunesStore:(NSString *)arg1 ;
-(unsigned long long)userKeyboardsCount;
-(void)clearUserKeyboards;
-(id)userKeyboardAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)targetingsCount;
-(void)clearTargetings;
-(id)targetingAtIndex:(unsigned long long)arg1 ;
-(void)setToroIDString:(NSString *)arg1 ;
-(void)setAlgoId:(NSString *)arg1 ;
-(void)setDPIDString:(NSString *)arg1 ;
-(void)setDeviceRequestID:(NSString *)arg1 ;
-(void)setCarrierMNC:(NSString *)arg1 ;
-(void)setCarrierMCC:(NSString *)arg1 ;
-(void)setStoreFrontLanguageLocaleIdentifier:(NSString *)arg1 ;
-(void)setClientClockTime:(double)arg1 ;
-(void)setHasClientClockTime:(BOOL)arg1 ;
-(BOOL)hasClientClockTime;
-(BOOL)hasAppID;
-(BOOL)hasITunesStore;
-(void)setAppsRank:(int)arg1 ;
-(void)setHasAppsRank:(BOOL)arg1 ;
-(BOOL)hasAppsRank;
-(void)setLimitAdTracking:(BOOL)arg1 ;
-(void)setHasLimitAdTracking:(BOOL)arg1 ;
-(BOOL)hasLimitAdTracking;
-(BOOL)hasToroIDString;
-(BOOL)hasAlgoId;
-(BOOL)hasDPIDString;
-(BOOL)hasDeviceRequestID;
-(BOOL)hasCarrierMNC;
-(BOOL)hasCarrierMCC;
-(BOOL)hasCurrentCarrierMNC;
-(BOOL)hasCurrentCarrierMCC;
-(void)setIsOnInternationalDataRoaming:(BOOL)arg1 ;
-(void)setHasIsOnInternationalDataRoaming:(BOOL)arg1 ;
-(BOOL)hasIsOnInternationalDataRoaming;
-(BOOL)hasStoreFrontLanguageLocaleIdentifier;
-(double)clientClockTime;
-(NSString *)iTunesStore;
-(NSMutableArray *)userKeyboards;
-(void)setUserKeyboards:(NSMutableArray *)arg1 ;
-(int)appsRank;
-(NSMutableArray *)targetings;
-(void)setTargetings:(NSMutableArray *)arg1 ;
-(BOOL)limitAdTracking;
-(NSString *)toroIDString;
-(NSString *)algoId;
-(NSString *)dPIDString;
-(NSString *)deviceRequestID;
-(NSString *)carrierMNC;
-(NSString *)carrierMCC;
-(BOOL)isOnInternationalDataRoaming;
-(NSString *)storeFrontLanguageLocaleIdentifier;
@end

