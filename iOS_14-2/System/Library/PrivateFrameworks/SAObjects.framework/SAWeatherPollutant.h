/*
* Generated on Thursday, January 14, 2021 at 2:23:21 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
*/

#import <SAObjects/SADomainObject.h>

@class NSNumber, NSString;

@interface SAWeatherPollutant : SADomainObject

@property (nonatomic,copy) NSNumber * amount; 
@property (nonatomic,copy) NSString * localizedDescription; 
@property (nonatomic,copy) NSString * name; 
+(id)pollutant;
+(id)pollutantWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(id)encodedClassName;
-(NSString *)name;
-(NSString *)localizedDescription;
-(void)setAmount:(NSNumber *)arg1 ;
-(NSNumber *)amount;
-(void)setLocalizedDescription:(NSString *)arg1 ;
-(void)setName:(NSString *)arg1 ;
@end

