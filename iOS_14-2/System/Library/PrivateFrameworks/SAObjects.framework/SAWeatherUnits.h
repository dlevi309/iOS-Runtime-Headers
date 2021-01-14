/*
* Generated on Thursday, January 14, 2021 at 2:23:21 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
*/

#import <SAObjects/AceObject.h>
#import <SAObjects/SAAceSerializable.h>

@class NSString;

@interface SAWeatherUnits : AceObject <SAAceSerializable>

@property (nonatomic,copy) NSString * distanceUnits; 
@property (nonatomic,copy) NSString * precipitationUnits; 
@property (nonatomic,copy) NSString * pressureUnits; 
@property (nonatomic,copy) NSString * speedUnits; 
@property (nonatomic,copy) NSString * temperatureUnits; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)units;
+(id)unitsWithDictionary:(id)arg1 context:(id)arg2 ;
-(NSString *)distanceUnits;
-(NSString *)precipitationUnits;
-(id)groupIdentifier;
-(void)setPrecipitationUnits:(NSString *)arg1 ;
-(NSString *)pressureUnits;
-(void)setPressureUnits:(NSString *)arg1 ;
-(NSString *)speedUnits;
-(void)setSpeedUnits:(NSString *)arg1 ;
-(NSString *)temperatureUnits;
-(void)setTemperatureUnits:(NSString *)arg1 ;
-(id)encodedClassName;
-(void)setDistanceUnits:(NSString *)arg1 ;
@end

