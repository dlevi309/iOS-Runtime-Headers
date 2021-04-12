/*
* Generated on Monday, March 1, 2021 at 2:33:47 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AppPredictionInternal.framework/AppPredictionInternal
*/

#import <AppPredictionInternal/AppPredictionInternal-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class ATXNotificationsPBAggregateData, ATXNotificationsPBSetting, ATXNotificationsPBUsageData;

@interface ATXNotificationsPBSettingLog : PBCodable <NSCopying> {

	ATXNotificationsPBAggregateData* _aggregate;
	ATXNotificationsPBSetting* _setting;
	ATXNotificationsPBUsageData* _usage;

}

@property (nonatomic,readonly) BOOL hasSetting; 
@property (nonatomic,retain) ATXNotificationsPBSetting * setting;                      //@synthesize setting=_setting - In the implementation block
@property (nonatomic,readonly) BOOL hasUsage; 
@property (nonatomic,retain) ATXNotificationsPBUsageData * usage;                      //@synthesize usage=_usage - In the implementation block
@property (nonatomic,readonly) BOOL hasAggregate; 
@property (nonatomic,retain) ATXNotificationsPBAggregateData * aggregate;              //@synthesize aggregate=_aggregate - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(void)setUsage:(ATXNotificationsPBUsageData *)arg1 ;
-(ATXNotificationsPBUsageData *)usage;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(ATXNotificationsPBAggregateData *)aggregate;
-(void)setAggregate:(ATXNotificationsPBAggregateData *)arg1 ;
-(ATXNotificationsPBSetting *)setting;
-(BOOL)hasUsage;
-(void)setSetting:(ATXNotificationsPBSetting *)arg1 ;
-(BOOL)hasSetting;
-(BOOL)hasAggregate;
@end

