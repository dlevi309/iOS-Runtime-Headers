/*
* Generated on Monday, March 1, 2021 at 2:32:40 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithConfigDictionary:(id)arg1 ;
-(NSDictionary *)configDictionary;
-(long long)forYouForegroundMinimumUpdateInterval;
-(long long)forYouBackgroundMinimumUpdateInterval;
-(double)parsecPopulationFloor;
-(double)parsecPopulationCeiling;
-(long long)minimumArticleExposureDurationToBePreseen;
-(unsigned)minimumNumberOfTimesPreseenToBeSeen;
-(void)setConfigDictionary:(NSDictionary *)arg1 ;
-(NTPBWidgetConfig *)pbWidgetConfig;
-(long long)foregroundMinimumUpdateInterval;
-(long long)backgroundMinimumUpdateInterval;
-(long long)articleListForegroundMinimumUpdateInterval;
-(long long)articleListBackgroundMinimumUpdateInterval;
-(void)setPbWidgetConfig:(NTPBWidgetConfig *)arg1 ;
-(id)initWithWidgetConfig:(id)arg1 ;
@end

