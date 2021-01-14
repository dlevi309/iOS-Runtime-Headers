/*
* Generated on Thursday, January 14, 2021 at 2:23:23 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
*/

#import <SAObjects/SABaseCommand.h>
#import <SAObjects/SAServerBoundCommand.h>

@class NSArray, NSNumber, NSString, SAMediaContentRatingRestrictions, SAVoice, SAWatchData;

@interface SASetAssistantData : SABaseCommand <SAServerBoundCommand>

@property (nonatomic,copy) NSArray * abSources; 
@property (nonatomic,copy) NSNumber * allowUserGeneratedContent; 
@property (nonatomic,copy) NSString * anchor; 
@property (assign,nonatomic) BOOL censorSpeech; 
@property (nonatomic,copy) NSString * countryCode; 
@property (nonatomic,copy) NSNumber * debugFlags; 
@property (nonatomic,copy) NSArray * deviceCapabilities; 
@property (nonatomic,copy) NSString * deviceColor; 
@property (nonatomic,copy) NSString * deviceEnclosure; 
@property (nonatomic,copy) NSString * deviceVersion; 
@property (nonatomic,copy) NSString * firstName; 
@property (nonatomic,copy) NSString * fullStorefrontId; 
@property (assign,nonatomic) BOOL handsFree; 
@property (nonatomic,copy) NSNumber * holdToTalkThresholdInMilliseconds; 
@property (assign,nonatomic) BOOL inRetailStoreDemoMode; 
@property (nonatomic,copy) NSString * lastName; 
@property (nonatomic,copy) NSArray * meCards; 
@property (nonatomic,retain) SAMediaContentRatingRestrictions * mediaContentRatingRestrictions; 
@property (assign,nonatomic) BOOL mediaPlayerExplicitContentDisallowed; 
@property (nonatomic,copy) NSString * osVersion; 
@property (nonatomic,copy) NSArray * parentalRestrictions; 
@property (nonatomic,copy) NSString * preferredLanguage; 
@property (nonatomic,copy) NSString * region; 
@property (nonatomic,copy) NSNumber * storefront; 
@property (nonatomic,copy) NSString * temperatureUnit; 
@property (nonatomic,copy) NSString * timeZoneId; 
@property (nonatomic,retain) SAVoice * ttsVoice; 
@property (nonatomic,copy) NSNumber * twentyFourHourTimeDisplay; 
@property (nonatomic,copy) NSNumber * uiScale; 
@property (nonatomic,copy) NSString * userInterfaceIdiom; 
@property (assign,nonatomic) BOOL voiceOver; 
@property (nonatomic,copy) NSNumber * voiceTriggerEnabled; 
@property (nonatomic,retain) SAWatchData * watchData; 
@property (nonatomic,copy) NSString * aceId; 
@property (nonatomic,copy) NSString * refId; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)setAssistantData;
+(id)setAssistantDataWithDictionary:(id)arg1 context:(id)arg2 ;
-(NSString *)deviceVersion;
-(void)setCountryCode:(NSString *)arg1 ;
-(void)setOsVersion:(NSString *)arg1 ;
-(void)setTemperatureUnit:(NSString *)arg1 ;
-(NSString *)firstName;
-(NSString *)userInterfaceIdiom;
-(NSString *)preferredLanguage;
-(NSString *)lastName;
-(NSNumber *)storefront;
-(NSString *)temperatureUnit;
-(void)setUserInterfaceIdiom:(NSString *)arg1 ;
-(void)setStorefront:(NSNumber *)arg1 ;
-(void)setTtsVoice:(SAVoice *)arg1 ;
-(NSString *)region;
-(NSNumber *)debugFlags;
-(NSString *)countryCode;
-(void)setRegion:(NSString *)arg1 ;
-(void)setMediaPlayerExplicitContentDisallowed:(BOOL)arg1 ;
-(id)groupIdentifier;
-(void)setLastName:(NSString *)arg1 ;
-(void)setFirstName:(NSString *)arg1 ;
-(id)encodedClassName;
-(NSNumber *)voiceTriggerEnabled;
-(BOOL)inRetailStoreDemoMode;
-(BOOL)requiresResponse;
-(NSString *)fullStorefrontId;
-(void)setCensorSpeech:(BOOL)arg1 ;
-(void)setFullStorefrontId:(NSString *)arg1 ;
-(NSString *)osVersion;
-(BOOL)handsFree;
-(void)setTwentyFourHourTimeDisplay:(NSNumber *)arg1 ;
-(void)setAllowUserGeneratedContent:(NSNumber *)arg1 ;
-(BOOL)voiceOver;
-(SAWatchData *)watchData;
-(SAVoice *)ttsVoice;
-(NSArray *)parentalRestrictions;
-(void)setMediaContentRatingRestrictions:(SAMediaContentRatingRestrictions *)arg1 ;
-(void)setDeviceColor:(NSString *)arg1 ;
-(NSNumber *)allowUserGeneratedContent;
-(NSString *)deviceColor;
-(SAMediaContentRatingRestrictions *)mediaContentRatingRestrictions;
-(void)setTimeZoneId:(NSString *)arg1 ;
-(NSString *)deviceEnclosure;
-(void)setInRetailStoreDemoMode:(BOOL)arg1 ;
-(void)setVoiceOver:(BOOL)arg1 ;
-(BOOL)censorSpeech;
-(void)setDeviceCapabilities:(NSArray *)arg1 ;
-(NSArray *)deviceCapabilities;
-(void)setDeviceEnclosure:(NSString *)arg1 ;
-(void)setUiScale:(NSNumber *)arg1 ;
-(NSString *)timeZoneId;
-(NSArray *)abSources;
-(NSString *)anchor;
-(void)setHoldToTalkThresholdInMilliseconds:(NSNumber *)arg1 ;
-(void)setDebugFlags:(NSNumber *)arg1 ;
-(NSArray *)meCards;
-(void)setAnchor:(NSString *)arg1 ;
-(void)setParentalRestrictions:(NSArray *)arg1 ;
-(void)setHandsFree:(BOOL)arg1 ;
-(void)setPreferredLanguage:(NSString *)arg1 ;
-(NSNumber *)uiScale;
-(NSNumber *)twentyFourHourTimeDisplay;
-(void)setWatchData:(SAWatchData *)arg1 ;
-(NSNumber *)holdToTalkThresholdInMilliseconds;
-(BOOL)mediaPlayerExplicitContentDisallowed;
-(void)setMeCards:(NSArray *)arg1 ;
-(void)setAbSources:(NSArray *)arg1 ;
-(void)setDeviceVersion:(NSString *)arg1 ;
-(void)setVoiceTriggerEnabled:(NSNumber *)arg1 ;
@end

