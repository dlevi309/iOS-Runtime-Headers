/*
* Generated on Thursday, January 14, 2021 at 2:24:45 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(BOOL)hasAppVersion;
-(BOOL)hasAppsRank;
-(BOOL)hasIsoCountryCode;
-(int)runState;
-(NSString *)localeIdentifier;
-(id)dictionaryRepresentation;
-(float)timezone;
-(void)setDeviceModel:(NSString *)arg1 ;
-(float)latitude;
-(void)setAppVersion:(NSString *)arg1 ;
-(void)setIAdIDString:(NSString *)arg1 ;
-(NSString *)postalCode;
-(void)setCarrierMNC:(NSString *)arg1 ;
-(BOOL)hasLimitAdTracking;
-(BOOL)hasPostalCode;
-(void)setLocality:(NSString *)arg1 ;
-(NSString *)deviceModel;
-(void)setHasLatitude:(BOOL)arg1 ;
-(BOOL)hasLatitude;
-(NSMutableArray *)targetings;
-(BOOL)hasLongitude;
-(void)setAdvertisingIdentifierMonthResetCount:(int)arg1 ;
-(void)setHasConnectionType:(BOOL)arg1 ;
-(NSString *)appVersion;
-(void)setIsoCountryCode:(NSString *)arg1 ;
-(BOOL)hasSubAdministrativeArea;
-(BOOL)hasOsVersionAndBuild;
-(id)userKeyboardAtIndex:(unsigned long long)arg1 ;
-(void)setSubAdministrativeArea:(NSString *)arg1 ;
-(int)connectionType;
-(NSString *)subAdministrativeArea;
-(void)setHasLongitude:(BOOL)arg1 ;
-(void)setPostalCode:(NSString *)arg1 ;
-(BOOL)hasDeviceModel;
-(NSString *)iTunesStore;
-(void)clearDeviceModes;
-(NSString *)toroIDString;
-(void)setAccountStates:(int*)arg1 count:(unsigned long long)arg2 ;
-(void)clearTargetings;
-(void)setConnectionType:(int)arg1 ;
-(BOOL)hasITunesStore;
-(NSMutableArray *)userKeyboards;
-(BOOL)limitAdTracking;
-(NSString *)appID;
-(BOOL)hasCarrierMNC;
-(BOOL)hasConnectionType;
-(float)longitude;
-(BOOL)hasAdministrativeArea;
-(void)setDPIDString:(NSString *)arg1 ;
-(void)setTargetings:(NSMutableArray *)arg1 ;
-(NSString *)isoCountryCode;
-(void)setLongitude:(float)arg1 ;
-(int)StringAsAccountStates:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)clearAccountTypes;
-(void)addUserKeyboard:(id)arg1 ;
-(void)setAppsRank:(int)arg1 ;
-(BOOL)hasLocaleIdentifier;
-(int)advertisingIdentifierMonthResetCount;
-(BOOL)hasAppID;
-(NSString *)currentCarrierMNC;
-(unsigned long long)targetingsCount;
-(void)setCurrentCarrierMCC:(NSString *)arg1 ;
-(NSString *)currentCarrierMCC;
-(int*)accountTypes;
-(void)setLatitude:(float)arg1 ;
-(BOOL)hasIsOnInternationalDataRoaming;
-(NSString *)locality;
-(int)accountTypeAtIndex:(unsigned long long)arg1 ;
-(int)StringAsDeviceModes:(id)arg1 ;
-(id)description;
-(void)setClientClockTime:(double)arg1 ;
-(unsigned long long)accountTypesCount;
-(void)setOsVersionAndBuild:(NSString *)arg1 ;
-(BOOL)hasClientClockTime;
-(void)setIsOnInternationalDataRoaming:(BOOL)arg1 ;
-(void)setHasTimezone:(BOOL)arg1 ;
-(BOOL)hasTimezone;
-(NSString *)algoId;
-(void)setHasRunState:(BOOL)arg1 ;
-(NSString *)carrierMCC;
-(id)connectionTypeAsString:(int)arg1 ;
-(id)accountTypesAsString:(int)arg1 ;
-(void)setStoreFrontLanguageLocaleIdentifier:(NSString *)arg1 ;
-(BOOL)hasRunState;
-(void)addAccountType:(int)arg1 ;
-(unsigned long long)userKeyboardsCount;
-(double)clientClockTime;
-(void)setDeviceRequestID:(NSString *)arg1 ;
-(void)setHasClientClockTime:(BOOL)arg1 ;
-(void)setCarrierMCC:(NSString *)arg1 ;
-(void)setLimitAdTracking:(BOOL)arg1 ;
-(int)deviceModeAtIndex:(unsigned long long)arg1 ;
-(void)setHasAdvertisingIdentifierMonthResetCount:(BOOL)arg1 ;
-(BOOL)hasIAdIDString;
-(void)setHasIsOnInternationalDataRoaming:(BOOL)arg1 ;
-(unsigned long long)hash;
-(BOOL)hasHorizontalAccuracy;
-(NSString *)osVersionAndBuild;
-(int)appsRank;
-(unsigned long long)accountStatesCount;
-(BOOL)hasAlgoId;
-(BOOL)hasCarrierMCC;
-(BOOL)readFrom:(id)arg1 ;
-(void)addDeviceMode:(int)arg1 ;
-(float)horizontalAccuracy;
-(BOOL)hasLocality;
-(void)setUserKeyboards:(NSMutableArray *)arg1 ;
-(BOOL)hasStoreFrontLanguageLocaleIdentifier;
-(void)setAdministrativeArea:(NSString *)arg1 ;
-(id)deviceModesAsString:(int)arg1 ;
-(void)clearUserKeyboards;
-(void)copyTo:(id)arg1 ;
-(void)setAccountTypes:(int*)arg1 count:(unsigned long long)arg2 ;
-(int)StringAsAccountTypes:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(int*)deviceModes;
-(NSString *)deviceRequestID;
-(int)StringAsRunState:(id)arg1 ;
-(BOOL)hasCurrentCarrierMCC;
-(void)setITunesStore:(NSString *)arg1 ;
-(void)setHasLimitAdTracking:(BOOL)arg1 ;
-(void)setRunState:(int)arg1 ;
-(BOOL)hasAdvertisingIdentifierMonthResetCount;
-(int)StringAsConnectionType:(id)arg1 ;
-(BOOL)hasToroIDString;
-(BOOL)isOnInternationalDataRoaming;
-(BOOL)hasDeviceRequestID;
-(int)accountStateAtIndex:(unsigned long long)arg1 ;
-(NSString *)carrierMNC;
-(void)setHorizontalAccuracy:(float)arg1 ;
-(id)targetingAtIndex:(unsigned long long)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)administrativeArea;
-(void)setCurrentCarrierMNC:(NSString *)arg1 ;
-(void)setAlgoId:(NSString *)arg1 ;
-(void)setLocaleIdentifier:(NSString *)arg1 ;
-(NSString *)iAdIDString;
-(NSString *)storeFrontLanguageLocaleIdentifier;
-(void)clearAccountStates;
-(BOOL)hasCurrentCarrierMNC;
-(id)runStateAsString:(int)arg1 ;
-(void)setDeviceModes:(int*)arg1 count:(unsigned long long)arg2 ;
-(void)setHasHorizontalAccuracy:(BOOL)arg1 ;
-(id)accountStatesAsString:(int)arg1 ;
-(void)setToroIDString:(NSString *)arg1 ;
-(void)addAccountState:(int)arg1 ;
-(int*)accountStates;
-(void)setAppID:(NSString *)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)dealloc;
-(void)setTimezone:(float)arg1 ;
-(void)addTargeting:(id)arg1 ;
-(NSString *)dPIDString;
-(BOOL)hasDPIDString;
-(unsigned long long)deviceModesCount;
-(void)setHasAppsRank:(BOOL)arg1 ;
@end

