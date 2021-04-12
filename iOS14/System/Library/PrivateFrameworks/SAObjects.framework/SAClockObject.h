/*
* Generated on Thursday, January 14, 2021 at 2:23:20 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
*/

#import <SAObjects/SADomainObject.h>

@class NSNumber, NSString;

@interface SAClockObject : SADomainObject

@property (nonatomic,copy) NSNumber * alCityId; 
@property (nonatomic,copy) NSString * cityName; 
@property (nonatomic,copy) NSString * countryCode; 
@property (nonatomic,copy) NSString * countryName; 
@property (nonatomic,copy) NSString * timezoneId; 
@property (nonatomic,copy) NSString * unlocalizedCityName; 
@property (nonatomic,copy) NSString * unlocalizedCountryName; 
+(id)object;
+(id)objectWithDictionary:(id)arg1 context:(id)arg2 ;
-(void)setCountryCode:(NSString *)arg1 ;
-(void)setCountryName:(NSString *)arg1 ;
-(NSString *)countryCode;
-(id)groupIdentifier;
-(NSString *)unlocalizedCityName;
-(NSString *)countryName;
-(id)encodedClassName;
-(void)setAlCityId:(NSNumber *)arg1 ;
-(void)setCityName:(NSString *)arg1 ;
-(void)setUnlocalizedCityName:(NSString *)arg1 ;
-(NSString *)timezoneId;
-(void)setTimezoneId:(NSString *)arg1 ;
-(NSNumber *)alCityId;
-(void)setUnlocalizedCountryName:(NSString *)arg1 ;
-(NSString *)cityName;
-(NSString *)unlocalizedCountryName;
@end

