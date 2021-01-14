/*
* Generated on Thursday, January 14, 2021 at 2:23:22 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
*/

#import <SAObjects/AceObject.h>
#import <SAObjects/SAAceSerializable.h>

@class NSString, SAPerson, NSArray, SAVoice, NSNumber;

@interface SAHomeMemberSettings : AceObject <SAAceSerializable>

@property (nonatomic,copy) NSString * countryCode; 
@property (nonatomic,retain) SAPerson * meCard; 
@property (nonatomic,copy) NSArray * parentalRestrictions; 
@property (nonatomic,copy) NSString * preferredLanguage; 
@property (nonatomic,copy) NSString * region; 
@property (nonatomic,copy) NSString * temperatureUnit; 
@property (nonatomic,retain) SAVoice * ttsVoice; 
@property (nonatomic,copy) NSNumber * twentyFourHourTimeDisplay; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)homeMemberSettings;
+(id)homeMemberSettingsWithDictionary:(id)arg1 context:(id)arg2 ;
-(void)setCountryCode:(NSString *)arg1 ;
-(void)setTemperatureUnit:(NSString *)arg1 ;
-(NSString *)preferredLanguage;
-(NSString *)temperatureUnit;
-(void)setTtsVoice:(SAVoice *)arg1 ;
-(NSString *)region;
-(NSString *)countryCode;
-(void)setRegion:(NSString *)arg1 ;
-(id)groupIdentifier;
-(id)encodedClassName;
-(void)setMeCard:(SAPerson *)arg1 ;
-(void)setTwentyFourHourTimeDisplay:(NSNumber *)arg1 ;
-(SAPerson *)meCard;
-(SAVoice *)ttsVoice;
-(NSArray *)parentalRestrictions;
-(void)setParentalRestrictions:(NSArray *)arg1 ;
-(void)setPreferredLanguage:(NSString *)arg1 ;
-(NSNumber *)twentyFourHourTimeDisplay;
@end

