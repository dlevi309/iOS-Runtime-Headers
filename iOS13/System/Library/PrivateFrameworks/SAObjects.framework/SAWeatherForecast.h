/*
* Generated on Monday, March 1, 2021 at 2:32:25 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(SAWeatherCondition *)condition;
-(id)groupIdentifier;
-(void)setCondition:(SAWeatherCondition *)arg1 ;
-(NSNumber *)chanceOfPrecipitation;
-(void)setChanceOfPrecipitation:(NSNumber *)arg1 ;
-(id)encodedClassName;
-(NSNumber *)isUserRequested;
-(void)setIsUserRequested:(NSNumber *)arg1 ;
-(NSNumber *)timeIndex;
-(void)setTimeIndex:(NSNumber *)arg1 ;
@end

