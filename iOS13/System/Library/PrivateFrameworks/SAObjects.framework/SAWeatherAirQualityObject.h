/*
* Generated on Monday, March 1, 2021 at 2:32:26 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)groupIdentifier;
-(NSString *)localizedCategoryName;
-(void)setLocalizedCategoryName:(NSString *)arg1 ;
-(id)encodedClassName;
-(long long)airQualityIndex;
-(void)setAirQualityIndex:(long long)arg1 ;
-(SAWeatherLocation *)airQualityLocation;
-(void)setAirQualityLocation:(SAWeatherLocation *)arg1 ;
-(NSString *)airQualityRatingCategory;
-(void)setAirQualityRatingCategory:(NSString *)arg1 ;
-(NSArray *)pollutants;
-(void)setPollutants:(NSArray *)arg1 ;
@end

