/*
* Generated on Monday, March 1, 2021 at 2:32:25 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(NSString *)name;
-(NSString *)localizedDescription;
-(void)setName:(NSString *)arg1 ;
-(id)groupIdentifier;
-(void)setLocalizedDescription:(NSString *)arg1 ;
-(NSNumber *)amount;
-(void)setAmount:(NSNumber *)arg1 ;
-(id)encodedClassName;
@end

