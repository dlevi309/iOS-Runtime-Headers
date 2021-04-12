/*
* Generated on Thursday, January 14, 2021 at 2:21:51 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
*/

#import <NewsCore/NewsCore-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NTPBWidgetConfig, NSDictionary;

@interface FCWidgetConfig : NSObject <NSSecureCoding, NSCopying> {

	NTPBWidgetConfig* _pbWidgetConfig;
	NSDictionary* _configDictionary;

}

@property (nonatomic,copy) NTPBWidgetConfig * pbWidgetConfig;                                     //@synthesize pbWidgetConfig=_pbWidgetConfig - In the implementation block
@property (nonatomic,copy) NSDictionary * configDictionary;                                       //@synthesize configDictionary=_configDictionary - In the implementation block
@property (nonatomic,readonly) double parsecPopulationFloor; 
@property (nonatomic,readonly) double parsecPopulationCeiling; 
@property (nonatomic,readonly) long long foregroundMinimumUpdateInterval; 
@property (nonatomic,readonly) long long backgroundMinimumUpdateInterval; 
@property (nonatomic,readonly) long long articleListForegroundMinimumUpdateInterval; 
@property (nonatomic,readonly) long long articleListBackgroundMinimumUpdateInterval; 
@property (nonatomic,readonly) long long forYouForegroundMinimumUpdateInterval; 
@property (nonatomic,readonly) long long forYouBackgroundMinimumUpdateInterval; 
@property (nonatomic,readonly) long long minimumArticleExposureDurationToBePreseen; 
@property (nonatomic,readonly) unsigned minimumNumberOfTimesPreseenToBeSeen; 
@property (nonatomic,readonly) long long widgetSystemReloadInterval; 
@property (nonatomic,readonly) long long widgetSystemReloadJitterMax; 
@property (nonatomic,readonly) long long widgetSystemHoneymoonDuration; 
@property (nonatomic,readonly) long long widgetSystemReloadIntervalHoneymoon; 
@property (nonatomic,readonly) long long widgetSystemReloadJitterMaxHoneymoon; 
+(BOOL)supportsSecureCoding;
-(id)initWithConfigDictionary:(id)arg1 ;
-(long long)minimumArticleExposureDurationToBePreseen;
-(id)initWithWidgetConfig:(id)arg1 ;
-(double)parsecPopulationFloor;
-(long long)widgetSystemReloadIntervalHoneymoon;
-(long long)foregroundMinimumUpdateInterval;
-(long long)widgetSystemReloadInterval;
-(void)encodeWithCoder:(id)arg1 ;
-(unsigned)minimumNumberOfTimesPreseenToBeSeen;
-(NTPBWidgetConfig *)pbWidgetConfig;
-(long long)widgetSystemReloadJitterMax;
-(long long)forYouForegroundMinimumUpdateInterval;
-(double)parsecPopulationCeiling;
-(long long)articleListBackgroundMinimumUpdateInterval;
-(id)initWithCoder:(id)arg1 ;
-(NSDictionary *)configDictionary;
-(long long)widgetSystemHoneymoonDuration;
-(long long)backgroundMinimumUpdateInterval;
-(long long)widgetSystemReloadJitterMaxHoneymoon;
-(id)copyWithZone:(NSZone*)arg1 ;
-(long long)forYouBackgroundMinimumUpdateInterval;
-(void)setPbWidgetConfig:(NTPBWidgetConfig *)arg1 ;
-(long long)articleListForegroundMinimumUpdateInterval;
-(void)setConfigDictionary:(NSDictionary *)arg1 ;
@end

