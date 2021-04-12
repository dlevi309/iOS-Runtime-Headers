/*
* Generated on Thursday, January 14, 2021 at 2:23:37 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NewsTransport.framework/NewsTransport
*/

#import <NewsTransport/NewsTransport-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSData;

@interface NTPBTodayWidgetConfig : PBCodable <NSCopying> {

	long long _minimumArticleExposureDurationToBePreseen;
	double _prerollLoadingTimeout;
	long long _widgetSystemReloadInterval;
	long long _widgetSystemReloadJitterMax;
	NSString* _audioIndicatorColor;
	NSString* _backgroundColorDark;
	NSString* _backgroundColorLight;
	NSData* _externalAnalyticsConfigurationsData;
	unsigned _minimumNumberOfTimesPreseenToBeSeen;
	BOOL _contentPrefetchEnabled;
	SCD_Struct_NT9 _has;

}

@property (assign,nonatomic) BOOL hasMinimumArticleExposureDurationToBePreseen; 
@property (assign,nonatomic) long long minimumArticleExposureDurationToBePreseen;              //@synthesize minimumArticleExposureDurationToBePreseen=_minimumArticleExposureDurationToBePreseen - In the implementation block
@property (assign,nonatomic) BOOL hasMinimumNumberOfTimesPreseenToBeSeen; 
@property (assign,nonatomic) unsigned minimumNumberOfTimesPreseenToBeSeen;                     //@synthesize minimumNumberOfTimesPreseenToBeSeen=_minimumNumberOfTimesPreseenToBeSeen - In the implementation block
@property (assign,nonatomic) BOOL hasPrerollLoadingTimeout; 
@property (assign,nonatomic) double prerollLoadingTimeout;                                     //@synthesize prerollLoadingTimeout=_prerollLoadingTimeout - In the implementation block
@property (nonatomic,readonly) BOOL hasExternalAnalyticsConfigurationsData; 
@property (nonatomic,retain) NSData * externalAnalyticsConfigurationsData;                     //@synthesize externalAnalyticsConfigurationsData=_externalAnalyticsConfigurationsData - In the implementation block
@property (nonatomic,readonly) BOOL hasBackgroundColorLight; 
@property (nonatomic,retain) NSString * backgroundColorLight;                                  //@synthesize backgroundColorLight=_backgroundColorLight - In the implementation block
@property (nonatomic,readonly) BOOL hasBackgroundColorDark; 
@property (nonatomic,retain) NSString * backgroundColorDark;                                   //@synthesize backgroundColorDark=_backgroundColorDark - In the implementation block
@property (assign,nonatomic) BOOL hasContentPrefetchEnabled; 
@property (assign,nonatomic) BOOL contentPrefetchEnabled;                                      //@synthesize contentPrefetchEnabled=_contentPrefetchEnabled - In the implementation block
@property (nonatomic,readonly) BOOL hasAudioIndicatorColor; 
@property (nonatomic,retain) NSString * audioIndicatorColor;                                   //@synthesize audioIndicatorColor=_audioIndicatorColor - In the implementation block
@property (assign,nonatomic) BOOL hasWidgetSystemReloadInterval; 
@property (assign,nonatomic) long long widgetSystemReloadInterval;                             //@synthesize widgetSystemReloadInterval=_widgetSystemReloadInterval - In the implementation block
@property (assign,nonatomic) BOOL hasWidgetSystemReloadJitterMax; 
@property (assign,nonatomic) long long widgetSystemReloadJitterMax;                            //@synthesize widgetSystemReloadJitterMax=_widgetSystemReloadJitterMax - In the implementation block
-(id)dictionaryRepresentation;
-(long long)minimumArticleExposureDurationToBePreseen;
-(long long)widgetSystemReloadInterval;
-(void)mergeFrom:(id)arg1 ;
-(unsigned)minimumNumberOfTimesPreseenToBeSeen;
-(BOOL)hasBackgroundColorLight;
-(BOOL)hasBackgroundColorDark;
-(BOOL)hasAudioIndicatorColor;
-(void)setWidgetSystemReloadInterval:(long long)arg1 ;
-(void)setHasWidgetSystemReloadInterval:(BOOL)arg1 ;
-(BOOL)hasWidgetSystemReloadInterval;
-(void)setWidgetSystemReloadJitterMax:(long long)arg1 ;
-(void)setHasWidgetSystemReloadJitterMax:(BOOL)arg1 ;
-(BOOL)hasWidgetSystemReloadJitterMax;
-(NSString *)backgroundColorLight;
-(NSString *)backgroundColorDark;
-(NSString *)audioIndicatorColor;
-(void)setPrerollLoadingTimeout:(double)arg1 ;
-(id)description;
-(void)setHasPrerollLoadingTimeout:(BOOL)arg1 ;
-(BOOL)hasPrerollLoadingTimeout;
-(double)prerollLoadingTimeout;
-(long long)widgetSystemReloadJitterMax;
-(void)setBackgroundColorDark:(NSString *)arg1 ;
-(void)setAudioIndicatorColor:(NSString *)arg1 ;
-(void)setBackgroundColorLight:(NSString *)arg1 ;
-(void)setExternalAnalyticsConfigurationsData:(NSData *)arg1 ;
-(void)setMinimumArticleExposureDurationToBePreseen:(long long)arg1 ;
-(void)setHasMinimumArticleExposureDurationToBePreseen:(BOOL)arg1 ;
-(BOOL)hasMinimumArticleExposureDurationToBePreseen;
-(BOOL)contentPrefetchEnabled;
-(unsigned long long)hash;
-(void)setMinimumNumberOfTimesPreseenToBeSeen:(unsigned)arg1 ;
-(void)setHasMinimumNumberOfTimesPreseenToBeSeen:(BOOL)arg1 ;
-(BOOL)hasMinimumNumberOfTimesPreseenToBeSeen;
-(BOOL)hasExternalAnalyticsConfigurationsData;
-(void)setContentPrefetchEnabled:(BOOL)arg1 ;
-(void)setHasContentPrefetchEnabled:(BOOL)arg1 ;
-(BOOL)hasContentPrefetchEnabled;
-(NSData *)externalAnalyticsConfigurationsData;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

