/*
* Generated on Monday, March 1, 2021 at 2:32:26 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(NSString *)countryCode;
-(id)groupIdentifier;
-(NSString *)region;
-(void)setRegion:(NSString *)arg1 ;
-(void)setCountryCode:(NSString *)arg1 ;
-(NSString *)temperatureUnit;
-(void)setTemperatureUnit:(NSString *)arg1 ;
-(id)encodedClassName;
-(SAPerson *)meCard;
-(NSString *)preferredLanguage;
-(void)setPreferredLanguage:(NSString *)arg1 ;
-(void)setMeCard:(SAPerson *)arg1 ;
-(NSArray *)parentalRestrictions;
-(void)setParentalRestrictions:(NSArray *)arg1 ;
-(SAVoice *)ttsVoice;
-(void)setTtsVoice:(SAVoice *)arg1 ;
-(NSNumber *)twentyFourHourTimeDisplay;
-(void)setTwentyFourHourTimeDisplay:(NSNumber *)arg1 ;
@end

