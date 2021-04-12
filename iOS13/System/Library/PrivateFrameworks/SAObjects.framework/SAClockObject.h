/*
* Generated on Monday, March 1, 2021 at 2:32:25 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(NSString *)countryCode;
-(id)groupIdentifier;
-(void)setCountryName:(NSString *)arg1 ;
-(NSString *)countryName;
-(NSString *)unlocalizedCountryName;
-(void)setUnlocalizedCountryName:(NSString *)arg1 ;
-(void)setCountryCode:(NSString *)arg1 ;
-(id)encodedClassName;
-(NSString *)cityName;
-(void)setCityName:(NSString *)arg1 ;
-(NSNumber *)alCityId;
-(NSString *)unlocalizedCityName;
-(NSString *)timezoneId;
-(void)setTimezoneId:(NSString *)arg1 ;
-(void)setAlCityId:(NSNumber *)arg1 ;
-(void)setUnlocalizedCityName:(NSString *)arg1 ;
@end

