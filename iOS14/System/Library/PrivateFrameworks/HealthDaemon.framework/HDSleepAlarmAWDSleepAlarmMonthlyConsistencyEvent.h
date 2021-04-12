/*
* Generated on Thursday, January 14, 2021 at 2:25:14 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
*/

#import <HealthDaemon/HealthDaemon-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class HDSleepAlarmAWDSleepAlarmStatistics, NSString;

@interface HDSleepAlarmAWDSleepAlarmMonthlyConsistencyEvent : PBCodable <NSCopying> {

	long long _bedtimeAlarmNightCount;
	long long _bedtimeChangesCount;
	long long _thirdPartySleepTrackerNightCount;
	unsigned long long _timestamp;
	HDSleepAlarmAWDSleepAlarmStatistics* _bedtimeChangesMinutesStatistics;
	HDSleepAlarmAWDSleepAlarmStatistics* _bedtimeCorrectionMinutesStatistics;
	NSString* _thirdPartyBundleIdentifier;
	NSString* _thirdPartyDeviceManufacturer;
	NSString* _thirdPartyDeviceModel;
	SCD_Struct_HD10 _has;

}

@property (assign,nonatomic) BOOL hasTimestamp; 
@property (assign,nonatomic) unsigned long long timestamp;                                                          //@synthesize timestamp=_timestamp - In the implementation block
@property (assign,nonatomic) BOOL hasBedtimeAlarmNightCount; 
@property (assign,nonatomic) long long bedtimeAlarmNightCount;                                                      //@synthesize bedtimeAlarmNightCount=_bedtimeAlarmNightCount - In the implementation block
@property (assign,nonatomic) BOOL hasBedtimeChangesCount; 
@property (assign,nonatomic) long long bedtimeChangesCount;                                                         //@synthesize bedtimeChangesCount=_bedtimeChangesCount - In the implementation block
@property (assign,nonatomic) BOOL hasThirdPartySleepTrackerNightCount; 
@property (assign,nonatomic) long long thirdPartySleepTrackerNightCount;                                            //@synthesize thirdPartySleepTrackerNightCount=_thirdPartySleepTrackerNightCount - In the implementation block
@property (nonatomic,readonly) BOOL hasThirdPartyBundleIdentifier; 
@property (nonatomic,retain) NSString * thirdPartyBundleIdentifier;                                                 //@synthesize thirdPartyBundleIdentifier=_thirdPartyBundleIdentifier - In the implementation block
@property (nonatomic,readonly) BOOL hasBedtimeCorrectionMinutesStatistics; 
@property (nonatomic,retain) HDSleepAlarmAWDSleepAlarmStatistics * bedtimeCorrectionMinutesStatistics;              //@synthesize bedtimeCorrectionMinutesStatistics=_bedtimeCorrectionMinutesStatistics - In the implementation block
@property (nonatomic,readonly) BOOL hasBedtimeChangesMinutesStatistics; 
@property (nonatomic,retain) HDSleepAlarmAWDSleepAlarmStatistics * bedtimeChangesMinutesStatistics;                 //@synthesize bedtimeChangesMinutesStatistics=_bedtimeChangesMinutesStatistics - In the implementation block
@property (nonatomic,readonly) BOOL hasThirdPartyDeviceModel; 
@property (nonatomic,retain) NSString * thirdPartyDeviceModel;                                                      //@synthesize thirdPartyDeviceModel=_thirdPartyDeviceModel - In the implementation block
@property (nonatomic,readonly) BOOL hasThirdPartyDeviceManufacturer; 
@property (nonatomic,retain) NSString * thirdPartyDeviceManufacturer;                                               //@synthesize thirdPartyDeviceManufacturer=_thirdPartyDeviceManufacturer - In the implementation block
-(id)dictionaryRepresentation;
-(unsigned long long)timestamp;
-(void)mergeFrom:(id)arg1 ;
-(id)description;
-(void)setHasTimestamp:(BOOL)arg1 ;
-(unsigned long long)hash;
-(BOOL)hasTimestamp;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setTimestamp:(unsigned long long)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)setThirdPartyBundleIdentifier:(NSString *)arg1 ;
-(void)setBedtimeCorrectionMinutesStatistics:(HDSleepAlarmAWDSleepAlarmStatistics *)arg1 ;
-(void)setBedtimeChangesMinutesStatistics:(HDSleepAlarmAWDSleepAlarmStatistics *)arg1 ;
-(void)setThirdPartyDeviceModel:(NSString *)arg1 ;
-(void)setThirdPartyDeviceManufacturer:(NSString *)arg1 ;
-(void)setBedtimeAlarmNightCount:(long long)arg1 ;
-(void)setHasBedtimeAlarmNightCount:(BOOL)arg1 ;
-(BOOL)hasBedtimeAlarmNightCount;
-(void)setBedtimeChangesCount:(long long)arg1 ;
-(void)setHasBedtimeChangesCount:(BOOL)arg1 ;
-(BOOL)hasBedtimeChangesCount;
-(void)setThirdPartySleepTrackerNightCount:(long long)arg1 ;
-(void)setHasThirdPartySleepTrackerNightCount:(BOOL)arg1 ;
-(BOOL)hasThirdPartySleepTrackerNightCount;
-(BOOL)hasThirdPartyBundleIdentifier;
-(BOOL)hasBedtimeCorrectionMinutesStatistics;
-(BOOL)hasBedtimeChangesMinutesStatistics;
-(BOOL)hasThirdPartyDeviceModel;
-(BOOL)hasThirdPartyDeviceManufacturer;
-(long long)bedtimeAlarmNightCount;
-(long long)bedtimeChangesCount;
-(long long)thirdPartySleepTrackerNightCount;
-(NSString *)thirdPartyBundleIdentifier;
-(HDSleepAlarmAWDSleepAlarmStatistics *)bedtimeCorrectionMinutesStatistics;
-(HDSleepAlarmAWDSleepAlarmStatistics *)bedtimeChangesMinutesStatistics;
-(NSString *)thirdPartyDeviceModel;
-(NSString *)thirdPartyDeviceManufacturer;
@end

