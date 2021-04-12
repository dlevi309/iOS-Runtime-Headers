/*
* Generated on Monday, March 1, 2021 at 2:32:49 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NewsTransport.framework/NewsTransport
*/

#import <NewsTransport/NewsTransport-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSData;

@interface NTPBTodayWidgetConfig : PBCodable <NSCopying> {

	long long _minimumArticleExposureDurationToBePreseen;
	double _prerollLoadingTimeout;
	NSData* _externalAnalyticsConfigurationsData;
	unsigned _minimumNumberOfTimesPreseenToBeSeen;
	NSData* _videoGroupsConfigData;
	SCD_Struct_NT4 _has;

}

@property (assign,nonatomic) BOOL hasMinimumArticleExposureDurationToBePreseen; 
@property (assign,nonatomic) long long minimumArticleExposureDurationToBePreseen;              //@synthesize minimumArticleExposureDurationToBePreseen=_minimumArticleExposureDurationToBePreseen - In the implementation block
@property (assign,nonatomic) BOOL hasMinimumNumberOfTimesPreseenToBeSeen; 
@property (assign,nonatomic) unsigned minimumNumberOfTimesPreseenToBeSeen;                     //@synthesize minimumNumberOfTimesPreseenToBeSeen=_minimumNumberOfTimesPreseenToBeSeen - In the implementation block
@property (assign,nonatomic) BOOL hasPrerollLoadingTimeout; 
@property (assign,nonatomic) double prerollLoadingTimeout;                                     //@synthesize prerollLoadingTimeout=_prerollLoadingTimeout - In the implementation block
@property (nonatomic,readonly) BOOL hasExternalAnalyticsConfigurationsData; 
@property (nonatomic,retain) NSData * externalAnalyticsConfigurationsData;                     //@synthesize externalAnalyticsConfigurationsData=_externalAnalyticsConfigurationsData - In the implementation block
@property (nonatomic,readonly) BOOL hasVideoGroupsConfigData; 
@property (nonatomic,retain) NSData * videoGroupsConfigData;                                   //@synthesize videoGroupsConfigData=_videoGroupsConfigData - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(long long)minimumArticleExposureDurationToBePreseen;
-(unsigned)minimumNumberOfTimesPreseenToBeSeen;
-(double)prerollLoadingTimeout;
-(void)setPrerollLoadingTimeout:(double)arg1 ;
-(void)setHasPrerollLoadingTimeout:(BOOL)arg1 ;
-(BOOL)hasPrerollLoadingTimeout;
-(void)setExternalAnalyticsConfigurationsData:(NSData *)arg1 ;
-(void)setVideoGroupsConfigData:(NSData *)arg1 ;
-(void)setMinimumArticleExposureDurationToBePreseen:(long long)arg1 ;
-(void)setHasMinimumArticleExposureDurationToBePreseen:(BOOL)arg1 ;
-(BOOL)hasMinimumArticleExposureDurationToBePreseen;
-(void)setMinimumNumberOfTimesPreseenToBeSeen:(unsigned)arg1 ;
-(void)setHasMinimumNumberOfTimesPreseenToBeSeen:(BOOL)arg1 ;
-(BOOL)hasMinimumNumberOfTimesPreseenToBeSeen;
-(BOOL)hasExternalAnalyticsConfigurationsData;
-(BOOL)hasVideoGroupsConfigData;
-(NSData *)externalAnalyticsConfigurationsData;
-(NSData *)videoGroupsConfigData;
@end

