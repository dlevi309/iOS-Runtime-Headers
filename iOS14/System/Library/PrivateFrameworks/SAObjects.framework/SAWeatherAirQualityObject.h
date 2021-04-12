/*
* Generated on Thursday, January 14, 2021 at 2:23:22 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
*/

#import <SAObjects/SADomainObject.h>

@class SAWeatherLocation, NSString, NSArray;

@interface SAWeatherAirQualityObject : SADomainObject

@property (assign,nonatomic) long long airQualityIndex; 
@property (nonatomic,retain) SAWeatherLocation * airQualityLocation; 
@property (nonatomic,copy) NSString * airQualityRatingCategory; 
@property (nonatomic,copy) NSString * localizedCategoryName; 
@property (nonatomic,copy) NSArray * pollutants; 
+(id)airQualityObject;
+(id)airQualityObjectWithDictionary:(id)arg1 context:(id)arg2 ;
-(NSArray *)pollutants;
-(id)groupIdentifier;
-(id)encodedClassName;
-(long long)airQualityIndex;
-(NSString *)localizedCategoryName;
-(void)setLocalizedCategoryName:(NSString *)arg1 ;
-(void)setPollutants:(NSArray *)arg1 ;
-(void)setAirQualityIndex:(long long)arg1 ;
-(SAWeatherLocation *)airQualityLocation;
-(void)setAirQualityLocation:(SAWeatherLocation *)arg1 ;
-(NSString *)airQualityRatingCategory;
-(void)setAirQualityRatingCategory:(NSString *)arg1 ;
@end

