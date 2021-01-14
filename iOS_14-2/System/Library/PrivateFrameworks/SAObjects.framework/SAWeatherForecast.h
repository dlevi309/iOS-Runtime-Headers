/*
* Generated on Thursday, January 14, 2021 at 2:23:21 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
*/

#import <SAObjects/AceObject.h>
#import <SAObjects/SAAceSerializable.h>

@class NSNumber, SAWeatherCondition, NSString;

@interface SAWeatherForecast : AceObject <SAAceSerializable>

@property (nonatomic,copy) NSNumber * chanceOfPrecipitation; 
@property (nonatomic,retain) SAWeatherCondition * condition; 
@property (nonatomic,copy) NSNumber * isUserRequested; 
@property (nonatomic,copy) NSNumber * timeIndex; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)forecast;
+(id)forecastWithDictionary:(id)arg1 context:(id)arg2 ;
-(void)setCondition:(SAWeatherCondition *)arg1 ;
-(id)groupIdentifier;
-(id)encodedClassName;
-(NSNumber *)chanceOfPrecipitation;
-(void)setIsUserRequested:(NSNumber *)arg1 ;
-(void)setChanceOfPrecipitation:(NSNumber *)arg1 ;
-(SAWeatherCondition *)condition;
-(NSNumber *)isUserRequested;
-(NSNumber *)timeIndex;
-(void)setTimeIndex:(NSNumber *)arg1 ;
@end

