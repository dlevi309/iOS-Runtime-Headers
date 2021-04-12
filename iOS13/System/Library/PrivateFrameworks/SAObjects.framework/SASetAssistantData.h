/*
* Generated on Monday, March 1, 2021 at 2:32:27 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy) NSString * aceId; 
@property (nonatomic,copy) NSString * refId; 
+(id)setAssistantData;
+(id)setAssistantDataWithDictionary:(id)arg1 context:(id)arg2 ;
-(NSString *)countryCode;
-(id)groupIdentifier;
-(NSNumber *)storefront;
-(NSString *)region;
-(NSString *)userInterfaceIdiom;
-(NSString *)anchor;
-(void)setRegion:(NSString *)arg1 ;
-(void)setAnchor:(NSString *)arg1 ;
-(void)setCountryCode:(NSString *)arg1 ;
-(void)setUserInterfaceIdiom:(NSString *)arg1 ;
-(NSString *)firstName;
-(NSString *)lastName;
-(NSString *)osVersion;
-(void)setOsVersion:(NSString *)arg1 ;
-(void)setStorefront:(NSNumber *)arg1 ;
-(void)setFirstName:(NSString *)arg1 ;
-(void)setLastName:(NSString *)arg1 ;
-(NSString *)deviceColor;
-(void)setDeviceCapabilities:(NSArray *)arg1 ;
-(NSArray *)deviceCapabilities;
-(void)setDeviceColor:(NSString *)arg1 ;
-(NSString *)deviceVersion;
-(NSNumber *)voiceTriggerEnabled;
-(NSString *)temperatureUnit;
-(void)setTemperatureUnit:(NSString *)arg1 ;
-(void)setVoiceTriggerEnabled:(NSNumber *)arg1 ;
-(id)encodedClassName;
-(void)setTimeZoneId:(NSString *)arg1 ;
-(NSString *)preferredLanguage;
-(void)setPreferredLanguage:(NSString *)arg1 ;
-(void)setDebugFlags:(NSNumber *)arg1 ;
-(NSNumber *)debugFlags;
-(BOOL)requiresResponse;
-(NSString *)timeZoneId;
-(SAMediaContentRatingRestrictions *)mediaContentRatingRestrictions;
-(SAWatchData *)watchData;
-(BOOL)censorSpeech;
-(void)setCensorSpeech:(BOOL)arg1 ;
-(BOOL)handsFree;
-(void)setHandsFree:(BOOL)arg1 ;
-(NSArray *)parentalRestrictions;
-(void)setParentalRestrictions:(NSArray *)arg1 ;
-(SAVoice *)ttsVoice;
-(void)setTtsVoice:(SAVoice *)arg1 ;
-(NSNumber *)twentyFourHourTimeDisplay;
-(void)setTwentyFourHourTimeDisplay:(NSNumber *)arg1 ;
-(NSArray *)abSources;
-(void)setAbSources:(NSArray *)arg1 ;
-(NSNumber *)allowUserGeneratedContent;
-(void)setAllowUserGeneratedContent:(NSNumber *)arg1 ;
-(NSString *)deviceEnclosure;
-(void)setDeviceEnclosure:(NSString *)arg1 ;
-(void)setDeviceVersion:(NSString *)arg1 ;
-(NSString *)fullStorefrontId;
-(void)setFullStorefrontId:(NSString *)arg1 ;
-(NSNumber *)holdToTalkThresholdInMilliseconds;
-(void)setHoldToTalkThresholdInMilliseconds:(NSNumber *)arg1 ;
-(BOOL)inRetailStoreDemoMode;
-(void)setInRetailStoreDemoMode:(BOOL)arg1 ;
-(NSArray *)meCards;
-(void)setMeCards:(NSArray *)arg1 ;
-(void)setMediaContentRatingRestrictions:(SAMediaContentRatingRestrictions *)arg1 ;
-(BOOL)mediaPlayerExplicitContentDisallowed;
-(void)setMediaPlayerExplicitContentDisallowed:(BOOL)arg1 ;
-(NSNumber *)uiScale;
-(void)setUiScale:(NSNumber *)arg1 ;
-(BOOL)voiceOver;
-(void)setVoiceOver:(BOOL)arg1 ;
-(void)setWatchData:(SAWatchData *)arg1 ;
@end

