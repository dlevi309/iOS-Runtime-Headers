/*
* Generated on Thursday, January 14, 2021 at 2:23:20 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
*/

#import <SAObjects/SADomainCommand.h>

@class NSNumber, NSString, NSURL;

@interface SAClockSearch : SADomainCommand

@property (nonatomic,copy) NSNumber * alCityId; 
@property (nonatomic,copy) NSString * countryCode; 
@property (nonatomic,copy) NSURL * identifier; 
@property (nonatomic,copy) NSString * unlocalizedCityName; 
@property (nonatomic,copy) NSString * unlocalizedCountryName; 
+(id)search;
+(id)searchWithDictionary:(id)arg1 context:(id)arg2 ;
-(void)setCountryCode:(NSString *)arg1 ;
-(NSString *)countryCode;
-(id)groupIdentifier;
-(NSString *)unlocalizedCityName;
-(id)encodedClassName;
-(BOOL)requiresResponse;
-(void)setAlCityId:(NSNumber *)arg1 ;
-(void)setUnlocalizedCityName:(NSString *)arg1 ;
-(NSNumber *)alCityId;
-(void)setUnlocalizedCountryName:(NSString *)arg1 ;
-(void)setIdentifier:(NSURL *)arg1 ;
-(NSURL *)identifier;
-(NSString *)unlocalizedCountryName;
@end

