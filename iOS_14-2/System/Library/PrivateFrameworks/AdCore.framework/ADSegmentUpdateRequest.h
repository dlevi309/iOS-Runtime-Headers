/*
* Generated on Thursday, January 14, 2021 at 2:24:45 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AdCore.framework/AdCore
*/

#import <AdCore/AdCore-Structs.h>
#import <ProtocolBuffer/PBRequest.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSData;

@interface ADSegmentUpdateRequest : PBRequest <NSCopying> {

	SCD_Struct_AD7* _accountStates;
	SCD_Struct_AD7* _accountTypes;
	SCD_Struct_AD7* _deviceModes;
	double _iTunesRefreshTime;
	double _updateSentTime;
	NSString* _advertisingIdentifier;
	int _advertisingIdentifierMonthResetCount;
	NSData* _dPID;
	NSData* _iAdID;
	NSString* _localeIdentifier;
	NSString* _osVersionAndBuild;
	NSString* _segmentInfo;
	float _timezone;
	BOOL _isFirstPartyIdentifier;
	SCD_Struct_AD8 _has;

}

@property (nonatomic,readonly) BOOL hasIAdID; 
@property (nonatomic,retain) NSData * iAdID;                                            //@synthesize iAdID=_iAdID - In the implementation block
@property (nonatomic,readonly) BOOL hasSegmentInfo; 
@property (nonatomic,retain) NSString * segmentInfo;                                    //@synthesize segmentInfo=_segmentInfo - In the implementation block
@property (assign,nonatomic) BOOL hasIsFirstPartyIdentifier; 
@property (assign,nonatomic) BOOL isFirstPartyIdentifier;                               //@synthesize isFirstPartyIdentifier=_isFirstPartyIdentifier - In the implementation block
@property (nonatomic,readonly) BOOL hasAdvertisingIdentifier; 
@property (nonatomic,retain) NSString * advertisingIdentifier;                          //@synthesize advertisingIdentifier=_advertisingIdentifier - In the implementation block
@property (assign,nonatomic) BOOL hasITunesRefreshTime; 
@property (assign,nonatomic) double iTunesRefreshTime;                                  //@synthesize iTunesRefreshTime=_iTunesRefreshTime - In the implementation block
@property (assign,nonatomic) BOOL hasUpdateSentTime; 
@property (assign,nonatomic) double updateSentTime;                                     //@synthesize updateSentTime=_updateSentTime - In the implementation block
@property (assign,nonatomic) BOOL hasTimezone; 
@property (assign,nonatomic) float timezone;                                            //@synthesize timezone=_timezone - In the implementation block
@property (assign,nonatomic) BOOL hasAdvertisingIdentifierMonthResetCount; 
@property (assign,nonatomic) int advertisingIdentifierMonthResetCount;                  //@synthesize advertisingIdentifierMonthResetCount=_advertisingIdentifierMonthResetCount - In the implementation block
@property (nonatomic,readonly) BOOL hasOsVersionAndBuild; 
@property (nonatomic,retain) NSString * osVersionAndBuild;                              //@synthesize osVersionAndBuild=_osVersionAndBuild - In the implementation block
@property (nonatomic,readonly) BOOL hasLocaleIdentifier; 
@property (nonatomic,retain) NSString * localeIdentifier;                               //@synthesize localeIdentifier=_localeIdentifier - In the implementation block
@property (nonatomic,readonly) BOOL hasDPID; 
@property (nonatomic,retain) NSData * dPID;                                             //@synthesize dPID=_dPID - In the implementation block
@property (nonatomic,readonly) unsigned long long deviceModesCount; 
@property (nonatomic,readonly) int* deviceModes; 
@property (nonatomic,readonly) unsigned long long accountTypesCount; 
@property (nonatomic,readonly) int* accountTypes; 
@property (nonatomic,readonly) unsigned long long accountStatesCount; 
@property (nonatomic,readonly) int* accountStates; 
+(id)options;
-(NSString *)localeIdentifier;
-(id)dictionaryRepresentation;
-(float)timezone;
-(void)setAdvertisingIdentifierMonthResetCount:(int)arg1 ;
-(BOOL)hasOsVersionAndBuild;
-(NSData *)dPID;
-(void)clearDeviceModes;
-(void)setAccountStates:(int*)arg1 count:(unsigned long long)arg2 ;
-(NSString *)advertisingIdentifier;
-(NSData *)iAdID;
-(int)StringAsAccountStates:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)clearAccountTypes;
-(BOOL)hasLocaleIdentifier;
-(int)advertisingIdentifierMonthResetCount;
-(int*)accountTypes;
-(int)accountTypeAtIndex:(unsigned long long)arg1 ;
-(int)StringAsDeviceModes:(id)arg1 ;
-(id)description;
-(unsigned long long)accountTypesCount;
-(void)setOsVersionAndBuild:(NSString *)arg1 ;
-(void)setHasTimezone:(BOOL)arg1 ;
-(BOOL)hasTimezone;
-(id)accountTypesAsString:(int)arg1 ;
-(void)addAccountType:(int)arg1 ;
-(BOOL)hasDPID;
-(int)deviceModeAtIndex:(unsigned long long)arg1 ;
-(void)setHasAdvertisingIdentifierMonthResetCount:(BOOL)arg1 ;
-(unsigned long long)hash;
-(NSString *)osVersionAndBuild;
-(unsigned long long)accountStatesCount;
-(BOOL)readFrom:(id)arg1 ;
-(void)addDeviceMode:(int)arg1 ;
-(id)deviceModesAsString:(int)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setAccountTypes:(int*)arg1 count:(unsigned long long)arg2 ;
-(int)StringAsAccountTypes:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(int*)deviceModes;
-(BOOL)hasAdvertisingIdentifierMonthResetCount;
-(int)accountStateAtIndex:(unsigned long long)arg1 ;
-(void)setDPID:(NSData *)arg1 ;
-(BOOL)hasIAdID;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setLocaleIdentifier:(NSString *)arg1 ;
-(void)clearAccountStates;
-(void)setDeviceModes:(int*)arg1 count:(unsigned long long)arg2 ;
-(id)accountStatesAsString:(int)arg1 ;
-(void)addAccountState:(int)arg1 ;
-(int*)accountStates;
-(BOOL)isEqual:(id)arg1 ;
-(void)dealloc;
-(void)setTimezone:(float)arg1 ;
-(unsigned long long)deviceModesCount;
-(void)setIAdID:(NSData *)arg1 ;
-(void)setSegmentInfo:(NSString *)arg1 ;
-(void)setAdvertisingIdentifier:(NSString *)arg1 ;
-(BOOL)hasSegmentInfo;
-(void)setIsFirstPartyIdentifier:(BOOL)arg1 ;
-(void)setHasIsFirstPartyIdentifier:(BOOL)arg1 ;
-(BOOL)hasIsFirstPartyIdentifier;
-(BOOL)hasAdvertisingIdentifier;
-(void)setITunesRefreshTime:(double)arg1 ;
-(void)setHasITunesRefreshTime:(BOOL)arg1 ;
-(BOOL)hasITunesRefreshTime;
-(void)setUpdateSentTime:(double)arg1 ;
-(void)setHasUpdateSentTime:(BOOL)arg1 ;
-(BOOL)hasUpdateSentTime;
-(NSString *)segmentInfo;
-(BOOL)isFirstPartyIdentifier;
-(double)iTunesRefreshTime;
-(double)updateSentTime;
@end

